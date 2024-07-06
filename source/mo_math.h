
#include "mo_basic.h"

#if !defined mo_math_h
#define mo_math_h

#ifdef __cplusplus
extern "C" {
#endif

#include <math.h>

const f32 pi32 = 3.14159265;

const vec2 vec2_zero = {0};
const vec2 vec2_one = { 1, 1 };
const vec2 vec2_x   = { 1, 0 };
const vec2 vec2_y   = { 0, 1 };

typedef union
{
    struct
    {
        f32 x, y, z;
    };

    vec2 xy;

    f32 values[3];
} vec3;

const vec3 vec3_zero = {0};
const vec3 vec3_one = { 1, 1, 1 };
const vec3 vec3_x   = { 1, 0, 0 };
const vec3 vec3_y   = { 0, 1, 0 };
const vec3 vec3_z   = { 0, 0, 1 };

vec3 vec3_adds(vec3 a, f32 b)
{
    vec3 result =
    {
        a.x + b,
        a.y + b,
        a.z + b,
    };
    return result;
}

vec3 vec3_add(vec3 a, vec3 b)
{
    vec3 result =
    {
        a.x + b.x,
        a.y + b.y,
        a.z + b.z,
    };
    return result;
}

vec3 vec3_negate(vec3 a)
{
    vec3 result =
    {
        -a.x,
        -a.y,
        -a.z,
    };
    return result;
}

vec3 vec3_subs(vec3 a, f32 b)
{
    vec3 result =
    {
        a.x - b,
        a.y - b,
        a.z - b,
    };
    return result;
}

vec3 vec3_subs_rev(f32 a, vec3 b)
{
    vec3 result =
    {
        a - b.x,
        a - b.y,
        a - b.z,
    };
    return result;
}

vec3 vec3_sub(vec3 a, vec3 b)
{
    vec3 result =
    {
        a.x - b.x,
        a.y - b.y,
        a.z - b.z,
    };
    return result;
}

vec3 vec3_muls(vec3 a, f32 b)
{
    vec3 result =
    {
        a.x * b,
        a.y * b,
        a.z * b,
    };
    return result;
}

vec3 vec3_mul(vec3 a, vec3 b)
{
    vec3 result =
    {
        a.x * b.x,
        a.y * b.y,
        a.z * b.z,
    };
    return result;
}

vec3 vec3_divs(vec3 a, f32 b)
{
    f32 inverse_b = 1.0f / b;
    vec3 result =
    {
        a.x * inverse_b,
        a.y * inverse_b,
        a.z * inverse_b,
    };
    return result;
}

vec3 vec3_div(vec3 a, vec3 b)
{
    vec3 result =
    {
        a.x / b.x,
        a.y / b.y,
        a.z / b.z,
    };
    return result;
}

f32 vec3_dot(vec3 a, vec3 b)
{
    f32 result = a.x * b.x + a.y * b.y + a.z * b.z;
    return result;
}

// using right hand rule
vec3 vec3_cross(vec3 right_thumb, vec3 right_index)
{
    vec3 right_middle =
    {
        (right_thumb.values[1] * right_index.values[2]) - (right_thumb.values[2] * right_index.values[1]),
        (right_thumb.values[2] * right_index.values[0]) - (right_thumb.values[0] * right_index.values[2]),
        (right_thumb.values[0] * right_index.values[1]) - (right_thumb.values[1] * right_index.values[0]),
    };

    return right_middle;
}

f32 vec3_length_squared(vec3 vector)
{
    f32 result = vec3_dot(vector, vector);
    return result;
}

f32 vec3_length(vec3 vector)
{
    f32 result = sqrtf(vec3_length_squared(vector));
    return result;
}

vec3 vec3_normalize(vec3 vector)
{
    vec3 result = vec3_divs(vector, vec3_length(vector));
    return result;
}

vec3 vec3_normalize_safe(vec3 vector, vec3 fallback)
{
    f32 length_squared = vec3_length_squared(vector);
    if (length_squared > 0)
        return vec3_divs(vector, sqrtf(length_squared));
    else
        return fallback;
}

vec3 vec3_normalize_or_zero(vec3 vector)
{
    return vec3_normalize_safe(vector, vec3_zero);
}

vec3 vec3_min(vec3 a, vec3 b)
{
    return sl(vec3) { min(a.x, b.x), min(a.y, b.y), min(a.z, b.z) };
}

vec3 vec3_max(vec3 a, vec3 b)
{
    return sl(vec3) { max(a.x, b.x), max(a.y, b.y), max(a.z, b.z) };
}

vec3 vec3_lerp(vec3 from, vec3 to, vec3 ratio)
{
    return vec3_add(vec3_mul(from, vec3_subs_rev(1, ratio)), vec3_mul(to, ratio));
}

vec3 vec3_lerps(vec3 from, vec3 to, f32 ratio)
{
    return vec3_add(vec3_muls(from, 1.0f - ratio), vec3_muls(to, ratio));
}

vec3 vec3_reflect(vec3 normal, vec3 in_direction)
{
    vec3 out_direction = vec3_sub(in_direction, vec3_muls(normal, vec3_dot(normal, in_direction) * 2));
    return out_direction;
}

typedef union
{
    struct
    {
        f32 x, y, z, w;
    };

    struct
    {
        f32 r, g, b, a;
    };

    vec2 xy;
    vec2 rg;

    vec3 xyz;
    vec3 rgb;

    f32 values[4];
} vec4;

const vec4 vec4_zero = {0};
const vec4 vec4_one  = { 1, 1, 1, 1 };

vec4 vec4_add(vec4 a, vec4 b)
{
    vec4 result =
    {
        a.x + b.x,
        a.y + b.y,
        a.z + b.z,
        a.w + b.w,
    };
    return result;
}


vec4 vec4_muls(vec4 a, f32 b)
{
    vec4 result =
    {
        a.x * b,
        a.y * b,
        a.z * b,
        a.w * b,
    };
    return result;
}

typedef struct
{
    vec3 origin;
    vec3 direction;
} ray3;

typedef struct
{
    vec3 normal;
    f32  normal_dot_position;
} plane3;

typedef struct
{
    vec3 center;
    f32  radius;
} sphere3;

u32 u32_clamp(u32 value, u32 min, u32 max)
{
    if (value < min)
        value = min;
    else if (value > max)
        value = max;

    return value;
}

s32 s32_clamp(s32 value, s32 min, s32 max)
{
    if (value < min)
        value = min;
    else if (value > max)
        value = max;

    return value;
}


f32 f32_clamp(f32 value, f32 min, f32 max)
{
    if (value < min)
        value = min;
    else if (value > max)
        value = max;

    return value;
}

f32 f32_lerp(f32 a, f32 b, f32 blend)
{
    return a * (1 - blend) + b * blend;
}

vec2 vec2_add(vec2 a, vec2 b)
{
    return sl(vec2)
    {
        a.x + b.x,
        a.y + b.y,
    };
}

vec2 vec2_adds(vec2 a, f32 b)
{
    return sl(vec2)
    {
        a.x + b,
        a.y + b,
    };
}

vec2 vec2_sub(vec2 a, vec2 b)
{
    return sl(vec2)
    {
        a.x - b.x,
        a.y - b.y,
    };
}

vec2 vec2_subs(vec2 a, f32 b)
{
    return sl(vec2)
    {
        a.x - b,
        a.y - b,
    };
}

vec2 vec2_mul(vec2 a, vec2 b)
{
    return sl(vec2)
    {
        a.x * b.x,
        a.y * b.y,
    };
}

f32 vec2_dot(vec2 a, vec2 b)
{
    return a.x * b.x + a.y * b.y;
}

vec2 vec2_muls(vec2 vector, f32 scale)
{
    return sl(vec2) { vector.x * scale, vector.y * scale };
}

f32 vec2_length_squared(vec2 vector)
{
    f32 length_squared = vec2_dot(vector, vector);
    return length_squared;
}

f32 vec2_length(vec2 vector)
{
    f32 length_squared = vec2_length_squared(vector);
    return sqrtf(length_squared);
}

vec2 vec2_normalize(vec2 vector)
{
    f32 length_squared = vec2_length_squared(vector);
    f32 length = sqrtf(length_squared);

    return vec2_muls(vector, 1.0f / length);
}

vec2 vec2_normalize_safe(vec2 vector, vec2 fallback)
{
    f32 length_squared = vec2_length_squared(vector);
    if (length_squared == 0)
        return fallback;

    f32 length = sqrtf(length_squared);
    return vec2_muls(vector, 1.0f / length);
}

vec2 vec2_normalize_or_zero(vec2 vector)
{
    return vec2_normalize_safe(vector, vec2_zero);
}

vec2 vec2_floor(vec2 vector)
{
    return sl(vec2) { floorf(vector.x), floorf(vector.y) };
}

vec2 vec2_ceil(vec2 vector)
{
    return sl(vec2) { ceilf(vector.x), ceilf(vector.y) };
}

vec2 vec2_abs(vec2 a)
{
    return sl(vec2)
    {
        fabsf(a.x),
        fabsf(a.y),
    };
}

vec2 vec2_lerps(vec2 a, vec2 b, f32 blend)
{
    return vec2_add(vec2_muls(a, 1 - blend), vec2_muls(b, blend));
}

vec3 vec3_refract(vec3 normal, vec3 direction, f32 eta)
{
#if 1
    f32 cos_theta = vec3_dot(direction, normal);
    if (cos_theta < 0)
        cos_theta = -cos_theta;
    else
    {
        eta = 1.0f / eta;
        normal = vec3_muls(normal, -1);
    }

    f32 k = 1 - eta * eta * (1 - cos_theta * cos_theta);

    if (k < 0)
        return sl(vec3) {0};

    return vec3_add(vec3_muls(direction, eta), vec3_muls(normal, eta * cos_theta - sqrtf(k)));

#else
    f32 N_dot_I = vec3_dot(normal, direction);
    f32 k = 1.f - eta * eta * (1.f - N_dot_I * N_dot_I);

    if (k < 0)
        return sl(vec3) {0};

    return vec3_sub(vec3_scale(direction, eta), vec3_scale(normal, eta * N_dot_I + sqrtf(k)));
#endif
}

typedef union
{
    struct
    {
        vec3 right;
        vec3 up;
        vec3 forward;
        vec3 position;
    };

    vec3 columns[4];
} mat4x3;

vec3 mat4x3_transform(mat4x3 matrix, vec3 vector, f32 w)
{
    assert((w == 1) || (w == 0));

    vec3 result;
    result.x = vec3_dot(matrix.right,   vector) + matrix.position.x * w;
    result.y = vec3_dot(matrix.up,      vector) + matrix.position.y * w;
    result.z = vec3_dot(matrix.forward, vector) + matrix.position.z * w;

    return result;
}

vec3 ray_evaluate(ray3 ray, f32 distance)
{
    return vec3_add(ray.origin, vec3_muls(ray.direction, distance));
}

const f32 f32_epsilon = 0.0001f;

b8 f32_are_equal(f32 a, f32 b)
{
    return fabsf(a - b) < f32_epsilon;
}

b8 f32_is_zero(f32 a)
{
    return fabsf(a) < f32_epsilon;
}


typedef struct
{
    b8  ok;
    f32 distance;
} ray3_hit;

ray3_hit ray_plane_cast_ex(ray3 ray, plane3 plane)
{
    // dot(ray.origin + ray.direction * distance, plane.normal) - plane.normal_dot_position == 0

    // dot(ray.origin, plane.normal) + dot(ray.direction, plane.normal) * distance - plane.normal_dot_position == 0
    // distance == plane.normal_dot_position - dot(ray.origin, plane.normal) / dot(ray.direction, plane.normal)

    f32 b = vec3_dot(ray.direction, plane.normal);
    if (b == 0)
        return sl(ray3_hit) { false };

    //if (b >= f32_epsilon) // is positive
        //return false;

    f32 a = vec3_dot(ray.origin, plane.normal);
    f32 distance = (plane.normal_dot_position - a) / b;

    return sl(ray3_hit) { true, distance };

    //if (distance < f32_epsilon) // is negative
        //return false;

    //if (*out_distance < distance)
        //return false;

    //*out_distance = distance;
    //return true;
}

b8 ray_plane_cast(ray3_hit *best_hit, ray3 ray, plane3 plane)
{
    ray3_hit hit = ray_plane_cast_ex(ray, plane);
    if (hit.ok && hit.distance > -f32_epsilon)
    {
        if (!best_hit->ok || hit.distance < best_hit->distance)
        {
            *best_hit = hit;
            return true;
        }
    }

    return false;
}

#include <xmmintrin.h>


ray3_hit ray_sphere_cast_ex(ray3 ray, sphere3 sphere)
{
    // | ray.origin + ray.direction * distance - sphere.center |² == sphere.radius²

    vec3 a = vec3_sub(ray.origin, sphere.center);
    vec3 b = ray.direction;

    // a² + 2 * ab * t + b² * t² == sphere.radius²
    f32 a2       = vec3_dot(a, a);
    f32 minus_ab = -vec3_dot(a, b);
    f32 b2       = vec3_dot(b, b);

    // assuming ray.direction is not 0
    // if (b2 < f32_epsilon) return false;

    f32 minus_p_half = minus_ab / b2;
    f32 q            = (a2 - sphere.radius * sphere.radius) / b2;

    f32 root_squared = minus_p_half * minus_p_half - q;

    if (root_squared < 0) // is negative
        return sl(ray3_hit) { false };

    __m128 mx = _mm_set_ps1(root_squared);
    mx = _mm_sqrt_ps(mx);
    f32 root = _mm_cvtss_f32(mx);

    f32 distance = minus_p_half - root;
    //f32 distance = minus_p_half - sqrtf(root_squared);
    if (distance < f32_epsilon) // is negative
        distance = minus_p_half + root;

    return sl(ray3_hit) { true, distance };

    //
//
    //    if (distance < f32_epsilon) // is negative
    //        return false;
    //}
//
    //if (*out_distance < distance)
    //    return false;
//
    //*out_distance = distance;

// debug
#if 0
    printf("[ %f %f %f %f %f %f ] %f %f %f, %f %f %f %f %f %f %f 0 %f\n", ray.origin.x, ray.origin.y, ray.origin.z, ray.direction.x, ray.direction.y, ray.direction.z, a.x, a.y, a.z, a2, minus_ab, b2, minus_p_half, q, root_squared, distance, *out_distance);
#endif
}

b8 ray_sphere_cast(ray3_hit *best_hit, ray3 ray, sphere3 sphere)
{
    ray3_hit hit = ray_sphere_cast_ex(ray, sphere);
    if (hit.ok && hit.distance > -f32_epsilon)
    {
        if (!best_hit->ok || hit.distance < best_hit->distance)
            *best_hit = hit;

        return true;
    }

    return false;
}

#if 0

void multi_ray_sphere_cast(u32 ray_count, u32 *ray_hit_ids, f32 *ray_distances, wvec3 *ray_hit_normals, wray3 *rays, sphere3 sphere, u32 sphere_hit_id)
{
    assert((ray_count & 3) == 0); // multiple of 4
    assert((((usize)(u8 *) ray_hit_ids) & 15) == 0); // 16byte aligned
    assert((((usize)(u8 *) ray_distances) & 15) == 0); // 16byte aligned
    assert((((usize)(u8 *) ray_hit_normals) & 15) == 0); // 16byte aligned
    assert((((usize)(u8 *) rays) & 15) == 0); // 16byte aligned

    // | ray.origin + ray.direction * distance - sphere.center |² == sphere.radius²

    wvec3 sphere_center;
    sphere_center.x = wf32_value(sphere.center.x);
    sphere_center.y = wf32_value(sphere.center.y);
    sphere_center.z = wf32_value(sphere.center.z);

    wf32 sphere_radius = wf32_value(sphere.radius);
    wf32 sphere_radius_squared = wf32_mul(sphere_radius, sphere_radius);

    wf32 hit_id = wf32_value(*(f32 *) &sphere_hit_id);

    for (u32 ray_index = 0; ray_index < ray_count; ray_index += 4)
    {
        wray3 ray = rays[ray_index / 4];

    #if 0
        ray3 current_ray[4];
        current_ray[0] = rays[ray_index];
        current_ray[1] = rays[ray_index + 1];
        current_ray[2] = rays[ray_index + 2];
        current_ray[3] = rays[ray_index + 3];
        ray_origin.x.value = _mm_set_ps(current_ray[3].origin.x, current_ray[2].origin.x, current_ray[1].origin.x, current_ray[0].origin.x);
        ray_origin.y.value = _mm_set_ps(current_ray[3].origin.y, current_ray[2].origin.y, current_ray[1].origin.y, current_ray[0].origin.y);
        ray_origin.z.value = _mm_set_ps(current_ray[3].origin.z, current_ray[2].origin.z, current_ray[1].origin.z, current_ray[0].origin.z);

        wvec3 ray_direction;
        ray_direction.x.value = _mm_set_ps(current_ray[3].direction.x, current_ray[2].direction.x, current_ray[1].direction.x, current_ray[0].direction.x);
        ray_direction.y.value = _mm_set_ps(current_ray[3].direction.y, current_ray[2].direction.y, current_ray[1].direction.y, current_ray[0].direction.y);
        ray_direction.z.value = _mm_set_ps(current_ray[3].direction.z, current_ray[2].direction.z, current_ray[1].direction.z, current_ray[0].direction.z);
    #endif

        wvec3 a = wvec3_sub(ray.origin, sphere_center);
        wvec3 b = ray.direction;

        // a² + 2 * ab * t + b² * t² == sphere.radius²
        wf32 a2     = wvec3_dot(a, a);
        //wf32 two_ab = wf32_mul(wvec3_dot(a, b), wf32_value(2));
        wf32 minus_ab = wf32_sub(wf32_value(0), wvec3_dot(a, b));
        wf32 b2     = wvec3_dot(b, b);

        wf32 minus_p_half = wf32_div(minus_ab, b2); // -p/2 == -2 * ab / (2 * b2) == -ab / b2
        wf32 q            = wf32_div(wf32_sub(a2, sphere_radius_squared), b2);

        wf32 root_squared = wf32_sub(wf32_mul(minus_p_half, minus_p_half), q);

        wf32 root_squared_is_not_negative = { _mm_cmpge_ps(root_squared.value, _mm_set_ps1(0)) };
        wf32 root = { _mm_sqrt_ps(root_squared.value) };

        wf32 distance = wf32_sub(minus_p_half, root);
        wf32 distance_is_positive = { _mm_cmpge_ps(distance.value, _mm_set_ps1(f32_epsilon)) };

        wf32 ray_distance = { _mm_load_ps(ray_distances + ray_index) };
        wf32 distance_is_closer = { _mm_cmplt_ps(distance.value, ray_distance.value) };

        wf32 mask = { _mm_and_ps(_mm_and_ps(root_squared_is_not_negative.value, distance_is_positive.value), distance_is_closer.value) };

        ray_distance = wf32_select(ray_distance, distance, mask);
        _mm_store_ps(ray_distances + ray_index, ray_distance.value);

        wvec3 point  = wvec3_add(ray.origin, wvec3_scale(ray.direction, distance));
        wvec3 normal = wvec3_sub(point, sphere_center);
        ray_hit_normals[ray_index / 4] = wvec3_select(ray_hit_normals[ray_index / 4], normal, mask);

        wf32 ray_hit_id = { _mm_load_ps((f32 *) ray_hit_ids + ray_index) };
        ray_hit_id = wf32_select(ray_hit_id, hit_id, mask);
        _mm_store_ps((f32 *) ray_hit_ids + ray_index, ray_hit_id.value);

    #if 0
        vec3 normals[4];
        normals[0] = ray_hit_normals[ray_index + 0];
        normals[1] = ray_hit_normals[ray_index + 1];
        normals[2] = ray_hit_normals[ray_index + 2];
        normals[3] = ray_hit_normals[ray_index + 3];

        wvec3 ray_hit_normal;
        ray_hit_normal.x.value = _mm_set_ps(normals[3].x, normals[2].x, normals[1].x, normals[0].x);
        ray_hit_normal.y.value = _mm_set_ps(normals[3].y, normals[2].y, normals[1].y, normals[0].y);
        ray_hit_normal.z.value = _mm_set_ps(normals[3].z, normals[2].z, normals[1].z, normals[0].z);
        ray_hit_normal = wvec3_select(ray_hit_normal, normal, mask);

        f32 normal_values[12];
        _mm_store_ps(normal_values, ray_hit_normal.x.value);
        _mm_store_ps(normal_values + 4, ray_hit_normal.y.value);
        _mm_store_ps(normal_values + 8, ray_hit_normal.z.value);

        ray_hit_normals[ray_index + 0] = sl(vec3) { normal_values[0], normal_values[4], normal_values[ 8] };
        ray_hit_normals[ray_index + 1] = sl(vec3) { normal_values[1], normal_values[5], normal_values[ 9] };
        ray_hit_normals[ray_index + 2] = sl(vec3) { normal_values[2], normal_values[6], normal_values[10] };
        ray_hit_normals[ray_index + 3] = sl(vec3) { normal_values[3], normal_values[7], normal_values[11] };
    #endif

    // debug
    #if 0
        vec3 a_[4];
        f32  a2_[4];
        f32 minus_ab_[4];
        f32 b2_[4];
        f32 minus_p_half_[4];
        f32 q_[4];
        f32 root_squared_[4];
        f32 distance_[4];
        f32 ray_distance_[4];
        u32 mask_[4];

        _mm_store_ps(a2_, a2.value);
        _mm_store_ps(minus_ab_, minus_ab.value);
        _mm_store_ps(b2_, b2.value);
        _mm_store_ps(minus_p_half_, minus_p_half.value);
        _mm_store_ps(q_, q.value);
        _mm_store_ps(root_squared_, root_squared.value);
        _mm_store_ps(distance_, distance.value);
        _mm_store_ps(ray_distance_, ray_distance.value);
        _mm_store_ps((f32 *) mask_, mask.value);

        for (u32 i = 0; i < 4; i++)
        {
            f32 values[4];
            _mm_store_ps(values, a.x.value);
            a_[i].x = values[i];
            _mm_store_ps(values, a.y.value);
            a_[i].y = values[i];
            _mm_store_ps(values, a.z.value);
            a_[i].z = values[i];

            printf("[ %f %f %f %f %f %f ] %f %f %f, %f %f %f %f %f %f %f %i %f\n", current_ray[i].origin.x, current_ray[i].origin.y, current_ray[i].origin.z, current_ray[i].direction.x, current_ray[i].direction.y, current_ray[i].direction.z, a_[i].x, a_[i].y, a_[i].z, a2_[i], minus_ab_[i], b2_[i], minus_p_half_[i], q_[i], root_squared_[i], distance_[i], mask_[i], ray_distance_[i]);
        }
    #endif
    }
}

void multi_ray_plane_cast(u32 ray_count, u32 *ray_hit_ids, f32 *ray_distances, wvec3 *ray_hit_normals, wray3 *rays, plane3 plane, u32 plane_hit_id)
{
    assert((ray_count & 3) == 0); // multiple of 4
    assert((((usize)(u8 *) ray_hit_ids) & 15) == 0); // 16byte aligned
    assert((((usize)(u8 *) ray_distances) & 15) == 0); // 16byte aligned

    // | ray.origin + ray.direction * distance - sphere.center |² == sphere.radius²

    wvec3 plane_normal;
    plane_normal.x = wf32_value(plane.normal.x);
    plane_normal.y = wf32_value(plane.normal.y);
    plane_normal.z = wf32_value(plane.normal.z);

    wf32 plane_normal_dot_position = wf32_value(plane.normal_dot_position);

    wf32 hit_id = wf32_value(*(f32 *) &plane_hit_id);

    for (u32 ray_index = 0; ray_index < ray_count; ray_index += 4)
    {
        wray3 ray = rays[ray_index / 4];

    #if 0
        ray3 current_ray[4];
        current_ray[0] = rays[ray_index];
        current_ray[1] = rays[ray_index + 1];
        current_ray[2] = rays[ray_index + 2];
        current_ray[3] = rays[ray_index + 3];
        ray_origin.x.value = _mm_set_ps(current_ray[3].origin.x, current_ray[2].origin.x, current_ray[1].origin.x, current_ray[0].origin.x);
        ray_origin.y.value = _mm_set_ps(current_ray[3].origin.y, current_ray[2].origin.y, current_ray[1].origin.y, current_ray[0].origin.y);
        ray_origin.z.value = _mm_set_ps(current_ray[3].origin.z, current_ray[2].origin.z, current_ray[1].origin.z, current_ray[0].origin.z);

        wvec3 ray_direction;
        ray_direction.x.value = _mm_set_ps(current_ray[3].direction.x, current_ray[2].direction.x, current_ray[1].direction.x, current_ray[0].direction.x);
        ray_direction.y.value = _mm_set_ps(current_ray[3].direction.y, current_ray[2].direction.y, current_ray[1].direction.y, current_ray[0].direction.y);
        ray_direction.z.value = _mm_set_ps(current_ray[3].direction.z, current_ray[2].direction.z, current_ray[1].direction.z, current_ray[0].direction.z);
    #endif

        // dot(ray.origin + ray.direction * distance, plane.normal) - plane.normal_dot_position == 0

        // dot(ray.origin, plane.normal) + dot(ray.direction, plane.normal) * distance - plane.normal_dot_position == 0
        // distance == plane.normal_dot_position - dot(ray.origin, plane.normal) / dot(ray.direction, plane.normal)

        // ray direction and plane normal need to point away from each other
        wf32 b = wvec3_dot(ray.direction, plane_normal);
        wf32 b_is_negative = { _mm_cmplt_ps(b.value, _mm_set_ps1(-f32_epsilon)) };

        wf32 a = wvec3_dot(ray.origin, plane_normal);

        wf32 distance = wf32_div(wf32_sub(plane_normal_dot_position, a), b);
        wf32 distance_is_positive = { _mm_cmpge_ps(distance.value, _mm_set_ps1(f32_epsilon)) };

        wf32 ray_distance = { _mm_load_ps(ray_distances + ray_index) };
        wf32 distance_is_closer = { _mm_cmplt_ps(distance.value, ray_distance.value) };

        wf32 mask = { _mm_and_ps(_mm_and_ps(b_is_negative.value, distance_is_positive.value), distance_is_closer.value) };

        ray_distance = wf32_select(ray_distance, distance, mask);
        _mm_store_ps(ray_distances + ray_index, ray_distance.value);

        wf32 ray_hit_id = { _mm_load_ps((f32 *) ray_hit_ids + ray_index) };
        ray_hit_id = wf32_select(ray_hit_id, hit_id, mask);
        _mm_store_ps((f32 *) ray_hit_ids + ray_index, ray_hit_id.value);

        ray_hit_normals[ray_index / 4] = wvec3_select(ray_hit_normals[ray_index / 4], plane_normal, mask);

    #if 0
        vec3 normals[4];
        normals[0] = ray_hit_normals[ray_index + 0];
        normals[1] = ray_hit_normals[ray_index + 1];
        normals[2] = ray_hit_normals[ray_index + 2];
        normals[3] = ray_hit_normals[ray_index + 3];

        wvec3 ray_hit_normal;
        ray_hit_normal.x.value = _mm_set_ps(normals[3].x, normals[2].x, normals[1].x, normals[0].x);
        ray_hit_normal.y.value = _mm_set_ps(normals[3].y, normals[2].y, normals[1].y, normals[0].y);
        ray_hit_normal.z.value = _mm_set_ps(normals[3].z, normals[2].z, normals[1].z, normals[0].z);
        ray_hit_normal = wvec3_select(ray_hit_normal, plane_normal, mask);

        f32 normal_values[12];
        _mm_store_ps(normal_values, ray_hit_normal.x.value);
        _mm_store_ps(normal_values + 4, ray_hit_normal.y.value);
        _mm_store_ps(normal_values + 8, ray_hit_normal.z.value);

        ray_hit_normals[ray_index + 0] = sl(vec3) { normal_values[0], normal_values[4], normal_values[ 8] };
        ray_hit_normals[ray_index + 1] = sl(vec3) { normal_values[1], normal_values[5], normal_values[ 9] };
        ray_hit_normals[ray_index + 2] = sl(vec3) { normal_values[2], normal_values[6], normal_values[10] };
        ray_hit_normals[ray_index + 3] = sl(vec3) { normal_values[3], normal_values[7], normal_values[11] };
    #endif
    }
}
#endif

rgba8 vec3_to_rgba8(vec3 color)
{
    rgba8 result;
    // color.x = color.x / (color.x + 1);
    // color.y = color.y / (color.y + 1);
    // color.z = color.z / (color.z + 1);
    result.r = (u8) f32_clamp(color.x * 255, 0, 255);
    result.g = (u8) f32_clamp(color.y * 255, 0, 255);
    result.b = (u8) f32_clamp(color.z * 255, 0, 255);
    result.a = 255;

    return result;
}

rgba8 rgba_to_rgba8(rgba color)
{
    rgba8 result;
    result.r = (u8) (color.r * 255);
    result.g = (u8) (color.g * 255);
    result.b = (u8) (color.b * 255);
    result.a = (u8) (color.a * 255);
    return result;
}

rgba rgba8_to_rgba(rgba8 color)
{
    rgba result;
    result.r = (f32) (color.r / 255.0f);
    result.g = (f32) (color.g / 255.0f);
    result.b = (f32) (color.b / 255.0f);
    result.a = (f32) (color.a / 255.0f);
    return result;
}

rgba rgba_lerp(rgba a, rgba b, f32 blend)
{
    f32 one_minus_blend = 1 - blend;
    return sl(rgba)
    {
        a.r * one_minus_blend + b.r * blend,
        a.g * one_minus_blend + b.g * blend,
        a.b * one_minus_blend + b.b * blend,
        a.a * one_minus_blend + b.a * blend,
    };
}

box2 box2_merge(box2 a, box2 b)
{
    a.min.x = min(a.min.x, b.min.x);
    a.min.y = min(a.min.y, b.min.y);
    a.max.x = max(a.max.x, b.max.x);
    a.max.y = max(a.max.y, b.max.y);
    return a;
}

b8 box2_overlap(box2 a, box2 b)
{
    return (a.min.x < b.max.x) && (b.min.x < a.max.x) && (a.min.y < b.max.y) && (b.min.y < a.max.y);
    //return !((a.min.x >= b.max.x) || (b.min.x >= a.max.x) || (a.min.y >= b.max.y) || (b.min.y >= a.max.y));
}

box2 box2_grow(box2 box, f32 border)
{
    box.min.x -= border;
    box.max.x += border;
    box.min.y -= border;
    box.max.y += border;
    return box;
}

box2 box2_move(box2 box, vec2 offset)
{
    box.min = vec2_add(box.min, offset);
    box.max = vec2_add(box.max, offset);
    return box;
}

typedef union
{
    struct
    {
        vec3 min;
        vec3 max;
    };

    vec3 extends[2];

    f32 values[6];
} box3;

box3 box3_merge(box3 a, box3 b)
{
    a.min.x = min(a.min.x, b.min.x);
    a.min.y = min(a.min.y, b.min.y);
    a.min.z = min(a.min.z, b.min.z);
    a.max.x = max(a.max.x, b.max.x);
    a.max.y = max(a.max.y, b.max.y);
    a.max.z = max(a.max.z, b.max.z);
    return a;
}

box3 box3_merge_point(box3 a, vec3 b)
{
    a.min.x = min(a.min.x, b.x);
    a.min.y = min(a.min.y, b.y);
    a.min.z = min(a.min.z, b.z);
    a.max.x = max(a.max.x, b.x);
    a.max.y = max(a.max.y, b.y);
    a.max.z = max(a.max.z, b.z);
    return a;
}

b8 box3_overlap(box3 a, box3 b)
{
    return (a.min.x < b.max.x) && (b.min.x < a.max.x) && (a.min.y < b.max.y) && (b.min.y < a.max.y);
    //return !((a.min.x >= b.max.x) || (b.min.x >= a.max.x) || (a.min.y >= b.max.y) || (b.min.y >= a.max.y));
}

box3 box3_grow(box3 box, f32 border)
{
    box.min.x -= border;
    box.max.x += border;
    box.min.y -= border;
    box.max.y += border;
    return box;
}

box3 box3_move(box3 box, vec3 offset)
{
    box.min = vec3_add(box.min, offset);
    box.max = vec3_add(box.max, offset);
    return box;
}

typedef union
{
    struct
    {
        f32 w, x, y, z;
    };

    f32 values[4];
} quat;

const quat quat_identity = { 1, 0, 0, 0 };

quat quat_axis_cos_sin(vec3 normalized_rotation_axis, f32 cos_value, f32 sin_value)
{
    quat result =
    {
        cos_value,
        normalized_rotation_axis.x * sin_value,
        normalized_rotation_axis.y * sin_value,
        normalized_rotation_axis.z * sin_value,
    };

    return result;
}

quat quat_axis_angle(vec3 normalized_rotation_axis, f32 angle_in_radians)
{
    angle_in_radians = angle_in_radians * 0.5f;
    f32 cos_value = cosf(angle_in_radians);
    f32 sin_value = sinf(angle_in_radians);

    return quat_axis_cos_sin(normalized_rotation_axis, cos_value, sin_value);
}

quat quat_between_normals(vec3 from_normal, vec3 to_normal)
{
    vec3 normalized_rotation_axis = vec3_cross(from_normal, to_normal);
    f32 angle = acosf(vec3_dot(from_normal, to_normal));
    //var cos_value =  * 0.5;
    //var sin_value = sqrt(1 - (cos_value * cos_value));
    //return quat_axis_cos_sin(normalized_rotation_axis, cos_value, sin_value);

    return quat_axis_angle(normalized_rotation_axis, angle);
}

quat quat_mul(quat second, quat first)
{
    quat result =
    {
        (first.w * second.w) - (first.x * second.x) - (first.y * second.y) - (first.z * second.z),
        (first.w * second.x) + (first.x * second.w) + (first.y * second.z) - (first.z * second.y),
        (first.w * second.y) - (first.x * second.z) + (first.y * second.w) + (first.z * second.x),
        (first.w * second.z) + (first.x * second.y) - (first.y * second.x) + (first.z * second.w)
    };

    return result;
}

quat inverse(quat value)
{
    f32 inverse_length_squared = -1.0f / (value.w * value.w + value.x * value.x + value.y * value.y + value.z * value.z);

    quat result =
    {
        value.w * inverse_length_squared,
        value.x * inverse_length_squared,
        value.y * inverse_length_squared,
        value.z * inverse_length_squared,
    };

    return result;
}

typedef union
{
    struct
    {
        vec3 right;       f32 right_w;
        vec3 up;          f32 up_w;
        vec3 forward;     f32 forward_w;
        vec3 translation; f32 translation_w;
    };

    vec4 columns[4];
    f32  values[16];
} mat4;

const mat4 mat4_identity = {
    1, 0, 0, 0,
    0, 1, 0, 0,
    0, 0, 1, 0,
    0, 0, 0, 1,
};

vec4 mat4_mulv(mat4 transform, vec4 vector)
{
    vec4 result =
        vec4_add(vec4_muls(transform.columns[0], vector.x),
        vec4_add(vec4_muls(transform.columns[1], vector.y),
        vec4_add(vec4_muls(transform.columns[2], vector.z),
        vec4_muls(transform.columns[3], vector.w))));

    return result;
}

mat4 mat4_mul(mat4 second, mat4 first)
{
    mat4 result;
    result.columns[0] = mat4_mulv(second, first.columns[0]);
    result.columns[1] = mat4_mulv(second, first.columns[1]);
    result.columns[2] = mat4_mulv(second, first.columns[2]);
    result.columns[3] = mat4_mulv(second, first.columns[3]);

    return result;
}

vec3 mat4_transform(mat4 transform, vec3 position)
{
    vec4 vector;
    vector.xyz = position;
    vector.w   = 1;
    vector = mat4_mulv(transform, vector);
    // assuming vector.w == 1
    return vector.xyz;
}

vec3 mat4_project(mat4 projection, vec3 position)
{
    vec4 vector;
    vector.xyz = position;
    vector.w   = 1;
    vector = mat4_mulv(projection, vector);
    return vec3_divs(vector.xyz, vector.w);
}

mat4 mat4_scaled_transform(quat rotation, vec3 scale, vec3 translation)
{
    f32 xx = rotation.x * rotation.x;
    f32 xy = rotation.x * rotation.y;
    f32 xz = rotation.x * rotation.z;

    f32 yy = rotation.y * rotation.y;
    f32 yz = rotation.y * rotation.z;

    f32 zz = rotation.z * rotation.z;

    f32 wx = rotation.w * rotation.x;
    f32 wy = rotation.w * rotation.y;
    f32 wz = rotation.w * rotation.z;

    mat4 result;
    result.columns[0].values[0] = (1 - (2 * (yy + zz)))   * scale.x;
    result.columns[1].values[0] =       2 * (xy - wz) 	  * scale.y;
    result.columns[2].values[0] =       2 * (xz + wy)	  * scale.z;

    result.columns[0].values[1] =       2 * (xy + wz)	  * scale.x;
    result.columns[1].values[1] = (1 - (2 * (xx + zz)))   * scale.y;
    result.columns[2].values[1] =       2 * (yz - wx)	  * scale.z;

    result.columns[0].values[2] =       2 * (xz - wy)	  * scale.x;
    result.columns[1].values[2] =       2 * (yz + wx)	  * scale.y;
    result.columns[2].values[2] = (1 - (2 * (xx + yy))	) * scale.z;

    result.columns[0].values[3] = 0;
    result.columns[1].values[3] = 0;
    result.columns[2].values[3] = 0;

    result.columns[3].xyz       = translation;
    result.columns[3].values[3] = 1;

    return result;
}

mat4 mat4_unscaled_transform(quat rotation, vec3 translation)
{
    return mat4_scaled_transform(rotation, vec3_one, translation);
}

mat4 mat4_camera_to_world_look_at(vec3 center, vec3 target, vec3 relative_up)
{
    // camera forward points in opposite to the camera view direction
    vec3 forward = vec3_normalize(vec3_sub(center, target)); // is flipped
    vec3 right   = vec3_normalize(vec3_cross(relative_up, forward));
    vec3 up      = vec3_cross(forward, right);

    mat4 result = {0};
    result.right         = right;
    result.up            = up;
    result.forward       = forward;
    result.translation   = center;
    result.translation_w = 1;
    return result;
}

mat4 mat4_inverse_transform(mat4 transform)
{
    vec3 inverse_scale =
    {
        1.0f / vec3_length(transform.columns[0].xyz),
        1.0f / vec3_length(transform.columns[1].xyz),
        1.0f / vec3_length(transform.columns[2].xyz),
    };

    mat4 result = {0};
    for (u32 x = 0; x < 3; x++)
    {
        for (u32 y = 0; y < 3; y++)
        {
            result.columns[x].values[y] = transform.columns[y].values[x] * inverse_scale.values[y];
        }
    }

    result.translation_w = 1;
    result.translation   = mat4_transform(result, vec3_negate(transform.translation));

    return result;
}

mat4 mat4_inverse_unscaled_transform(mat4 transform)
{
    mat4 result = {0};
    for (u32 x = 0; x < 3; x++)
    {
        for (u32 y = 0; y < 3; y++)
        {
            result.columns[x].values[y] = transform.columns[y].values[x];
        }
    }

    result.translation_w = 1;
    result.translation   = mat4_transform(result, vec3_negate(transform.translation));

    return result;
}

// projection matrix
// a | 0 | 0 | 0
// 0 | b | 0 | 0
// 0 | 0 | c | d
// 0 | 0 | e | 0
mat4 mat4_perspective_projection_ex(f32 a, f32 b, f32 c, f32 d, f32 e)
{
    mat4 result = {0};
    result.columns[0].values[0] = a;
    result.columns[1].values[1] = b;
    result.columns[2].values[2] = c;
    result.columns[3].values[2] = d;
    result.columns[2].values[3] = e;

    return result;
}

const f32 mat4_default_near_plane = 0.01f;
const f32 mat4_default_far_plane  = 100.0f;

mat4 mat4_perspective_projection(f32 width, f32 height, f32 near_plane, f32 far_plane)
{
    f32 a = 2 * near_plane / width;
    f32 b = 2 * near_plane / height;
    f32 c = -    (far_plane + near_plane) / (far_plane - near_plane);
    f32 d = - 2 * far_plane * near_plane  / (far_plane - near_plane);
    f32 e = -1;

    return mat4_perspective_projection_ex(a, b, c, d, e);
}

mat4 mat4_perspective_projection_fov(f32 fov_y, f32 width_over_height, f32 near_plane, f32 far_plane)
{
    f32 height = 2 * near_plane * tanf(fov_y * 0.5f);
    f32 width = width_over_height * height;
    return mat4_perspective_projection(width, height, near_plane, far_plane);
}

// inverse projection matrix
// 1 / a |     0 |     0 |            0
// 0     | 1 / b |     0 |            0
// 0     |     0 |     0 |        1 / e
// 0     |     0 | 1 / d | -c / (d * e)
mat4 mat4_inverse_perspective_projection_ex(f32 a, f32 b, f32 c, f32 d, f32 e)
{
    mat4 result = {0};
    result.columns[0].values[0] = 1 / a;
    result.columns[1].values[1] = 1 / b;
    result.columns[2].values[3] = 1 / d;
    result.columns[3].values[2] = 1 / e;
    result.columns[3].values[3] = -c / (d * e);

    return result;
}

mat4 mat4_inverse_perspective_projection(mat4 projection)
{
    return mat4_inverse_perspective_projection_ex(
        projection.columns[0].values[0],
        projection.columns[1].values[1],
        projection.columns[2].values[2],
        projection.columns[3].values[2],
        projection.columns[2].values[3]);
}

mat4 mat4_orthographic_projection(f32 width, f32 height, f32 near_plane, f32 far_plane)
{
    mat4 result = {0};
    result.columns[0].values[0] = 2.0f / width;
    result.columns[1].values[1] = 2.0f / height;
    result.columns[2].values[2] = 2.0f / (near_plane - far_plane);
    result.columns[3].values[2] = (near_plane + far_plane) / (near_plane - far_plane);
    result.columns[3].values[3] = 1.0f;

    return result;
}

mat4 mat4_inverse_orthographic_projection(mat4 orthographic_projection)
{
    mat4 result = {0};
    result.columns[0].values[0] = 1.0f / orthographic_projection.columns[0].values[0];
    result.columns[1].values[1] = 1.0f / orthographic_projection.columns[1].values[1];
    result.columns[2].values[2] = 1.0f / orthographic_projection.columns[2].values[2];
    result.columns[3].values[2] = orthographic_projection.columns[3].values[2] / -orthographic_projection.columns[2].values[2];
    result.columns[3].values[3] = 1.0f;

    return result;
}

vec3 box3_transformed_corner(mat4 transform, box3 box, u32 corner)
{
    assert(corner < 8);
    vec3 blend = { (f32) (corner & 1), (f32) ((corner >> 1) & 1), (f32) ((corner >> 2) & 1) };
    vec3 point = vec3_lerp(box.min, box.max, blend);
    vec3 world_point = mat4_transform(transform, point);
    return world_point;
}

#if 0
b8 box3_transfored_overlap(mat4 to_left_transform, box3 left_box, mat4 ro_right_transform, box3 right_box)
{
    box3 left_world_box;
    left_world_box.min = box3_transformed_corner(left_to_world_transform, left_local_box, 0);
    left_world_box.max = left_world_box.min;
    for (u32 i = 1; i < 8; i++)
    {
        vec3 left_world_point = box3_transformed_corner(left_to_world_transform, left_local_box, i);
        left_world_box = box3_merge_point(left_world_box, left_world_point);
    }

    if (!box3_overlap(left_world_box, right_world_box))
        return false;

    mat4 right_to_local_transform = mat4_inverse_unscaled_transform(left_to_world_transform);

    box3 right_local_box;
    right_local_box.min = box3_transformed_corner(right_to_local_transform, right_world_box, 0);
    right_local_box.max = right_local_box.min;
    for (u32 i = 1; i < 8; i++)
    {
        vec3 right_local_point = box3_transformed_corner(right_to_local_transform, right_world_box, i);
        right_local_box = box3_merge_point(right_local_box, right_local_point);
    }

    return box3_overlap(left_local_box, right_local_box);
}
#endif

#ifdef __cplusplus
}
#endif

#endif