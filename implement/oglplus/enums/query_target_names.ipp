/*
 *  .file oglplus/enums/query_target_names.ipp
 *
 *  Automatically generated header file. DO NOT modify manually,
 *  edit 'source/enums/oglplus/query_target.txt' instead.
 *
 *  Copyright 2010-2014 Matus Chochlik. Distributed under the Boost
 *  Software License, Version 1.0. (See accompanying file
 *  LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
 */

namespace enums {
OGLPLUS_LIB_FUNC StrCRef ValueName_(
	QueryTarget*,
	GLenum value
)
#if (!OGLPLUS_LINK_LIBRARY || defined(OGLPLUS_IMPLEMENTING_LIBRARY)) && \
	!defined(OGLPLUS_IMPL_EVN_QUERYTARGET)
#define OGLPLUS_IMPL_EVN_QUERYTARGET
{
switch(value)
{
#if defined GL_TIME_ELAPSED
	case GL_TIME_ELAPSED: return StrCRef("TIME_ELAPSED");
#endif
#if defined GL_TIMESTAMP
	case GL_TIMESTAMP: return StrCRef("TIMESTAMP");
#endif
#if defined GL_SAMPLES_PASSED
	case GL_SAMPLES_PASSED: return StrCRef("SAMPLES_PASSED");
#endif
#if defined GL_ANY_SAMPLES_PASSED
	case GL_ANY_SAMPLES_PASSED: return StrCRef("ANY_SAMPLES_PASSED");
#endif
#if defined GL_PRIMITIVES_GENERATED
	case GL_PRIMITIVES_GENERATED: return StrCRef("PRIMITIVES_GENERATED");
#endif
#if defined GL_TRANSFORM_FEEDBACK_PRIMITIVES_WRITTEN
	case GL_TRANSFORM_FEEDBACK_PRIMITIVES_WRITTEN: return StrCRef("TRANSFORM_FEEDBACK_PRIMITIVES_WRITTEN");
#endif
#if defined GL_VERTICES_SUBMITTED_ARB
	case GL_VERTICES_SUBMITTED_ARB: return StrCRef("VERTICES_SUBMITTED_ARB");
#endif
#if defined GL_PRIMITIVES_SUBMITTED_ARB
	case GL_PRIMITIVES_SUBMITTED_ARB: return StrCRef("PRIMITIVES_SUBMITTED_ARB");
#endif
#if defined GL_VERTEX_SHADER_INVOCATIONS_ARB
	case GL_VERTEX_SHADER_INVOCATIONS_ARB: return StrCRef("VERTEX_SHADER_INVOCATIONS_ARB");
#endif
#if defined GL_TESS_CONTROL_SHADER_PATCHES_ARB
	case GL_TESS_CONTROL_SHADER_PATCHES_ARB: return StrCRef("TESS_CONTROL_SHADER_PATCHES_ARB");
#endif
#if defined GL_TESS_EVALUATION_SHADER_INVOCATIONS_ARB
	case GL_TESS_EVALUATION_SHADER_INVOCATIONS_ARB: return StrCRef("TESS_EVALUATION_SHADER_INVOCATIONS_ARB");
#endif
#if defined GL_GEOMETRY_SHADER_INVOCATIONS
	case GL_GEOMETRY_SHADER_INVOCATIONS: return StrCRef("GEOMETRY_SHADER_INVOCATIONS");
#endif
#if defined GL_GEOMETRY_SHADER_PRIMITIVES_EMITTED_ARB
	case GL_GEOMETRY_SHADER_PRIMITIVES_EMITTED_ARB: return StrCRef("GEOMETRY_SHADER_PRIMITIVES_EMITTED_ARB");
#endif
#if defined GL_FRAGMENT_SHADER_INVOCATIONS_ARB
	case GL_FRAGMENT_SHADER_INVOCATIONS_ARB: return StrCRef("FRAGMENT_SHADER_INVOCATIONS_ARB");
#endif
#if defined GL_COMPUTE_SHADER_INVOCATIONS_ARB
	case GL_COMPUTE_SHADER_INVOCATIONS_ARB: return StrCRef("COMPUTE_SHADER_INVOCATIONS_ARB");
#endif
#if defined GL_CLIPPING_INPUT_PRIMITIVES_ARB
	case GL_CLIPPING_INPUT_PRIMITIVES_ARB: return StrCRef("CLIPPING_INPUT_PRIMITIVES_ARB");
#endif
#if defined GL_CLIPPING_OUTPUT_PRIMITIVES_ARB
	case GL_CLIPPING_OUTPUT_PRIMITIVES_ARB: return StrCRef("CLIPPING_OUTPUT_PRIMITIVES_ARB");
#endif
#if defined GL_TRANSFORM_FEEDBACK_OVERFLOW_ARB
	case GL_TRANSFORM_FEEDBACK_OVERFLOW_ARB: return StrCRef("TRANSFORM_FEEDBACK_OVERFLOW_ARB");
#endif
#if defined GL_TRANSFORM_FEEDBACK_STREAM_OVERFLOW_ARB
	case GL_TRANSFORM_FEEDBACK_STREAM_OVERFLOW_ARB: return StrCRef("TRANSFORM_FEEDBACK_STREAM_OVERFLOW_ARB");
#endif
	default:;
}
OGLPLUS_FAKE_USE(value);
return StrCRef();
}
#else
;
#endif
} // namespace enums

