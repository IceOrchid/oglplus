/**
 *  @file oglplus/imports/blend_file/pointer.hpp
 *  @brief Wrapper for .blend file pointers
 *
 *  @author Matus Chochlik
 *
 *  Copyright 2010-2012 Matus Chochlik. Distributed under the Boost
 *  Software License, Version 1.0. (See accompanying file
 *  LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
 */

#ifndef OGLPLUS_IMPORTS_BLEND_FILE_POINTER_1107121519_HPP
#define OGLPLUS_IMPORTS_BLEND_FILE_POINTER_1107121519_HPP

#include <oglplus/imports/blend_file/range.hpp>

namespace oglplus {
namespace imports {

/// Type wrapping a pointer inside of a .blend file
class BlendFilePointer
{
public:
	BlendFilePointer(void)
	 : _value(0)
	{ }

	/// Type type return by the Value function
	typedef uint64_t ValueType;

	operator bool (void) const
	{
		return _value != 0;
	}

	bool operator !(void) const
	{
		return _value == 0;
	}

	/// Equality comparison
	friend bool operator == (BlendFilePointer a, BlendFilePointer b)
	{
		return a._value == b._value;
	}

	/// Inequality comparison
	friend bool operator != (BlendFilePointer a, BlendFilePointer b)
	{
		return a._value != b._value;
	}

	/// Returns the pointer value
	ValueType Value(void) const
	{
		return _value;
	}
private:
	uint64_t _value;

	friend class BlendFile;
	friend class BlendFileBlock;
	friend class BlendFileBlockData;
	friend class BlendFileFlatStructBlockData;

	BlendFilePointer(ValueType value)
	 : _value(value)
	{ }

	template <typename T>
	explicit BlendFilePointer(T value)
	 : _value(static_cast<ValueType>(value))
	{ }
};

} // imports
} // oglplus

#endif // include guard
