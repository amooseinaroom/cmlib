
// moose lib byte code single header library

#if !defined mobc_h
#define mobc_h

#ifdef __cplusplus
extern "C" {
#endif

#if !defined mobc_assert_message
#define mobc_assert_message(...)
#endif

#if !defined mobc_require_message
#define mobc_require_message(...)
#endif

#define mobc_assert(x)  mobc_assert_message(x, "")
#define mobc_require(x) mobc_require_message(x, "")

#define mobc_cases_complete(format, ...) default: mobc_assert_message(mobc_false, "unhandled switch case " format, __VA_ARGS__)

typedef unsigned char      mobc_u8;
typedef unsigned short     mobc_u16;
typedef unsigned int       mobc_u32;
typedef unsigned long long mobc_u64;

typedef signed int       mobc_s32;
typedef signed long long mobc_s64;

typedef float  mobc_f32;
typedef double mobc_f64;

typedef mobc_u8 mobc_b8;

typedef mobc_u64 mobc_usize;

typedef char * mobc_cstring;

#define mobc_null 0

const mobc_b8 mobc_false = 0;
const mobc_b8 mobc_true  = 1;

#define mobc_carray_count(static_array) (sizeof(static_array) / sizeof(*(static_array)))

#if !defined mobc_u8_array_type
#define mobc_u8_array_type mobc_u8_array

typedef struct
{
    mobc_u8    *base;
    mobc_usize count;
} mobc_u8_array;

#else

typedef mobc_u8_array_type mobc_u8_array;

#endif

typedef mobc_u8_array mobc_string;

#ifdef __cplusplus
#define mobc_sl(name)
#else
#define mobc_sl(name) (name)
#endif

#define mobc_s(static_string) mobc_sl(string) { (mobc_u8 *) static_string, mobc_carray_count(static_string) - 1 }
// sometimes needed to initialize global values
#define mobc_sc(const_static_string) { (mobc_u8 *) const_static_string, mobc_carray_count(const_static_string) - 1 }
#define mobc_fs(text) (int) (text).count, (char *) (text).base

const mobc_string mobc_string_empty = {0};


// for use in macro lists

#define mobc_enum_item(name, prefix) prefix ## name,
#define mobc_string_item(name, ...) sc(# name),

#define mobc_enum_list(name, list_macro) \
    typedef enum \
    { \
        list_macro(mobc_enum_item, name ## _) \
        name ## _count \
    } name \

#define mobc_string_list(name, list_macro) \
    const string name[] = \
    { \
        list_macro(mobc_string_item) \
    } \

typedef struct
{
    mobc_u32 *register_memory;
    mobc_u32 *memory;
    mobc_u32 *io_memory;

    mobc_u32 memory_count;
    mobc_u32 io_memory_count;
    mobc_u32 register_count;

    mobc_u32 memory_used_count;
    mobc_u32 io_memory_used_count;
    mobc_u32 register_used_count;

    mobc_u32 register_offset;

    mobc_u32 instruction_index;

    mobc_u32 zero;
} mobc_machine;

#define mobc_instruction_list(macro, ...) \
    macro(invalid, __VA_ARGS__) \
    macro(push, __VA_ARGS__) \
    macro(pop, __VA_ARGS__) \
    macro(jump, __VA_ARGS__) \
    macro(jump_on_false, __VA_ARGS__) \
    macro(jump_on_true, __VA_ARGS__) \
    macro(call, __VA_ARGS__) \
    macro(call_return, __VA_ARGS__) \
    macro(register_move, __VA_ARGS__) \
    macro(register_push, __VA_ARGS__) \
    macro(neg, __VA_ARGS__) \
    macro(add, __VA_ARGS__) \
    macro(sub, __VA_ARGS__) \
    macro(mul, __VA_ARGS__) \
    macro(div, __VA_ARGS__) \
    macro(equal, __VA_ARGS__) \
    macro(not_equal, __VA_ARGS__) \
    macro(less, __VA_ARGS__) \
    macro(less_equal, __VA_ARGS__) \
    macro(greater_equal, __VA_ARGS__) \
    macro(greater, __VA_ARGS__) \

mobc_enum_list(mobc_instruction_tag,     mobc_instruction_list);
mobc_string_list(mobc_instruction_names, mobc_instruction_list);

// we want to store tags as u8
typedef mobc_u8 mobc_instruction_tag_u8;

typedef mobc_u32 mobc_register;

typedef union
{
    struct
    {
        mobc_u8 is_float:  1;
        mobc_u8 is_signed: 1;
    };

    mobc_u8 value;
} mobc_operator_mask;

const mobc_operator_mask mobc_operator_mask_u32 = {0};
const mobc_operator_mask mobc_operator_mask_s32 = { .is_signed = 1 };
const mobc_operator_mask mobc_operator_mask_f32 = { .is_float = 1 };

// left word is u32
#define mobc_instruction_word_count 3

typedef union
{
    mobc_instruction_tag_u8 tag;

    struct
    {
        mobc_instruction_tag_u8 tag;

        mobc_u32 value;
    } push;

    struct
    {
        mobc_instruction_tag_u8 tag;

        mobc_u32 register_count;
    } pop;

    struct
    {
        mobc_instruction_tag_u8 tag;

        mobc_u32      next_instruction_index;
    } jump;

    struct
    {
        mobc_instruction_tag_u8 tag;

        mobc_register condition;
        mobc_u32      next_instruction_index;
    } jump_on_false, jump_on_true;

    struct
    {
        mobc_instruction_tag_u8 tag;

        mobc_u32 next_instruction_index;
        mobc_u16 /* register */ argument_offset;
        mobc_u16 argument_count;
    } call;

    struct
    {
        mobc_instruction_tag_u8 tag;
    } call_return;

    struct
    {
        mobc_instruction_tag_u8 tag;

        mobc_register destination, source;
    } register_move;

    struct
    {
        mobc_instruction_tag_u8 tag;

        mobc_register source;
    } register_push;

    struct
    {
        mobc_instruction_tag_u8 tag;

        mobc_operator_mask operator_mask;
        mobc_register      expression;
    } neg;

    struct
    {
        mobc_instruction_tag_u8 tag;

        mobc_operator_mask operator_mask;
        mobc_register      left;
        mobc_register      right;
    } add, sub, mul, div, equal, not_equal, less, less_equal, greater_equal, greater;

    mobc_u32 words[mobc_instruction_word_count];
} mobc_instruction;

#define mobc_execute_signature mobc_b8 mobc_execute(mobc_machine *machine)
mobc_execute_signature;

#ifdef __cplusplus
}
#endif

#endif

#if defined mobc_implementation
#undef mobc_implementation

mobc_u32 * mobc_get_register(mobc_b8 *ok, mobc_machine *machine, mobc_register left)
{
    if (left + machine->register_offset >= machine->register_used_count)
    {
        *ok = mobc_false;
        machine->zero = 0;
        return &machine->zero;
    }

    mobc_u32 *result = machine->register_memory + machine->register_offset + left;
    return result;
}

mobc_u32 * mobc_push_register(mobc_b8 *ok, mobc_machine *machine, mobc_u32 value)
{
    if (machine->register_used_count >= machine->register_count)
    {
        *ok = mobc_false;
        machine->zero = 0;
        return &machine->zero;
    }

    mobc_u32 *result = machine->register_memory + machine->register_used_count;
    machine->register_used_count += 1;
    *result = value;

    return result;
}

mobc_execute_signature
{
    mobc_u32 instruction_index = machine->instruction_index;

    mobc_assert((instruction_index % mobc_instruction_word_count) == 0);

    if ((instruction_index >= machine->memory_count) || (instruction_index + mobc_instruction_word_count > machine->memory_count))
        return mobc_false;

    mobc_instruction instruction = *(mobc_instruction *) (machine->memory + instruction_index);
    machine->instruction_index += mobc_instruction_word_count;

    mobc_u8 ok = mobc_true;

    switch (instruction.tag)
    {
        case mobc_instruction_tag_push:
        {
            mobc_push_register(&ok, machine, instruction.push.value);
        } break;

        case mobc_instruction_tag_pop:
        {
            if (instruction.pop.register_count > machine->register_used_count)
                return mobc_false;

            machine->register_used_count -= instruction.pop.register_count;
        } break;

        case mobc_instruction_tag_jump:
        {
            machine->instruction_index = instruction.jump.next_instruction_index;
        } break;

        case mobc_instruction_tag_jump_on_false:
        {
            mobc_u32 condition = *mobc_get_register(&ok, machine, instruction.jump_on_false.condition);
            if (!condition)
                machine->instruction_index = instruction.jump_on_false.next_instruction_index;
        } break;

        case mobc_instruction_tag_jump_on_true:
        {
            mobc_u32 condition = *mobc_get_register(&ok, machine, instruction.jump_on_true.condition);
            if (condition)
                machine->instruction_index = instruction.jump_on_true.next_instruction_index;
        } break;

        case mobc_instruction_tag_call:
        {
            if (instruction.call.argument_offset > (machine->register_used_count - machine->register_offset))
                return mobc_false;

            if (instruction.call.argument_offset + instruction.call.argument_count > (machine->register_used_count - machine->register_offset))
                return mobc_false;

            if (machine->register_used_count + 2 + instruction.call.argument_count > machine->register_count)
                return mobc_false;

            machine->register_used_count += 2 + instruction.call.argument_count;

            // save register offset and return address
            machine->register_memory[machine->register_used_count - instruction.call.argument_count - 2] = machine->register_offset;
            machine->register_memory[machine->register_used_count - instruction.call.argument_count - 1] = machine->instruction_index;

            // copy arguments into new scope
            memcpy(machine->register_memory + machine->register_used_count - instruction.call.argument_count, machine->register_memory + machine->register_offset + instruction.call.argument_offset, sizeof(mobc_u32) * instruction.call.argument_count);

            machine->register_offset   = machine->register_used_count - instruction.call.argument_count;
            machine->instruction_index = instruction.call.next_instruction_index;
        } break;

        case mobc_instruction_tag_call_return:
        {
            if (machine->register_offset < 2)
                return mobc_false;

            mobc_assert(machine->register_offset <= machine->register_used_count);
            mobc_u32 return_value_count = machine->register_used_count - machine->register_offset;

            machine->instruction_index = machine->register_memory[machine->register_offset - 1];
            machine->register_offset   = machine->register_memory[machine->register_offset - 2];

            // move return values into new frame
            memcpy(machine->register_memory + machine->register_used_count - return_value_count - 2, machine->register_memory + machine->register_used_count - return_value_count, sizeof(mobc_u32) * return_value_count);

            machine->register_used_count -= 2;
            mobc_assert(machine->register_offset <= machine->register_used_count);
        } break;

        case mobc_instruction_tag_register_move:
        {
            mobc_u32 *destination =  mobc_get_register(&ok, machine, instruction.register_move.destination);
            mobc_u32 source       = *mobc_get_register(&ok, machine, instruction.register_move.source);

            *destination = source;
        } break;

        case mobc_instruction_tag_register_push:
        {
            mobc_u32 source = *mobc_get_register(&ok, machine, instruction.register_push.source);
            mobc_push_register(&ok, machine, source);
        } break;

        case mobc_instruction_tag_neg:
        {
            mobc_u32 expression = *mobc_get_register(&ok, machine, instruction.neg.expression);

            mobc_u32 result;
            if (instruction.neg.operator_mask.is_float)
                *(mobc_f32 *) &result = - *(mobc_f32 *) &expression;
            else if (instruction.neg.operator_mask.is_signed)
                result = (mobc_u32) - (mobc_s32) expression;
            else
                return mobc_false;

            mobc_push_register(&ok, machine, result);
        } break;

        case mobc_instruction_tag_add:
        {
            mobc_u32 left = *mobc_get_register(&ok, machine, instruction.add.left);
            mobc_u32 right = *mobc_get_register(&ok, machine, instruction.add.right);

            mobc_u32 result;
            if (instruction.neg.operator_mask.is_float)
                *(mobc_f32 *) &result = *(mobc_f32 *) &left + *(mobc_f32 *) &right;
            else
                result = left + right;

            mobc_push_register(&ok, machine, result);
        } break;

        case mobc_instruction_tag_sub:
        {
            mobc_u32 left = *mobc_get_register(&ok, machine, instruction.sub.left);
            mobc_u32 right = *mobc_get_register(&ok, machine, instruction.sub.right);

            mobc_u32 result;
            if (instruction.neg.operator_mask.is_float)
                *(mobc_f32 *) &result = *(mobc_f32 *) &left - *(mobc_f32 *) &right;
            else
                result = left - right;

            mobc_push_register(&ok, machine, result);
        } break;

        case mobc_instruction_tag_mul:
        {
            mobc_u32 left = *mobc_get_register(&ok, machine, instruction.mul.left);
            mobc_u32 right = *mobc_get_register(&ok, machine, instruction.mul.right);

            mobc_u32 result;
            if (instruction.neg.operator_mask.is_float)
            {
                *(mobc_f32 *) &result = *(mobc_f32 *) &left * *(mobc_f32 *) &right;
            }
            else if (instruction.neg.operator_mask.is_signed)
            {
                mobc_u64 result64 = (mobc_u64) ((mobc_s64) (mobc_s32) left * (mobc_s64) (mobc_s32) right);
                mobc_push_register(&ok, machine, (mobc_u32) (result64 & 0xFFFFFFFF));

                result = (mobc_u32) (result64 >> 32);
            }
            else
            {
                mobc_u64 result64 = (mobc_u64) left * (mobc_u64) right;
                mobc_push_register(&ok, machine, (mobc_u32) (result64 & 0xFFFFFFFF));

                result = (mobc_u32) (result64 >> 32);
            }

            mobc_push_register(&ok, machine, result);
        } break;

        case mobc_instruction_tag_div:
        {
            mobc_u32 left = *mobc_get_register(&ok, machine, instruction.div.left);
            mobc_u32 right = *mobc_get_register(&ok, machine, instruction.div.right);

            mobc_u32 result;
            if (instruction.neg.operator_mask.is_float)
            {
                *(mobc_f32 *) &result = *(mobc_f32 *) &left / *(mobc_f32 *) &right;
            }
            else if (instruction.neg.operator_mask.is_signed)
            {
                mobc_u32 result_div = (mobc_u32) ((mobc_s32) left / (mobc_s32) right);
                mobc_push_register(&ok, machine, result_div);

                result = (mobc_u32) ((mobc_s32) left % (mobc_s32) right);
            }
            else
            {
                mobc_u32 result_div = left / right;
                mobc_push_register(&ok, machine, result_div);

                result = left % right;
            }

            mobc_push_register(&ok, machine, result);
        } break;

        case mobc_instruction_tag_equal:
        {
            mobc_u32 left = *mobc_get_register(&ok, machine, instruction.mul.left);
            mobc_u32 right = *mobc_get_register(&ok, machine, instruction.mul.right);

            mobc_u32 result;
            if (instruction.neg.operator_mask.is_float)
                result = (*(mobc_f32 *) &left == *(mobc_f32 *) &right);
            else if (instruction.neg.operator_mask.is_signed)
                result = ((mobc_s32) left == (mobc_s32) right);
            else
                result = (left == right);

            mobc_push_register(&ok, machine, result);
        } break;

        case mobc_instruction_tag_not_equal:
        {
            mobc_u32 left = *mobc_get_register(&ok, machine, instruction.mul.left);
            mobc_u32 right = *mobc_get_register(&ok, machine, instruction.mul.right);

            mobc_u32 result;
            if (instruction.neg.operator_mask.is_float)
                result = (*(mobc_f32 *) &left != *(mobc_f32 *) &right);
            else if (instruction.neg.operator_mask.is_signed)
                result = ((mobc_s32) left != (mobc_s32) right);
            else
                result = (left != right);

            mobc_push_register(&ok, machine, result);
        } break;

        case mobc_instruction_tag_less:
        {
            mobc_u32 left = *mobc_get_register(&ok, machine, instruction.mul.left);
            mobc_u32 right = *mobc_get_register(&ok, machine, instruction.mul.right);

            mobc_u32 result;
            if (instruction.neg.operator_mask.is_float)
                result = (*(mobc_f32 *) &left < *(mobc_f32 *) &right);
            else if (instruction.neg.operator_mask.is_signed)
                result = ((mobc_s32) left < (mobc_s32) right);
            else
                result = (left < right);

            mobc_push_register(&ok, machine, result);
        } break;

        case mobc_instruction_tag_less_equal:
        {
            mobc_u32 left = *mobc_get_register(&ok, machine, instruction.mul.left);
            mobc_u32 right = *mobc_get_register(&ok, machine, instruction.mul.right);

            mobc_u32 result;
            if (instruction.neg.operator_mask.is_float)
                result = (*(mobc_f32 *) &left <= *(mobc_f32 *) &right);
            else if (instruction.neg.operator_mask.is_signed)
                result = ((mobc_s32) left <= (mobc_s32) right);
            else
                result = (left <= right);

            mobc_push_register(&ok, machine, result);
        } break;

        case mobc_instruction_tag_greater_equal:
        {
            mobc_u32 left = *mobc_get_register(&ok, machine, instruction.mul.left);
            mobc_u32 right = *mobc_get_register(&ok, machine, instruction.mul.right);

            mobc_u32 result;
            if (instruction.neg.operator_mask.is_float)
                result = (*(mobc_f32 *) &left >= *(mobc_f32 *) &right);
            else if (instruction.neg.operator_mask.is_signed)
                result = ((mobc_s32) left >= (mobc_s32) right);
            else
                result = (left >= right);

            mobc_push_register(&ok, machine, result);
        } break;

        case mobc_instruction_tag_greater:
        {
            mobc_u32 left = *mobc_get_register(&ok, machine, instruction.mul.left);
            mobc_u32 right = *mobc_get_register(&ok, machine, instruction.mul.right);

            mobc_u32 result;
            if (instruction.neg.operator_mask.is_float)
                result = (*(mobc_f32 *) &left > *(mobc_f32 *) &right);
            else if (instruction.neg.operator_mask.is_signed)
                result = ((mobc_s32) left > (mobc_s32) right);
            else
                result = (left > right);

            mobc_push_register(&ok, machine, result);
        } break;

        default:
            return mobc_false;
    }

    return ok;
}

#endif