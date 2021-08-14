#include <hxcpp.h>

#ifndef INCLUDED_Player
#include <Player.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxAnimationController
#include <flixel/animation/FlxAnimationController.h>
#endif
#ifndef INCLUDED_flixel_input_FlxKeyManager
#include <flixel/input/FlxKeyManager.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInputManager
#include <flixel/input/IFlxInputManager.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard_FlxKeyboard
#include <flixel/input/keyboard/FlxKeyboard.h>
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
#ifndef INCLUDED_flixel_util_FlxPool_flixel_math_FlxPoint
#include <flixel/util/FlxPool_flixel_math_FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPool
#include <flixel/util/IFlxPool.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_9d6b32c958ffa4d3_17_new,"Player","new",0x8d5554f3,"Player.new","Player.hx",17,0xa27fc9dd)
static const int _hx_array_data_6c4d5f81_1[] = {
	(int)3,(int)4,(int)3,(int)5,
};
static const int _hx_array_data_6c4d5f81_2[] = {
	(int)6,(int)7,(int)6,(int)8,
};
static const int _hx_array_data_6c4d5f81_3[] = {
	(int)0,(int)1,(int)0,(int)2,
};
HX_LOCAL_STACK_FRAME(_hx_pos_9d6b32c958ffa4d3_37_updateMovement,"Player","updateMovement",0xab7266a5,"Player.updateMovement","Player.hx",37,0xa27fc9dd)
static const int _hx_array_data_6c4d5f81_5[] = {
	(int)38,(int)87,
};
static const int _hx_array_data_6c4d5f81_6[] = {
	(int)40,(int)83,
};
static const int _hx_array_data_6c4d5f81_7[] = {
	(int)37,(int)65,
};
static const int _hx_array_data_6c4d5f81_8[] = {
	(int)39,(int)68,
};
HX_LOCAL_STACK_FRAME(_hx_pos_9d6b32c958ffa4d3_117_update,"Player","update",0xf1f8df56,"Player.update","Player.hx",117,0xa27fc9dd)
HX_LOCAL_STACK_FRAME(_hx_pos_9d6b32c958ffa4d3_12_boot,"Player","boot",0x156e003f,"Player.boot","Player.hx",12,0xa27fc9dd)

void Player_obj::__construct(::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y){
            		Float x = __o_x.Default(0);
            		Float y = __o_y.Default(0);
            	HX_STACKFRAME(&_hx_pos_9d6b32c958ffa4d3_17_new)
HXLINE(  18)		super::__construct(x,y,null());
HXLINE(  20)		this->loadGraphic(HX_("assets/images/player.png",87,88,81,c6),true,16,16,null(),null());
HXLINE(  21)		this->_facingFlip->set(1, ::Dynamic(::hx::Anon_obj::Create(2)
            			->setFixed(0,HX_("x",78,00,00,00),false)
            			->setFixed(1,HX_("y",79,00,00,00),false)));
HXLINE(  22)		this->_facingFlip->set(16, ::Dynamic(::hx::Anon_obj::Create(2)
            			->setFixed(0,HX_("x",78,00,00,00),true)
            			->setFixed(1,HX_("y",79,00,00,00),false)));
HXLINE(  23)		this->animation->add(HX_("lr",86,5e,00,00),::Array_obj< int >::fromData( _hx_array_data_6c4d5f81_1,4),6,false,null(),null());
HXLINE(  24)		this->animation->add(HX_("u",75,00,00,00),::Array_obj< int >::fromData( _hx_array_data_6c4d5f81_2,4),6,false,null(),null());
HXLINE(  25)		this->animation->add(HX_("d",64,00,00,00),::Array_obj< int >::fromData( _hx_array_data_6c4d5f81_3,4),6,false,null(),null());
HXLINE(  27)		 ::flixel::math::FlxPoint _hx_tmp = this->drag;
HXDLIN(  27)		_hx_tmp->set_x(this->drag->set_y(( (Float)(1600) )));
HXLINE(  30)		this->setSize(( (Float)(8) ),( (Float)(8) ));
HXLINE(  31)		this->offset->set(4,4);
HXLINE(  33)		this->stepSound = ::flixel::FlxG_obj::sound->load(HX_("assets/sounds/step.wav",29,a0,d3,5a),null(),null(),null(),null(),null(),null(),null(),null());
            	}

Dynamic Player_obj::__CreateEmpty() { return new Player_obj; }

void *Player_obj::_hx_vtable = 0;

Dynamic Player_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Player_obj > _hx_result = new Player_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool Player_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x33e526a5) {
		if (inClassId<=(int)0x2c01639b) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x2c01639b;
		} else {
			return inClassId==(int)0x33e526a5;
		}
	} else {
		return inClassId==(int)0x7ccf8994 || inClassId==(int)0x7dab0655;
	}
}

void Player_obj::updateMovement(){
            	HX_STACKFRAME(&_hx_pos_9d6b32c958ffa4d3_37_updateMovement)
HXLINE(  38)		bool up = false;
HXLINE(  39)		bool down = false;
HXLINE(  40)		bool left = false;
HXLINE(  41)		bool right = false;
HXLINE(  44)		up = ::flixel::FlxG_obj::keys->checkKeyArrayState(::Array_obj< int >::fromData( _hx_array_data_6c4d5f81_5,2),1);
HXLINE(  45)		down = ::flixel::FlxG_obj::keys->checkKeyArrayState(::Array_obj< int >::fromData( _hx_array_data_6c4d5f81_6,2),1);
HXLINE(  46)		left = ::flixel::FlxG_obj::keys->checkKeyArrayState(::Array_obj< int >::fromData( _hx_array_data_6c4d5f81_7,2),1);
HXLINE(  47)		right = ::flixel::FlxG_obj::keys->checkKeyArrayState(::Array_obj< int >::fromData( _hx_array_data_6c4d5f81_8,2),1);
HXLINE(  58)		bool _hx_tmp;
HXDLIN(  58)		if (up) {
HXLINE(  58)			_hx_tmp = down;
            		}
            		else {
HXLINE(  58)			_hx_tmp = false;
            		}
HXDLIN(  58)		if (_hx_tmp) {
HXLINE(  59)			down = false;
HXDLIN(  59)			up = down;
            		}
HXLINE(  60)		bool _hx_tmp1;
HXDLIN(  60)		if (left) {
HXLINE(  60)			_hx_tmp1 = right;
            		}
            		else {
HXLINE(  60)			_hx_tmp1 = false;
            		}
HXDLIN(  60)		if (_hx_tmp1) {
HXLINE(  61)			right = false;
HXDLIN(  61)			left = right;
            		}
HXLINE(  63)		bool _hx_tmp2;
HXDLIN(  63)		bool _hx_tmp3;
HXDLIN(  63)		bool _hx_tmp4;
HXDLIN(  63)		if (!(up)) {
HXLINE(  63)			_hx_tmp4 = down;
            		}
            		else {
HXLINE(  63)			_hx_tmp4 = true;
            		}
HXDLIN(  63)		if (!(_hx_tmp4)) {
HXLINE(  63)			_hx_tmp3 = left;
            		}
            		else {
HXLINE(  63)			_hx_tmp3 = true;
            		}
HXDLIN(  63)		if (!(_hx_tmp3)) {
HXLINE(  63)			_hx_tmp2 = right;
            		}
            		else {
HXLINE(  63)			_hx_tmp2 = true;
            		}
HXDLIN(  63)		if (_hx_tmp2) {
HXLINE(  65)			Float newAngle = ( (Float)(0) );
HXLINE(  66)			if (up) {
HXLINE(  68)				newAngle = ( (Float)(-90) );
HXLINE(  69)				if (left) {
HXLINE(  70)					newAngle = (newAngle - ( (Float)(45) ));
            				}
            				else {
HXLINE(  71)					if (right) {
HXLINE(  72)						newAngle = (newAngle + 45);
            					}
            				}
HXLINE(  73)				this->set_facing(256);
            			}
            			else {
HXLINE(  75)				if (down) {
HXLINE(  77)					newAngle = ( (Float)(90) );
HXLINE(  78)					if (left) {
HXLINE(  79)						newAngle = (newAngle + 45);
            					}
            					else {
HXLINE(  80)						if (right) {
HXLINE(  81)							newAngle = (newAngle - ( (Float)(45) ));
            						}
            					}
HXLINE(  82)					this->set_facing(4096);
            				}
            				else {
HXLINE(  84)					if (left) {
HXLINE(  86)						newAngle = ( (Float)(180) );
HXLINE(  87)						this->set_facing(1);
            					}
            					else {
HXLINE(  89)						if (right) {
HXLINE(  91)							newAngle = ( (Float)(0) );
HXLINE(  92)							this->set_facing(16);
            						}
            					}
            				}
            			}
HXLINE(  95)			this->velocity->set(((Float)200),0);
HXLINE(  96)			 ::flixel::math::FlxPoint _hx_tmp = this->velocity;
HXDLIN(  96)			 ::flixel::math::FlxPoint point = ::flixel::math::FlxPoint_obj::_pool->get()->set(0,0);
HXDLIN(  96)			point->_inPool = false;
HXDLIN(  96)			 ::flixel::math::FlxPoint point1 = point;
HXDLIN(  96)			point1->_weak = true;
HXDLIN(  96)			_hx_tmp->rotate(point1,newAngle);
HXLINE(  99)			bool _hx_tmp1;
HXDLIN(  99)			bool _hx_tmp2;
HXDLIN(  99)			if ((this->velocity->x == 0)) {
HXLINE(  99)				_hx_tmp2 = (this->velocity->y != 0);
            			}
            			else {
HXLINE(  99)				_hx_tmp2 = true;
            			}
HXDLIN(  99)			if (_hx_tmp2) {
HXLINE(  99)				_hx_tmp1 = (this->touching == 0);
            			}
            			else {
HXLINE(  99)				_hx_tmp1 = false;
            			}
HXDLIN(  99)			if (_hx_tmp1) {
HXLINE( 101)				this->stepSound->play(null(),null(),null());
HXLINE( 103)				switch((int)(this->facing)){
            					case (int)1: case (int)16: {
HXLINE( 106)						this->animation->play(HX_("lr",86,5e,00,00),null(),null(),null());
            					}
            					break;
            					case (int)256: {
HXLINE( 108)						this->animation->play(HX_("u",75,00,00,00),null(),null(),null());
            					}
            					break;
            					case (int)4096: {
HXLINE( 110)						this->animation->play(HX_("d",64,00,00,00),null(),null(),null());
            					}
            					break;
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Player_obj,updateMovement,(void))

void Player_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_9d6b32c958ffa4d3_117_update)
HXLINE( 118)		this->updateMovement();
HXLINE( 119)		this->super::update(elapsed);
            	}


Float Player_obj::SPEED;


::hx::ObjectPtr< Player_obj > Player_obj::__new(::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y) {
	::hx::ObjectPtr< Player_obj > __this = new Player_obj();
	__this->__construct(__o_x,__o_y);
	return __this;
}

::hx::ObjectPtr< Player_obj > Player_obj::__alloc(::hx::Ctx *_hx_ctx,::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y) {
	Player_obj *__this = (Player_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Player_obj), true, "Player"));
	*(void **)__this = Player_obj::_hx_vtable;
	__this->__construct(__o_x,__o_y);
	return __this;
}

Player_obj::Player_obj()
{
}

void Player_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Player);
	HX_MARK_MEMBER_NAME(stepSound,"stepSound");
	 ::flixel::FlxSprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Player_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(stepSound,"stepSound");
	 ::flixel::FlxSprite_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val Player_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"stepSound") ) { return ::hx::Val( stepSound ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"updateMovement") ) { return ::hx::Val( updateMovement_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Player_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"stepSound") ) { stepSound=inValue.Cast<  ::flixel::_hx_system::FlxSound >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Player_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("stepSound",e3,21,38,f1));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Player_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::flixel::_hx_system::FlxSound */ ,(int)offsetof(Player_obj,stepSound),HX_("stepSound",e3,21,38,f1)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo Player_obj_sStaticStorageInfo[] = {
	{::hx::fsFloat,(void *) &Player_obj::SPEED,HX_("SPEED",67,cf,57,ff)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String Player_obj_sMemberFields[] = {
	HX_("stepSound",e3,21,38,f1),
	HX_("updateMovement",58,78,61,35),
	HX_("update",09,86,05,87),
	::String(null()) };

static void Player_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Player_obj::SPEED,"SPEED");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Player_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Player_obj::SPEED,"SPEED");
};

#endif

::hx::Class Player_obj::__mClass;

static ::String Player_obj_sStaticFields[] = {
	HX_("SPEED",67,cf,57,ff),
	::String(null())
};

void Player_obj::__register()
{
	Player_obj _hx_dummy;
	Player_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("Player",81,5f,4d,6c);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Player_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Player_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Player_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Player_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Player_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Player_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Player_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Player_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_9d6b32c958ffa4d3_12_boot)
HXDLIN(  12)		SPEED = ((Float)200);
            	}
}

