#ifndef INCLUDED_openfl_events_UncaughtErrorEvents
#define INCLUDED_openfl_events_UncaughtErrorEvents

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,events,UncaughtErrorEvents)

namespace openfl{
namespace events{


class HXCPP_CLASS_ATTRIBUTES UncaughtErrorEvents_obj : public  ::openfl::events::EventDispatcher_obj
{
	public:
		typedef  ::openfl::events::EventDispatcher_obj super;
		typedef UncaughtErrorEvents_obj OBJ_;
		UncaughtErrorEvents_obj();

	public:
		enum { _hx_ClassId = 0x2f77f7df };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="openfl.events.UncaughtErrorEvents")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"openfl.events.UncaughtErrorEvents"); }
		static ::hx::ObjectPtr< UncaughtErrorEvents_obj > __new();
		static ::hx::ObjectPtr< UncaughtErrorEvents_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~UncaughtErrorEvents_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("UncaughtErrorEvents",4c,8c,89,a6); }

};

} // end namespace openfl
} // end namespace events

#endif /* INCLUDED_openfl_events_UncaughtErrorEvents */ 
