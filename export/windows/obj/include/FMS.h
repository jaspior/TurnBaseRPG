#ifndef INCLUDED_FMS
#define INCLUDED_FMS

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_f2373cb118ae921c_7_new)
HX_DECLARE_CLASS0(FMS)



class HXCPP_CLASS_ATTRIBUTES FMS_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef FMS_obj OBJ_;
		FMS_obj();

	public:
		enum { _hx_ClassId = 0x7ed9a5c0 };

		void __construct( ::Dynamic initialState);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="FMS")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"FMS"); }

		inline static ::hx::ObjectPtr< FMS_obj > __new( ::Dynamic initialState) {
			::hx::ObjectPtr< FMS_obj > __this = new FMS_obj();
			__this->__construct(initialState);
			return __this;
		}

		inline static ::hx::ObjectPtr< FMS_obj > __alloc(::hx::Ctx *_hx_ctx, ::Dynamic initialState) {
			FMS_obj *__this = (FMS_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FMS_obj), true, "FMS"));
			*(void **)__this = FMS_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_f2373cb118ae921c_7_new)
HXDLIN(   7)		( ( ::FMS)(__this) )->activeState = initialState;
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FMS_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("FMS",2c,61,35,00); }

		 ::Dynamic activeState;
		Dynamic activeState_dyn() { return activeState;}
		void update(Float elapsed);
		::Dynamic update_dyn();

};


#endif /* INCLUDED_FMS */ 
