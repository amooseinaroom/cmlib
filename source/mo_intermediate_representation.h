
// moose lib intermidate representation single header library

#if !defined moir_h
#define moir_h

#include "mo_string.h"
#include "mo_bytecode.h"

#ifdef __cplusplus
extern "C" {
#endif

#define moir_assert_message(x, message, ...)  mobc_assert_message(x, message, __VA_ARGS__)
#define moir_require_message(x, message, ...) mobc_require_message(x, message, __VA_ARGS__)

#define moir_assert(x)  moir_assert_message(x, "")
#define moir_require(x) moir_require_message(x, "")

#define moir_cases_complete(format, ...) default: moir_assert_message(moir_false, "unhandled switch case " format, __VA_ARGS__)

typedef unsigned char      moir_u8;
typedef unsigned short     moir_u16;
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

// for use in macro lists

#define moir_enum_item(name, prefix) prefix ## name,
#define moir_string_item(name, ...) sc(# name),

#define moir_enum_list(name, list_macro) \
    typedef enum \
    { \
        list_macro(moir_enum_item, name ## _) \
        name ## _count \
    } name \

#define moir_string_list(name, list_macro) \
    const string name[] = \
    { \
        list_macro(moir_string_item) \
    } \

#define moir_node_tag_list(macro, ...) \
    macro(invalid, __VA_ARGS__) \
    macro(variable, __VA_ARGS__) \
    macro(assignment, __VA_ARGS__) \
    macro(scope, __VA_ARGS__) \
    macro(loop_with_count, __VA_ARGS__) \
    macro(function, __VA_ARGS__) \
    macro(function_return, __VA_ARGS__) \
    macro(expression_number, __VA_ARGS__) \
    macro(expression_name, __VA_ARGS__) \
    macro(expression_function_call, __VA_ARGS__) \
    macro(expression_operator, __VA_ARGS__) \
    macro(expression_unresolved_name, __VA_ARGS__) \

moir_enum_list(moir_node_tag, moir_node_tag_list);
moir_string_list(moir_node_tag_names, moir_node_tag_list);

// for struct fields
typedef moir_u8 moir_node_tag_type;

typedef enum
{
    moir_type_tag_invalid,
    moir_type_tag_u32,
    moir_type_tag_s32,
    moir_type_tag_f32,
    moir_type_tag_unresolved,

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

    moir_node_tag_type tag;

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

        struct
        {
            moir_node  *body_scope;
            // inside the body_scope
            // body_scope->scope.statements == first argument
            // first_statement comes right after all arguments
            moir_node  *first_statement;

            moir_node  *result_scope;
            mos_string name;
            moir_u32   argument_count;
            moir_u32   result_count;
        } function;

        struct
        {
            moir_node *function;
            moir_node *expressions;
        } function_return;

        moir_expression_number expression_number;

        struct
        {
            moir_node *variable;
        } expression_name;

        struct
        {
            moir_node  *function_call_expressions;
            mos_string name;
            moir_b8    is_function_call;
        } expression_unresolved_name;

        struct
        {
            moir_node *function;
            moir_node *expressions;
        } expression_function_call;

        struct
        {
            moir_node               *left;
            moir_node               *right;
            mobc_instruction_tag_u8 operator_tag;
            moir_type_tag           type_tag;
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
    moir_node *node;
    moir_u32  body_instruction_index;
} moir_function;

typedef struct
{
    moir_node *function;
    moir_u32  instruction_index;
} moir_call;

typedef struct
{
    mobc_instruction *instructions;
    moir_register    *registers;
    moir_function    *functions;
    moir_call        *calls;

    moir_u32 instruction_count;
    moir_u32 register_count;
    moir_u32 function_count;
    moir_u32 call_count;

    moir_u32 instruction_used_count;
    moir_u32 register_used_count;
    moir_u32 function_used_count;
    moir_u32 call_used_count;

    moir_u32 register_function_offset;
} moir_bytecode;

#define moir_compile_signature moir_node * moir_compile(moir_lang *lang, mos_string source)
moir_compile_signature;

#define moir_generate_bytecode_signature void moir_generate_bytecode(moir_bytecode *bytecode, moir_node *root)
moir_generate_bytecode_signature;

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
    mos_string name = mos_skip_default_name(iterator);
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

moir_b8 moir_expression_types_are_compatible(moir_type_tag *left_type, moir_type_tag right_type)
{
    if (right_type == moir_type_tag_unresolved)
        return true;

    if (*left_type == moir_type_tag_unresolved)
    {
        *left_type = right_type;
        return true;
    }

    return (*left_type == right_type);
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

        case moir_node_tag_expression_function_call:
        {
            moir_node *variable = node->expression_function_call.function->function.result_scope->scope.statements;
            moir_assert_message(variable && !variable->next, "function must have exactly one result");
            moir_assert(variable->tag == moir_node_tag_variable);

            return variable->variable.type_tag;
        } break;

        case moir_node_tag_expression_operator:
        {
            if (node->expression_operator.type_tag == moir_type_tag_unresolved)
            {
                moir_type_tag left_type = moir_get_expression_type(node->expression_operator.left);
                moir_type_tag right_type = left_type;

                if (node->expression_operator.right)
                    right_type = moir_get_expression_type(node->expression_operator.right);

                moir_b8 ok = moir_expression_types_are_compatible(&left_type, right_type);
                moir_assert(ok);

                node->expression_operator.type_tag = right_type;
            }

            return node->expression_operator.type_tag;
        } break;

        case moir_node_tag_expression_unresolved_name:
        {
            return moir_type_tag_unresolved;
        } break;

        moir_cases_complete("tag %.*s", mos_fs(moir_node_tag_names[node->tag]));
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
        left = moir_new_node(lang, moir_node_tag_expression_unresolved_name);
        left->parent = parent;
        left->expression_unresolved_name.name = name;

        if (mos_try_skip(&lang->iterator, mos_s("(")))
        {
            mos_skip_white_space(&lang->iterator);

            left->expression_unresolved_name.is_function_call = moir_true;

            moir_node **expressions_tail = &left->expression_unresolved_name.function_call_expressions;

            moir_b8 found_close = moir_false;
            while (lang->iterator.count)
            {
                if (mos_try_skip(&lang->iterator, mos_s(")")))
                {
                    mos_skip_white_space(&lang->iterator);
                    found_close = moir_true;
                    break;
                }

                if (left->expression_unresolved_name.function_call_expressions)
                {
                    mos_skip(&lang->iterator, mos_s(","));
                    mos_skip_white_space(&lang->iterator);
                }

                moir_node *expression = moir_parse_expression(lang, left);
                moir_append(&expressions_tail, expression);
            }

            moir_assert(found_close);
        }

        if (add_negation)
        {
            moir_node *node = moir_new_node(lang, moir_node_tag_expression_operator);
            node->parent = parent;
            node->expression_operator.left = left;
            node->expression_operator.operator_tag = mobc_instruction_tag_neg;
            node->expression_operator.type_tag = moir_type_tag_unresolved;
            node->expression_operator.left->parent = node;
            moir_get_expression_type(node);
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
                node->expression_operator.type_tag = moir_type_tag_unresolved;
                node->expression_operator.left->parent = node;
                node->expression_operator.right->parent = node;
                moir_get_expression_type(node);
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

        moir_node *right = moir_parse_expression(lang, parent);
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
        if (mos_try_skip(&lang->iterator, mos_s(";")))
        {
            mos_skip_white_space(&lang->iterator);
            continue;
        }

        if (mos_try_skip(&lang->iterator, mos_s("}")))
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
    if (mos_try_skip(&lang->iterator, mos_s("{")))
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

        node->loop_with_count.count_expression = moir_parse_expression(lang, node);
        moir_assert(node->loop_with_count.count_expression);

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

        if (!mos_try_skip(&lang->iterator, mos_s(";")))
        {
            moir_assert(moir_false);
        }

        mos_skip_white_space(&lang->iterator);

        return node;
    }
    else if (mos_are_equal(keyword, mos_s("func")))
    {
        mos_string name = moir_skip_name(&lang->iterator);
        moir_assert(name.count);

        moir_node *node = moir_new_node(lang, moir_node_tag_function);
        node->function.name = name;
        node->parent = parent;

        moir_node *body_scope = moir_new_node(lang, moir_node_tag_scope);
        body_scope->parent = node;
        node->function.body_scope = body_scope;

        moir_node **scope_tail = &body_scope->scope.statements;

        {
            mos_skip(&lang->iterator, mos_s("("));
            mos_skip_white_space(&lang->iterator);

            moir_u32 argument_count = 0;

            moir_b8 found_close = moir_false;
            while (lang->iterator.count)
            {
                if (mos_try_skip(&lang->iterator, mos_s(")")))
                {
                    mos_skip_white_space(&lang->iterator);
                    found_close = moir_true;
                    break;
                }

                if (argument_count)
                {
                    mos_skip(&lang->iterator, mos_s(","));
                    mos_skip_white_space(&lang->iterator);
                }

                moir_node *argument = moir_parse_variable(lang, body_scope, &scope_tail);
                assert(argument);
                argument_count += 1;
            }

            node->function.argument_count = argument_count;

            moir_assert(found_close);
        }

        moir_node *result_scope = moir_new_node(lang, moir_node_tag_scope);
        result_scope->parent = node;
        node->function.result_scope = result_scope;

        moir_u32 result_count = 0;

        if (mos_try_skip(&lang->iterator, mos_s("(")))
        {
            mos_skip_white_space(&lang->iterator);

            moir_node **results_tail = &result_scope->scope.statements;

            moir_b8 found_close = moir_false;
            while (lang->iterator.count)
            {
                if (mos_try_skip(&lang->iterator, mos_s(")")))
                {
                    mos_skip_white_space(&lang->iterator);
                    found_close = moir_true;
                    break;
                }

                if (result_scope->scope.statements)
                {
                    mos_skip(&lang->iterator, mos_s(","));
                    mos_skip_white_space(&lang->iterator);
                }

                moir_node *result = moir_parse_variable(lang, result_scope, &results_tail);
                assert(result);

                result_count += 1;
            }

            moir_assert(found_close);
        }

        node->function.result_count = result_count;

        node->function.first_statement = moir_parse_statement(lang, body_scope, &scope_tail);

        moir_append(statements_tail, node);

        mos_skip_white_space(&lang->iterator);

        // TODO: check all code paths return

        return node;
    }
    else if (mos_are_equal(keyword, mos_s("return")))
    {
        moir_node *parent_function = parent;
        while (parent_function && (parent_function->tag != moir_node_tag_function))
            parent_function = parent_function->parent;

        moir_assert(parent_function);

        moir_node *node = moir_new_node(lang, moir_node_tag_function_return);
        node->parent = parent;
        node->function_return.function = parent_function;

        moir_node **expressions_tail = &node->function_return.expressions;

        {
            moir_node *result = parent_function->function.result_scope->scope.statements;
            while (result)
            {
                moir_node *expression = moir_parse_expression(lang, node);
                moir_append(&expressions_tail, expression);

                result = result->next;

                if (result)
                {
                    mos_skip(&lang->iterator, mos_s(","));
                    mos_skip_white_space(&lang->iterator);
                }
            }
        }

        moir_append(statements_tail, node);

        mos_skip(&lang->iterator, mos_s(";"));
        mos_skip_white_space(&lang->iterator);

        return node;
    }
    else
    {
        lang->iterator = backup;

        moir_node *node = moir_parse_expression_or_assignment(lang, parent);
        moir_assert(node && (node->tag == moir_node_tag_assignment));

        moir_append(statements_tail, node);

        if (!mos_try_skip(&lang->iterator, mos_s(";")))
        {
            moir_assert(moir_false);
        }

        mos_skip_white_space(&lang->iterator);

        return node;
    }

    return moir_null;
}

moir_node * moir_resolve_name(moir_node *parent, mos_string name)
{
    moir_node *current_parent = parent;
    while (current_parent && (current_parent->tag != moir_node_tag_scope))
        current_parent = current_parent->parent;

    while (current_parent)
    {
        moir_assert(current_parent->tag == moir_node_tag_scope);

        for (moir_node *it = current_parent->scope.statements; it; it = it->next)
        {
            if ((it->tag == moir_node_tag_variable) && mos_are_equal(it->variable.name, name))
                return it;
            else if ((it->tag == moir_node_tag_function) && mos_are_equal(it->function.name, name))
                return it;
        }

        current_parent = current_parent->parent;
        while (current_parent && (current_parent->tag != moir_node_tag_scope))
            current_parent = current_parent->parent;
    }

    return moir_null;
}

moir_compile_signature
{
    lang->iterator = source;
    mos_skip_white_space(&lang->iterator);

    moir_node *root = moir_new_node(lang, moir_node_tag_scope);
    moir_parse_statements(lang, root);

    // resolve names
    for (moir_u32 i = 0; i < lang->node_used_count; i++)
    {
        moir_node *node = &lang->node_buffer[i];
        if (node->tag != moir_node_tag_expression_unresolved_name)
            continue;

        moir_node *name_node = moir_resolve_name(node->parent, node->expression_unresolved_name.name);
        moir_assert(name_node);

        if (name_node->tag == moir_node_tag_variable)
        {
            moir_assert(!node->expression_unresolved_name.is_function_call);

            node->tag                      = moir_node_tag_expression_name;
            node->expression_name.variable = name_node;
        }
        else
        {
            moir_assert(name_node->tag == moir_node_tag_function)
            moir_assert(node->expression_unresolved_name.is_function_call);

            moir_node *expressions = node->expression_unresolved_name.function_call_expressions;
            node->tag                                  = moir_node_tag_expression_function_call;
            node->expression_function_call.function    = name_node;
            node->expression_function_call.expressions = expressions;
        }
    }

    // resolve types
    {
        moir_b8 do_repeat = moir_true;
        while (do_repeat)
        {
            do_repeat = moir_false;
            moir_b8 has_unresolved_types = moir_false;

            for (moir_u32 i = 0; i < lang->node_used_count; i++)
            {
                moir_node *node = &lang->node_buffer[i];

                switch (node->tag)
                {
                    case moir_node_tag_variable:
                    case moir_node_tag_scope:
                    case moir_node_tag_function:
                    case moir_node_tag_function_return:
                    case moir_node_tag_expression_number:
                    case moir_node_tag_expression_name:
                    case moir_node_tag_expression_function_call:
                    break;

                    case moir_node_tag_assignment:
                    {
                        moir_type_tag left_type = moir_get_expression_type(node->assignment.left);
                        moir_type_tag assignment_type = left_type;
                        moir_b8 ok = moir_expression_types_are_compatible(&left_type, moir_get_expression_type(node->assignment.right));
                        moir_assert(ok);

                        do_repeat |= (assignment_type != left_type);
                        has_unresolved_types |= (left_type == moir_type_tag_unresolved);
                    } break;

                    case moir_node_tag_loop_with_count:
                    {
                        moir_type_tag *left_type_tag;
                        moir_type_tag iterator_type_tag;
                        if (node->loop_with_count.iterator->tag == moir_node_tag_variable)
                        {
                            left_type_tag = &node->loop_with_count.iterator->variable.type_tag;
                        }
                        else
                        {
                            iterator_type_tag = moir_get_expression_type(node->loop_with_count.iterator);
                            left_type_tag = &iterator_type_tag;
                        }

                        iterator_type_tag = *left_type_tag;

                        moir_b8 ok = moir_expression_types_are_compatible(left_type_tag, moir_get_expression_type(node->loop_with_count.count_expression));
                        moir_assert(ok);

                        do_repeat |= (iterator_type_tag != *left_type_tag);
                        has_unresolved_types |= (*left_type_tag == moir_type_tag_unresolved);

                        iterator_type_tag = *left_type_tag;
                    } break;

                    case moir_node_tag_expression_operator:
                    {
                        moir_type_tag type_tag = node->expression_operator.type_tag;
                        moir_get_expression_type(node);

                        do_repeat |= (type_tag != node->expression_operator.type_tag);
                        has_unresolved_types |= (node->expression_operator.type_tag == moir_type_tag_unresolved);
                    } break;

                    moir_cases_complete("tag %.*s", mos_fs(moir_node_tag_names[node->tag]));
                }
            }

            moir_assert(do_repeat || !has_unresolved_types);
        }
    }

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
            for (moir_u32 i = bytecode->register_function_offset; i < bytecode->register_used_count; i++)
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

    for (moir_u32 i = bytecode->register_function_offset; i < bytecode->register_used_count; i++)
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
    result->index = bytecode->register_used_count - bytecode->register_function_offset;
    bytecode->register_used_count += 1;

    return result;
}

moir_function * moir_get_function(moir_bytecode *bytecode, moir_node *node)
{
    moir_assert(node->tag == moir_node_tag_function);
    for (moir_u32 i = 0; i < bytecode->function_used_count; i++)
    {
        if (bytecode->functions[i].node == node)
            return &bytecode->functions[i];
    }

    return moir_null;
}

moir_function * moir_add_function(moir_bytecode *bytecode, moir_node *node, moir_u32 body_instruction_index)
{
    moir_assert(moir_get_function(bytecode, node) == moir_null);
    moir_assert(bytecode->function_used_count < bytecode->function_count);
    moir_function *function = &bytecode->functions[bytecode->function_used_count];
    bytecode->function_used_count += 1;

    function->node = node;
    function->body_instruction_index = body_instruction_index;
    return function;
}

moir_call * moir_add_call(moir_bytecode *bytecode, moir_u32 instruction_index, moir_node *function)
{
    moir_assert(function->tag == moir_node_tag_function);
    moir_assert(bytecode->call_used_count < bytecode->call_count);
    moir_call *call = &bytecode->calls[bytecode->call_used_count];
    bytecode->call_used_count += 1;

    call->function = function;
    call->instruction_index = instruction_index;
    return call;
}

moir_generate_bytecode_signature
{
    moir_generate_bytecode_statement(bytecode, root);

    // patch function calls after all functions have body instruction index
    for (moir_u32 i = 0; i < bytecode->call_used_count; i++)
    {
        moir_call call = bytecode->calls[i];
        mobc_instruction *instruction = &bytecode->instructions[call.instruction_index];

        moir_function *function = moir_get_function(bytecode, call.function);
        instruction->call.next_instruction_index = function->body_instruction_index * mobc_instruction_word_count;
    }
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

        case moir_node_tag_expression_function_call:
        {
            moir_u16 argument_count = (moir_u16) (node->expression_function_call.function->function.argument_count);

            for (moir_node *expression = node->expression_function_call.expressions; expression; expression = expression->next)
                moir_generate_bytecode_expression(bytecode, expression);

            moir_u16 argument_offset = (moir_u16) (bytecode->register_used_count - bytecode->register_function_offset);

            // add registers to store arguments to function continuously
            for (moir_node *expression = node->expression_function_call.expressions; expression; expression = expression->next)
            {
                moir_new_register(bytecode, node);
                mobc_instruction *instruction = moir_new_instruction(bytecode, mobc_instruction_tag_register_push);
                instruction->register_push.source = moir_find_expression(bytecode, expression)->index;
            }

            moir_assert(bytecode->register_used_count >= argument_count);

            moir_add_call(bytecode, bytecode->instruction_used_count, node->expression_function_call.function);

            mobc_instruction *instruction = moir_new_instruction(bytecode, mobc_instruction_tag_call);
            instruction->call.argument_offset = argument_offset;
            instruction->call.argument_count  = argument_count;

            moir_u32 first_result = bytecode->register_used_count - bytecode->register_function_offset;

            for (moir_node *result = node->expression_function_call.function->function.result_scope->scope.statements; result; result = result->next)
                moir_new_register(bytecode, node); // HACK: they all point to the expression_function_call

            return first_result;
        } break;

        moir_cases_complete("tag %.*s", mos_fs(moir_node_tag_names[node->tag]));
    }

    return -1;
}

void moir_add_statement_registers(moir_bytecode *bytecode, moir_node *node)
{
    switch (node->tag)
    {
    case moir_node_tag_variable:
    {
        moir_new_register(bytecode, node);

        mobc_instruction *instruction = moir_new_instruction(bytecode, mobc_instruction_tag_push);
        instruction->push.value = node->variable.u32_value;
    } break;

    case moir_node_tag_assignment:
    {
        // order is kinda important?
        moir_add_statement_registers(bytecode, node->assignment.right);
        moir_add_statement_registers(bytecode, node->assignment.left);
    } break;

    case moir_node_tag_expression_number:
    {
        if (moir_find_expression(bytecode, node))
            break;

        moir_new_register(bytecode, node);

        mobc_instruction *instruction = moir_new_instruction(bytecode, mobc_instruction_tag_push);
        instruction->push.value = node->expression_number.u32_value;
    } break;

    case moir_node_tag_expression_function_call:
    {
        for (moir_node *expression = node->expression_function_call.expressions; expression; expression = expression->next)
            moir_add_statement_registers(bytecode, expression);
    } break;

    case moir_node_tag_expression_operator:
    {
        moir_add_statement_registers(bytecode, node->expression_operator.left);

        if (node->expression_operator.right)
            moir_add_statement_registers(bytecode, node->expression_operator.right);
    } break;
    }
}

void moir_generate_bytecode_statements(moir_bytecode *bytecode, moir_node *statements)
{
    for (moir_node *it = statements; it; it = it->next)
        moir_add_statement_registers(bytecode, it);

    for (moir_node *it = statements; it; it = it->next)
        moir_generate_bytecode_statement(bytecode, it);
}

void moir_generate_scope_close(moir_bytecode *bytecode, moir_u32 open_register_used_count)
{
    moir_assert(bytecode->register_used_count >= open_register_used_count);
    if (bytecode->register_used_count > open_register_used_count)
    {
        mobc_instruction *instruction = moir_new_instruction(bytecode, mobc_instruction_tag_pop);
        instruction->pop.register_count = bytecode->register_used_count - open_register_used_count;
        bytecode->register_used_count = open_register_used_count;
    }
}

moir_generate_bytecode_statement_signature
{
    switch (node->tag)
    {
        case moir_node_tag_scope:
        {
            moir_u32 register_used_count = bytecode->register_used_count;

            moir_generate_bytecode_statements(bytecode, node->scope.statements);

            moir_generate_scope_close(bytecode, register_used_count);
        } break;

        case moir_node_tag_loop_with_count:
        {
            moir_u32 register_used_count = bytecode->register_used_count;

            moir_type_tag iterator_type_tag = node->loop_with_count.iterator->variable.type_tag;

            moir_generate_bytecode_statements(bytecode, node->loop_with_count.iterator);
            moir_generate_bytecode_statements(bytecode, node->loop_with_count.count_expression);

            // optimization: push or find constant 1
            moir_node one_node = {0};
            one_node.tag = moir_node_tag_expression_number;
            one_node.expression_number.u32_value = 1;
            one_node.expression_number.type_tag  = moir_type_tag_u32;
            moir_add_statement_registers(bytecode, &one_node);
            mobc_register one_register = moir_find_expression(bytecode, &one_node)->index;

            mobc_register iterator_register = moir_find_expression(bytecode, node->loop_with_count.iterator)->index;

            moir_u32 body_register_used_count     = bytecode->register_used_count;
            moir_u32 body_begin_instruction_count = bytecode->instruction_used_count;

            // condition
            mobc_instruction *jump_break;
            {
                mobc_instruction *compare = moir_new_instruction(bytecode, mobc_instruction_tag_less);
                compare->less.operator_mask = moir_get_operator_mask(iterator_type_tag);
                compare->less.left  = iterator_register;
                compare->less.right = moir_find_expression(bytecode, node->loop_with_count.count_expression)->index;

                moir_register *condition = moir_new_register(bytecode, node);
                jump_break = moir_new_instruction(bytecode, mobc_instruction_tag_jump_on_false);
                jump_break->jump_on_false.condition = condition->index;
            }

            // body
            moir_generate_bytecode_statements(bytecode, node->loop_with_count.body);

            // advance
            {
                mobc_instruction *increment = moir_new_instruction(bytecode, mobc_instruction_tag_add);
                increment->add.operator_mask = moir_get_operator_mask(iterator_type_tag);
                increment->add.left          = iterator_register;
                increment->add.right         = one_register;

                mobc_register increment_result = moir_new_register(bytecode, node)->index;

                mobc_instruction *move = moir_new_instruction(bytecode, mobc_instruction_tag_register_move);
                move->register_move.destination = iterator_register;
                move->register_move.source      = increment_result;
            }

            // pop body
            moir_generate_scope_close(bytecode, body_register_used_count);

            // jump to start
            {
                mobc_instruction *jump_continue = moir_new_instruction(bytecode, mobc_instruction_tag_jump);
                jump_continue->jump.next_instruction_index = body_begin_instruction_count * mobc_instruction_word_count;
            }

            moir_u32 body_end_instruction_count = bytecode->instruction_used_count;
            jump_break->jump_on_false.next_instruction_index = body_end_instruction_count * mobc_instruction_word_count;

            // pop loop scope
            // we jump after the less, which pushed a register, we didn't pop yet
            bytecode->register_used_count += 1;
            moir_generate_scope_close(bytecode, register_used_count);
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

        case moir_node_tag_function:
        {
            moir_add_function(bytecode, node, bytecode->instruction_used_count);

            bytecode->register_function_offset = bytecode->register_used_count;

            // simulate stack when called
            for (moir_node *argument = node->function.body_scope->scope.statements; argument != node->function.first_statement; argument = argument->next)
                moir_new_register(bytecode, argument);

            moir_node body_scope = {0};
            body_scope.tag = moir_node_tag_scope;
            body_scope.scope.statements = node->function.first_statement;
            moir_generate_bytecode_statements(bytecode, &body_scope);

            // HACK: TODO: this should never be reached?
            // we need to add a return?

            // pop scope
            moir_u32 register_used_count = bytecode->register_function_offset - 2 + node->function.argument_count + node->function.result_count;
            moir_generate_scope_close(bytecode, register_used_count);

            bytecode->register_function_offset = 0;
        } break;

        case moir_node_tag_function_return:
        {
            moir_u32 result_count = 0;
            for (moir_node *expression = node->function_return.expressions; expression; expression = expression->next)
            {
                mobc_register right = moir_generate_bytecode_expression(bytecode, expression);

                if (right != result_count)
                {
                    mobc_instruction *instruction = moir_new_instruction(bytecode, mobc_instruction_tag_register_move);
                    instruction->register_move.destination = result_count;
                    instruction->register_move.source      = right;
                }

                result_count += 1;
            }

            moir_node *function = node->function_return.function;
            moir_u32 register_used_count = bytecode->register_function_offset + function->function.result_count;
            moir_assert(bytecode->register_used_count >= register_used_count);
            if (bytecode->register_used_count > register_used_count)
            {
                mobc_instruction *instruction = moir_new_instruction(bytecode, mobc_instruction_tag_pop);
                instruction->pop.register_count = bytecode->register_used_count - register_used_count;
            }

            mobc_instruction *instruction = moir_new_instruction(bytecode, mobc_instruction_tag_call_return);
        } break;

        moir_cases_complete("tag %.*s", mos_fs(moir_node_tag_names[node->tag]));
    }
}

#endif