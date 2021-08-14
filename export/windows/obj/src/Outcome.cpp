#include <hxcpp.h>

#ifndef INCLUDED_Outcome
#include <Outcome.h>
#endif

::Outcome Outcome_obj::DEFEAT;

::Outcome Outcome_obj::ESCAPE;

::Outcome Outcome_obj::NONE;

::Outcome Outcome_obj::VICTORY;

bool Outcome_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("DEFEAT",f3,13,64,19)) { outValue = Outcome_obj::DEFEAT; return true; }
	if (inName==HX_("ESCAPE",81,ef,5c,8d)) { outValue = Outcome_obj::ESCAPE; return true; }
	if (inName==HX_("NONE",b8,da,ca,33)) { outValue = Outcome_obj::NONE; return true; }
	if (inName==HX_("VICTORY",b2,3f,de,f3)) { outValue = Outcome_obj::VICTORY; return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(Outcome_obj)

int Outcome_obj::__FindIndex(::String inName)
{
	if (inName==HX_("DEFEAT",f3,13,64,19)) return 3;
	if (inName==HX_("ESCAPE",81,ef,5c,8d)) return 1;
	if (inName==HX_("NONE",b8,da,ca,33)) return 0;
	if (inName==HX_("VICTORY",b2,3f,de,f3)) return 2;
	return super::__FindIndex(inName);
}

int Outcome_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("DEFEAT",f3,13,64,19)) return 0;
	if (inName==HX_("ESCAPE",81,ef,5c,8d)) return 0;
	if (inName==HX_("NONE",b8,da,ca,33)) return 0;
	if (inName==HX_("VICTORY",b2,3f,de,f3)) return 0;
	return super::__FindArgCount(inName);
}

::hx::Val Outcome_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("DEFEAT",f3,13,64,19)) return DEFEAT;
	if (inName==HX_("ESCAPE",81,ef,5c,8d)) return ESCAPE;
	if (inName==HX_("NONE",b8,da,ca,33)) return NONE;
	if (inName==HX_("VICTORY",b2,3f,de,f3)) return VICTORY;
	return super::__Field(inName,inCallProp);
}

static ::String Outcome_obj_sStaticFields[] = {
	HX_("NONE",b8,da,ca,33),
	HX_("ESCAPE",81,ef,5c,8d),
	HX_("VICTORY",b2,3f,de,f3),
	HX_("DEFEAT",f3,13,64,19),
	::String(null())
};

::hx::Class Outcome_obj::__mClass;

Dynamic __Create_Outcome_obj() { return new Outcome_obj; }

void Outcome_obj::__register()
{

::hx::Static(__mClass) = ::hx::_hx_RegisterClass(HX_("Outcome",72,e0,20,a9), ::hx::TCanCast< Outcome_obj >,Outcome_obj_sStaticFields,0,
	&__Create_Outcome_obj, &__Create,
	&super::__SGetClass(), &CreateOutcome_obj, 0
#ifdef HXCPP_VISIT_ALLOCS
    , 0
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &Outcome_obj::__GetStatic;
}

void Outcome_obj::__boot()
{
DEFEAT = ::hx::CreateConstEnum< Outcome_obj >(HX_("DEFEAT",f3,13,64,19),3);
ESCAPE = ::hx::CreateConstEnum< Outcome_obj >(HX_("ESCAPE",81,ef,5c,8d),1);
NONE = ::hx::CreateConstEnum< Outcome_obj >(HX_("NONE",b8,da,ca,33),0);
VICTORY = ::hx::CreateConstEnum< Outcome_obj >(HX_("VICTORY",b2,3f,de,f3),2);
}


