#ifndef INCLUDED_EnemyType
#define INCLUDED_EnemyType

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(EnemyType)


class EnemyType_obj : public ::hx::EnumBase_obj
{
	typedef ::hx::EnumBase_obj super;
		typedef EnemyType_obj OBJ_;

	public:
		EnemyType_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_("EnemyType",02,d5,fa,4e); }
		::String __ToString() const { return HX_("EnemyType.",ec,8c,7f,cc) + _hx_tag; }

		static ::EnemyType BOSS;
		static inline ::EnemyType BOSS_dyn() { return BOSS; }
		static ::EnemyType REGULAR;
		static inline ::EnemyType REGULAR_dyn() { return REGULAR; }
};


#endif /* INCLUDED_EnemyType */ 
