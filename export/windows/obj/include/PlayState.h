#ifndef INCLUDED_PlayState
#define INCLUDED_PlayState

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
HX_DECLARE_CLASS0(Coin)
HX_DECLARE_CLASS0(CombatHUD)
HX_DECLARE_CLASS0(Enemy)
HX_DECLARE_CLASS0(HUD)
HX_DECLARE_CLASS0(PlayState)
HX_DECLARE_CLASS0(Player)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS1(flixel,FlxState)
HX_DECLARE_CLASS4(flixel,addons,editors,ogmo,FlxOgmo3Loader)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,_hx_system,FlxSound)
HX_DECLARE_CLASS2(flixel,tile,FlxBaseTilemap)
HX_DECLARE_CLASS2(flixel,tile,FlxTilemap)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)



class HXCPP_CLASS_ATTRIBUTES PlayState_obj : public  ::flixel::FlxState_obj
{
	public:
		typedef  ::flixel::FlxState_obj super;
		typedef PlayState_obj OBJ_;
		PlayState_obj();

	public:
		enum { _hx_ClassId = 0x0a05f89d };

		void __construct( ::Dynamic MaxSize);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="PlayState")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"PlayState"); }
		static ::hx::ObjectPtr< PlayState_obj > __new( ::Dynamic MaxSize);
		static ::hx::ObjectPtr< PlayState_obj > __alloc(::hx::Ctx *_hx_ctx, ::Dynamic MaxSize);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~PlayState_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("PlayState",5d,83,c2,46); }

		bool ending;
		bool won;
		 ::Player player;
		 ::flixel::addons::editors::ogmo::FlxOgmo3Loader map;
		 ::flixel::tile::FlxTilemap walls;
		 ::flixel::group::FlxTypedGroup coins;
		 ::flixel::group::FlxTypedGroup enemies;
		 ::HUD hud;
		int money;
		int health;
		bool inCombat;
		 ::CombatHUD combatHud;
		 ::flixel::_hx_system::FlxSound coinSound;
		void create();

		void placeEntities( ::Dynamic entity);
		::Dynamic placeEntities_dyn();

		void update(Float elapsed);

		void checkEnemyVision( ::Enemy enemy);
		::Dynamic checkEnemyVision_dyn();

		void playerTouchCoin( ::Player player, ::Coin coin);
		::Dynamic playerTouchCoin_dyn();

		void playerTouchEnemy( ::Player player, ::Enemy enemy);
		::Dynamic playerTouchEnemy_dyn();

		void startCombat( ::Enemy enemy);
		::Dynamic startCombat_dyn();

		void doneFadeOut();
		::Dynamic doneFadeOut_dyn();

};


#endif /* INCLUDED_PlayState */ 
