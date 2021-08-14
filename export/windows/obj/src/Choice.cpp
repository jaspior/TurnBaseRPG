#include <hxcpp.h>

#ifndef INCLUDED_Choice
#include <Choice.h>
#endif

::Choice Choice_obj::FIGHT;

::Choice Choice_obj::FLEE;

bool Choice_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("FIGHT",b0,4d,83,7e)) { outValue = Choice_obj::FIGHT; return true; }
	if (inName==HX_("FLEE",26,d7,7e,2e)) { outValue = Choice_obj::FLEE; return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(Choice_obj)

int Choice_obj::__FindIndex(::String inName)
{
	if (inName==HX_("FIGHT",b0,4d,83,7e)) return 0;
	if (inName==HX_("FLEE",26,d7,7e,2e)) return 1;
	return super::__FindIndex(inName);
}

int Choice_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("FIGHT",b0,4d,83,7e)) return 0;
	if (inName==HX_("FLEE",26,d7,7e,2e)) return 0;
	return super::__FindArgCount(inName);
}

::hx::Val Choice_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("FIGHT",b0,4d,83,7e)) return FIGHT;
	if (inName==HX_("FLEE",26,d7,7e,2e)) return FLEE;
	return super::__Field(inName,inCallProp);
}

static ::String Choice_obj_sStaticFields[] = {
	HX_("FIGHT",b0,4d,83,7e),
	HX_("FLEE",26,d7,7e,2e),
	::String(null())
};

::hx::Class Choice_obj::__mClass;

Dynamic __Create_Choice_obj() { return new Choice_obj; }

void Choice_obj::__register()
{

::hx::Static(__mClass) = ::hx::_hx_RegisterClass(HX_("Choice",81,33,44,f5), ::hx::TCanCast< Choice_obj >,Choice_obj_sStaticFields,0,
	&__Create_Choice_obj, &__Create,
	&super::__SGetClass(), &CreateChoice_obj, 0
#ifdef HXCPP_VISIT_ALLOCS
    , 0
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &Choice_obj::__GetStatic;
}

void Choice_obj::__boot()
{
FIGHT = ::hx::CreateConstEnum< Choice_obj >(HX_("FIGHT",b0,4d,83,7e),0);
FLEE = ::hx::CreateConstEnum< Choice_obj >(HX_("FLEE",26,d7,7e,2e),1);
}


