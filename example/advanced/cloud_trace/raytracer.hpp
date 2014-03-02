/**
 *  @file advanced/cloud_trace/raytracer.hpp
 *  @brief Declares the raytracer class
 *
 *  @author Matus Chochlik
 *
 *  Copyright 2008-2014 Matus Chochlik. Distributed under the Boost
 *  Software License, Version 1.0. (See accompanying file
 *  LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
 */
#ifndef OGLPLUS_ADVANCED_CLOUD_TRACE_RAYTRACER_1119071146_HPP
#define OGLPLUS_ADVANCED_CLOUD_TRACE_RAYTRACER_1119071146_HPP

#include "render_data.hpp"
#include "resources.hpp"
#include "cloud_data.hpp"
#include "programs.hpp"
#include "textures.hpp"

#include <oglplus/gl.hpp>
#include <oglplus/fix_gl_version.hpp>

#include <oglplus/context.hpp>
#include <oglplus/framebuffer.hpp>
#include <oglplus/texture.hpp>
#include <oglplus/shapes/wrapper.hpp>

#include <array>

namespace oglplus {
namespace cloud_trace {

class Raytracer
{
private:
	Context gl;

	unsigned i, j, w, h;

	CloudData cloud_data;
	CloudTexture cloud_tex;
	RaytraceProg raytrace_prog;

	shapes::ShapeWrapper screen;

	GLuint front, back;

	std::array<GLuint, 2> tex_units;
	Array<Framebuffer> fbos;
	Array<Texture> texs;
public:
	Raytracer(RenderData&, ResourceAllocator&);

	void Use(RenderData&);
	void InitFrame(RenderData&, unsigned);
	double Raytrace(RenderData&);
	void SwapBuffers(RenderData&);

	GLuint FrontTexUnit(void) const;
};

} // namespace cloud_trace
} // namespace oglplus

#endif // include guard