#include <hxcpp.h>

#ifndef INCLUDED_EnemyType
#include <EnemyType.h>
#endif

::EnemyType EnemyType_obj::BOSS;

::EnemyType EnemyType_obj::REGULAR;

bool EnemyType_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("BOSS",ad,4f,dc,2b)) { outValue = EnemyType_obj::BOSS; return true; }
	if (inName==HX_("REGULAR",3c,26,5c,02)) { outValue = EnemyType_obj::REGULAR; return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(EnemyType_obj)

int EnemyType_obj::__FindIndex(::String inName)
{
	if (inName==HX_("BOSS",ad,4f,dc,2b)) return 1;
	if (inName==HX_("REGULAR",3c,26,5c,02)) return 0;
	return super::__FindIndex(inName);
}

int EnemyType_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("BOSS",ad,4f,dc,2b)) return 0;
	if (inName==HX_("REGULAR",3c,26,5c,02)) return 0;
	return super::__FindArgCount(inName);
}

::hx::Val EnemyType_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("BOSS",ad,4f,dc,2b)) return BOSS;
	if (inName==HX_("REGULAR",3c,26,5c,02)) return REGULAR;
	return super::__Field(inName,inCallProp);
}

static ::String EnemyType_obj_sStaticFields[] = {
	HX_("REGULAR",3c,26,5c,02),
	HX_("BOSS",ad,4f,dc,2b),
	::String(null())
};

::hx::Class EnemyType_obj::__mClass;

Dynamic __Create_EnemyType_obj() { return new EnemyType_obj; }

void EnemyType_obj::__register()
{

::hx::Static(__mClass) = ::hx::_hx_RegisterClass(HX_("EnemyType",02,d5,fa,4e), ::hx::TCanCast< EnemyType_obj >,EnemyType_obj_sStaticFields,0,
	&__Create_EnemyType_obj, &__Create,
	&super::__SGetClass(), &CreateEnemyType_obj, 0
#ifdef HXCPP_VISIT_ALLOCS
    , 0
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &EnemyType_obj::__GetStatic;
}

void EnemyType_obj::__boot()
{
BOSS = ::hx::CreateConstEnum< EnemyType_obj >(HX_("BOSS",ad,4f,dc,2b),1);
REGULAR = ::hx::CreateConstEnum< EnemyType_obj >(HX_("REGULAR",3c,26,5c,02),0);
}


