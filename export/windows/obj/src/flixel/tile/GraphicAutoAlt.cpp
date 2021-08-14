#include <hxcpp.h>

#ifndef INCLUDED_flixel_tile_GraphicAutoAlt
#include <flixel/tile/GraphicAutoAlt.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_2c416c92c90c40b9_47_new,"flixel.tile.GraphicAutoAlt","new",0x4e2c2272,"flixel.tile.GraphicAutoAlt.new","openfl/utils/_internal/AssetsMacro.hx",47,0xfdd54705)
HX_LOCAL_STACK_FRAME(_hx_pos_a636967d4712257f_40_boot,"flixel.tile.GraphicAutoAlt","boot",0x108b01e0,"flixel.tile.GraphicAutoAlt.boot","flixel/tile/FlxTilemap.hx",40,0x448feb74)
namespace flixel{
namespace tile{

void GraphicAutoAlt_obj::__construct(int width,int height, ::Dynamic __o_transparent, ::Dynamic __o_fillRGBA){
            		 ::Dynamic transparent = __o_transparent;
            		if (::hx::IsNull(__o_transparent)) transparent = true;
            		 ::Dynamic fillRGBA = __o_fillRGBA;
            		if (::hx::IsNull(__o_fillRGBA)) fillRGBA = -1;
            	HX_STACKFRAME(&_hx_pos_2c416c92c90c40b9_47_new)
HXLINE(  71)		super::__construct(0,0,transparent,fillRGBA);
HXLINE(  73)		 ::openfl::utils::ByteArrayData byteArray = ::openfl::utils::_ByteArray::ByteArray_Impl__obj::fromBytes(::haxe::Resource_obj::getBytes(::flixel::tile::GraphicAutoAlt_obj::resourceName));
HXLINE(  74)		{
HXLINE(  74)			 ::openfl::utils::ByteArrayData rawAlpha = null();
HXDLIN(  74)			 ::lime::graphics::Image image = ::lime::graphics::Image_obj::fromBytes(::openfl::utils::_ByteArray::ByteArray_Impl__obj::toBytes(byteArray));
HXDLIN(  74)			this->_hx___fromImage(image);
HXDLIN(  74)			if (::hx::IsNotNull( rawAlpha )) {
HXLINE(  74)				this->_hx___applyAlpha(rawAlpha);
            			}
            		}
            	}

Dynamic GraphicAutoAlt_obj::__CreateEmpty() { return new GraphicAutoAlt_obj; }

void *GraphicAutoAlt_obj::_hx_vtable = 0;

Dynamic GraphicAutoAlt_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< GraphicAutoAlt_obj > _hx_result = new GraphicAutoAlt_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _hx_result;
}

bool GraphicAutoAlt_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x073e5103) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x073e5103;
	} else {
		return inClassId==(int)0x1a7a1ce4;
	}
}

::String GraphicAutoAlt_obj::resourceName;


::hx::ObjectPtr< GraphicAutoAlt_obj > GraphicAutoAlt_obj::__new(int width,int height, ::Dynamic __o_transparent, ::Dynamic __o_fillRGBA) {
	::hx::ObjectPtr< GraphicAutoAlt_obj > __this = new GraphicAutoAlt_obj();
	__this->__construct(width,height,__o_transparent,__o_fillRGBA);
	return __this;
}

::hx::ObjectPtr< GraphicAutoAlt_obj > GraphicAutoAlt_obj::__alloc(::hx::Ctx *_hx_ctx,int width,int height, ::Dynamic __o_transparent, ::Dynamic __o_fillRGBA) {
	GraphicAutoAlt_obj *__this = (GraphicAutoAlt_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(GraphicAutoAlt_obj), true, "flixel.tile.GraphicAutoAlt"));
	*(void **)__this = GraphicAutoAlt_obj::_hx_vtable;
	__this->__construct(width,height,__o_transparent,__o_fillRGBA);
	return __this;
}

GraphicAutoAlt_obj::GraphicAutoAlt_obj()
{
}

bool GraphicAutoAlt_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"resourceName") ) { outValue = ( resourceName ); return true; }
	}
	return false;
}

bool GraphicAutoAlt_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"resourceName") ) { resourceName=ioValue.Cast< ::String >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *GraphicAutoAlt_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo GraphicAutoAlt_obj_sStaticStorageInfo[] = {
	{::hx::fsString,(void *) &GraphicAutoAlt_obj::resourceName,HX_("resourceName",39,7a,62,90)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void GraphicAutoAlt_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GraphicAutoAlt_obj::resourceName,"resourceName");
};

#ifdef HXCPP_VISIT_ALLOCS
static void GraphicAutoAlt_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GraphicAutoAlt_obj::resourceName,"resourceName");
};

#endif

::hx::Class GraphicAutoAlt_obj::__mClass;

static ::String GraphicAutoAlt_obj_sStaticFields[] = {
	HX_("resourceName",39,7a,62,90),
	::String(null())
};

void GraphicAutoAlt_obj::__register()
{
	GraphicAutoAlt_obj _hx_dummy;
	GraphicAutoAlt_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.tile.GraphicAutoAlt",80,c1,b1,f9);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &GraphicAutoAlt_obj::__GetStatic;
	__mClass->mSetStaticField = &GraphicAutoAlt_obj::__SetStatic;
	__mClass->mMarkFunc = GraphicAutoAlt_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(GraphicAutoAlt_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< GraphicAutoAlt_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = GraphicAutoAlt_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = GraphicAutoAlt_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = GraphicAutoAlt_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void GraphicAutoAlt_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_a636967d4712257f_40_boot)
HXDLIN(  40)		resourceName = HX_("__ASSET__:bitmap_flixel_tile_GraphicAutoAlt",c6,25,2e,70);
            	}
}

} // end namespace flixel
} // end namespace tile
