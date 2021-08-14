#include <hxcpp.h>

#ifndef INCLUDED_HUD
#include <HUD.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
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
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_text_FlxText
#include <flixel/text/FlxText.h>
#endif
#ifndef INCLUDED_flixel_text_FlxTextBorderStyle
#include <flixel/text/FlxTextBorderStyle.h>
#endif
#ifndef INCLUDED_flixel_util_FlxSpriteUtil
#include <flixel/util/FlxSpriteUtil.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_f77237052cf31132_40_new,"HUD","new",0xf45a2509,"HUD.new","HUD.hx",40,0xe7d70e87)
HX_DEFINE_STACK_FRAME(_hx_pos_f77237052cf31132_22_new,"HUD","new",0xf45a2509,"HUD.new","HUD.hx",22,0xe7d70e87)
HX_LOCAL_STACK_FRAME(_hx_pos_f77237052cf31132_44_updateHUD,"HUD","updateHUD",0xbe04cb97,"HUD.updateHUD","HUD.hx",44,0xe7d70e87)

void HUD_obj::__construct(){
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(1)
            		void _hx_run( ::flixel::FlxSprite sprite){
            			HX_GC_STACKFRAME(&_hx_pos_f77237052cf31132_40_new)
HXLINE(  40)			sprite->scrollFactor->set(0,0);
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_GC_STACKFRAME(&_hx_pos_f77237052cf31132_22_new)
HXLINE(  23)		super::__construct(null());
HXLINE(  25)		this->background =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,null(),null(),null())->makeGraphic(::flixel::FlxG_obj::width,20,-16777216,null(),null());
HXLINE(  26)		::flixel::util::FlxSpriteUtil_obj::drawRect(this->background,( (Float)(0) ),( (Float)(19) ),( (Float)(::flixel::FlxG_obj::width) ),( (Float)(1) ),-1,null(),null());
HXLINE(  27)		this->healthCounter =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,16,2,0,HX_("3 / 3",95,2f,ba,72),8,null());
HXLINE(  28)		{
HXLINE(  28)			 ::flixel::text::FlxText _this = this->healthCounter;
HXDLIN(  28)			_this->set_borderStyle(::flixel::text::FlxTextBorderStyle_obj::SHADOW_dyn());
HXDLIN(  28)			_this->set_borderColor(-8355712);
HXDLIN(  28)			_this->set_borderSize(( (Float)(1) ));
HXDLIN(  28)			_this->set_borderQuality(( (Float)(1) ));
            		}
HXLINE(  29)		this->moneyCounter =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,0,2,0,HX_("0",30,00,00,00),8,null());
HXLINE(  30)		{
HXLINE(  30)			 ::flixel::text::FlxText _this1 = this->moneyCounter;
HXDLIN(  30)			_this1->set_borderStyle(::flixel::text::FlxTextBorderStyle_obj::SHADOW_dyn());
HXDLIN(  30)			_this1->set_borderColor(-8355712);
HXDLIN(  30)			_this1->set_borderSize(( (Float)(1) ));
HXDLIN(  30)			_this1->set_borderQuality(( (Float)(1) ));
            		}
HXLINE(  31)		Float _hx_tmp = this->healthCounter->y;
HXDLIN(  31)		this->healthIcon =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,4,((_hx_tmp + (this->healthCounter->get_height() / ( (Float)(2) ))) - ( (Float)(4) )),HX_("assets/images/health.png",42,7f,55,20));
HXLINE(  32)		int _hx_tmp1 = (::flixel::FlxG_obj::width - 12);
HXDLIN(  32)		Float _hx_tmp2 = this->moneyCounter->y;
HXDLIN(  32)		this->moneyIcon =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,_hx_tmp1,((_hx_tmp2 + (this->moneyCounter->get_height() / ( (Float)(2) ))) - ( (Float)(4) )),HX_("assets/images/coin.png",f7,e9,c5,54));
HXLINE(  33)		this->moneyCounter->set_alignment(HX_("right",dc,0b,64,e9));
HXLINE(  34)		 ::flixel::text::FlxText _hx_tmp3 = this->moneyCounter;
HXDLIN(  34)		Float _hx_tmp4 = this->moneyIcon->x;
HXDLIN(  34)		_hx_tmp3->set_x(((_hx_tmp4 - this->moneyCounter->get_width()) - ( (Float)(4) )));
HXLINE(  35)		this->add(this->background);
HXLINE(  36)		this->add(this->healthIcon);
HXLINE(  37)		this->add(this->moneyIcon);
HXLINE(  38)		this->add(this->healthCounter);
HXLINE(  39)		this->add(this->moneyCounter);
HXLINE(  40)		this->forEach( ::Dynamic(new _hx_Closure_0()),null());
            	}

Dynamic HUD_obj::__CreateEmpty() { return new HUD_obj; }

void *HUD_obj::_hx_vtable = 0;

Dynamic HUD_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< HUD_obj > _hx_result = new HUD_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool HUD_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x7ccf8994) {
		if (inClassId<=(int)0x62817b24) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x62817b24;
		} else {
			return inClassId==(int)0x7ccf8994;
		}
	} else {
		return inClassId==(int)0x7edb312b;
	}
}

void HUD_obj::updateHUD(int health,int money){
            	HX_STACKFRAME(&_hx_pos_f77237052cf31132_44_updateHUD)
HXLINE(  45)		this->healthCounter->set_text((health + HX_("/3",24,29,00,00)));
HXLINE(  46)		 ::flixel::text::FlxText _hx_tmp = this->moneyCounter;
HXDLIN(  46)		_hx_tmp->set_text(::Std_obj::string(money));
HXLINE(  47)		 ::flixel::text::FlxText _hx_tmp1 = this->moneyCounter;
HXDLIN(  47)		Float _hx_tmp2 = this->moneyIcon->x;
HXDLIN(  47)		_hx_tmp1->set_x(((_hx_tmp2 - this->moneyCounter->get_width()) - ( (Float)(4) )));
            	}


HX_DEFINE_DYNAMIC_FUNC2(HUD_obj,updateHUD,(void))


::hx::ObjectPtr< HUD_obj > HUD_obj::__new() {
	::hx::ObjectPtr< HUD_obj > __this = new HUD_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< HUD_obj > HUD_obj::__alloc(::hx::Ctx *_hx_ctx) {
	HUD_obj *__this = (HUD_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(HUD_obj), true, "HUD"));
	*(void **)__this = HUD_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

HUD_obj::HUD_obj()
{
}

void HUD_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(HUD);
	HX_MARK_MEMBER_NAME(background,"background");
	HX_MARK_MEMBER_NAME(healthCounter,"healthCounter");
	HX_MARK_MEMBER_NAME(moneyCounter,"moneyCounter");
	HX_MARK_MEMBER_NAME(healthIcon,"healthIcon");
	HX_MARK_MEMBER_NAME(moneyIcon,"moneyIcon");
	 ::flixel::group::FlxTypedGroup_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void HUD_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(background,"background");
	HX_VISIT_MEMBER_NAME(healthCounter,"healthCounter");
	HX_VISIT_MEMBER_NAME(moneyCounter,"moneyCounter");
	HX_VISIT_MEMBER_NAME(healthIcon,"healthIcon");
	HX_VISIT_MEMBER_NAME(moneyIcon,"moneyIcon");
	 ::flixel::group::FlxTypedGroup_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val HUD_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"moneyIcon") ) { return ::hx::Val( moneyIcon ); }
		if (HX_FIELD_EQ(inName,"updateHUD") ) { return ::hx::Val( updateHUD_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"background") ) { return ::hx::Val( background ); }
		if (HX_FIELD_EQ(inName,"healthIcon") ) { return ::hx::Val( healthIcon ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"moneyCounter") ) { return ::hx::Val( moneyCounter ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"healthCounter") ) { return ::hx::Val( healthCounter ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val HUD_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"moneyIcon") ) { moneyIcon=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"background") ) { background=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"healthIcon") ) { healthIcon=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"moneyCounter") ) { moneyCounter=inValue.Cast<  ::flixel::text::FlxText >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"healthCounter") ) { healthCounter=inValue.Cast<  ::flixel::text::FlxText >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void HUD_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("background",ee,93,1d,26));
	outFields->push(HX_("healthCounter",c0,39,f7,f6));
	outFields->push(HX_("moneyCounter",9c,e4,b2,ab));
	outFields->push(HX_("healthIcon",35,ba,48,02));
	outFields->push(HX_("moneyIcon",d9,ed,f5,b9));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo HUD_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(HUD_obj,background),HX_("background",ee,93,1d,26)},
	{::hx::fsObject /*  ::flixel::text::FlxText */ ,(int)offsetof(HUD_obj,healthCounter),HX_("healthCounter",c0,39,f7,f6)},
	{::hx::fsObject /*  ::flixel::text::FlxText */ ,(int)offsetof(HUD_obj,moneyCounter),HX_("moneyCounter",9c,e4,b2,ab)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(HUD_obj,healthIcon),HX_("healthIcon",35,ba,48,02)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(HUD_obj,moneyIcon),HX_("moneyIcon",d9,ed,f5,b9)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *HUD_obj_sStaticStorageInfo = 0;
#endif

static ::String HUD_obj_sMemberFields[] = {
	HX_("background",ee,93,1d,26),
	HX_("healthCounter",c0,39,f7,f6),
	HX_("moneyCounter",9c,e4,b2,ab),
	HX_("healthIcon",35,ba,48,02),
	HX_("moneyIcon",d9,ed,f5,b9),
	HX_("updateHUD",2e,12,dc,82),
	::String(null()) };

::hx::Class HUD_obj::__mClass;

void HUD_obj::__register()
{
	HUD_obj _hx_dummy;
	HUD_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("HUD",97,ec,36,00);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(HUD_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< HUD_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = HUD_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = HUD_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

