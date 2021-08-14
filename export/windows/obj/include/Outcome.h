#ifndef INCLUDED_Outcome
#define INCLUDED_Outcome

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(Outcome)


class Outcome_obj : public ::hx::EnumBase_obj
{
	typedef ::hx::EnumBase_obj super;
		typedef Outcome_obj OBJ_;

	public:
		Outcome_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_("Outcome",72,e0,20,a9); }
		::String __ToString() const { return HX_("Outcome.",7c,83,a3,53) + _hx_tag; }

		static ::Outcome DEFEAT;
		static inline ::Outcome DEFEAT_dyn() { return DEFEAT; }
		static ::Outcome ESCAPE;
		static inline ::Outcome ESCAPE_dyn() { return ESCAPE; }
		static ::Outcome NONE;
		static inline ::Outcome NONE_dyn() { return NONE; }
		static ::Outcome VICTORY;
		static inline ::Outcome VICTORY_dyn() { return VICTORY; }
};


#endif /* INCLUDED_Outcome */ 
