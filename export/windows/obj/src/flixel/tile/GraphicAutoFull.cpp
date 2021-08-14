#include <hxcpp.h>

#ifndef INCLUDED_flixel_tile_GraphicAutoFull
#include <flixel/tile/GraphicAutoFull.h>
#endif
#ifndef INCLUDED_haxe_Resource
#include <haxe/Resource.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime_graphics_Image
#include <lime/graphics/Image.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_utils_ByteArrayData
#include <openfl/utils/ByteArrayData.h>
#endif
#ifndef INCLUDED_openfl_utils_IDataInput
#include <openfl/utils/IDataInput.h>
#endif
#ifndef INCLUDED_openfl_utils_IDataOutput
#include <openfl/utils/IDataOutput.h>
#endif
#ifndef INCLUDED_openfl_utils__ByteArray_ByteArray_Impl_
#include <openfl/utils/_ByteArray/ByteArray_Impl_.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_eeda68d24a74710d_47_new,"flixel.tile.GraphicAutoFull","new",0x02659a4a,"flixel.tile.GraphicAutoFull.new","openfl/utils/_internal/AssetsMacro.hx",47,0xfdd54705)
HX_LOCAL_STACK_FRAME(_hx_pos_4cc2402574bdb662_43_boot,"flixel.tile.GraphicAutoFull","boot",0x0e9a6708,"flixel.tile.GraphicAutoFull.boot","flixel/tile/FlxTilemap.hx",43,0x448feb74)
namespace flixel{
namespace tile{

void GraphicAutoFull_obj::__construct(int width,int height, ::Dynamic __o_transparent, ::Dynamic __o_fillRGBA){
            		 ::Dynamic transparent = __o_transparent;
            		if (::hx::IsNull(__o_transparent)) transparent = true;
            		 ::Dynamic fillRGBA = __o_fillRGBA;
            		if (::hx::IsNull(__o_fillRGBA)) fillRGBA = -1;
            	HX_STACKFRAME(&_hx_pos_eeda68d24a74710d_47_new)
HXLINE(  71)		super::__construct(0,0,transparent,fillRGBA);
HXLINE(  73)		 ::openfl::utils::ByteArrayData byteArray = ::openfl::utils::_ByteArray::ByteArray_Impl__obj::fromBytes(::haxe::Resource_obj::getBytes(::flixel::tile::GraphicAutoFull_obj::resourceName));
HXLINE(  74)		{
HXLINE(  74)			 ::openfl::utils::ByteArrayData rawAlpha = null();
HXDLIN(  74)			 ::lime::graphics::Image image = ::lime::graphics::Image_obj::fromBytes(::openfl::utils::_ByteArray::ByteArray_Impl__obj::toBytes(byteArray));
HXDLIN(  74)			this->_hx___fromImage(image);
HXDLIN(  74)			if (::hx::IsNotNull( rawAlpha )) {
HXLINE(  74)				this->_hx___applyAlpha(rawAlpha);
            			}
            		}
            	}

Dynamic GraphicAutoFull_obj::__CreateEmpty() { return new GraphicAutoFull_obj; }

void *GraphicAutoFull_obj::_hx_vtable = 0;

Dynamic GraphicAutoFull_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< GraphicAutoFull_obj > _hx_result = new GraphicAutoFull_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _hx_result;
}

bool GraphicAutoFull_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x073e5103) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x073e5103;
	} else {
		return inClassId==(int)0x167df93c;
	}
}

::String GraphicAutoFull_obj::resourceName;


::hx::ObjectPtr< GraphicAutoFull_obj > GraphicAutoFull_obj::__new(int width,int height, ::Dynamic __o_transparent, ::Dynamic __o_fillRGBA) {
	::hx::ObjectPtr< GraphicAutoFull_obj > __this = new GraphicAutoFull_obj();
	__this->__construct(width,height,__o_transparent,__o_fillRGBA);
	return __this;
}

::hx::ObjectPtr< GraphicAutoFull_obj > GraphicAutoFull_obj::__alloc(::hx::Ctx *_hx_ctx,int width,int height, ::Dynamic __o_transparent, ::Dynamic __o_fillRGBA) {
	GraphicAutoFull_obj *__this = (GraphicAutoFull_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(GraphicAutoFull_obj), true, "flixel.tile.GraphicAutoFull"));
	*(void **)__this = GraphicAutoFull_obj::_hx_vtable;
	__this->__construct(width,height,__o_transparent,__o_fillRGBA);
	return __this;
}

GraphicAutoFull_obj::GraphicAutoFull_obj()
{
}

bool GraphicAutoFull_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"resourceName") ) { outValue = ( resourceName ); return true; }
	}
	return false;
}

bool GraphicAutoFull_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"resourceName") ) { resourceName=ioValue.Cast< ::String >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *GraphicAutoFull_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo GraphicAutoFull_obj_sStaticStorageInfo[] = {
	{::hx::fsString,(void *) &GraphicAutoFull_obj::resourceName,HX_("resourceName",39,7a,62,90)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void GraphicAutoFull_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GraphicAutoFull_obj::resourceName,"resourceName");
};

#ifdef HXCPP_VISIT_ALLOCS
static void GraphicAutoFull_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GraphicAutoFull_obj::resourceName,"resourceName");
};

#endif

::hx::Class GraphicAutoFull_obj::__mClass;

static ::String GraphicAutoFull_obj_sStaticFields[] = {
	HX_("resourceName",39,7a,62,90),
	::String(null())
};

void GraphicAutoFull_obj::__register()
{
	GraphicAutoFull_obj _hx_dummy;
	GraphicAutoFull_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.tile.GraphicAutoFull",58,6d,2c,85);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &GraphicAutoFull_obj::__GetStatic;
	__mClass->mSetStaticField = &GraphicAutoFull_obj::__SetStatic;
	__mClass->mMarkFunc = GraphicAutoFull_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(GraphicAutoFull_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< GraphicAutoFull_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = GraphicAutoFull_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = GraphicAutoFull_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = GraphicAutoFull_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void GraphicAutoFull_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_4cc2402574bdb662_43_boot)
HXDLIN(  43)		resourceName = HX_("__ASSET__:bitmap_flixel_tile_GraphicAutoFull",52,c6,87,bb);
            	}
}

} // end namespace flixel
} // end namespace tile
