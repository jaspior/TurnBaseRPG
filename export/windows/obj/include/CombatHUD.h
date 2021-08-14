#ifndef INCLUDED_CombatHUD
#define INCLUDED_CombatHUD

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
HX_DECLARE_CLASS0(Choice)
HX_DECLARE_CLASS0(CombatHUD)
HX_DECLARE_CLASS0(Enemy)
HX_DECLARE_CLASS0(Outcome)
HX_DECLARE_CLASS0(Player)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,_hx_system,FlxSound)
HX_DECLARE_CLASS2(flixel,text,FlxText)
HX_DECLARE_CLASS2(flixel,tweens,FlxTween)
HX_DECLARE_CLASS2(flixel,ui,FlxBar)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,BalancedTree)
HX_DECLARE_CLASS2(haxe,ds,EnumValueMap)



class HXCPP_CLASS_ATTRIBUTES CombatHUD_obj : public  ::flixel::group::FlxTypedGroup_obj
{
	public:
		typedef  ::flixel::group::FlxTypedGroup_obj super;
		typedef CombatHUD_obj OBJ_;
		CombatHUD_obj();

	public:
		enum { _hx_ClassId = 0x7e771c1f };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="CombatHUD")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"CombatHUD"); }
		static ::hx::ObjectPtr< CombatHUD_obj > __new();
		static ::hx::ObjectPtr< CombatHUD_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~CombatHUD_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("CombatHUD",c3,d4,6c,0c); }

		 ::Enemy enemy;
		int playerHealth;
		 ::Outcome outcome;
		 ::flixel::FlxSprite background;
		 ::Player playerSprite;
		 ::Enemy enemySprite;
		int enemyHealth;
		int enemyMaxHealth;
		 ::flixel::ui::FlxBar enemyHealthBar;
		 ::flixel::text::FlxText playerHealthCounter;
		::Array< ::Dynamic> damages;
		 ::flixel::FlxSprite pointer;
		 ::Choice selected;
		 ::haxe::ds::EnumValueMap choices;
		 ::flixel::text::FlxText results;
		Float alpha;
		bool wait;
		 ::flixel::_hx_system::FlxSound fledSound;
		 ::flixel::_hx_system::FlxSound hurtSound;
		 ::flixel::_hx_system::FlxSound loseSound;
		 ::flixel::_hx_system::FlxSound missSound;
		 ::flixel::_hx_system::FlxSound selectSound;
		 ::flixel::_hx_system::FlxSound winSound;
		 ::flixel::_hx_system::FlxSound combatSound;
		 ::flixel::FlxSprite screen;
		void initCombat(int playerHealth, ::Enemy enemy);
		::Dynamic initCombat_dyn();

		void updateAlpha(Float alpha);
		::Dynamic updateAlpha_dyn();

		void finishFadeIn( ::flixel::tweens::FlxTween _);
		::Dynamic finishFadeIn_dyn();

		void finishFadeOut( ::flixel::tweens::FlxTween _);
		::Dynamic finishFadeOut_dyn();

		void updatePlayerHealth();
		::Dynamic updatePlayerHealth_dyn();

		void update(Float elapsed);

		void updateKeyboardInput();
		::Dynamic updateKeyboardInput_dyn();

		void updateTouchInput();
		::Dynamic updateTouchInput_dyn();

		void movePointer();
		::Dynamic movePointer_dyn();

		void makeChoice();
		::Dynamic makeChoice_dyn();

		void enemyAttack();
		::Dynamic enemyAttack_dyn();

		void updateDamageY(Float damageY);
		::Dynamic updateDamageY_dyn();

		void updateDamageAlpha(Float damageAlpha);
		::Dynamic updateDamageAlpha_dyn();

		void doneDamageIn( ::flixel::tweens::FlxTween _);
		::Dynamic doneDamageIn_dyn();

		void doneResultsIn( ::flixel::tweens::FlxTween _);
		::Dynamic doneResultsIn_dyn();

		void doneDamageOut( ::flixel::tweens::FlxTween _);
		::Dynamic doneDamageOut_dyn();

};


#endif /* INCLUDED_CombatHUD */ 
