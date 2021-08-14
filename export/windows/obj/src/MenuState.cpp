#include <hxcpp.h>

#ifndef INCLUDED_MenuState
#include <MenuState.h>
#endif
#ifndef INCLUDED_OptionsState
#include <OptionsState.h>
#endif
#ifndef INCLUDED_PlayState
#include <PlayState.h>
#endif
#ifndef INCLUDED_Sys
#include <Sys.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxGame
#include <flixel/FlxGame.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInput
#include <flixel/input/IFlxInput.h>
#endif
#ifndef INCLUDED_flixel_system_FlxSound
#include <flixel/system/FlxSound.h>
#endif
#ifndef INCLUDED_flixel_system_FlxSoundGroup
#include <flixel/system/FlxSoundGroup.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_SoundFrontEnd
#include <flixel/system/frontEnds/SoundFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_text_FlxText
#include <flixel/text/FlxText.h>
#endif
#ifndef INCLUDED_flixel_ui_FlxButton
#include <flixel/ui/FlxButton.h>
#endif
#ifndef INCLUDED_flixel_ui_FlxTypedButton_flixel_text_FlxText
#include <flixel/ui/FlxTypedButton_flixel_text_FlxText.h>
#endif
#ifndef INCLUDED_flixel_ui__FlxButton_FlxButtonEvent
#include <flixel/ui/_FlxButton/FlxButtonEvent.h>
#endif
#ifndef INCLUDED_flixel_util_FlxAxes
#include <flixel/util/FlxAxes.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_1f119275e66a7b90_8_new,"MenuState","new",0xe563b1c4,"MenuState.new","MenuState.hx",8,0xdfbcb22c)
HX_LOCAL_STACK_FRAME(_hx_pos_1f119275e66a7b90_19_create,"MenuState","create",0xe57b7c18,"MenuState.create","MenuState.hx",19,0xdfbcb22c)
HX_LOCAL_STACK_FRAME(_hx_pos_1f119275e66a7b90_53_update,"MenuState","update",0xf0719b25,"MenuState.update","MenuState.hx",53,0xdfbcb22c)
HX_LOCAL_STACK_FRAME(_hx_pos_1f119275e66a7b90_58_clickPlay,"MenuState","clickPlay",0x5f6a9ec0,"MenuState.clickPlay","MenuState.hx",58,0xdfbcb22c)
HX_LOCAL_STACK_FRAME(_hx_pos_1f119275e66a7b90_63_clickOptions,"MenuState","clickOptions",0xe3ab4a12,"MenuState.clickOptions","MenuState.hx",63,0xdfbcb22c)
HX_LOCAL_STACK_FRAME(_hx_pos_1f119275e66a7b90_69_clickExit,"MenuState","clickExit",0x582e67ea,"MenuState.clickExit","MenuState.hx",69,0xdfbcb22c)

void MenuState_obj::__construct( ::Dynamic MaxSize){
            	HX_STACKFRAME(&_hx_pos_1f119275e66a7b90_8_new)
HXDLIN(   8)		super::__construct(MaxSize);
            	}

Dynamic MenuState_obj::__CreateEmpty() { return new MenuState_obj; }

void *MenuState_obj::_hx_vtable = 0;

Dynamic MenuState_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< MenuState_obj > _hx_result = new MenuState_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool MenuState_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x62817b24) {
		if (inClassId<=(int)0x32c1072e) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x32c1072e;
		} else {
			return inClassId==(int)0x62817b24;
		}
	} else {
		return inClassId==(int)0x7c795c9f || inClassId==(int)0x7ccf8994;
	}
}

void MenuState_obj::create(){
            	HX_GC_STACKFRAME(&_hx_pos_1f119275e66a7b90_19_create)
HXLINE(  20)		this->titleText =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,20,0,0,HX_("HaxeFlixel\nTutorial\nGame",16,91,3e,b6),22,null());
HXLINE(  21)		this->titleText->set_alignment(HX_("center",d5,25,db,05));
HXLINE(  22)		this->titleText->screenCenter(::flixel::util::FlxAxes_obj::X_dyn());
HXLINE(  23)		this->add(this->titleText);
HXLINE(  25)		this->playButton =  ::flixel::ui::FlxButton_obj::__alloc( HX_CTX ,0,0,HX_("Play",14,5a,33,35),this->clickPlay_dyn());
HXLINE(  26)		 ::flixel::ui::FlxButton _hx_tmp = this->playButton;
HXDLIN(  26)		Float _hx_tmp1 = (( (Float)(::flixel::FlxG_obj::width) ) / ( (Float)(2) ));
HXDLIN(  26)		_hx_tmp->set_x(((_hx_tmp1 - this->playButton->get_width()) - ( (Float)(10) )));
HXLINE(  27)		 ::flixel::ui::FlxButton _hx_tmp2 = this->playButton;
HXDLIN(  27)		int _hx_tmp3 = ::flixel::FlxG_obj::height;
HXDLIN(  27)		_hx_tmp2->set_y(((( (Float)(_hx_tmp3) ) - this->playButton->get_height()) - ( (Float)(10) )));
HXLINE(  28)		this->playButton->onUp->sound = ::flixel::FlxG_obj::sound->load(HX_("assets/sounds/select.wav",99,31,ec,2e),null(),null(),null(),null(),null(),null(),null(),null());
HXLINE(  29)		this->add(this->playButton);
HXLINE(  31)		this->optionsButton =  ::flixel::ui::FlxButton_obj::__alloc( HX_CTX ,0,0,HX_("Options",3e,5b,4f,ad),this->clickOptions_dyn());
HXLINE(  32)		this->optionsButton->set_x(((( (Float)(::flixel::FlxG_obj::width) ) / ( (Float)(2) )) + 10));
HXLINE(  33)		 ::flixel::ui::FlxButton _hx_tmp4 = this->optionsButton;
HXDLIN(  33)		int _hx_tmp5 = ::flixel::FlxG_obj::height;
HXDLIN(  33)		_hx_tmp4->set_y(((( (Float)(_hx_tmp5) ) - this->optionsButton->get_height()) - ( (Float)(10) )));
HXLINE(  34)		this->optionsButton->onUp->sound = ::flixel::FlxG_obj::sound->load(HX_("assets/sounds/select.wav",99,31,ec,2e),null(),null(),null(),null(),null(),null(),null(),null());
HXLINE(  35)		this->add(this->optionsButton);
HXLINE(  38)		this->exitButton =  ::flixel::ui::FlxButton_obj::__alloc( HX_CTX ,(::flixel::FlxG_obj::width - 28),8,HX_("X",58,00,00,00),this->clickExit_dyn());
HXLINE(  39)		this->exitButton->loadGraphic(HX_("assets/images/button.png",98,1b,b6,cd),true,20,20,null(),null());
HXLINE(  40)		this->add(this->exitButton);
HXLINE(  43)		if (::hx::IsNull( ::flixel::FlxG_obj::sound->music )) {
HXLINE(  45)			::flixel::FlxG_obj::sound->playMusic(HX_("assets/music/HaxeFlixel_Tutorial_Game.ogg",8d,56,76,f8),1,true,null());
            		}
HXLINE(  48)		this->super::create();
            	}


void MenuState_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_1f119275e66a7b90_53_update)
HXDLIN(  53)		this->super::update(elapsed);
            	}


void MenuState_obj::clickPlay(){
            	HX_GC_STACKFRAME(&_hx_pos_1f119275e66a7b90_58_clickPlay)
HXDLIN(  58)		 ::flixel::FlxState nextState =  ::PlayState_obj::__alloc( HX_CTX ,null());
HXDLIN(  58)		if (::flixel::FlxG_obj::game->_state->switchTo(nextState)) {
HXDLIN(  58)			::flixel::FlxG_obj::game->_requestedState = nextState;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(MenuState_obj,clickPlay,(void))

void MenuState_obj::clickOptions(){
            	HX_GC_STACKFRAME(&_hx_pos_1f119275e66a7b90_63_clickOptions)
HXDLIN(  63)		 ::flixel::FlxState nextState =  ::OptionsState_obj::__alloc( HX_CTX ,null());
HXDLIN(  63)		if (::flixel::FlxG_obj::game->_state->switchTo(nextState)) {
HXDLIN(  63)			::flixel::FlxG_obj::game->_requestedState = nextState;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(MenuState_obj,clickOptions,(void))

void MenuState_obj::clickExit(){
            	HX_STACKFRAME(&_hx_pos_1f119275e66a7b90_69_clickExit)
HXDLIN(  69)		::Sys_obj::exit(0);
            	}


HX_DEFINE_DYNAMIC_FUNC0(MenuState_obj,clickExit,(void))


::hx::ObjectPtr< MenuState_obj > MenuState_obj::__new( ::Dynamic MaxSize) {
	::hx::ObjectPtr< MenuState_obj > __this = new MenuState_obj();
	__this->__construct(MaxSize);
	return __this;
}

::hx::ObjectPtr< MenuState_obj > MenuState_obj::__alloc(::hx::Ctx *_hx_ctx, ::Dynamic MaxSize) {
	MenuState_obj *__this = (MenuState_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(MenuState_obj), true, "MenuState"));
	*(void **)__this = MenuState_obj::_hx_vtable;
	__this->__construct(MaxSize);
	return __this;
}

MenuState_obj::MenuState_obj()
{
}

void MenuState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(MenuState);
	HX_MARK_MEMBER_NAME(playButton,"playButton");
	HX_MARK_MEMBER_NAME(titleText,"titleText");
	HX_MARK_MEMBER_NAME(optionsButton,"optionsButton");
	HX_MARK_MEMBER_NAME(exitButton,"exitButton");
	 ::flixel::FlxState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void MenuState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(playButton,"playButton");
	HX_VISIT_MEMBER_NAME(titleText,"titleText");
	HX_VISIT_MEMBER_NAME(optionsButton,"optionsButton");
	HX_VISIT_MEMBER_NAME(exitButton,"exitButton");
	 ::flixel::FlxState_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val MenuState_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return ::hx::Val( create_dyn() ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"titleText") ) { return ::hx::Val( titleText ); }
		if (HX_FIELD_EQ(inName,"clickPlay") ) { return ::hx::Val( clickPlay_dyn() ); }
		if (HX_FIELD_EQ(inName,"clickExit") ) { return ::hx::Val( clickExit_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"playButton") ) { return ::hx::Val( playButton ); }
		if (HX_FIELD_EQ(inName,"exitButton") ) { return ::hx::Val( exitButton ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"clickOptions") ) { return ::hx::Val( clickOptions_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"optionsButton") ) { return ::hx::Val( optionsButton ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val MenuState_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"titleText") ) { titleText=inValue.Cast<  ::flixel::text::FlxText >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"playButton") ) { playButton=inValue.Cast<  ::flixel::ui::FlxButton >(); return inValue; }
		if (HX_FIELD_EQ(inName,"exitButton") ) { exitButton=inValue.Cast<  ::flixel::ui::FlxButton >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"optionsButton") ) { optionsButton=inValue.Cast<  ::flixel::ui::FlxButton >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void MenuState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("playButton",06,f3,a3,80));
	outFields->push(HX_("titleText",65,ba,a4,70));
	outFields->push(HX_("optionsButton",f0,e3,7c,0c));
	outFields->push(HX_("exitButton",b0,f7,69,1a));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo MenuState_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::flixel::ui::FlxButton */ ,(int)offsetof(MenuState_obj,playButton),HX_("playButton",06,f3,a3,80)},
	{::hx::fsObject /*  ::flixel::text::FlxText */ ,(int)offsetof(MenuState_obj,titleText),HX_("titleText",65,ba,a4,70)},
	{::hx::fsObject /*  ::flixel::ui::FlxButton */ ,(int)offsetof(MenuState_obj,optionsButton),HX_("optionsButton",f0,e3,7c,0c)},
	{::hx::fsObject /*  ::flixel::ui::FlxButton */ ,(int)offsetof(MenuState_obj,exitButton),HX_("exitButton",b0,f7,69,1a)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *MenuState_obj_sStaticStorageInfo = 0;
#endif

static ::String MenuState_obj_sMemberFields[] = {
	HX_("playButton",06,f3,a3,80),
	HX_("titleText",65,ba,a4,70),
	HX_("optionsButton",f0,e3,7c,0c),
	HX_("exitButton",b0,f7,69,1a),
	HX_("create",fc,66,0f,7c),
	HX_("update",09,86,05,87),
	HX_("clickPlay",5c,9a,59,29),
	HX_("clickOptions",f6,77,28,d2),
	HX_("clickExit",86,63,1d,22),
	::String(null()) };

::hx::Class MenuState_obj::__mClass;

void MenuState_obj::__register()
{
	MenuState_obj _hx_dummy;
	MenuState_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("MenuState",d2,bf,b6,c0);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(MenuState_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< MenuState_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = MenuState_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = MenuState_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

