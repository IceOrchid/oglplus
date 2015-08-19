//  File doc/quickbook/oglplus/quickref/enums/ext/nv_path_missing_glyph_class.hpp
//
//  Automatically generated file, DO NOT modify manually.
//  Edit the source 'source/enums/oglplus/ext/nv_path_missing_glyph.txt'
//  or the 'source/enums/make_enum.py' script instead.
//
//  Copyright 2010-2015 Matus Chochlik.
//  Distributed under the Boost Software License, Version 1.0.
//  See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt
//
//[oglplus_enums_ext_nv_path_missing_glyph_class
#if !__OGLPLUS_NO_ENUM_VALUE_CLASSES
namespace enums {

template <typename Base, template<__PathNVMissingGlyph> class Transform>
class __EnumToClass<Base, __PathNVMissingGlyph, Transform>
 : public Base
{
public:
	EnumToClass(void);
	EnumToClass(Base&& base);

	Transform<PathNVMissingGlyph::Skip>
		Skip;
	Transform<PathNVMissingGlyph::Use>
		Use;
};

} // namespace enums
#endif
//]

