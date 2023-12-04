
#include <stdio.h> // printf

#include "mo_render.h"
#include "mo_gl.h"
#include "mo_gl_bindings.h"

struct mor_renderer
{
    mor_renderer_base base;

    mor_u8 api_state[64];
};

struct mor_framebuffer
{
    mor_u32 gl_handle;
};

struct mor_shader
{
    mor_u32 gl_handle;
};

struct mor_vertex_buffer
{
    mor_u32 gl_vertex_array;
    mor_u32 gl_vertex_buffer;
    mor_u32 gl_element_array_buffer;
    mor_u32 vertex_count;
};

struct mor_texture
{
    mor_u32 gl_handle;
};

mor_init_signature
{
    renderer->base.api = mor_render_api_gl;
    mogl_state *gl = (mogl_state *) &renderer->api_state;
    mogl_init(gl);
}

mor_clear_signature
{
    renderer->base.framebuffer_used_count   = 0;
    renderer->base.shader_used_count        = 0;
    renderer->base.vertex_buffer_used_count = 0;
    renderer->base.texture_used_count       = 0;
}

mor_u16 mor_framebuffer_index(mor_renderer *renderer, mor_framebuffer framebuffer)
{
    for (mor_u16 i = 0; i < renderer->base.framebuffer_used_count; i++)
    {
        if (renderer->base.framebuffers[i].gl_handle == framebuffer.gl_handle)
            return i;
    }

    mor_assert(renderer->base.framebuffer_used_count < renderer->base.framebuffer_count);
    mor_u16 index = renderer->base.framebuffer_used_count;
    renderer->base.framebuffers[index] = framebuffer;
    renderer->base.framebuffer_used_count++;

    return index;
}

mor_u16 mor_shader_index(mor_renderer *renderer, mor_shader shader)
{
    for (mor_u16 i = 0; i < renderer->base.shader_used_count; i++)
    {
        if (renderer->base.shaders[i].gl_handle == shader.gl_handle)
            return i;
    }

    mor_assert(renderer->base.shader_used_count < renderer->base.shader_count);
    mor_u16 index = renderer->base.shader_used_count;
    renderer->base.shaders[index] = shader;
    renderer->base.shader_used_count++;

    return index;
}

mor_u16 mor_vertex_buffer_index(mor_renderer *renderer, mor_vertex_buffer vertex_buffer)
{
    for (mor_u16 i = 0; i < renderer->base.vertex_buffer_used_count; i++)
    {
        if (renderer->base.vertex_buffers[i].gl_vertex_array == vertex_buffer.gl_vertex_array)
            return i;
    }

    mor_assert(renderer->base.vertex_buffer_used_count < renderer->base.vertex_buffer_count);
    mor_u16 index = renderer->base.vertex_buffer_used_count;
    renderer->base.vertex_buffers[index] = vertex_buffer;
    renderer->base.vertex_buffer_used_count++;

    return index;
}

mor_u16 mor_texture_index(mor_renderer *renderer, mor_texture texture)
{
    for (mor_u16 i = 0; i < renderer->base.texture_used_count; i++)
    {
        if (renderer->base.textures[i].gl_handle == texture.gl_handle)
            return i;
    }

    mor_assert(renderer->base.texture_used_count < renderer->base.texture_count);
    mor_u16 index = renderer->base.texture_used_count;
    renderer->base.textures[index] = texture;
    renderer->base.texture_used_count++;

    return index;
}

mor_push_pass_signature
{
    mor_assert(pass.framebuffer_index < renderer->base.framebuffer_used_count);
    mor_assert(buffer->pass_used_count < buffer->pass_count);
    mor_render_pass *new_pass = &buffer->passes[buffer->pass_used_count];
    buffer->pass_used_count++;

    *new_pass = pass;
    new_pass->command_count = 0;
}

mor_push_command_signature
{
    mor_assert(buffer->pass_used_count);
    mor_assert(command.shader_index < renderer->base.shader_used_count);
    mor_assert(command.vertex_buffer_index < renderer->base.vertex_buffer_used_count);
    mor_assert(command.vertex_offset                        <  renderer->base.vertex_buffers[command.vertex_buffer_index].vertex_count);
    mor_assert(command.vertex_offset + command.vertex_count <= renderer->base.vertex_buffers[command.vertex_buffer_index].vertex_count);

    for (mor_u8 slot = 0; slot < mor_texture_slot_count; slot++)
    {
        mor_assert((command.texture_indices[slot] == -1) || (command.texture_indices[slot] < renderer->base.texture_used_count));
    }

    mor_assert(buffer->command_used_count < buffer->command_count);
    mor_command *new_command = &buffer->commands[buffer->command_used_count];
    buffer->command_used_count++;

    *new_command = command;
    new_command->transform_offset = buffer->transform_used_count;
    new_command->transform_count  = 0;

    buffer->passes[buffer->pass_used_count - 1].command_count++;
}

mor_execute_signature
{
    mor_u16 command_offset = 0;
    for (mor_u16 pass_index = 0; pass_index < buffer->pass_used_count; pass_index++)
    {
        mor_render_pass pass = buffer->passes[pass_index];

        mor_framebuffer framebuffer = renderer->base.framebuffers[pass.framebuffer_index];
        glBindFramebuffer(GL_DRAW_FRAMEBUFFER, framebuffer.gl_handle);

        mor_u32 clear_mask = 0;
        if (pass.bind_mask.clear_color)
        {
            glClearColor(pass.clear_color.r, pass.clear_color.g, pass.clear_color.b, pass.clear_color.a);
            clear_mask |= GL_COLOR_BUFFER_BIT;
        }

        if (pass.bind_mask.clear_depth)
            clear_mask |= GL_DEPTH_BUFFER_BIT;

        if (clear_mask)
            glClear(clear_mask);

        if (pass.bind_mask.enable_blend)
        {
            // premultiplied alpha blending
            glEnable(GL_BLEND);
            glBlendFunc(GL_ONE, GL_ONE_MINUS_SRC_ALPHA);
        }
        else
        {
            glDisable(GL_BLEND);
        }

        glDepthMask(!pass.bind_mask.disable_depth_write);

        if (pass.bind_mask.disable_depth_test)
            glDisable(GL_DEPTH_TEST);
        else
            glEnable(GL_DEPTH_TEST);

        for (mor_u16 shader_index = 0; shader_index < renderer->base.shader_used_count; shader_index++)
        {
            mor_shader shader = renderer->base.shaders[shader_index];
            glUseProgram(shader.gl_handle);

            for (mor_u16 vertex_buffer_index = 0; vertex_buffer_index < renderer->base.vertex_buffer_used_count; vertex_buffer_index++)
            {
                mor_vertex_buffer vertex_buffer = renderer->base.vertex_buffers[vertex_buffer_index];
                glBindVertexArray(vertex_buffer.gl_vertex_array);

                for (mor_u16 command_index = 0; command_index < pass.command_count; command_index++)
                {
                    mor_command command = buffer->commands[command_offset + command_index];

                    if ((command.shader_index != shader_index) || (command.vertex_buffer_index != vertex_buffer_index))
                        continue;

                    for (u32 texture_slot = 0; texture_slot < mor_texture_slot_count; texture_slot++)
                    {
                        mor_texture texture = renderer->base.textures[command.texture_indices[texture_slot]];
                        glActiveTexture(GL_TEXTURE0 + texture_slot);
                        glBindTexture(GL_TEXTURE_2D, texture.gl_handle);
                    }

                    if (vertex_buffer.gl_element_array_buffer)
                    {
                        glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, vertex_buffer.gl_element_array_buffer);
                        glDrawElements(GL_TRIANGLES, command.vertex_count, GL_UNSIGNED_INT, (void *) (mor_usize) command.vertex_offset);
                    }
                    else
                    {
                        glDrawArrays(GL_TRIANGLES, command.vertex_offset, command.vertex_count);
                    }
                }
            }
        }

        command_offset += pass.command_count;
    }

    glBindVertexArray(0);
    glUseProgram(0);
    glBindFramebuffer(GL_DRAW_FRAMEBUFFER, 0);
}

mor_u32 mor_gl_create_shader_object(mor_renderer *renderer, mor_string name, mor_b8 is_fragment_shader, mor_u32 source_count, mor_string *sources)
{
    mor_u32 shader_kind_map[] =
    {
        GL_VERTEX_SHADER,
        GL_FRAGMENT_SHADER
    };

    mor_u32 gl_shader_kind = shader_kind_map[is_fragment_shader];
    mor_u32 shader_object = glCreateShader(gl_shader_kind);

    mor_cstring source_bases[32];
    mor_s32 source_counts[32];
    mor_assert(source_count <= mor_carray_count(source_bases));

    for (mor_u32 i = 0; i < source_count; i++)
    {
        source_bases[i]  = (mor_cstring) sources[i].base;
        source_counts[i] = (mor_s32) sources[i].count;
    }

    glShaderSource(shader_object, source_count, source_bases, source_counts);

    glCompileShader(shader_object);

    GLint is_compiled;
    glGetShaderiv(shader_object, GL_COMPILE_STATUS, &is_compiled);
    if (!is_compiled)
    {
        #if 0
        var error_messages string;
        if error_memory
        {
            def shader_type_names = [ "vertex", "fragment" ] string[];

            write(error_memory, error_messages ref, "GLSL Compile Error: could not compile % shader %\n", shader_type_names[is_fragment_shader], name);

            var info_byte_count GLint;
            glGetShaderiv(shader_object, GL_INFO_LOG_LENGTH, info_byte_count ref);

            var offset = error_messages.count;
            reallocate_array(error_memory, error_messages ref, error_messages.count + info_byte_count cast(u32));
            glGetShaderInfoLog(shader_object, info_byte_count, info_byte_count ref cast(GLsizei ref), error_messages[offset] ref cast(GLchar ref));
        }
        else
        #endif
        {
            if (!is_fragment_shader)
                printf("GLSL Compile Error: could not compile vertex shader %.*s\n", mor_fs(name));
            else
                printf("GLSL Compile Error: could not compile fragment shader %.*s\n", mor_fs(name));

            char message_buffer[4096];
            GLint info_byte_count;
            glGetShaderiv(shader_object, GL_INFO_LOG_LENGTH, &info_byte_count);

            if (info_byte_count > mor_carray_count(message_buffer))
                info_byte_count = mor_carray_count(message_buffer);

            glGetShaderInfoLog(shader_object, info_byte_count, &info_byte_count, message_buffer);
            mor_string message = { (mor_u8 *) message_buffer, (mor_usize) info_byte_count };
            printf("%.*s\n", mor_fs(message));
        }

        glDeleteShader(shader_object);
        return 0;
    }

    return shader_object;
}

mor_shader_create_signature
{
    mor_u32 vertex_shader_object = mor_gl_create_shader_object(renderer, name, mor_false, settings.vertex_source_count, settings.vertex_sources);
    if (!vertex_shader_object)
        return mor_struct_literal(mor_shader) {0};

    mor_u32 fragment_shader_object = mor_gl_create_shader_object(renderer, name, mor_true, settings.fragment_source_count, settings.fragment_sources);
    if (!fragment_shader_object)
    {
        glDeleteShader(vertex_shader_object);

        return mor_struct_literal(mor_shader) {0};
    }

    mor_shader shader = {0};
    mor_u32 program_handle = glCreateProgram();
    glAttachShader(program_handle, vertex_shader_object);
    glAttachShader(program_handle, fragment_shader_object);

    for (mor_u32 i = 0; i < settings.vertex_attribute_count; i++)
    {
        mor_string item = settings.vertex_attributes[i];

        char name_buffer[256];
        mor_s32 count = _sprintf_p(name_buffer, mor_carray_count(name_buffer), "%.*s", mor_fs(item));
        mor_assert(count != -1);
        glBindAttribLocation(program_handle, i, name_buffer);
    }

    {
        glLinkProgram(program_handle);

        glDeleteShader(vertex_shader_object);
        glDeleteShader(fragment_shader_object);

        GLint is_linked;
        glGetProgramiv(program_handle, GL_LINK_STATUS, &is_linked);
        if (!is_linked)
        {
            #if 0
            var error_messages string;
            if error_memory
            {
                write(error_memory, error_messages ref, "GLSL Error: Could not link gl program %:\n\n", name);

                var info_byte_count GLint;
                glGetProgramiv(program_object, GL_INFO_LOG_LENGTH, info_byte_count ref);

                var offset = error_messages.count;
                reallocate_array(error_memory, error_messages ref, error_messages.count + info_byte_count cast(u32));

                glGetProgramInfoLog(program_object, info_byte_count, info_byte_count ref cast(GLsizei ref), error_messages[offset] ref cast(GLchar ref));
            }
            else
            #endif
            {
                printf("GLSL Error: Could not link gl program:\n\n");

                char message_buffer[4096];
                GLint info_byte_count;
                glGetProgramiv(program_handle, GL_INFO_LOG_LENGTH, &info_byte_count);

                if (info_byte_count > mor_carray_count(message_buffer))
                    info_byte_count = mor_carray_count(message_buffer);

                glGetProgramInfoLog(program_handle, info_byte_count, &info_byte_count, message_buffer);
                mor_string message = { (mor_u8 *) message_buffer, (mor_usize) info_byte_count };
                printf("%.*s\n", mor_fs(message));
            }

            glDeleteProgram(program_handle);
            return shader;
        }
    }

    for (mor_u32 i = 0; i < settings.uniform_block_count; i++)
    {
        mor_string item = settings.uniform_blocks[i];

        char name_buffer[256];
        mor_s32 count = _sprintf_p(name_buffer, mor_carray_count(name_buffer), "%.*s", mor_fs(item));
        mor_assert(count != -1);
        glBindAttribLocation(program_handle, i, name_buffer);

        mor_s32 index = glGetUniformBlockIndex(program_handle, name_buffer);
        if (index != -1)
            glUniformBlockBinding(program_handle, index, i);
    }

    shader.gl_handle = program_handle;
    return shader;
}
