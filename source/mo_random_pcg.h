
#include "mo_basic.h"

typedef u64 random_pcg;

random_pcg random_from_win23()
{
    FILETIME filetime;
    GetSystemTimeAsFileTime(&filetime);
    random_pcg random = *(random_pcg *) &filetime;
    return random;
}

u32 rotate_right(u32 value, u32 amount)
{
    u32 result = (value << amount) | (value >> (32 - amount));
    return result;
}

u32 random_u32(random_pcg *random)
{
    random_pcg state = *random;

    // LCG for internal state advance
    *random = state * 6364136223846793005 + 1; // + 1 could be any odd random number

    // rotated xorshift for result
    u32 result = rotate_right( ((u32) ( (state ^ (state << 18)) >> 27)), (u32) (state >> 59) );
    return result;
}

u32 random_index(random_pcg *random, u32 count)
{
    u32 index = random_u32(random);
    index = index % count;

    return index;
}

u32 random_index_min_max(random_pcg *random, u32 min, u32 max)
{
    assert(min <= max);

    if (min == max)
        return min;

    u32 index = random_u32(random);
    index = (index % (max - min)) + min;

    return index;
}

f32 random_f32_zero_to_one(random_pcg *random)
{
    f32 result = (f32) random_u32(random) / 0xFFFFFFFF;
    return result;
}

f32 random_f32_minus_one_to_plus_one(random_pcg *random)
{
    f32 result = (random_f32_zero_to_one(random) * 2.0f) - 1.0f;
    return result;
}


#if 0


func random_f32_zero_to_one(random random_pcg ref) (result f32)
{
    var result = random_u32(random) cast(f32) / 0xFFFFFFFF;
    return result;
}

func random_f32_minus_one_to_plus_one(random random_pcg ref) (result f32)
{
    var result = (random_f32_zero_to_one(random) * 2.0) - 1.0;
    return result;
}

func random_f32_range(random random_pcg ref, min f32, max f32) (result f32)
{
    assert(max >= min);
    var result = random_f32_zero_to_one(random) * (max - min) + min;
    return result;
}
#endif
