#ifndef INCLUDED_GameOverState
#define INCLUDED_GameOverState

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
HX_DECLARE_CLASS0(GameOverState)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS1(flixel,FlxState)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,input,IFlxInput)
HX_DECLARE_CLASS2(flixel,text,FlxText)
HX_DECLARE_CLASS2(flixel,ui,FlxButton)
HX_DECLARE_CLASS2(flixel,ui,FlxTypedButton_flixel_text_FlxText)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)



class HXCPP_CLASS_ATTRIBUTES GameOverState_obj : public  ::flixel::FlxState_obj
{
	public:
		typedef  ::flixel::FlxState_obj super;
		typedef GameOverState_obj OBJ_;
		GameOverState_obj();

	public:
		enum { _hx_ClassId = 0x63e746eb };

		void __construct(bool win,int score);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="GameOverState")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"GameOverState"); }
		static ::hx::ObjectPtr< GameOverState_obj > __new(bool win,int score);
		static ::hx::ObjectPtr< GameOverState_obj > __alloc(::hx::Ctx *_hx_ctx,bool win,int score);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~GameOverState_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("GameOverState",ab,31,a0,87); }

		int score;
		bool win;
		 ::flixel::text::FlxText titleText;
		 ::flixel::text::FlxText messageText;
		 ::flixel::FlxSprite scoreIcon;
		 ::flixel::text::FlxText scoreText;
		 ::flixel::text::FlxText highscoreText;
		 ::flixel::ui::FlxButton mainMenuButton;
		void create();

		int checkHighscore(int score);
		::Dynamic checkHighscore_dyn();

		void switchToMainMenu();
		::Dynamic switchToMainMenu_dyn();

};


#endif /* INCLUDED_GameOverState */ 
