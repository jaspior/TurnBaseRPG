#ifndef INCLUDED_OptionsState
#define INCLUDED_OptionsState

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
HX_DECLARE_CLASS0(OptionsState)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS1(flixel,FlxState)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,input,IFlxInput)
HX_DECLARE_CLASS2(flixel,text,FlxText)
HX_DECLARE_CLASS2(flixel,ui,FlxBar)
HX_DECLARE_CLASS2(flixel,ui,FlxButton)
HX_DECLARE_CLASS2(flixel,ui,FlxTypedButton_flixel_text_FlxText)
HX_DECLARE_CLASS2(flixel,util,FlxSave)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)



class HXCPP_CLASS_ATTRIBUTES OptionsState_obj : public  ::flixel::FlxState_obj
{
	public:
		typedef  ::flixel::FlxState_obj super;
		typedef OptionsState_obj OBJ_;
		OptionsState_obj();

	public:
		enum { _hx_ClassId = 0x2aabc417 };

		void __construct( ::Dynamic MaxSize);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="OptionsState")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"OptionsState"); }
		static ::hx::ObjectPtr< OptionsState_obj > __new( ::Dynamic MaxSize);
		static ::hx::ObjectPtr< OptionsState_obj > __alloc(::hx::Ctx *_hx_ctx, ::Dynamic MaxSize);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~OptionsState_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("OptionsState",f3,09,80,0f); }

		 ::flixel::ui::FlxButton fullscreenButton;
		 ::flixel::text::FlxText titleText;
		 ::flixel::ui::FlxBar volumeBar;
		 ::flixel::text::FlxText volumeText;
		 ::flixel::text::FlxText volumeAmountText;
		 ::flixel::ui::FlxButton volumeDownButton;
		 ::flixel::ui::FlxButton volumeUpButton;
		 ::flixel::ui::FlxButton clearDataButton;
		 ::flixel::ui::FlxButton backButton;
		 ::flixel::util::FlxSave save;
		void create();

		void clickFullscreen();
		::Dynamic clickFullscreen_dyn();

		void clickClearData();
		::Dynamic clickClearData_dyn();

		void clickBack();
		::Dynamic clickBack_dyn();

		void clickVolumeDown();
		::Dynamic clickVolumeDown_dyn();

		void clickVolumeUp();
		::Dynamic clickVolumeUp_dyn();

		void updateVolume();
		::Dynamic updateVolume_dyn();

};


#endif /* INCLUDED_OptionsState */ 
