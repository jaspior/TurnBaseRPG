#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_opengl_ext_EXT_shader_texture_lod
#include <lime/graphics/opengl/ext/EXT_shader_texture_lod.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_e1acbdc797cf4fd1_7_new,"lime.graphics.opengl.ext.EXT_shader_texture_lod","new",0xb7c73b55,"lime.graphics.opengl.ext.EXT_shader_texture_lod.new","lime/graphics/opengl/ext/EXT_shader_texture_lod.hx",7,0x940454d9)
namespace lime{
namespace graphics{
namespace opengl{
namespace ext{

void EXT_shader_texture_lod_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_e1acbdc797cf4fd1_7_new)
            	}

Dynamic EXT_shader_texture_lod_obj::__CreateEmpty() { return new EXT_shader_texture_lod_obj; }

void *EXT_shader_texture_lod_obj::_hx_vtable = 0;

Dynamic EXT_shader_texture_lod_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< EXT_shader_texture_lod_obj > _hx_result = new EXT_shader_texture_lod_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool EXT_shader_texture_lod_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x56088033;
}


EXT_shader_texture_lod_obj::EXT_shader_texture_lod_obj()
{
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *EXT_shader_texture_lod_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *EXT_shader_texture_lod_obj_sStaticStorageInfo = 0;
#endif

::hx::Class EXT_shader_texture_lod_obj::__mClass;

void EXT_shader_texture_lod_obj::__register()
{
	EXT_shader_texture_lod_obj _hx_dummy;
	EXT_shader_texture_lod_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("lime.graphics.opengl.ext.EXT_shader_texture_lod",e3,ec,af,d0);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< EXT_shader_texture_lod_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = EXT_shader_texture_lod_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = EXT_shader_texture_lod_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace ext
