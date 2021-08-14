#ifndef INCLUDED_Enemy
#define INCLUDED_Enemy

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
HX_DECLARE_CLASS0(Enemy)
HX_DECLARE_CLASS0(EnemyType)
HX_DECLARE_CLASS0(FMS)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS2(flixel,math,FlxPoint)
HX_DECLARE_CLASS2(flixel,_hx_system,FlxSound)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,util,IFlxPooled)



class HXCPP_CLASS_ATTRIBUTES Enemy_obj : public  ::flixel::FlxSprite_obj
{
	public:
		typedef  ::flixel::FlxSprite_obj super;
		typedef Enemy_obj OBJ_;
		Enemy_obj();

	public:
		enum { _hx_ClassId = 0x4fa17fa0 };

		void __construct(Float x,Float y, ::EnemyType type);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="Enemy")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"Enemy"); }
		static ::hx::ObjectPtr< Enemy_obj > __new(Float x,Float y, ::EnemyType type);
		static ::hx::ObjectPtr< Enemy_obj > __alloc(::hx::Ctx *_hx_ctx,Float x,Float y, ::EnemyType type);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Enemy_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Enemy",28,82,a8,03); }

		static void __boot();
		static Float SPEED;
		 ::FMS brain;
		Float idleTimer;
		Float moveDirection;
		 ::EnemyType type;
		bool seesPlayer;
		 ::flixel::math::FlxPoint playerPosition;
		 ::flixel::_hx_system::FlxSound stepSound;
		void update(Float elapsed);

		void idle(Float elapsed);
		::Dynamic idle_dyn();

		void chase(Float elapsed);
		::Dynamic chase_dyn();

		void changeType( ::EnemyType type);
		::Dynamic changeType_dyn();

};


#endif /* INCLUDED_Enemy */ 
