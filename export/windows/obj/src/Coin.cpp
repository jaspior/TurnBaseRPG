#include <hxcpp.h>

#ifndef INCLUDED_Coin
#include <Coin.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_tweens_FlxEase
#include <flixel/tweens/FlxEase.h>
#endif
#ifndef INCLUDED_flixel_tweens_FlxTween
#include <flixel/tweens/FlxTween.h>
#endif
#ifndef INCLUDED_flixel_tweens_misc_VarTween
#include <flixel/tweens/misc/VarTween.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_09010fb71e803ec8_10_new,"Coin","new",0x704aaf23,"Coin.new","Coin.hx",10,0x01a6c5ad)
HX_LOCAL_STACK_FRAME(_hx_pos_09010fb71e803ec8_16_kill,"Coin","kill",0xcf15eb7b,"Coin.kill","Coin.hx",16,0x01a6c5ad)
HX_LOCAL_STACK_FRAME(_hx_pos_09010fb71e803ec8_23_finishKill,"Coin","finishKill",0x3e72412e,"Coin.finishKill","Coin.hx",23,0x01a6c5ad)

void Coin_obj::__construct(Float x,Float y){
            	HX_STACKFRAME(&_hx_pos_09010fb71e803ec8_10_new)
HXLINE(  11)		super::__construct(x,y,null());
HXLINE(  12)		this->loadGraphic(HX_("assets/images/coin.png",f7,e9,c5,54),false,8,8,null(),null());
            	}

Dynamic Coin_obj::__CreateEmpty() { return new Coin_obj; }

void *Coin_obj::_hx_vtable = 0;

Dynamic Coin_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Coin_obj > _hx_result = new Coin_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool Coin_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x2c01639b) {
		if (inClassId<=(int)0x00f0d7d5) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x00f0d7d5;
		} else {
			return inClassId==(int)0x2c01639b;
		}
	} else {
		return inClassId==(int)0x7ccf8994 || inClassId==(int)0x7dab0655;
	}
}

void Coin_obj::kill(){
            	HX_STACKFRAME(&_hx_pos_09010fb71e803ec8_16_kill)
HXLINE(  17)		this->set_alive(false);
HXLINE(  18)		::flixel::tweens::FlxTween_obj::tween(::hx::ObjectPtr<OBJ_>(this), ::Dynamic(::hx::Anon_obj::Create(2)
            			->setFixed(0,HX_("y",79,00,00,00),(this->y - ( (Float)(16) )))
            			->setFixed(1,HX_("alpha",5e,a7,96,21),0)),((Float)0.33), ::Dynamic(::hx::Anon_obj::Create(2)
            			->setFixed(0,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::circOut_dyn())
            			->setFixed(1,HX_("onComplete",f8,d4,7e,5d),this->finishKill_dyn())));
            	}


void Coin_obj::finishKill( ::flixel::tweens::FlxTween _){
            	HX_STACKFRAME(&_hx_pos_09010fb71e803ec8_23_finishKill)
HXDLIN(  23)		this->set_exists(false);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Coin_obj,finishKill,(void))


::hx::ObjectPtr< Coin_obj > Coin_obj::__new(Float x,Float y) {
	::hx::ObjectPtr< Coin_obj > __this = new Coin_obj();
	__this->__construct(x,y);
	return __this;
}

::hx::ObjectPtr< Coin_obj > Coin_obj::__alloc(::hx::Ctx *_hx_ctx,Float x,Float y) {
	Coin_obj *__this = (Coin_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Coin_obj), true, "Coin"));
	*(void **)__this = Coin_obj::_hx_vtable;
	__this->__construct(x,y);
	return __this;
}

Coin_obj::Coin_obj()
{
}

::hx::Val Coin_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"kill") ) { return ::hx::Val( kill_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"finishKill") ) { return ::hx::Val( finishKill_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Coin_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *Coin_obj_sStaticStorageInfo = 0;
#endif

static ::String Coin_obj_sMemberFields[] = {
	HX_("kill",9e,df,09,47),
	HX_("finishKill",91,71,44,d3),
	::String(null()) };

::hx::Class Coin_obj::__mClass;

void Coin_obj::__register()
{
	Coin_obj _hx_dummy;
	Coin_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("Coin",b1,e1,9d,2c);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Coin_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Coin_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Coin_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Coin_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

