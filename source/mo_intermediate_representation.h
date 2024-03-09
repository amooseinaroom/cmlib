
// moose lib intermidate representation single header library

#if !defined moir_h
#define moir_h

#include "mo_string.h"
#include "mo_bytecode.h"

#ifdef __cplusplus
extern "C" {
#endif

#if !defined moir_assert
#define moir_assert(x)
#endif

#if !defined moir_require
#define moir_require(x) (x)
#endif

#define moir_cases_complete(value) default: moir_assert(0)

typedef unsigned char      moir_u8;
typedef unsigned int       moir_u32;
typedef unsigned long long moir_u64;

typedef signed int       moir_s32;
typedef signed long long moir_s64;

typedef float  moir_f32;
typedef double moir_f64;

typedef moir_u8 moir_b8;

typedef moir_u64 moir_usize;

typedef char * moir_cstring;

#define moir_null 0

const moir_b8 moir_false = 0;
const moir_b8 moir_true  = 1;

#define moir_carray_count(static_array) (sizeof(static_array) / sizeof(*(static_array)))

#ifdef __cplusplus
#define moir_sl(name)
#else
#define moir_sl(name) (name)
#endif

typedef enum
{
    moir_node_tag_invalid,
    moir_node_tag_variable,
    moir_node_tag_assignment,

    moir_node_tag_scope,
    moir_node_tag_loop_with_count,

    moir_node_tag_expression_number,
    moir_node_tag_expression_name,
    moir_node_tag_expression_operator,

    moir_node_tag_count,
} _moir_node_tag;

typedef moir_u8 moir_node_tag;

typedef enum
{
    moir_type_tag_invalid,
    moir_type_tag_u32,
    moir_type_tag_s32,
    moir_type_tag_f32,

    moir_type_tag_count,
} _moir_type_tag;

typedef moir_u8 moir_type_tag;

typedef struct moir_node moir_node;


typedef struct
{
    union
    {
        moir_u32 u32_value;
        moir_s32 s32_value;
        moir_f32 f32_value;
    };

    moir_type_tag type_tag;
} moir_expression_number;

struct moir_node
{
    moir_node *parent;
    moir_node *next;

    moir_node_tag tag;

    union
    {
        struct
        {
            mos_string    name;
            moir_u32      u32_value;
            moir_type_tag type_tag;
        } variable;

        struct
        {
            moir_node *left;
            moir_node *right;
        } assignment;

        struct
        {
            moir_node *statements;
        } scope;

        struct
        {
            moir_node *scope;
            moir_node *iterator;
            moir_node *start_expression;
            moir_node *count_expression;
            moir_node *body;
        } loop_with_count;

        moir_expression_number expression_number;

        struct
        {
            moir_node *variable;
        } expression_name;

        struct
        {
            moir_node            *left;
            moir_node            *right;
            mobc_instruction_tag operator_tag;
            moir_type_tag        type_tag;
        } expression_operator;
    };
};

typedef struct
{
    moir_node *node_buffer;
    moir_u32  node_count;
    moir_u32  node_used_count;

    mos_string iterator;
} moir_lang;

typedef struct
{
    moir_node     *node;
    mobc_register index;
} moir_register;

typedef struct
{
    mobc_instruction *instructions;
    moir_register    *registers;

    moir_u32 instruction_count;
    moir_u32 register_count;

    moir_u32 instruction_used_count;
    moir_u32 register_used_count;
} moir_bytecode;

#define moir_compile_signature moir_node * moir_compile(moir_lang *lang, mos_string source)
moir_compile_signature;

#define moir_generate_bytecode_statement_signature void moir_generate_bytecode_statement(moir_bytecode *bytecode, moir_node *node)
moir_generate_bytecode_statement_signature;

#define moir_generate_bytecode_expression_signature mobc_register moir_generate_bytecode_expression(moir_bytecode *bytecode, moir_node *expression)
moir_generate_bytecode_expression_signature;

#ifdef __cplusplus
}
#endif

#endif

#if defined moir_implementation
#undef moir_implementation

mos_string moir_skip_name(mos_string *iterator)
{
    mos_string blacklist = mos_s(" \t\n\r\"\\/+*-#!§$%&{}[]()<>|,;.:~'´`^°²³=");
    mos_string name = mos_skip_name(iterator, blacklist);
    mos_skip_white_space(iterator);

    return name;
}

moir_node *moir_new_node(moir_lang *lang, moir_node_tag tag)
{
    moir_assert((tag > 0) && (tag < moir_node_tag_count));
    moir_assert(lang->node_used_count < lang->node_count);
    moir_node *node = lang->node_buffer + lang->node_used_count;
    lang->node_used_count += 1;

    *node = moir_sl(moir_node) {0};
    node->tag = tag;

    return node;
}

void moir_append(moir_node ***tail, moir_node *node)
{
    **tail = node;
    *tail = &node->next;
}

moir_type_tag moir_get_expression_type(moir_node *node)
{
    switch (node->tag)
    {
        case moir_node_tag_expression_number:
        {
            return node->expression_number.type_tag;
        } break;

        case moir_node_tag_expression_name:
        {
            return node->expression_name.variable->variable.type_tag;
        } break;

        case moir_node_tag_expression_operator:
        {
            moir_assert(node->expression_operator.type_tag != moir_type_tag_invalid);
            return node->expression_operator.type_tag;
        } break;

        default:
            moir_assert(0);
    }

    return moir_type_tag_invalid;
}

moir_node * moir_parse_expression(moir_lang *lang, moir_node *parent)
{
    moir_node *left = moir_null;

    mos_string symbol_set = mos_s("+-*/<>=!");

    moir_b8 add_negation = false;
    while (lang->iterator.count)
    {
        mos_string iterator = lang->iterator;
        mos_string symbol;
        symbol.count = mos_skip_set(&iterator, symbol_set);
        symbol.base = lang->iterator.base;

        if (!mos_are_equal(symbol, mos_s("-")))
            break;

        lang->iterator = iterator;
        mos_skip_white_space(&lang->iterator);

        add_negation = !add_negation;
    }

    mos_string name = moir_skip_name(&lang->iterator);
    if (name.count)
    {
        moir_b8 found = moir_false;

        moir_node *current_parent = parent;
        while (current_parent && (current_parent->tag != moir_node_tag_scope))
            current_parent = current_parent->parent;

        while (current_parent)
        {
            moir_assert(current_parent->tag == moir_node_tag_scope);

            for (moir_node *it = current_parent->scope.statements; it; it = it->next)
            {
                if ((it->tag == moir_node_tag_variable) && mos_are_equal(it->variable.name, name))
                {
                    left = moir_new_node(lang, moir_node_tag_expression_name);
                    left->parent = parent;
                    left->expression_name.variable = it;
                    break;
                }
            }

            if (left)
                break;

            current_parent = current_parent->parent;
            while (current_parent && (current_parent->tag != moir_node_tag_scope))
                current_parent = current_parent->parent;
        }

        moir_assert(left);

        if (add_negation)
        {
            moir_node *node = moir_new_node(lang, moir_node_tag_expression_operator);
            node->parent = parent;
            node->expression_operator.left = left;
            node->expression_operator.operator_tag = mobc_instruction_tag_neg;
            node->expression_operator.type_tag = moir_get_expression_type(left);
            node->expression_operator.left->parent = node;
            left = node;
        }
    }

    if (!left)
    {
        moir_expression_number expression_number = {0};

        mos_string iterator = lang->iterator;
        if (mos_parse_u32(&expression_number.u32_value, &iterator))
            expression_number.type_tag = moir_type_tag_u32;
        else if (mos_parse_s32(&expression_number.s32_value, &iterator))
            expression_number.type_tag = moir_type_tag_s32;

        // check if parsing f32 consumes more of the input
        mos_string f32_iterator = lang->iterator;
        moir_f32 f32_value;
        if (mos_parse_f32(&f32_value, &f32_iterator) && (f32_iterator.count < iterator.count))
        {
            expression_number.type_tag  = moir_type_tag_f32;
            expression_number.f32_value = f32_value;
            iterator = f32_iterator;
        }

        if (expression_number.type_tag != moir_type_tag_invalid)
        {
            moir_node *node = moir_new_node(lang, moir_node_tag_expression_number);
            node->parent = parent;
            node->expression_number = expression_number;

            lang->iterator = iterator;
            mos_skip_white_space(&lang->iterator);

            if (add_negation)
            {
                if (node->expression_number.type_tag == moir_type_tag_u32)
                    node->expression_number.type_tag = moir_type_tag_s32;

                if (node->expression_number.type_tag == moir_type_tag_s32)
                    node->expression_number.s32_value = -node->expression_number.s32_value;
                else
                    node->expression_number.f32_value = -node->expression_number.f32_value;
            }

            left = node;
        }
    }

    if (left)
    {
        // same order as mobc_instruction_tag_
        mos_string operator_symbols[] =
        {
            mos_s("+"), // mobc_instruction_tag_add,
            mos_s("-"), // mobc_instruction_tag_sub,
            mos_s("*"), // mobc_instruction_tag_mul,
            mos_s("/"), // mobc_instruction_tag_div,

            mos_s("=="), // mobc_instruction_tag_equal,
            mos_s("!="), // mobc_instruction_tag_not_equal,
            mos_s("<"), // mobc_instruction_tag_less,
            mos_s("<="), // mobc_instruction_tag_less_equal,
            mos_s(">="), // mobc_instruction_tag_greater_equal,
            mos_s(">"), // mobc_instruction_tag_greater,
        };

        mos_string iterator = lang->iterator;
        mos_string symbol;
        symbol.count = mos_skip_set(&iterator, symbol_set);
        symbol.base = lang->iterator.base;

        for (moir_u32 i = 0; i < moir_carray_count(operator_symbols); i++)
        {
            if (mos_are_equal(symbol, operator_symbols[i]))
            {
                lang->iterator = iterator;
                mos_skip_white_space(&lang->iterator);

                moir_node *node = moir_new_node(lang, moir_node_tag_expression_operator);
                node->parent = parent;
                node->expression_operator.left = left;
                node->expression_operator.right = moir_parse_expression(lang, node);
                node->expression_operator.operator_tag = mobc_instruction_tag_add + i;
                moir_type_tag left_type = moir_get_expression_type(node->expression_operator.left);
                moir_type_tag right_type = moir_get_expression_type(node->expression_operator.right);
                moir_assert(left_type == right_type);
                node->expression_operator.type_tag = left_type;

                node->expression_operator.left->parent = node;
                node->expression_operator.right->parent = node;
                left = node;
                break;
            }
        }
    }

    return left;
}

moir_node * moir_parse_variable(moir_lang *lang, moir_node *parent, moir_node ***statement_tail)
{
    mos_string name = moir_skip_name(&lang->iterator);
    moir_assert(name.count);

    mos_string type = moir_skip_name(&lang->iterator);
    moir_assert(type.count);

    moir_type_tag type_tag;
    if (mos_are_equal(type, mos_s("u32")))
        type_tag = moir_type_tag_u32;
    else if (mos_are_equal(type, mos_s("s32")))
        type_tag = moir_type_tag_s32;
    else if (mos_are_equal(type, mos_s("f32")))
        type_tag = moir_type_tag_f32;
    else
    {
        moir_assert(false);
    }

    moir_node *node = moir_new_node(lang, moir_node_tag_variable);
    node->parent = parent;
    node->variable.name     = name;
    node->variable.type_tag = type_tag;

    moir_append(statement_tail, node);

    if (mos_try_skip(&lang->iterator, mos_s("=")))
    {
        mos_skip_white_space(&lang->iterator);

        moir_node *right = moir_parse_expression(lang, moir_null);
        moir_assert(right);

        if (right->tag == moir_node_tag_expression_number)
        {
            moir_assert((node->variable.type_tag == moir_type_tag_f32) || (right->expression_number.type_tag != moir_type_tag_f32));

            if ((node->variable.type_tag == moir_type_tag_f32) && (right->expression_number.type_tag != moir_type_tag_f32))
            {
                moir_f32 f32_value;
                if (right->expression_number.type_tag == moir_type_tag_u32)
                    f32_value = (moir_f32) right->expression_number.u32_value;
                else
                    f32_value = (moir_f32) right->expression_number.s32_value;

                node->variable.u32_value = *(moir_u32 *) &f32_value;
            }
            else
            {
                node->variable.u32_value = right->expression_number.u32_value;
            }

            // remove expression node right
            lang->node_used_count -= 1;
        }
        else
        {
            moir_assert(moir_get_expression_type(node) == moir_get_expression_type(right));

            moir_node *left = moir_new_node(lang, moir_node_tag_expression_name);
            left->parent = parent;
            left->expression_name.variable = node;

            moir_node *assignment = moir_new_node(lang, moir_node_tag_assignment);
            assignment->parent = parent;
            assignment->assignment.left  = left;
            assignment->assignment.right = right;
            assignment->assignment.left->parent = assignment;
            assignment->assignment.right->parent = assignment;

            moir_append(statement_tail, assignment);
        }
    }

    return node;
}


#define moir_parse_statement_signature moir_node * moir_parse_statement(moir_lang *lang, moir_node *parent, moir_node ***statements_tail)
moir_parse_statement_signature;

void moir_parse_statements(moir_lang *lang, moir_node *parent)
{
    moir_assert(parent->tag == moir_node_tag_scope);
    moir_assert(!parent->scope.statements);

    moir_node **tail = &parent->scope.statements;

    while (lang->iterator.count)
    {
        if (mos_try_skip(&lang->iterator, s(";")))
        {
            mos_skip_white_space(&lang->iterator);
            continue;
        }

        if (mos_try_skip(&lang->iterator, s("}")))
        {
            mos_skip_white_space(&lang->iterator);
            break;
        }

        moir_parse_statement(lang, parent, &tail);
    }

    for (moir_node *statement = parent->scope.statements; statement; statement = statement->next)
    {
        moir_assert(statement->parent == parent);
    }
}

moir_node * moir_parse_expression_or_assignment(moir_lang *lang, moir_node *parent)
{
    moir_node *left = moir_parse_expression(lang, parent);
    moir_assert(left);

    if (mos_try_skip(&lang->iterator, mos_s("=")))
    {
        mos_skip_white_space(&lang->iterator);

        moir_node *right = moir_parse_expression(lang, parent);
        moir_assert(right);

        moir_assert(moir_get_expression_type(left) == moir_get_expression_type(right));

        moir_node *node = moir_new_node(lang, moir_node_tag_assignment);
        node->parent = parent;
        node->assignment.left  = left;
        node->assignment.right = right;
        node->assignment.left->parent  = node;
        node->assignment.right->parent = node;

        left = node;
    }

    return left;
}

moir_parse_statement_signature
{
    if (mos_try_skip(&lang->iterator, s("{")))
    {
        mos_skip_white_space(&lang->iterator);

        moir_node *node = moir_new_node(lang, moir_node_tag_scope);
        node->parent = parent;
        moir_parse_statements(lang, node);

        moir_append(statements_tail, node);

        return node;
    }

    mos_string backup = lang->iterator;
    mos_string keyword = moir_skip_name(&lang->iterator);
    if (mos_are_equal(keyword, mos_s("loop")))
    {
        moir_node *node = moir_new_node(lang, moir_node_tag_loop_with_count);
        node->parent = parent;

        moir_node *loop_scope = moir_new_node(lang, moir_node_tag_scope);
        loop_scope->parent = node;
        node->loop_with_count.scope = loop_scope;

        moir_node **scope_tail = &loop_scope->scope.statements;

        mos_string backup = lang->iterator;
        mos_string keyword = moir_skip_name(&lang->iterator);
        if (mos_are_equal(keyword, mos_s("var")))
        {
            node->loop_with_count.iterator = moir_parse_variable(lang, loop_scope, &scope_tail);
            moir_assert(node->loop_with_count.iterator);
        }
        else
        {
            lang->iterator = backup;

            node->loop_with_count.iterator = moir_parse_expression(lang, loop_scope);

            node->loop_with_count.iterator = moir_parse_expression_or_assignment(lang, parent);
            moir_assert(node->loop_with_count.iterator);
            moir_assert((node->loop_with_count.iterator->tag == moir_node_tag_expression_name) ||
            ((node->loop_with_count.iterator->tag == moir_node_tag_assignment) && (node->loop_with_count.iterator->assignment.left->tag == moir_node_tag_expression_name)));

            moir_append(&scope_tail, node->loop_with_count.iterator);
        }

        if (!mos_try_skip(&lang->iterator, mos_s(";")))
        {
            moir_assert(false);
        }

        mos_skip_white_space(&lang->iterator);

        node->loop_with_count.count_expression = moir_parse_expression(lang, loop_scope);
        moir_assert(node->loop_with_count.count_expression);

        moir_append(&scope_tail, node->loop_with_count.count_expression);

        // HACK: body should see loop scope
        // but loop scope should not iterate over budy
        moir_node **body_tail = &node->loop_with_count.body;
        moir_parse_statement(lang, loop_scope, &body_tail);
        node->loop_with_count.body->parent = loop_scope;

        moir_append(statements_tail, node);

        return node;
    }
    else if (mos_are_equal(keyword, mos_s("var")))
    {
        moir_node *node = moir_parse_variable(lang, parent, statements_tail);
        moir_assert(node);

        if (!mos_try_skip(&lang->iterator, s(";")))
        {
            moir_assert(moir_false);
        }

        mos_skip_white_space(&lang->iterator);

        return node;
    }
    else
    {
        lang->iterator = backup;

        moir_node *node = moir_parse_expression_or_assignment(lang, parent);
        moir_assert(node && (node->tag == moir_node_tag_assignment));

        moir_append(statements_tail, node);

        if (!mos_try_skip(&lang->iterator, s(";")))
        {
            moir_assert(moir_false);
        }

        mos_skip_white_space(&lang->iterator);

        return node;
    }

    return moir_null;
}

moir_compile_signature
{
    lang->iterator = source;
    mos_skip_white_space(&lang->iterator);

    moir_node *root = moir_new_node(lang, moir_node_tag_scope);
    moir_parse_statements(lang, root);

    return root;
}

mobc_instruction * moir_new_instruction(moir_bytecode *bytecode, mobc_instruction_tag tag)
{
    moir_assert((tag > 0) && (tag < mobc_instruction_tag_count));
    moir_assert(bytecode->instruction_used_count < bytecode->instruction_count);

    mobc_instruction *instruction = bytecode->instructions + bytecode->instruction_used_count;
    bytecode->instruction_used_count += 1;

    *instruction = moir_sl(mobc_instruction) {0};
    instruction->tag = tag;

    return instruction;
}

moir_register * moir_find_expression(moir_bytecode *bytecode, moir_node *node)
{
    switch (node->tag)
    {
        case moir_node_tag_expression_number:
        {
            for (moir_u32 i = 0; i < bytecode->register_used_count; i++)
            {
                if ((bytecode->registers[i].node->tag == moir_node_tag_expression_number) && (bytecode->registers[i].node->expression_number.type_tag == node->expression_number.type_tag) && (bytecode->registers[i].node->expression_number.u32_value == node->expression_number.u32_value))
                {
                    return bytecode->registers + i;
                }
            }

            return moir_null;
        } break;

        case moir_node_tag_expression_name:
        {
            node = node->expression_name.variable;
        } break;
    }

    for (moir_u32 i = 0; i < bytecode->register_used_count; i++)
    {
        if (bytecode->registers[i].node == node)
            return bytecode->registers + i;
    }

    return moir_null;
}

mobc_operator_mask moir_get_operator_mask(moir_type_tag type_tag)
{
    mobc_operator_mask operator_mask = {0};
    operator_mask.is_float  = type_tag == moir_type_tag_f32;
    operator_mask.is_signed = type_tag == moir_type_tag_s32;

    return operator_mask;
}

moir_register * moir_new_register(moir_bytecode *bytecode, moir_node *node)
{
    moir_assert(bytecode->register_used_count < bytecode->register_count);
    moir_register *result = bytecode->registers + bytecode->register_used_count;

    result->node  = node;
    result->index = bytecode->register_used_count;
    bytecode->register_used_count += 1;

    return result;
}

moir_generate_bytecode_expression_signature
{
    moir_node *node = expression;
    switch (node->tag)
    {
        case moir_node_tag_expression_number:
        case moir_node_tag_expression_name:
        {
            moir_register *variable = moir_find_expression(bytecode, node);
            moir_assert(variable);

            return variable->index;
        } break;

        case moir_node_tag_expression_operator:
        {
            mobc_register left = moir_generate_bytecode_expression(bytecode, node->expression_operator.left);
            mobc_register right = 0;

            if (node->expression_operator.right)
                right = moir_generate_bytecode_expression(bytecode, node->expression_operator.right);

            mobc_instruction *instruction = moir_new_instruction(bytecode, node->expression_operator.operator_tag);
            instruction->add.operator_mask = moir_get_operator_mask(node->expression_operator.type_tag);
            instruction->add.left  = left;
            instruction->add.right = right;

            moir_register *a = moir_new_register(bytecode, node);

            if ((node->expression_operator.operator_tag == mobc_instruction_tag_mul) || (node->expression_operator.operator_tag == mobc_instruction_tag_div))
            {
                moir_register *b = moir_new_register(bytecode, node);
            }

            return a->index;
        } break;

        default:
            moir_assert(false);
    }

    return -1;
}


moir_generate_bytecode_statement_signature
{
    switch (node->tag)
    {
        case moir_node_tag_scope:
        {
            moir_u32 register_used_count = bytecode->register_used_count;

            for (moir_node *it = node->scope.statements; it; it = it->next)
            {
                if (it->tag == moir_node_tag_variable)
                {
                    moir_new_register(bytecode, it);

                    mobc_instruction *instruction = moir_new_instruction(bytecode, mobc_instruction_tag_push);
                    instruction->push.value = it->variable.u32_value;
                }
            }

            for (moir_node *it = node->scope.statements; it; it = it->next)
            {
                if (it->tag == moir_node_tag_expression_number)
                {
                    if (moir_find_expression(bytecode, it))
                        break;

                    moir_new_register(bytecode, it);

                    mobc_instruction *instruction = moir_new_instruction(bytecode, mobc_instruction_tag_push);
                    instruction->push.value = it->expression_number.u32_value;
                }
            }

            for (moir_node *it = node->scope.statements; it; it = it->next)
            {
                moir_generate_bytecode_statement(bytecode, it);
            }

            if (register_used_count < bytecode->register_used_count)
            {
                mobc_instruction *instruction = moir_new_instruction(bytecode, mobc_instruction_tag_pop);
                instruction->pop.register_count = bytecode->register_used_count - register_used_count;

                bytecode->register_used_count = register_used_count;
            }
        } break;

        case moir_node_tag_loop_with_count:
        {
            moir_u32 register_used_count = bytecode->register_used_count;

            moir_type_tag iterator_type_tag;
            if (node->loop_with_count.iterator->tag == moir_node_tag_variable)
                iterator_type_tag = node->loop_with_count.iterator->variable.type_tag;
            else
                iterator_type_tag = moir_get_expression_type(node->loop_with_count.iterator);

            moir_assert(iterator_type_tag == moir_get_expression_type(node->loop_with_count.count_expression));

            {
                moir_generate_bytecode_statement(bytecode, node->loop_with_count.scope);

                // HACK: remove pop from previous scope
                moir_assert(bytecode->instruction_used_count);
                bytecode->instruction_used_count -= 1;
                moir_assert(bytecode->instructions[bytecode->instruction_used_count].tag == mobc_instruction_tag_pop);

                bytecode->register_used_count += bytecode->instructions[bytecode->instruction_used_count].pop.register_count;
            }

            mobc_instruction *one = moir_new_instruction(bytecode, mobc_instruction_tag_push);
            one->push.value = 1;
            mobc_register one_register = moir_new_register(bytecode, node)->index;

            moir_u32 body_begin_instruction_count = bytecode->instruction_used_count;

            moir_u32 body_register_used_count = bytecode->register_used_count;

            mobc_instruction *compare = moir_new_instruction(bytecode, mobc_instruction_tag_less);
            compare->less.operator_mask = moir_get_operator_mask(iterator_type_tag);
            compare->less.left  = moir_find_expression(bytecode, node->loop_with_count.iterator)->index;
            compare->less.right = moir_find_expression(bytecode, node->loop_with_count.count_expression)->index;

            moir_register *condition = moir_new_register(bytecode, node);

            mobc_instruction *jump_break = moir_new_instruction(bytecode, mobc_instruction_tag_jump_on_false);
            jump_break->jump_on_false.condition = condition->index;

            {
                moir_generate_bytecode_statement(bytecode, node->loop_with_count.body);

                // HACK: remove pop from previous scope
                if (bytecode->instructions[bytecode->instruction_used_count - 1].tag == mobc_instruction_tag_pop)
                {
                    moir_assert(bytecode->instruction_used_count);
                    bytecode->instruction_used_count -= 1;
                    moir_assert(bytecode->instructions[bytecode->instruction_used_count].tag == mobc_instruction_tag_pop);

                    bytecode->register_used_count += bytecode->instructions[bytecode->instruction_used_count].pop.register_count;
                }
            }

            // increment iterator
            {
                mobc_instruction *increment = moir_new_instruction(bytecode, mobc_instruction_tag_add);
                increment->add.operator_mask = moir_get_operator_mask(iterator_type_tag);
                increment->add.left          = compare->less.left;
                increment->add.right         = one_register;

                mobc_register increment_result = moir_new_register(bytecode, node)->index;

                mobc_instruction *move = moir_new_instruction(bytecode, mobc_instruction_tag_register_move);
                move->register_move.destination = compare->less.left;
                move->register_move.source      = increment_result;
            }

            // body pop
            {
                moir_assert(bytecode->register_used_count > body_register_used_count);
                mobc_instruction *pop = moir_new_instruction(bytecode, mobc_instruction_tag_pop);
                pop->pop.register_count = bytecode->register_used_count - body_register_used_count;
                bytecode->register_used_count = body_register_used_count;
            }

            mobc_instruction *jump_continue = moir_new_instruction(bytecode, mobc_instruction_tag_jump);
            jump_continue->jump.next_instruction_index = body_begin_instruction_count * mobc_instruction_word_count;

            jump_break->jump_on_false.next_instruction_index = bytecode->instruction_used_count * mobc_instruction_word_count;

            // we jump after the less, which pushed a register, we didn't clean
            bytecode->register_used_count += 1;

            if (register_used_count < bytecode->register_used_count)
            {
                mobc_instruction *instruction = moir_new_instruction(bytecode, mobc_instruction_tag_pop);
                instruction->pop.register_count = bytecode->register_used_count - register_used_count;

                bytecode->register_used_count = register_used_count;
            }
        } break;

        case moir_node_tag_variable:
            break;

        case moir_node_tag_expression_number:
        case moir_node_tag_expression_name:
        case moir_node_tag_expression_operator:
        {
            moir_generate_bytecode_expression(bytecode, node);
        } break;

        case moir_node_tag_assignment:
        {
            mobc_register right = moir_generate_bytecode_expression(bytecode, node->assignment.right);
            mobc_register left  = moir_generate_bytecode_expression(bytecode, node->assignment.left);

            mobc_instruction *instruction = moir_new_instruction(bytecode, mobc_instruction_tag_register_move);
            instruction->register_move.destination = left;
            instruction->register_move.source      = right;
        } break;

        moir_cases_complete(node->tag);
    }
}

#endif