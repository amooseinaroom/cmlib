
#include "mo_basic.h"

#if !defined mo_math_h
#define mo_math_h

#ifdef __cplusplus
extern "C" {
#endif

#include <math.h>

const f32 pi32 = 3.14159265;

// HACK:
#if !defined(moui_h)

typedef union
{
    struct
    {
        f32 x;
        f32 y;
    };

    f32 values[2];
} moui_vec2;

typedef union
{
    struct
    {
        moui_vec2 min;
        moui_vec2 max;
    };

    moui_vec2 extends[2];

    f32 values[4];
} moui_box2;

typedef struct
{
    f32 r;
    f32 g;
    f32 b;
    f32 a;
} moui_rgba;

typedef union
{
    struct {
        u8 r;
        u8 g;
        u8 b;
        u8 a;
    };

    u32 value;
} moui_rgba8;

#endif

typedef union
{
    struct
    {
        f32 x, y, z;
    };

    f32 values[3];
} vec3;

const vec3 vec3_zero = {0};
const vec3 vec3_one = { 1, 1, 1 };

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

vec2 vec2_sub(vec2 a, vec2 b)
{
    return sl(vec2)
    {
        a.x - b.x,
        a.y - b.y,
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

vec2 vec2_scale(vec2 vector, f32 scale)
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

    return vec2_scale(vector, 1.0f / length);
}

vec2 vec2_normalize_safe(vec2 vector, vec2 fallback)
{
    f32 length_squared = vec2_length_squared(vector);
    if (length_squared == 0)
        return fallback;

    f32 length = sqrtf(length_squared);
    return vec2_scale(vector, 1.0f / length);
}

vec2 vec2_floor(vec2 vector)
{
    return sl(vec2) { floorf(vector.x), floorf(vector.y) };
}

vec2 vec2_ceil(vec2 vector)
{
    return sl(vec2) { ceilf(vector.x), ceilf(vector.y) };
}

vec2 vec2_lerp(vec2 a, vec2 b, f32 blend)
{
    return vec2_add(vec2_scale(a, 1 - blend), vec2_scale(b, blend));
}

f32 vec3_dot(vec3 a, vec3 b)
{
    return a.x * b.x + a.y * b.y + a.z * b.z;
}

vec3 vec3_scale(vec3 vector, f32 scale)
{
    return sl(vec3) { vector.x * scale, vector.y * scale, vector.z * scale };
}

vec3 vec3_add(vec3 a, vec3 b)
{
    return sl(vec3)
    {
        a.x + b.x,
        a.y + b.y,
        a.z + b.z,
    };
}

vec3 vec3_sub(vec3 a, vec3 b)
{
    return sl(vec3)
    {
        a.x - b.x,
        a.y - b.y,
        a.z - b.z,
    };
}

vec3 vec3_mul(vec3 a, vec3 b)
{
    return sl(vec3)
    {
        a.x * b.x,
        a.y * b.y,
        a.z * b.z,
    };
}

f32 vec3_length_squared(vec3 vector)
{
    f32 length_squared = vec3_dot(vector, vector);
    return length_squared;
}

f32 vec3_length(vec3 vector)
{
    f32 length_squared = vec3_length_squared(vector);
    f32 length = sqrtf(length_squared);
    return length;
}
vec3 vec3_normalize(vec3 vector)
{
    f32 length = vec3_length(vector);
    return vec3_scale(vector, 1.0f / length);
}

vec3 vec3_normalize_safe(vec3 vector, vec3 fallback)
{
    f32 length_squared = vec3_length_squared(vector);
    if (length_squared == 0)
        return fallback;

    f32 length = sqrtf(length_squared);
    return vec3_scale(vector, 1.0f / length);
}

vec3 vec3_cross(vec3 right_hand_thumb, vec3 right_hand_index)
{
    vec3 right_hand_middle =
    {
        right_hand_thumb.z * right_hand_index.y - right_hand_thumb.y * right_hand_index.z,
        right_hand_thumb.x * right_hand_index.z - right_hand_thumb.z * right_hand_index.x,
        right_hand_thumb.y * right_hand_index.x - right_hand_thumb.x * right_hand_index.y
    };

    return right_hand_middle;
}

vec3 vec3_reflect(vec3 normal, vec3 direction)
{
    return vec3_sub(direction, vec3_scale(normal, 2 * vec3_dot(normal, direction)));
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
        normal = vec3_scale(normal, -1);
    }

    f32 k = 1 - eta * eta * (1 - cos_theta * cos_theta);

    if (k < 0)
        return sl(vec3) {0};

    return vec3_add(vec3_scale(direction, eta), vec3_scale(normal, eta * cos_theta - sqrtf(k)));

#else
    f32 N_dot_I = vec3_dot(normal, direction);
    f32 k = 1.f - eta * eta * (1.f - N_dot_I * N_dot_I);

    if (k < 0)
        return sl(vec3) {0};

    return vec3_sub(vec3_scale(direction, eta), vec3_scale(normal, eta * N_dot_I + sqrtf(k)));
#endif
}

vec3 vec3_lerp(vec3 a, vec3 b, f32 blend)
{
    return vec3_add(vec3_scale(a, 1 - blend), vec3_scale(b, blend));
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
    return vec3_add(ray.origin, vec3_scale(ray.direction, distance));
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

b8 ray_plane_cast(f32 *out_distance, ray3 ray, plane3 plane)
{
    // dot(ray.origin + ray.direction * distance, plane.normal) - plane.normal_dot_position == 0

    // dot(ray.origin, plane.normal) + dot(ray.direction, plane.normal) * distance - plane.normal_dot_position == 0
    // distance == plane.normal_dot_position - dot(ray.origin, plane.normal) / dot(ray.direction, plane.normal)

    f32 b = vec3_dot(ray.direction, plane.normal);
    if (b >= f32_epsilon) // is positive
        return false;

    f32 a = vec3_dot(ray.origin, plane.normal);
    f32 distance = (plane.normal_dot_position - a) / b;

    if (distance < f32_epsilon) // is negative
        return false;

    if (*out_distance < distance)
        return false;

    *out_distance = distance;
    return true;
}

#include <xmmintrin.h>

b8 ray_sphere_cast(f32 *out_distance, ray3 ray, sphere3 sphere)
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
        return false;

    __m128 mx = _mm_set_ps1(root_squared);
    mx = _mm_sqrt_ps(mx);
    f32 root = _mm_cvtss_f32(mx);

    f32 distance = minus_p_half - root;
    //f32 distance = minus_p_half - sqrtf(root_squared);
    if (distance < f32_epsilon) // is negative
    {
        distance = minus_p_half + root;

        if (distance < f32_epsilon) // is negative
            return false;
    }

    if (*out_distance < distance)
        return false;

    *out_distance = distance;

// debug
#if 0
    printf("[ %f %f %f %f %f %f ] %f %f %f, %f %f %f %f %f %f %f 0 %f\n", ray.origin.x, ray.origin.y, ray.origin.z, ray.direction.x, ray.direction.y, ray.direction.z, a.x, a.y, a.z, a2, minus_ab, b2, minus_p_half, q, root_squared, distance, *out_distance);
#endif

    return true;
}

typedef struct
{
    __m128 value;
} wf32;

typedef union
{
    struct
    {
        wf32 x;
        wf32 y;
        wf32 z;
    };

    wf32 values[3];
} wvec3;

wf32 wf32_value(f32 value)
{
    wf32 result;
    result.value = _mm_set_ps1(value);
    return result;
}

wf32 wf32_add(wf32 a, wf32 b)
{
    a.value = _mm_add_ps(a.value, b.value);
    return a;
}

wf32 wf32_sub(wf32 a, wf32 b)
{
    a.value = _mm_sub_ps(a.value, b.value);
    return a;
}

wf32 wf32_mul(wf32 a, wf32 b)
{
    a.value = _mm_mul_ps(a.value, b.value);
    return a;
}

wf32 wf32_div(wf32 a, wf32 b)
{
    a.value = _mm_div_ps(a.value, b.value);
    return a;
}

wf32 wf32_select(wf32 a, wf32 b, wf32 mask)
{
    a.value = _mm_or_ps(_mm_andnot_ps(mask.value, a.value), _mm_and_ps(b.value, mask.value));
    return a;
}

wvec3 wvec3_add(wvec3 a, wvec3 b)
{
    a.x = wf32_add(a.x, b.x);
    a.y = wf32_add(a.y, b.y);
    a.z = wf32_add(a.z, b.z);
    return a;
}

wvec3 wvec3_sub(wvec3 a, wvec3 b)
{
    a.x = wf32_sub(a.x, b.x);
    a.y = wf32_sub(a.y, b.y);
    a.z = wf32_sub(a.z, b.z);
    return a;
}

wvec3 wvec3_scale(wvec3 a, wf32 scale)
{
    a.x = wf32_mul(a.x, scale);
    a.y = wf32_mul(a.y, scale);
    a.z = wf32_mul(a.z, scale);
    return a;
}

wf32 wvec3_dot(wvec3 a, wvec3 b)
{
    return wf32_add(wf32_add(wf32_mul(a.x, b.x), wf32_mul(a.y, b.y)), wf32_mul(a.z, b.z));
}

wvec3 wvec3_select(wvec3 a, wvec3 b, wf32 mask)
{
    a.x.value = _mm_or_ps(_mm_andnot_ps(mask.value, a.x.value), _mm_and_ps(b.x.value, mask.value));
    a.y.value = _mm_or_ps(_mm_andnot_ps(mask.value, a.y.value), _mm_and_ps(b.y.value, mask.value));
    a.z.value = _mm_or_ps(_mm_andnot_ps(mask.value, a.z.value), _mm_and_ps(b.z.value, mask.value));
    return a;
}

typedef struct
{
    wvec3 origin;
    wvec3 direction;
} wray3;

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

rgba8 vec3_to_rgba8(vec3 color)
{
    rgba8 result;
    color.x = color.x / (color.x + 1);
    color.y = color.y / (color.y + 1);
    color.z = color.z / (color.z + 1);
    result.r = (u8) (color.x * 255);
    result.g = (u8) (color.y * 255);
    result.b = (u8) (color.z * 255);
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

#ifdef __cplusplus
}
#endif

#endif