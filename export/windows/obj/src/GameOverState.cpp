#include <hxcpp.h>

#ifndef INCLUDED_GameOverState
#include <GameOverState.h>
#endif
#ifndef INCLUDED_MenuState
#include <MenuState.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxCamera
#include <flixel/FlxCamera.h>
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
#ifndef INCLUDED_flixel_input_FlxPointer
#include <flixel/input/FlxPointer.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInput
#include <flixel/input/IFlxInput.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInputManager
#include <flixel/input/IFlxInputManager.h>
#endif
#ifndef INCLUDED_flixel_input_mouse_FlxMouse
#include <flixel/input/mouse/FlxMouse.h>
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
#ifndef INCLUDED_flixel_util_FlxSave
#include <flixel/util/FlxSave.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_f1e39ddd2cdbc587_12_new,"GameOverState","new",0x0e4d841d,"GameOverState.new","GameOverState.hx",12,0xd0ff2df3)
HX_LOCAL_STACK_FRAME(_hx_pos_f1e39ddd2cdbc587_36_create,"GameOverState","create",0x7dd4e75f,"GameOverState.create","GameOverState.hx",36,0xd0ff2df3)
HX_LOCAL_STACK_FRAME(_hx_pos_f1e39ddd2cdbc587_87_checkHighscore,"GameOverState","checkHighscore",0x6e35422b,"GameOverState.checkHighscore","GameOverState.hx",87,0xd0ff2df3)
HX_LOCAL_STACK_FRAME(_hx_pos_f1e39ddd2cdbc587_113_switchToMainMenu,"GameOverState","switchToMainMenu",0xd69f104a,"GameOverState.switchToMainMenu","GameOverState.hx",113,0xd0ff2df3)
HX_LOCAL_STACK_FRAME(_hx_pos_f1e39ddd2cdbc587_111_switchToMainMenu,"GameOverState","switchToMainMenu",0xd69f104a,"GameOverState.switchToMainMenu","GameOverState.hx",111,0xd0ff2df3)

void GameOverState_obj::__construct(bool win,int score){
            	HX_STACKFRAME(&_hx_pos_f1e39ddd2cdbc587_12_new)
HXLINE(  14)		this->score = 0;
HXLINE(  30)		super::__construct(null());
HXLINE(  31)		this->win = win;
HXLINE(  32)		this->score = score;
            	}

Dynamic GameOverState_obj::__CreateEmpty() { return new GameOverState_obj; }

void *GameOverState_obj::_hx_vtable = 0;

Dynamic GameOverState_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< GameOverState_obj > _hx_result = new GameOverState_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool GameOverState_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x63e746eb) {
		if (inClassId<=(int)0x62817b24) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x62817b24;
		} else {
			return inClassId==(int)0x63e746eb;
		}
	} else {
		return inClassId==(int)0x7c795c9f || inClassId==(int)0x7ccf8994;
	}
}

void GameOverState_obj::create(){
            	HX_GC_STACKFRAME(&_hx_pos_f1e39ddd2cdbc587_36_create)
HXLINE(  38)		::flixel::FlxG_obj::mouse->set_visible(true);
HXLINE(  43)		::String _hx_tmp;
HXDLIN(  43)		if (this->win) {
HXLINE(  43)			_hx_tmp = HX_("You Win!",a6,8e,bd,58);
            		}
            		else {
HXLINE(  43)			_hx_tmp = HX_("Game Over!",9f,0d,f2,9a);
            		}
HXDLIN(  43)		this->titleText =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,0,20,0,_hx_tmp,22,null());
HXLINE(  44)		this->titleText->set_alignment(HX_("center",d5,25,db,05));
HXLINE(  45)		this->titleText->screenCenter(::flixel::util::FlxAxes_obj::X_dyn());
HXLINE(  46)		this->add(this->titleText);
HXLINE(  48)		this->messageText =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,0,((( (Float)(::flixel::FlxG_obj::height) ) / ( (Float)(2) )) - ( (Float)(18) )),0,HX_("Final Score:",52,28,01,31),8,null());
HXLINE(  49)		this->messageText->set_alignment(HX_("center",d5,25,db,05));
HXLINE(  50)		this->messageText->screenCenter(::flixel::util::FlxAxes_obj::X_dyn());
HXLINE(  51)		this->add(this->messageText);
HXLINE(  53)		this->scoreIcon =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,((( (Float)(::flixel::FlxG_obj::width) ) / ( (Float)(2) )) - ( (Float)(8) )),0,HX_("assets/images/coin.png",f7,e9,c5,54));
HXLINE(  54)		this->scoreIcon->screenCenter(::flixel::util::FlxAxes_obj::Y_dyn());
HXLINE(  55)		this->add(this->scoreIcon);
HXLINE(  57)		Float _hx_tmp1 = (( (Float)(::flixel::FlxG_obj::width) ) / ( (Float)(2) ));
HXDLIN(  57)		this->scoreText =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,_hx_tmp1,0,0,::Std_obj::string(this->score),8,null());
HXLINE(  58)		this->scoreText->screenCenter(::flixel::util::FlxAxes_obj::Y_dyn());
HXLINE(  59)		this->add(this->scoreText);
HXLINE(  62)		int highscore = this->checkHighscore(this->score);
HXLINE(  64)		this->highscoreText =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,0,((( (Float)(::flixel::FlxG_obj::height) ) / ( (Float)(2) )) + 10),0,(HX_("Highscore: ",36,8f,53,b1) + highscore),8,null());
HXLINE(  65)		this->highscoreText->set_alignment(HX_("center",d5,25,db,05));
HXLINE(  66)		this->highscoreText->screenCenter(::flixel::util::FlxAxes_obj::Y_dyn());
HXLINE(  67)		this->add(this->highscoreText);
HXLINE(  69)		this->mainMenuButton =  ::flixel::ui::FlxButton_obj::__alloc( HX_CTX ,0,(::flixel::FlxG_obj::height - 32),HX_("Main Menu",e6,3a,4e,c8),this->switchToMainMenu_dyn());
HXLINE(  70)		this->mainMenuButton->screenCenter(::flixel::util::FlxAxes_obj::X_dyn());
HXLINE(  71)		this->mainMenuButton->onUp->sound = ::flixel::FlxG_obj::sound->load(HX_("assets/sounds/select.wav",99,31,ec,2e),null(),null(),null(),null(),null(),null(),null(),null());
HXLINE(  72)		this->mainMenuButton->onUp->sound = ::flixel::FlxG_obj::sound->load(HX_("assets/sounds/select.wav",99,31,ec,2e),null(),null(),null(),null(),null(),null(),null(),null());
HXLINE(  73)		this->add(this->mainMenuButton);
HXLINE(  75)		::flixel::FlxG_obj::camera->fade(-16777216,((Float)0.33),true,null(),null());
HXLINE(  77)		this->super::create();
            	}


int GameOverState_obj::checkHighscore(int score){
            	HX_GC_STACKFRAME(&_hx_pos_f1e39ddd2cdbc587_87_checkHighscore)
HXLINE(  88)		int highscore = score;
HXLINE(  89)		 ::flixel::util::FlxSave save =  ::flixel::util::FlxSave_obj::__alloc( HX_CTX );
HXLINE(  90)		if (save->bind(HX_("TurnBasedRPG",33,d2,d9,a2),null())) {
HXLINE(  92)			bool _hx_tmp;
HXDLIN(  92)			if (::hx::IsNotNull( save->data->__Field(HX_("highscore",b0,38,dd,f0),::hx::paccDynamic) )) {
HXLINE(  92)				_hx_tmp = ::hx::IsGreater( save->data->__Field(HX_("highscore",b0,38,dd,f0),::hx::paccDynamic),highscore );
            			}
            			else {
HXLINE(  92)				_hx_tmp = false;
            			}
HXDLIN(  92)			if (_hx_tmp) {
HXLINE(  94)				highscore = ( (int)(save->data->__Field(HX_("highscore",b0,38,dd,f0),::hx::paccDynamic)) );
            			}
            			else {
HXLINE(  99)				save->data->__SetField(HX_("highscore",b0,38,dd,f0),highscore,::hx::paccDynamic);
            			}
            		}
HXLINE( 102)		save->close(null(),null());
HXLINE( 103)		return highscore;
            	}


HX_DEFINE_DYNAMIC_FUNC1(GameOverState_obj,checkHighscore,return )

void GameOverState_obj::switchToMainMenu(){
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(0)
            		void _hx_run(){
            			HX_GC_STACKFRAME(&_hx_pos_f1e39ddd2cdbc587_113_switchToMainMenu)
HXLINE( 113)			 ::flixel::FlxState nextState =  ::MenuState_obj::__alloc( HX_CTX ,null());
HXDLIN( 113)			if (::flixel::FlxG_obj::game->_state->switchTo(nextState)) {
HXLINE( 113)				::flixel::FlxG_obj::game->_requestedState = nextState;
            			}
            		}
            		HX_END_LOCAL_FUNC0((void))

            	HX_STACKFRAME(&_hx_pos_f1e39ddd2cdbc587_111_switchToMainMenu)
HXDLIN( 111)		::flixel::FlxG_obj::camera->fade(-16777216,((Float)0.33),false, ::Dynamic(new _hx_Closure_0()),null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(GameOverState_obj,switchToMainMenu,(void))


::hx::ObjectPtr< GameOverState_obj > GameOverState_obj::__new(bool win,int score) {
	::hx::ObjectPtr< GameOverState_obj > __this = new GameOverState_obj();
	__this->__construct(win,score);
	return __this;
}

::hx::ObjectPtr< GameOverState_obj > GameOverState_obj::__alloc(::hx::Ctx *_hx_ctx,bool win,int score) {
	GameOverState_obj *__this = (GameOverState_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(GameOverState_obj), true, "GameOverState"));
	*(void **)__this = GameOverState_obj::_hx_vtable;
	__this->__construct(win,score);
	return __this;
}

GameOverState_obj::GameOverState_obj()
{
}

void GameOverState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(GameOverState);
	HX_MARK_MEMBER_NAME(score,"score");
	HX_MARK_MEMBER_NAME(win,"win");
	HX_MARK_MEMBER_NAME(titleText,"titleText");
	HX_MARK_MEMBER_NAME(messageText,"messageText");
	HX_MARK_MEMBER_NAME(scoreIcon,"scoreIcon");
	HX_MARK_MEMBER_NAME(scoreText,"scoreText");
	HX_MARK_MEMBER_NAME(highscoreText,"highscoreText");
	HX_MARK_MEMBER_NAME(mainMenuButton,"mainMenuButton");
	 ::flixel::FlxState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void GameOverState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(score,"score");
	HX_VISIT_MEMBER_NAME(win,"win");
	HX_VISIT_MEMBER_NAME(titleText,"titleText");
	HX_VISIT_MEMBER_NAME(messageText,"messageText");
	HX_VISIT_MEMBER_NAME(scoreIcon,"scoreIcon");
	HX_VISIT_MEMBER_NAME(scoreText,"scoreText");
	HX_VISIT_MEMBER_NAME(highscoreText,"highscoreText");
	HX_VISIT_MEMBER_NAME(mainMenuButton,"mainMenuButton");
	 ::flixel::FlxState_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val GameOverState_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"win") ) { return ::hx::Val( win ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"score") ) { return ::hx::Val( score ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return ::hx::Val( create_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"titleText") ) { return ::hx::Val( titleText ); }
		if (HX_FIELD_EQ(inName,"scoreIcon") ) { return ::hx::Val( scoreIcon ); }
		if (HX_FIELD_EQ(inName,"scoreText") ) { return ::hx::Val( scoreText ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"messageText") ) { return ::hx::Val( messageText ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"highscoreText") ) { return ::hx::Val( highscoreText ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"mainMenuButton") ) { return ::hx::Val( mainMenuButton ); }
		if (HX_FIELD_EQ(inName,"checkHighscore") ) { return ::hx::Val( checkHighscore_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"switchToMainMenu") ) { return ::hx::Val( switchToMainMenu_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val GameOverState_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"win") ) { win=inValue.Cast< bool >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"score") ) { score=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"titleText") ) { titleText=inValue.Cast<  ::flixel::text::FlxText >(); return inValue; }
		if (HX_FIELD_EQ(inName,"scoreIcon") ) { scoreIcon=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"scoreText") ) { scoreText=inValue.Cast<  ::flixel::text::FlxText >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"messageText") ) { messageText=inValue.Cast<  ::flixel::text::FlxText >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"highscoreText") ) { highscoreText=inValue.Cast<  ::flixel::text::FlxText >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"mainMenuButton") ) { mainMenuButton=inValue.Cast<  ::flixel::ui::FlxButton >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void GameOverState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("score",52,73,d9,78));
	outFields->push(HX_("win",1c,a8,5a,00));
	outFields->push(HX_("titleText",65,ba,a4,70));
	outFields->push(HX_("messageText",14,1e,e0,7f));
	outFields->push(HX_("scoreIcon",eb,97,76,d5));
	outFields->push(HX_("scoreText",1f,7d,bd,dc));
	outFields->push(HX_("highscoreText",7d,49,32,22));
	outFields->push(HX_("mainMenuButton",8a,ba,e7,5b));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo GameOverState_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(GameOverState_obj,score),HX_("score",52,73,d9,78)},
	{::hx::fsBool,(int)offsetof(GameOverState_obj,win),HX_("win",1c,a8,5a,00)},
	{::hx::fsObject /*  ::flixel::text::FlxText */ ,(int)offsetof(GameOverState_obj,titleText),HX_("titleText",65,ba,a4,70)},
	{::hx::fsObject /*  ::flixel::text::FlxText */ ,(int)offsetof(GameOverState_obj,messageText),HX_("messageText",14,1e,e0,7f)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(GameOverState_obj,scoreIcon),HX_("scoreIcon",eb,97,76,d5)},
	{::hx::fsObject /*  ::flixel::text::FlxText */ ,(int)offsetof(GameOverState_obj,scoreText),HX_("scoreText",1f,7d,bd,dc)},
	{::hx::fsObject /*  ::flixel::text::FlxText */ ,(int)offsetof(GameOverState_obj,highscoreText),HX_("highscoreText",7d,49,32,22)},
	{::hx::fsObject /*  ::flixel::ui::FlxButton */ ,(int)offsetof(GameOverState_obj,mainMenuButton),HX_("mainMenuButton",8a,ba,e7,5b)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *GameOverState_obj_sStaticStorageInfo = 0;
#endif

static ::String GameOverState_obj_sMemberFields[] = {
	HX_("score",52,73,d9,78),
	HX_("win",1c,a8,5a,00),
	HX_("titleText",65,ba,a4,70),
	HX_("messageText",14,1e,e0,7f),
	HX_("scoreIcon",eb,97,76,d5),
	HX_("scoreText",1f,7d,bd,dc),
	HX_("highscoreText",7d,49,32,22),
	HX_("mainMenuButton",8a,ba,e7,5b),
	HX_("create",fc,66,0f,7c),
	HX_("checkHighscore",c8,26,94,57),
	HX_("switchToMainMenu",27,16,f6,00),
	::String(null()) };

::hx::Class GameOverState_obj::__mClass;

void GameOverState_obj::__register()
{
	GameOverState_obj _hx_dummy;
	GameOverState_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("GameOverState",ab,31,a0,87);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(GameOverState_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< GameOverState_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = GameOverState_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = GameOverState_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

