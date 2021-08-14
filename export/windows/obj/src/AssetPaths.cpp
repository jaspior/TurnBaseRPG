#include <hxcpp.h>

#ifndef INCLUDED_AssetPaths
#include <AssetPaths.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_a71b198b2cf5b646_30_boot,"AssetPaths","boot",0x7f6e2362,"AssetPaths.boot","flixel/system/macros/FlxAssetPaths.hx",30,0x71054749)

void AssetPaths_obj::__construct() { }

Dynamic AssetPaths_obj::__CreateEmpty() { return new AssetPaths_obj; }

void *AssetPaths_obj::_hx_vtable = 0;

Dynamic AssetPaths_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< AssetPaths_obj > _hx_result = new AssetPaths_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool AssetPaths_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x78a931fe;
}

::String AssetPaths_obj::data_goes_here__txt;

::String AssetPaths_obj::room_001__json;

::String AssetPaths_obj::turnBaseRPG__ogmo;

::String AssetPaths_obj::boss__png;

::String AssetPaths_obj::button__png;

::String AssetPaths_obj::coin__png;

::String AssetPaths_obj::enemy__png;

::String AssetPaths_obj::health__png;

::String AssetPaths_obj::images_go_here__txt;

::String AssetPaths_obj::info__txt;

::String AssetPaths_obj::player__png;

::String AssetPaths_obj::pointer__png;

::String AssetPaths_obj::tiles__png;

::String AssetPaths_obj::HaxeFlixel_Tutorial_Game__ogg;

::String AssetPaths_obj::music_goes_here__txt;

::String AssetPaths_obj::coin__wav;

::String AssetPaths_obj::combat__wav;

::String AssetPaths_obj::fled__wav;

::String AssetPaths_obj::hurt__wav;

::String AssetPaths_obj::lose__wav;

::String AssetPaths_obj::miss__wav;

::String AssetPaths_obj::select__wav;

::String AssetPaths_obj::sounds_go_here__txt;

::String AssetPaths_obj::step__wav;

::String AssetPaths_obj::Tutorials_TurnBasedRPG_assets_sounds_combat__wav;

::String AssetPaths_obj::win__wav;


AssetPaths_obj::AssetPaths_obj()
{
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *AssetPaths_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo AssetPaths_obj_sStaticStorageInfo[] = {
	{::hx::fsString,(void *) &AssetPaths_obj::data_goes_here__txt,HX_("data_goes_here__txt",ec,22,23,e8)},
	{::hx::fsString,(void *) &AssetPaths_obj::room_001__json,HX_("room_001__json",d5,af,b1,dd)},
	{::hx::fsString,(void *) &AssetPaths_obj::turnBaseRPG__ogmo,HX_("turnBaseRPG__ogmo",35,1d,aa,f6)},
	{::hx::fsString,(void *) &AssetPaths_obj::boss__png,HX_("boss__png",bc,42,aa,28)},
	{::hx::fsString,(void *) &AssetPaths_obj::button__png,HX_("button__png",57,0e,af,ac)},
	{::hx::fsString,(void *) &AssetPaths_obj::coin__png,HX_("coin__png",58,3a,fc,5b)},
	{::hx::fsString,(void *) &AssetPaths_obj::enemy__png,HX_("enemy__png",41,66,07,1a)},
	{::hx::fsString,(void *) &AssetPaths_obj::health__png,HX_("health__png",6d,df,86,a5)},
	{::hx::fsString,(void *) &AssetPaths_obj::images_go_here__txt,HX_("images_go_here__txt",70,18,1f,93)},
	{::hx::fsString,(void *) &AssetPaths_obj::info__txt,HX_("info__txt",22,48,10,fe)},
	{::hx::fsString,(void *) &AssetPaths_obj::player__png,HX_("player__png",88,f2,e2,65)},
	{::hx::fsString,(void *) &AssetPaths_obj::pointer__png,HX_("pointer__png",ac,2f,2b,00)},
	{::hx::fsString,(void *) &AssetPaths_obj::tiles__png,HX_("tiles__png",e4,9d,3e,1d)},
	{::hx::fsString,(void *) &AssetPaths_obj::HaxeFlixel_Tutorial_Game__ogg,HX_("HaxeFlixel_Tutorial_Game__ogg",f9,3a,70,ec)},
	{::hx::fsString,(void *) &AssetPaths_obj::music_goes_here__txt,HX_("music_goes_here__txt",d1,aa,c8,0f)},
	{::hx::fsString,(void *) &AssetPaths_obj::coin__wav,HX_("coin__wav",db,7e,01,5c)},
	{::hx::fsString,(void *) &AssetPaths_obj::combat__wav,HX_("combat__wav",58,b5,a5,01)},
	{::hx::fsString,(void *) &AssetPaths_obj::fled__wav,HX_("fled__wav",c7,ec,56,83)},
	{::hx::fsString,(void *) &AssetPaths_obj::hurt__wav,HX_("hurt__wav",9d,8f,4c,ae)},
	{::hx::fsString,(void *) &AssetPaths_obj::lose__wav,HX_("lose__wav",17,94,1e,cd)},
	{::hx::fsString,(void *) &AssetPaths_obj::miss__wav,HX_("miss__wav",90,5d,e0,e1)},
	{::hx::fsString,(void *) &AssetPaths_obj::select__wav,HX_("select__wav",90,95,74,b8)},
	{::hx::fsString,(void *) &AssetPaths_obj::sounds_go_here__txt,HX_("sounds_go_here__txt",e4,a8,cb,02)},
	{::hx::fsString,(void *) &AssetPaths_obj::step__wav,HX_("step__wav",40,27,75,cf)},
	{::hx::fsString,(void *) &AssetPaths_obj::Tutorials_TurnBasedRPG_assets_sounds_combat__wav,HX_("Tutorials_TurnBasedRPG_assets_sounds_combat__wav",97,66,8a,47)},
	{::hx::fsString,(void *) &AssetPaths_obj::win__wav,HX_("win__wav",70,74,39,92)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void AssetPaths_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AssetPaths_obj::data_goes_here__txt,"data_goes_here__txt");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::room_001__json,"room_001__json");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::turnBaseRPG__ogmo,"turnBaseRPG__ogmo");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::boss__png,"boss__png");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::button__png,"button__png");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::coin__png,"coin__png");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::enemy__png,"enemy__png");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::health__png,"health__png");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::images_go_here__txt,"images_go_here__txt");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::info__txt,"info__txt");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::player__png,"player__png");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::pointer__png,"pointer__png");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::tiles__png,"tiles__png");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::HaxeFlixel_Tutorial_Game__ogg,"HaxeFlixel_Tutorial_Game__ogg");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::music_goes_here__txt,"music_goes_here__txt");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::coin__wav,"coin__wav");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::combat__wav,"combat__wav");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::fled__wav,"fled__wav");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::hurt__wav,"hurt__wav");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::lose__wav,"lose__wav");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::miss__wav,"miss__wav");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::select__wav,"select__wav");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::sounds_go_here__txt,"sounds_go_here__txt");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::step__wav,"step__wav");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::Tutorials_TurnBasedRPG_assets_sounds_combat__wav,"Tutorials_TurnBasedRPG_assets_sounds_combat__wav");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::win__wav,"win__wav");
};

#ifdef HXCPP_VISIT_ALLOCS
static void AssetPaths_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::data_goes_here__txt,"data_goes_here__txt");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::room_001__json,"room_001__json");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::turnBaseRPG__ogmo,"turnBaseRPG__ogmo");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::boss__png,"boss__png");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::button__png,"button__png");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::coin__png,"coin__png");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::enemy__png,"enemy__png");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::health__png,"health__png");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::images_go_here__txt,"images_go_here__txt");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::info__txt,"info__txt");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::player__png,"player__png");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::pointer__png,"pointer__png");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::tiles__png,"tiles__png");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::HaxeFlixel_Tutorial_Game__ogg,"HaxeFlixel_Tutorial_Game__ogg");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::music_goes_here__txt,"music_goes_here__txt");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::coin__wav,"coin__wav");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::combat__wav,"combat__wav");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::fled__wav,"fled__wav");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::hurt__wav,"hurt__wav");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::lose__wav,"lose__wav");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::miss__wav,"miss__wav");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::select__wav,"select__wav");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::sounds_go_here__txt,"sounds_go_here__txt");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::step__wav,"step__wav");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::Tutorials_TurnBasedRPG_assets_sounds_combat__wav,"Tutorials_TurnBasedRPG_assets_sounds_combat__wav");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::win__wav,"win__wav");
};

#endif

::hx::Class AssetPaths_obj::__mClass;

static ::String AssetPaths_obj_sStaticFields[] = {
	HX_("data_goes_here__txt",ec,22,23,e8),
	HX_("room_001__json",d5,af,b1,dd),
	HX_("turnBaseRPG__ogmo",35,1d,aa,f6),
	HX_("boss__png",bc,42,aa,28),
	HX_("button__png",57,0e,af,ac),
	HX_("coin__png",58,3a,fc,5b),
	HX_("enemy__png",41,66,07,1a),
	HX_("health__png",6d,df,86,a5),
	HX_("images_go_here__txt",70,18,1f,93),
	HX_("info__txt",22,48,10,fe),
	HX_("player__png",88,f2,e2,65),
	HX_("pointer__png",ac,2f,2b,00),
	HX_("tiles__png",e4,9d,3e,1d),
	HX_("HaxeFlixel_Tutorial_Game__ogg",f9,3a,70,ec),
	HX_("music_goes_here__txt",d1,aa,c8,0f),
	HX_("coin__wav",db,7e,01,5c),
	HX_("combat__wav",58,b5,a5,01),
	HX_("fled__wav",c7,ec,56,83),
	HX_("hurt__wav",9d,8f,4c,ae),
	HX_("lose__wav",17,94,1e,cd),
	HX_("miss__wav",90,5d,e0,e1),
	HX_("select__wav",90,95,74,b8),
	HX_("sounds_go_here__txt",e4,a8,cb,02),
	HX_("step__wav",40,27,75,cf),
	HX_("Tutorials_TurnBasedRPG_assets_sounds_combat__wav",97,66,8a,47),
	HX_("win__wav",70,74,39,92),
	::String(null())
};

void AssetPaths_obj::__register()
{
	AssetPaths_obj _hx_dummy;
	AssetPaths_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("AssetPaths",3e,0f,e6,60);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = AssetPaths_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(AssetPaths_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< AssetPaths_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = AssetPaths_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = AssetPaths_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = AssetPaths_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void AssetPaths_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_a71b198b2cf5b646_30_boot)
HXDLIN(  30)		data_goes_here__txt = HX_("assets/data/data-goes-here.txt",5f,4b,b2,8e);
            	}
{
            	HX_STACKFRAME(&_hx_pos_a71b198b2cf5b646_30_boot)
HXDLIN(  30)		room_001__json = HX_("assets/data/room-001.json",9e,bc,95,49);
            	}
{
            	HX_STACKFRAME(&_hx_pos_a71b198b2cf5b646_30_boot)
HXDLIN(  30)		turnBaseRPG__ogmo = HX_("assets/data/turnBaseRPG.ogmo",66,61,15,72);
            	}
{
            	HX_STACKFRAME(&_hx_pos_a71b198b2cf5b646_30_boot)
HXDLIN(  30)		boss__png = HX_("assets/images/boss.png",13,fa,25,fc);
            	}
{
            	HX_STACKFRAME(&_hx_pos_a71b198b2cf5b646_30_boot)
HXDLIN(  30)		button__png = HX_("assets/images/button.png",98,1b,b6,cd);
            	}
{
            	HX_STACKFRAME(&_hx_pos_a71b198b2cf5b646_30_boot)
HXDLIN(  30)		coin__png = HX_("assets/images/coin.png",f7,e9,c5,54);
            	}
{
            	HX_STACKFRAME(&_hx_pos_a71b198b2cf5b646_30_boot)
HXDLIN(  30)		enemy__png = HX_("assets/images/enemy.png",78,ee,d4,3b);
            	}
{
            	HX_STACKFRAME(&_hx_pos_a71b198b2cf5b646_30_boot)
HXDLIN(  30)		health__png = HX_("assets/images/health.png",42,7f,55,20);
            	}
{
            	HX_STACKFRAME(&_hx_pos_a71b198b2cf5b646_30_boot)
HXDLIN(  30)		images_go_here__txt = HX_("assets/images/images-go-here.txt",0d,1d,45,a6);
            	}
{
            	HX_STACKFRAME(&_hx_pos_a71b198b2cf5b646_30_boot)
HXDLIN(  30)		info__txt = HX_("assets/images/info.txt",1b,b1,b6,e2);
            	}
{
            	HX_STACKFRAME(&_hx_pos_a71b198b2cf5b646_30_boot)
HXDLIN(  30)		player__png = HX_("assets/images/player.png",87,88,81,c6);
            	}
{
            	HX_STACKFRAME(&_hx_pos_a71b198b2cf5b646_30_boot)
HXDLIN(  30)		pointer__png = HX_("assets/images/pointer.png",ad,e2,d4,86);
            	}
{
            	HX_STACKFRAME(&_hx_pos_a71b198b2cf5b646_30_boot)
HXDLIN(  30)		tiles__png = HX_("assets/images/tiles.png",35,bc,d1,f5);
            	}
{
            	HX_STACKFRAME(&_hx_pos_a71b198b2cf5b646_30_boot)
HXDLIN(  30)		HaxeFlixel_Tutorial_Game__ogg = HX_("assets/music/HaxeFlixel_Tutorial_Game.ogg",8d,56,76,f8);
            	}
{
            	HX_STACKFRAME(&_hx_pos_a71b198b2cf5b646_30_boot)
HXDLIN(  30)		music_goes_here__txt = HX_("assets/music/music-goes-here.txt",6b,32,60,47);
            	}
{
            	HX_STACKFRAME(&_hx_pos_a71b198b2cf5b646_30_boot)
HXDLIN(  30)		coin__wav = HX_("assets/sounds/coin.wav",ee,74,61,6a);
            	}
{
            	HX_STACKFRAME(&_hx_pos_a71b198b2cf5b646_30_boot)
HXDLIN(  30)		combat__wav = HX_("assets/sounds/combat.wav",d1,22,6e,57);
            	}
{
            	HX_STACKFRAME(&_hx_pos_a71b198b2cf5b646_30_boot)
HXDLIN(  30)		fled__wav = HX_("assets/sounds/fled.wav",82,28,c9,3d);
            	}
{
            	HX_STACKFRAME(&_hx_pos_a71b198b2cf5b646_30_boot)
HXDLIN(  30)		hurt__wav = HX_("assets/sounds/hurt.wav",6c,32,7c,8f);
            	}
{
            	HX_STACKFRAME(&_hx_pos_a71b198b2cf5b646_30_boot)
HXDLIN(  30)		lose__wav = HX_("assets/sounds/lose.wav",32,db,1d,3e);
            	}
{
            	HX_STACKFRAME(&_hx_pos_a71b198b2cf5b646_30_boot)
HXDLIN(  30)		miss__wav = HX_("assets/sounds/miss.wav",d9,a3,6b,8d);
            	}
{
            	HX_STACKFRAME(&_hx_pos_a71b198b2cf5b646_30_boot)
HXDLIN(  30)		select__wav = HX_("assets/sounds/select.wav",99,31,ec,2e);
            	}
{
            	HX_STACKFRAME(&_hx_pos_a71b198b2cf5b646_30_boot)
HXDLIN(  30)		sounds_go_here__txt = HX_("assets/sounds/sounds-go-here.txt",8d,b6,3d,a7);
            	}
{
            	HX_STACKFRAME(&_hx_pos_a71b198b2cf5b646_30_boot)
HXDLIN(  30)		step__wav = HX_("assets/sounds/step.wav",29,a0,d3,5a);
            	}
{
            	HX_STACKFRAME(&_hx_pos_a71b198b2cf5b646_30_boot)
HXDLIN(  30)		Tutorials_TurnBasedRPG_assets_sounds_combat__wav = HX_("assets/sounds/Tutorials_TurnBasedRPG_assets_sounds_combat.wav",54,0c,f7,ab);
            	}
{
            	HX_STACKFRAME(&_hx_pos_a71b198b2cf5b646_30_boot)
HXDLIN(  30)		win__wav = HX_("assets/sounds/win.wav",9b,6f,bc,c5);
            	}
}

