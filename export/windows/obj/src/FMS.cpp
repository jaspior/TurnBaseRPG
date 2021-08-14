#include <hxcpp.h>

#ifndef INCLUDED_FMS
#include <FMS.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_f2373cb118ae921c_7_new,"FMS","new",0x1157081e,"FMS.new","FMS.hx",7,0x89d5e512)
HX_LOCAL_STACK_FRAME(_hx_pos_f2373cb118ae921c_12_update,"FMS","update",0x9235390b,"FMS.update","FMS.hx",12,0x89d5e512)

void FMS_obj::__construct( ::Dynamic initialState){
            	HX_STACKFRAME(&_hx_pos_f2373cb118ae921c_7_new)
HXDLIN(   7)		this->activeState = initialState;
            	}

Dynamic FMS_obj::__CreateEmpty() { return new FMS_obj; }

void *FMS_obj::_hx_vtable = 0;

Dynamic FMS_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FMS_obj > _hx_result = new FMS_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool FMS_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x7ed9a5c0;
}

void FMS_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_f2373cb118ae921c_12_update)
HXDLIN(  12)		this->activeState(elapsed);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FMS_obj,update,(void))


FMS_obj::FMS_obj()
{
}

void FMS_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FMS);
	HX_MARK_MEMBER_NAME(activeState,"activeState");
	HX_MARK_END_CLASS();
}

void FMS_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(activeState,"activeState");
}

::hx::Val FMS_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"activeState") ) { return ::hx::Val( activeState ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val FMS_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"activeState") ) { activeState=inValue.Cast<  ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo FMS_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(FMS_obj,activeState),HX_("activeState",6b,76,50,e0)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *FMS_obj_sStaticStorageInfo = 0;
#endif

static ::String FMS_obj_sMemberFields[] = {
	HX_("activeState",6b,76,50,e0),
	HX_("update",09,86,05,87),
	::String(null()) };

::hx::Class FMS_obj::__mClass;

void FMS_obj::__register()
{
	FMS_obj _hx_dummy;
	FMS_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("FMS",2c,61,35,00);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FMS_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FMS_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FMS_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FMS_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

