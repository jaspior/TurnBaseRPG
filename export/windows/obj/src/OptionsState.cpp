#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_MenuState
#include <MenuState.h>
#endif
#ifndef INCLUDED_OptionsState
#include <OptionsState.h>
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
#ifndef INCLUDED_flixel_input_IFlxInput
#include <flixel/input/IFlxInput.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
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
#ifndef INCLUDED_flixel_text_FlxTextBorderStyle
#include <flixel/text/FlxTextBorderStyle.h>
#endif
#ifndef INCLUDED_flixel_ui_FlxBar
#include <flixel/ui/FlxBar.h>
#endif
#ifndef INCLUDED_flixel_ui_FlxBarFillDirection
#include <flixel/ui/FlxBarFillDirection.h>
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
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_03f5e745aacd5817_12_new,"OptionsState","new",0x73d32065,"OptionsState.new","OptionsState.hx",12,0x342db2ab)
HX_LOCAL_STACK_FRAME(_hx_pos_03f5e745aacd5817_32_create,"OptionsState","create",0xe6502817,"OptionsState.create","OptionsState.hx",32,0x342db2ab)
HX_LOCAL_STACK_FRAME(_hx_pos_03f5e745aacd5817_102_clickFullscreen,"OptionsState","clickFullscreen",0x4ebea828,"OptionsState.clickFullscreen","OptionsState.hx",102,0x342db2ab)
HX_LOCAL_STACK_FRAME(_hx_pos_03f5e745aacd5817_113_clickClearData,"OptionsState","clickClearData",0x24baad0a,"OptionsState.clickClearData","OptionsState.hx",113,0x342db2ab)
HX_LOCAL_STACK_FRAME(_hx_pos_03f5e745aacd5817_127_clickBack,"OptionsState","clickBack",0x41d6e854,"OptionsState.clickBack","OptionsState.hx",127,0x342db2ab)
HX_LOCAL_STACK_FRAME(_hx_pos_03f5e745aacd5817_123_clickBack,"OptionsState","clickBack",0x41d6e854,"OptionsState.clickBack","OptionsState.hx",123,0x342db2ab)
HX_LOCAL_STACK_FRAME(_hx_pos_03f5e745aacd5817_135_clickVolumeDown,"OptionsState","clickVolumeDown",0x7a47b149,"OptionsState.clickVolumeDown","OptionsState.hx",135,0x342db2ab)
HX_LOCAL_STACK_FRAME(_hx_pos_03f5e745aacd5817_145_clickVolumeUp,"OptionsState","clickVolumeUp",0x9ac24782,"OptionsState.clickVolumeUp","OptionsState.hx",145,0x342db2ab)
HX_LOCAL_STACK_FRAME(_hx_pos_03f5e745aacd5817_155_updateVolume,"OptionsState","updateVolume",0x0aa1d81e,"OptionsState.updateVolume","OptionsState.hx",155,0x342db2ab)

void OptionsState_obj::__construct( ::Dynamic MaxSize){
            	HX_STACKFRAME(&_hx_pos_03f5e745aacd5817_12_new)
HXDLIN(  12)		super::__construct(MaxSize);
            	}

Dynamic OptionsState_obj::__CreateEmpty() { return new OptionsState_obj; }

void *OptionsState_obj::_hx_vtable = 0;

Dynamic OptionsState_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< OptionsState_obj > _hx_result = new OptionsState_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool OptionsState_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x62817b24) {
		if (inClassId<=(int)0x2aabc417) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x2aabc417;
		} else {
			return inClassId==(int)0x62817b24;
		}
	} else {
		return inClassId==(int)0x7c795c9f || inClassId==(int)0x7ccf8994;
	}
}

void OptionsState_obj::create(){
            	HX_GC_STACKFRAME(&_hx_pos_03f5e745aacd5817_32_create)
HXLINE(  34)		this->titleText =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,0,20,0,HX_("Options",3e,5b,4f,ad),22,null());
HXLINE(  35)		this->titleText->set_alignment(HX_("center",d5,25,db,05));
HXLINE(  36)		this->titleText->screenCenter(::flixel::util::FlxAxes_obj::X_dyn());
HXLINE(  37)		this->add(this->titleText);
HXLINE(  39)		Float _hx_tmp = this->titleText->y;
HXDLIN(  39)		this->volumeText =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,0,((_hx_tmp + this->titleText->get_height()) + 10),0,HX_("Volume",fa,9d,e7,93),8,null());
HXLINE(  40)		this->volumeText->set_alignment(HX_("center",d5,25,db,05));
HXLINE(  41)		this->volumeText->screenCenter(::flixel::util::FlxAxes_obj::X_dyn());
HXLINE(  42)		this->add(this->volumeText);
HXLINE(  45)		Float _hx_tmp1 = this->volumeText->y;
HXDLIN(  45)		this->volumeDownButton =  ::flixel::ui::FlxButton_obj::__alloc( HX_CTX ,8,((_hx_tmp1 + this->volumeText->get_height()) + 2),HX_("-",2d,00,00,00),this->clickVolumeDown_dyn());
HXLINE(  46)		this->volumeDownButton->loadGraphic(HX_("assets/images/button.png",98,1b,b6,cd),true,20,20,null(),null());
HXLINE(  47)		this->volumeDownButton->onUp->sound = ::flixel::FlxG_obj::sound->load(HX_("assets/sounds/select.wav",99,31,ec,2e),null(),null(),null(),null(),null(),null(),null(),null());
HXLINE(  48)		this->add(this->volumeDownButton);
HXLINE(  50)		this->volumeUpButton =  ::flixel::ui::FlxButton_obj::__alloc( HX_CTX ,(::flixel::FlxG_obj::width - 28),this->volumeDownButton->y,HX_("+",2b,00,00,00),this->clickVolumeUp_dyn());
HXLINE(  51)		this->volumeUpButton->loadGraphic(HX_("assets/images/button.png",98,1b,b6,cd),true,20,20,null(),null());
HXLINE(  52)		this->volumeUpButton->onUp->sound = ::flixel::FlxG_obj::sound->load(HX_("assets/sounds/select.wav",99,31,ec,2e),null(),null(),null(),null(),null(),null(),null(),null());
HXLINE(  53)		this->add(this->volumeUpButton);
HXLINE(  55)		Float _hx_tmp2 = this->volumeDownButton->x;
HXDLIN(  55)		Float _hx_tmp3 = ((_hx_tmp2 + this->volumeDownButton->get_width()) + 4);
HXDLIN(  55)		Float _hx_tmp4 = this->volumeDownButton->y;
HXDLIN(  55)		int _hx_tmp5 = ::Std_obj::_hx_int(( (Float)((::flixel::FlxG_obj::width - 64)) ));
HXDLIN(  55)		this->volumeBar =  ::flixel::ui::FlxBar_obj::__alloc( HX_CTX ,_hx_tmp3,_hx_tmp4,::flixel::ui::FlxBarFillDirection_obj::LEFT_TO_RIGHT_dyn(),_hx_tmp5,::Std_obj::_hx_int(this->volumeUpButton->get_height()),null(),null(),null(),null(),null());
HXLINE(  57)		this->volumeBar->createFilledBar(-12171706,-1,true,-1);
HXLINE(  58)		this->add(this->volumeBar);
HXLINE(  61)		Float _hx_tmp6 = this->volumeBar->y;
HXDLIN(  61)		Float _hx_tmp7 = ((_hx_tmp6 + this->volumeBar->get_height()) + 8);
HXDLIN(  61)		::String _hx_tmp8;
HXDLIN(  61)		if (::flixel::FlxG_obj::get_fullscreen()) {
HXLINE(  61)			_hx_tmp8 = HX_("FULLSCREEN",3b,ae,bd,eb);
            		}
            		else {
HXLINE(  61)			_hx_tmp8 = HX_("WINDOWED",4f,58,53,d7);
            		}
HXDLIN(  61)		this->fullscreenButton =  ::flixel::ui::FlxButton_obj::__alloc( HX_CTX ,0,_hx_tmp7,_hx_tmp8,this->clickFullscreen_dyn());
HXLINE(  62)		this->fullscreenButton->screenCenter(::flixel::util::FlxAxes_obj::X_dyn());
HXLINE(  63)		this->add(this->fullscreenButton);
HXLINE(  66)		this->volumeAmountText =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,0,0,200,((::flixel::FlxG_obj::sound->volume * ( (Float)(100) )) + HX_("%",25,00,00,00)),8,null());
HXLINE(  67)		this->volumeAmountText->set_alignment(HX_("center",d5,25,db,05));
HXLINE(  68)		this->volumeAmountText->set_borderStyle(::flixel::text::FlxTextBorderStyle_obj::OUTLINE_dyn());
HXLINE(  69)		this->volumeAmountText->set_borderColor(-12171706);
HXLINE(  70)		 ::flixel::text::FlxText _hx_tmp9 = this->volumeAmountText;
HXDLIN(  70)		Float _hx_tmp10 = this->volumeBar->y;
HXDLIN(  70)		Float _hx_tmp11 = (_hx_tmp10 + (this->volumeBar->get_height() / ( (Float)(2) )));
HXDLIN(  70)		_hx_tmp9->set_y((_hx_tmp11 - (this->volumeAmountText->get_height() / ( (Float)(2) ))));
HXLINE(  71)		this->volumeAmountText->screenCenter(::flixel::util::FlxAxes_obj::X_dyn());
HXLINE(  72)		this->add(this->volumeAmountText);
HXLINE(  75)		Float _hx_tmp12 = this->volumeBar->y;
HXDLIN(  75)		Float _hx_tmp13 = ((_hx_tmp12 + this->volumeBar->get_height()) + 8);
HXDLIN(  75)		::String _hx_tmp14;
HXDLIN(  75)		if (::flixel::FlxG_obj::get_fullscreen()) {
HXLINE(  75)			_hx_tmp14 = HX_("FULLSCREEN",3b,ae,bd,eb);
            		}
            		else {
HXLINE(  75)			_hx_tmp14 = HX_("WINDOWED",4f,58,53,d7);
            		}
HXDLIN(  75)		this->fullscreenButton =  ::flixel::ui::FlxButton_obj::__alloc( HX_CTX ,0,_hx_tmp13,_hx_tmp14,this->clickFullscreen_dyn());
HXLINE(  76)		this->fullscreenButton->screenCenter(::flixel::util::FlxAxes_obj::X_dyn());
HXLINE(  77)		this->add(this->fullscreenButton);
HXLINE(  80)		this->clearDataButton =  ::flixel::ui::FlxButton_obj::__alloc( HX_CTX ,((( (Float)(::flixel::FlxG_obj::width) ) / ( (Float)(2) )) - ( (Float)(90) )),(::flixel::FlxG_obj::height - 28),HX_("Clear Data",dd,e5,9c,d2),this->clickClearData_dyn());
HXLINE(  81)		this->clearDataButton->onUp->sound = ::flixel::FlxG_obj::sound->load(HX_("assets/sounds/select.wav",99,31,ec,2e),null(),null(),null(),null(),null(),null(),null(),null());
HXLINE(  82)		this->add(this->clearDataButton);
HXLINE(  84)		this->backButton =  ::flixel::ui::FlxButton_obj::__alloc( HX_CTX ,((( (Float)(::flixel::FlxG_obj::width) ) / ( (Float)(2) )) + 10),(::flixel::FlxG_obj::height - 28),HX_("Back",47,06,ea,2b),this->clickBack_dyn());
HXLINE(  85)		this->backButton->onUp->sound = ::flixel::FlxG_obj::sound->load(HX_("assets/sounds/select.wav",99,31,ec,2e),null(),null(),null(),null(),null(),null(),null(),null());
HXLINE(  86)		this->add(this->backButton);
HXLINE(  89)		this->save =  ::flixel::util::FlxSave_obj::__alloc( HX_CTX );
HXLINE(  90)		this->save->bind(HX_("TurnBasedRPG",33,d2,d9,a2),null());
HXLINE(  93)		this->updateVolume();
HXLINE(  95)		::flixel::FlxG_obj::camera->fade(-16777216,((Float)0.33),true,null(),null());
HXLINE(  97)		this->super::create();
            	}


void OptionsState_obj::clickFullscreen(){
            	HX_GC_STACKFRAME(&_hx_pos_03f5e745aacd5817_102_clickFullscreen)
HXLINE( 103)		::flixel::FlxG_obj::set_fullscreen(!(::flixel::FlxG_obj::get_fullscreen()));
HXLINE( 104)		{
HXLINE( 104)			 ::flixel::ui::FlxButton _this = this->fullscreenButton;
HXDLIN( 104)			::String Text;
HXDLIN( 104)			if (::flixel::FlxG_obj::get_fullscreen()) {
HXLINE( 104)				Text = HX_("FULLSCREEN",3b,ae,bd,eb);
            			}
            			else {
HXLINE( 104)				Text = HX_("WINDOWED",4f,58,53,d7);
            			}
HXDLIN( 104)			if (::hx::IsNull( _this->label )) {
HXLINE( 104)				if (::hx::IsNotNull( Text )) {
HXLINE( 104)					_this->set_label( ::flixel::text::FlxText_obj::__alloc( HX_CTX ,(_this->x + _this->labelOffsets->__get(0).StaticCast<  ::flixel::math::FlxPoint >()->x),(_this->y + _this->labelOffsets->__get(0).StaticCast<  ::flixel::math::FlxPoint >()->y),80,Text,null(),null()));
HXDLIN( 104)					_this->label->setFormat(null(),8,3355443,HX_("center",d5,25,db,05),null(),null(),null());
HXDLIN( 104)					_this->label->set_alpha(_this->labelAlphas->__get(_this->status));
HXDLIN( 104)					_this->label->drawFrame(true);
            				}
            			}
            			else {
HXLINE( 104)				_this->label->set_text(Text);
            			}
            		}
HXLINE( 105)		this->save->data->__SetField(HX_("fullscreen",3b,3a,b4,f9),::flixel::FlxG_obj::get_fullscreen(),::hx::paccDynamic);
            	}


HX_DEFINE_DYNAMIC_FUNC0(OptionsState_obj,clickFullscreen,(void))

void OptionsState_obj::clickClearData(){
            	HX_STACKFRAME(&_hx_pos_03f5e745aacd5817_113_clickClearData)
HXLINE( 114)		this->save->erase();
HXLINE( 115)		::flixel::FlxG_obj::sound->set_volume(((Float)0.5));
HXLINE( 116)		this->updateVolume();
            	}


HX_DEFINE_DYNAMIC_FUNC0(OptionsState_obj,clickClearData,(void))

void OptionsState_obj::clickBack(){
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(0)
            		void _hx_run(){
            			HX_GC_STACKFRAME(&_hx_pos_03f5e745aacd5817_127_clickBack)
HXLINE( 127)			 ::flixel::FlxState nextState =  ::MenuState_obj::__alloc( HX_CTX ,null());
HXDLIN( 127)			if (::flixel::FlxG_obj::game->_state->switchTo(nextState)) {
HXLINE( 127)				::flixel::FlxG_obj::game->_requestedState = nextState;
            			}
            		}
            		HX_END_LOCAL_FUNC0((void))

            	HX_STACKFRAME(&_hx_pos_03f5e745aacd5817_123_clickBack)
HXLINE( 124)		this->save->close(null(),null());
HXLINE( 125)		::flixel::FlxG_obj::camera->fade(-16777216,((Float).33),false, ::Dynamic(new _hx_Closure_0()),null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(OptionsState_obj,clickBack,(void))

void OptionsState_obj::clickVolumeDown(){
            	HX_STACKFRAME(&_hx_pos_03f5e745aacd5817_135_clickVolumeDown)
HXLINE( 136)		 ::flixel::_hx_system::frontEnds::SoundFrontEnd fh = ::flixel::FlxG_obj::sound;
HXDLIN( 136)		fh->set_volume((fh->volume - ((Float)0.1)));
HXLINE( 137)		this->save->data->__SetField(HX_("volume",da,29,53,5f),::flixel::FlxG_obj::sound->volume,::hx::paccDynamic);
HXLINE( 138)		this->updateVolume();
            	}


HX_DEFINE_DYNAMIC_FUNC0(OptionsState_obj,clickVolumeDown,(void))

void OptionsState_obj::clickVolumeUp(){
            	HX_STACKFRAME(&_hx_pos_03f5e745aacd5817_145_clickVolumeUp)
HXLINE( 146)		 ::flixel::_hx_system::frontEnds::SoundFrontEnd fh = ::flixel::FlxG_obj::sound;
HXDLIN( 146)		fh->set_volume((fh->volume + ((Float)0.1)));
HXLINE( 147)		this->save->data->__SetField(HX_("volume",da,29,53,5f),::flixel::FlxG_obj::sound->volume,::hx::paccDynamic);
HXLINE( 148)		this->updateVolume();
            	}


HX_DEFINE_DYNAMIC_FUNC0(OptionsState_obj,clickVolumeUp,(void))

void OptionsState_obj::updateVolume(){
            	HX_STACKFRAME(&_hx_pos_03f5e745aacd5817_155_updateVolume)
HXLINE( 156)		int volume = ::Math_obj::round((::flixel::FlxG_obj::sound->volume * ( (Float)(100) )));
HXLINE( 157)		this->volumeBar->set_value(( (Float)(volume) ));
HXLINE( 158)		this->volumeAmountText->set_text((volume + HX_("%",25,00,00,00)));
            	}


HX_DEFINE_DYNAMIC_FUNC0(OptionsState_obj,updateVolume,(void))


::hx::ObjectPtr< OptionsState_obj > OptionsState_obj::__new( ::Dynamic MaxSize) {
	::hx::ObjectPtr< OptionsState_obj > __this = new OptionsState_obj();
	__this->__construct(MaxSize);
	return __this;
}

::hx::ObjectPtr< OptionsState_obj > OptionsState_obj::__alloc(::hx::Ctx *_hx_ctx, ::Dynamic MaxSize) {
	OptionsState_obj *__this = (OptionsState_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(OptionsState_obj), true, "OptionsState"));
	*(void **)__this = OptionsState_obj::_hx_vtable;
	__this->__construct(MaxSize);
	return __this;
}

OptionsState_obj::OptionsState_obj()
{
}

void OptionsState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(OptionsState);
	HX_MARK_MEMBER_NAME(fullscreenButton,"fullscreenButton");
	HX_MARK_MEMBER_NAME(titleText,"titleText");
	HX_MARK_MEMBER_NAME(volumeBar,"volumeBar");
	HX_MARK_MEMBER_NAME(volumeText,"volumeText");
	HX_MARK_MEMBER_NAME(volumeAmountText,"volumeAmountText");
	HX_MARK_MEMBER_NAME(volumeDownButton,"volumeDownButton");
	HX_MARK_MEMBER_NAME(volumeUpButton,"volumeUpButton");
	HX_MARK_MEMBER_NAME(clearDataButton,"clearDataButton");
	HX_MARK_MEMBER_NAME(backButton,"backButton");
	HX_MARK_MEMBER_NAME(save,"save");
	 ::flixel::FlxState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void OptionsState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(fullscreenButton,"fullscreenButton");
	HX_VISIT_MEMBER_NAME(titleText,"titleText");
	HX_VISIT_MEMBER_NAME(volumeBar,"volumeBar");
	HX_VISIT_MEMBER_NAME(volumeText,"volumeText");
	HX_VISIT_MEMBER_NAME(volumeAmountText,"volumeAmountText");
	HX_VISIT_MEMBER_NAME(volumeDownButton,"volumeDownButton");
	HX_VISIT_MEMBER_NAME(volumeUpButton,"volumeUpButton");
	HX_VISIT_MEMBER_NAME(clearDataButton,"clearDataButton");
	HX_VISIT_MEMBER_NAME(backButton,"backButton");
	HX_VISIT_MEMBER_NAME(save,"save");
	 ::flixel::FlxState_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val OptionsState_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"save") ) { return ::hx::Val( save ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return ::hx::Val( create_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"titleText") ) { return ::hx::Val( titleText ); }
		if (HX_FIELD_EQ(inName,"volumeBar") ) { return ::hx::Val( volumeBar ); }
		if (HX_FIELD_EQ(inName,"clickBack") ) { return ::hx::Val( clickBack_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"volumeText") ) { return ::hx::Val( volumeText ); }
		if (HX_FIELD_EQ(inName,"backButton") ) { return ::hx::Val( backButton ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"updateVolume") ) { return ::hx::Val( updateVolume_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"clickVolumeUp") ) { return ::hx::Val( clickVolumeUp_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"volumeUpButton") ) { return ::hx::Val( volumeUpButton ); }
		if (HX_FIELD_EQ(inName,"clickClearData") ) { return ::hx::Val( clickClearData_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"clearDataButton") ) { return ::hx::Val( clearDataButton ); }
		if (HX_FIELD_EQ(inName,"clickFullscreen") ) { return ::hx::Val( clickFullscreen_dyn() ); }
		if (HX_FIELD_EQ(inName,"clickVolumeDown") ) { return ::hx::Val( clickVolumeDown_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"fullscreenButton") ) { return ::hx::Val( fullscreenButton ); }
		if (HX_FIELD_EQ(inName,"volumeAmountText") ) { return ::hx::Val( volumeAmountText ); }
		if (HX_FIELD_EQ(inName,"volumeDownButton") ) { return ::hx::Val( volumeDownButton ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val OptionsState_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"save") ) { save=inValue.Cast<  ::flixel::util::FlxSave >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"titleText") ) { titleText=inValue.Cast<  ::flixel::text::FlxText >(); return inValue; }
		if (HX_FIELD_EQ(inName,"volumeBar") ) { volumeBar=inValue.Cast<  ::flixel::ui::FlxBar >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"volumeText") ) { volumeText=inValue.Cast<  ::flixel::text::FlxText >(); return inValue; }
		if (HX_FIELD_EQ(inName,"backButton") ) { backButton=inValue.Cast<  ::flixel::ui::FlxButton >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"volumeUpButton") ) { volumeUpButton=inValue.Cast<  ::flixel::ui::FlxButton >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"clearDataButton") ) { clearDataButton=inValue.Cast<  ::flixel::ui::FlxButton >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"fullscreenButton") ) { fullscreenButton=inValue.Cast<  ::flixel::ui::FlxButton >(); return inValue; }
		if (HX_FIELD_EQ(inName,"volumeAmountText") ) { volumeAmountText=inValue.Cast<  ::flixel::text::FlxText >(); return inValue; }
		if (HX_FIELD_EQ(inName,"volumeDownButton") ) { volumeDownButton=inValue.Cast<  ::flixel::ui::FlxButton >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void OptionsState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("fullscreenButton",8d,ee,82,b9));
	outFields->push(HX_("titleText",65,ba,a4,70));
	outFields->push(HX_("volumeBar",19,64,97,60));
	outFields->push(HX_("volumeText",a7,17,c9,2f));
	outFields->push(HX_("volumeAmountText",1f,99,18,b1));
	outFields->push(HX_("volumeDownButton",6e,06,3d,4f));
	outFields->push(HX_("volumeUpButton",a7,42,50,f3));
	outFields->push(HX_("clearDataButton",a9,ef,26,4c));
	outFields->push(HX_("backButton",79,47,6a,18));
	outFields->push(HX_("save",3d,8b,4d,4c));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo OptionsState_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::flixel::ui::FlxButton */ ,(int)offsetof(OptionsState_obj,fullscreenButton),HX_("fullscreenButton",8d,ee,82,b9)},
	{::hx::fsObject /*  ::flixel::text::FlxText */ ,(int)offsetof(OptionsState_obj,titleText),HX_("titleText",65,ba,a4,70)},
	{::hx::fsObject /*  ::flixel::ui::FlxBar */ ,(int)offsetof(OptionsState_obj,volumeBar),HX_("volumeBar",19,64,97,60)},
	{::hx::fsObject /*  ::flixel::text::FlxText */ ,(int)offsetof(OptionsState_obj,volumeText),HX_("volumeText",a7,17,c9,2f)},
	{::hx::fsObject /*  ::flixel::text::FlxText */ ,(int)offsetof(OptionsState_obj,volumeAmountText),HX_("volumeAmountText",1f,99,18,b1)},
	{::hx::fsObject /*  ::flixel::ui::FlxButton */ ,(int)offsetof(OptionsState_obj,volumeDownButton),HX_("volumeDownButton",6e,06,3d,4f)},
	{::hx::fsObject /*  ::flixel::ui::FlxButton */ ,(int)offsetof(OptionsState_obj,volumeUpButton),HX_("volumeUpButton",a7,42,50,f3)},
	{::hx::fsObject /*  ::flixel::ui::FlxButton */ ,(int)offsetof(OptionsState_obj,clearDataButton),HX_("clearDataButton",a9,ef,26,4c)},
	{::hx::fsObject /*  ::flixel::ui::FlxButton */ ,(int)offsetof(OptionsState_obj,backButton),HX_("backButton",79,47,6a,18)},
	{::hx::fsObject /*  ::flixel::util::FlxSave */ ,(int)offsetof(OptionsState_obj,save),HX_("save",3d,8b,4d,4c)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *OptionsState_obj_sStaticStorageInfo = 0;
#endif

static ::String OptionsState_obj_sMemberFields[] = {
	HX_("fullscreenButton",8d,ee,82,b9),
	HX_("titleText",65,ba,a4,70),
	HX_("volumeBar",19,64,97,60),
	HX_("volumeText",a7,17,c9,2f),
	HX_("volumeAmountText",1f,99,18,b1),
	HX_("volumeDownButton",6e,06,3d,4f),
	HX_("volumeUpButton",a7,42,50,f3),
	HX_("clearDataButton",a9,ef,26,4c),
	HX_("backButton",79,47,6a,18),
	HX_("save",3d,8b,4d,4c),
	HX_("create",fc,66,0f,7c),
	HX_("clickFullscreen",a3,e4,c4,94),
	HX_("clickClearData",ef,d8,da,3a),
	HX_("clickBack",8f,46,10,20),
	HX_("clickVolumeDown",c4,ed,4d,c0),
	HX_("clickVolumeUp",3d,df,a6,2c),
	HX_("updateVolume",c3,d0,16,5f),
	::String(null()) };

::hx::Class OptionsState_obj::__mClass;

void OptionsState_obj::__register()
{
	OptionsState_obj _hx_dummy;
	OptionsState_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("OptionsState",f3,09,80,0f);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(OptionsState_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< OptionsState_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = OptionsState_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = OptionsState_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

