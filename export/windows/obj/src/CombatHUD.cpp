#include <hxcpp.h>

#ifndef INCLUDED_Choice
#include <Choice.h>
#endif
#ifndef INCLUDED_CombatHUD
#include <CombatHUD.h>
#endif
#ifndef INCLUDED_Enemy
#include <Enemy.h>
#endif
#ifndef INCLUDED_EnemyType
#include <EnemyType.h>
#endif
#ifndef INCLUDED_Outcome
#include <Outcome.h>
#endif
#ifndef INCLUDED_Player
#include <Player.h>
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
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_addons_effects_chainable_FlxEffectSprite
#include <flixel/addons/effects/chainable/FlxEffectSprite.h>
#endif
#ifndef INCLUDED_flixel_addons_effects_chainable_FlxWaveDirection
#include <flixel/addons/effects/chainable/FlxWaveDirection.h>
#endif
#ifndef INCLUDED_flixel_addons_effects_chainable_FlxWaveEffect
#include <flixel/addons/effects/chainable/FlxWaveEffect.h>
#endif
#ifndef INCLUDED_flixel_addons_effects_chainable_FlxWaveMode
#include <flixel/addons/effects/chainable/FlxWaveMode.h>
#endif
#ifndef INCLUDED_flixel_addons_effects_chainable_IFlxEffect
#include <flixel/addons/effects/chainable/IFlxEffect.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxAnimationController
#include <flixel/animation/FlxAnimationController.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
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
#ifndef INCLUDED_flixel_math_FlxRandom
#include <flixel/math/FlxRandom.h>
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
#ifndef INCLUDED_flixel_tweens_FlxEase
#include <flixel/tweens/FlxEase.h>
#endif
#ifndef INCLUDED_flixel_tweens_FlxTween
#include <flixel/tweens/FlxTween.h>
#endif
#ifndef INCLUDED_flixel_tweens_misc_NumTween
#include <flixel/tweens/misc/NumTween.h>
#endif
#ifndef INCLUDED_flixel_tweens_misc_VarTween
#include <flixel/tweens/misc/VarTween.h>
#endif
#ifndef INCLUDED_flixel_ui_FlxBar
#include <flixel/ui/FlxBar.h>
#endif
#ifndef INCLUDED_flixel_ui_FlxBarFillDirection
#include <flixel/ui/FlxBarFillDirection.h>
#endif
#ifndef INCLUDED_flixel_util_FlxAxes
#include <flixel/util/FlxAxes.h>
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
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_BalancedTree
#include <haxe/ds/BalancedTree.h>
#endif
#ifndef INCLUDED_haxe_ds_EnumValueMap
#include <haxe/ds/EnumValueMap.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
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
#ifndef INCLUDED_openfl_filters_BitmapFilter
#include <openfl/filters/BitmapFilter.h>
#endif
#ifndef INCLUDED_openfl_filters_ColorMatrixFilter
#include <openfl/filters/ColorMatrixFilter.h>
#endif
#ifndef INCLUDED_openfl_geom_ColorTransform
#include <openfl/geom/ColorTransform.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif
#ifndef INCLUDED_openfl_geom_Point
#include <openfl/geom/Point.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_94bd977f46f9a023_154_new,"CombatHUD","new",0x0b459335,"CombatHUD.new","CombatHUD.hx",154,0x215789db)
HX_DEFINE_STACK_FRAME(_hx_pos_94bd977f46f9a023_39_new,"CombatHUD","new",0x0b459335,"CombatHUD.new","CombatHUD.hx",39,0x215789db)
HX_LOCAL_STACK_FRAME(_hx_pos_94bd977f46f9a023_178_initCombat,"CombatHUD","initCombat",0x420edd2f,"CombatHUD.initCombat","CombatHUD.hx",178,0x215789db)
HX_LOCAL_STACK_FRAME(_hx_pos_94bd977f46f9a023_225_updateAlpha,"CombatHUD","updateAlpha",0x5f8f306a,"CombatHUD.updateAlpha","CombatHUD.hx",225,0x215789db)
HX_LOCAL_STACK_FRAME(_hx_pos_94bd977f46f9a023_223_updateAlpha,"CombatHUD","updateAlpha",0x5f8f306a,"CombatHUD.updateAlpha","CombatHUD.hx",223,0x215789db)
HX_LOCAL_STACK_FRAME(_hx_pos_94bd977f46f9a023_232_finishFadeIn,"CombatHUD","finishFadeIn",0xdde03bbf,"CombatHUD.finishFadeIn","CombatHUD.hx",232,0x215789db)
HX_LOCAL_STACK_FRAME(_hx_pos_94bd977f46f9a023_243_finishFadeOut,"CombatHUD","finishFadeOut",0x46589f74,"CombatHUD.finishFadeOut","CombatHUD.hx",243,0x215789db)
HX_LOCAL_STACK_FRAME(_hx_pos_94bd977f46f9a023_252_updatePlayerHealth,"CombatHUD","updatePlayerHealth",0x976fb751,"CombatHUD.updatePlayerHealth","CombatHUD.hx",252,0x215789db)
HX_LOCAL_STACK_FRAME(_hx_pos_94bd977f46f9a023_258_update,"CombatHUD","update",0xf0e37654,"CombatHUD.update","CombatHUD.hx",258,0x215789db)
HX_LOCAL_STACK_FRAME(_hx_pos_94bd977f46f9a023_268_updateKeyboardInput,"CombatHUD","updateKeyboardInput",0x9c6baeef,"CombatHUD.updateKeyboardInput","CombatHUD.hx",268,0x215789db)
static const int _hx_array_data_0c6cd4c3_11[] = {
	(int)32,(int)88,(int)13,
};
static const int _hx_array_data_0c6cd4c3_12[] = {
	(int)87,(int)38,
};
static const int _hx_array_data_0c6cd4c3_13[] = {
	(int)83,(int)40,
};
HX_LOCAL_STACK_FRAME(_hx_pos_94bd977f46f9a023_306_updateTouchInput,"CombatHUD","updateTouchInput",0x876dd33f,"CombatHUD.updateTouchInput","CombatHUD.hx",306,0x215789db)
HX_LOCAL_STACK_FRAME(_hx_pos_94bd977f46f9a023_331_movePointer,"CombatHUD","movePointer",0x81fe1981,"CombatHUD.movePointer","CombatHUD.hx",331,0x215789db)
HX_LOCAL_STACK_FRAME(_hx_pos_94bd977f46f9a023_338_makeChoice,"CombatHUD","makeChoice",0x892305ba,"CombatHUD.makeChoice","CombatHUD.hx",338,0x215789db)
HX_LOCAL_STACK_FRAME(_hx_pos_94bd977f46f9a023_353_makeChoice,"CombatHUD","makeChoice",0x892305ba,"CombatHUD.makeChoice","CombatHUD.hx",353,0x215789db)
HX_LOCAL_STACK_FRAME(_hx_pos_94bd977f46f9a023_412_enemyAttack,"CombatHUD","enemyAttack",0x20228805,"CombatHUD.enemyAttack","CombatHUD.hx",412,0x215789db)
HX_LOCAL_STACK_FRAME(_hx_pos_94bd977f46f9a023_443_updateDamageY,"CombatHUD","updateDamageY",0x1e0fb516,"CombatHUD.updateDamageY","CombatHUD.hx",443,0x215789db)
HX_LOCAL_STACK_FRAME(_hx_pos_94bd977f46f9a023_451_updateDamageAlpha,"CombatHUD","updateDamageAlpha",0x79796e7b,"CombatHUD.updateDamageAlpha","CombatHUD.hx",451,0x215789db)
HX_LOCAL_STACK_FRAME(_hx_pos_94bd977f46f9a023_459_doneDamageIn,"CombatHUD","doneDamageIn",0x0a5fc361,"CombatHUD.doneDamageIn","CombatHUD.hx",459,0x215789db)
HX_LOCAL_STACK_FRAME(_hx_pos_94bd977f46f9a023_467_doneResultsIn,"CombatHUD","doneResultsIn",0x5b1790ae,"CombatHUD.doneResultsIn","CombatHUD.hx",467,0x215789db)
HX_LOCAL_STACK_FRAME(_hx_pos_94bd977f46f9a023_475_doneDamageOut,"CombatHUD","doneDamageOut",0x096fc592,"CombatHUD.doneDamageOut","CombatHUD.hx",475,0x215789db)

void CombatHUD_obj::__construct(){
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(1)
            		void _hx_run( ::flixel::FlxSprite sprite){
            			HX_GC_STACKFRAME(&_hx_pos_94bd977f46f9a023_154_new)
HXLINE( 155)			sprite->scrollFactor->set(null(),null());
HXLINE( 156)			sprite->set_alpha(( (Float)(0) ));
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_GC_STACKFRAME(&_hx_pos_94bd977f46f9a023_39_new)
HXLINE(  67)		this->wait = true;
HXLINE(  66)		this->alpha = ((Float)0);
HXLINE(  81)		super::__construct(null());
HXLINE(  83)		this->screen =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,null(),null(),null())->makeGraphic(::flixel::FlxG_obj::width,::flixel::FlxG_obj::height,0,null(),null());
HXLINE(  84)		 ::flixel::addons::effects::chainable::FlxWaveEffect waveEffect =  ::flixel::addons::effects::chainable::FlxWaveEffect_obj::__alloc( HX_CTX ,::flixel::addons::effects::chainable::FlxWaveMode_obj::ALL_dyn(),4,-1,4,null(),null(),null());
HXLINE(  85)		 ::flixel::addons::effects::chainable::FlxEffectSprite waveSprite =  ::flixel::addons::effects::chainable::FlxEffectSprite_obj::__alloc( HX_CTX ,this->screen,::Array_obj< ::Dynamic>::__new(1)->init(0,waveEffect));
HXLINE(  86)		this->add(waveSprite);
HXLINE(  89)		this->background =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,null(),null(),null())->makeGraphic(120,120,-1,null(),null());
HXLINE(  90)		::flixel::util::FlxSpriteUtil_obj::drawRect(this->background,( (Float)(1) ),( (Float)(1) ),( (Float)(118) ),( (Float)(44) ),-16777216,null(),null());
HXLINE(  91)		::flixel::util::FlxSpriteUtil_obj::drawRect(this->background,( (Float)(1) ),( (Float)(46) ),( (Float)(118) ),( (Float)(73) ),-16777216,null(),null());
HXLINE(  92)		this->background->screenCenter(null());
HXLINE(  93)		this->add(this->background);
HXLINE(  96)		this->playerSprite =  ::Player_obj::__alloc( HX_CTX ,(this->background->x + 36),(this->background->y + 16));
HXLINE(  97)		this->playerSprite->animation->set_frameIndex(3);
HXLINE(  98)		this->playerSprite->set_active(false);
HXLINE(  99)		this->playerSprite->set_facing(16);
HXLINE( 100)		this->add(this->playerSprite);
HXLINE( 103)		this->enemySprite =  ::Enemy_obj::__alloc( HX_CTX ,(this->background->x + 76),(this->background->y + 16),::EnemyType_obj::REGULAR_dyn());
HXLINE( 104)		this->enemySprite->animation->set_frameIndex(3);
HXLINE( 105)		this->enemySprite->set_active(false);
HXLINE( 106)		this->enemySprite->set_facing(1);
HXLINE( 107)		this->add(this->enemySprite);
HXLINE( 110)		Float _hx_tmp = this->playerSprite->y;
HXDLIN( 110)		this->playerHealthCounter =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,0,((_hx_tmp + this->playerSprite->get_height()) + 2),0,HX_("3 / 3",95,2f,ba,72),8,null());
HXLINE( 111)		this->playerHealthCounter->set_alignment(HX_("center",d5,25,db,05));
HXLINE( 112)		 ::flixel::text::FlxText _hx_tmp1 = this->playerHealthCounter;
HXDLIN( 112)		Float _hx_tmp2 = (this->playerSprite->x + 4);
HXDLIN( 112)		_hx_tmp1->set_x((_hx_tmp2 - (this->playerHealthCounter->get_width() / ( (Float)(2) ))));
HXLINE( 113)		this->add(this->playerHealthCounter);
HXLINE( 116)		this->enemyHealthBar =  ::flixel::ui::FlxBar_obj::__alloc( HX_CTX ,(this->enemySprite->x - ( (Float)(6) )),this->playerHealthCounter->y,::flixel::ui::FlxBarFillDirection_obj::LEFT_TO_RIGHT_dyn(),20,10,null(),null(),null(),null(),null());
HXLINE( 117)		this->enemyHealthBar->createFilledBar(-2354116,-256,true,-256);
HXLINE( 118)		this->add(this->enemyHealthBar);
HXLINE( 121)		this->choices =  ::haxe::ds::EnumValueMap_obj::__alloc( HX_CTX );
HXLINE( 122)		{
HXLINE( 122)			::Dynamic this1 = this->choices;
HXDLIN( 122)			 ::flixel::text::FlxText v =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,(this->background->x + 30),(this->background->y + 48),85,HX_("FIGHT",b0,4d,83,7e),22,null());
HXDLIN( 122)			( ( ::haxe::ds::EnumValueMap)(this1) )->set(::Choice_obj::FIGHT_dyn(),v);
            		}
HXLINE( 123)		{
HXLINE( 123)			::Dynamic this2 = this->choices;
HXDLIN( 123)			Float v1 = (this->background->x + 30);
HXDLIN( 123)			Float v2 = this->choices->get(::Choice_obj::FIGHT_dyn()).StaticCast<  ::flixel::text::FlxText >()->y;
HXDLIN( 123)			 ::flixel::text::FlxText v3 =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,v1,((v2 + this->choices->get(::Choice_obj::FIGHT_dyn()).StaticCast<  ::flixel::text::FlxText >()->get_height()) + 8),85,HX_("FLEE",26,d7,7e,2e),22,null());
HXDLIN( 123)			( ( ::haxe::ds::EnumValueMap)(this2) )->set(::Choice_obj::FLEE_dyn(),v3);
            		}
HXLINE( 124)		this->add(this->choices->get(::Choice_obj::FIGHT_dyn()).StaticCast<  ::flixel::text::FlxText >());
HXLINE( 125)		this->add(this->choices->get(::Choice_obj::FLEE_dyn()).StaticCast<  ::flixel::text::FlxText >());
HXLINE( 127)		Float _hx_tmp3 = (this->background->x + 10);
HXDLIN( 127)		Float _hx_tmp4 = this->choices->get(::Choice_obj::FIGHT_dyn()).StaticCast<  ::flixel::text::FlxText >()->y;
HXDLIN( 127)		this->pointer =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,_hx_tmp3,((_hx_tmp4 + (this->choices->get(::Choice_obj::FIGHT_dyn()).StaticCast<  ::flixel::text::FlxText >()->get_height() / ( (Float)(2) ))) - ( (Float)(8) )),HX_("assets/images/pointer.png",ad,e2,d4,86));
HXLINE( 128)		this->pointer->set_visible(false);
HXLINE( 129)		this->add(this->pointer);
HXLINE( 132)		this->damages = ::Array_obj< ::Dynamic>::__new();
HXLINE( 133)		::Array< ::Dynamic> _hx_tmp5 = this->damages;
HXDLIN( 133)		_hx_tmp5->push( ::flixel::text::FlxText_obj::__alloc( HX_CTX ,0,0,40,null(),null(),null()));
HXLINE( 134)		::Array< ::Dynamic> _hx_tmp6 = this->damages;
HXDLIN( 134)		_hx_tmp6->push( ::flixel::text::FlxText_obj::__alloc( HX_CTX ,0,0,40,null(),null(),null()));
HXLINE( 135)		{
HXLINE( 135)			int _g = 0;
HXDLIN( 135)			::Array< ::Dynamic> _g1 = this->damages;
HXDLIN( 135)			while((_g < _g1->length)){
HXLINE( 135)				 ::flixel::text::FlxText d = _g1->__get(_g).StaticCast<  ::flixel::text::FlxText >();
HXDLIN( 135)				_g = (_g + 1);
HXLINE( 137)				d->set_color(-1);
HXLINE( 138)				{
HXLINE( 138)					d->set_borderStyle(::flixel::text::FlxTextBorderStyle_obj::SHADOW_dyn());
HXDLIN( 138)					d->set_borderColor(-65536);
HXDLIN( 138)					d->set_borderSize(( (Float)(1) ));
HXDLIN( 138)					d->set_borderQuality(( (Float)(1) ));
            				}
HXLINE( 139)				d->set_alignment(HX_("center",d5,25,db,05));
HXLINE( 140)				d->set_visible(false);
HXLINE( 141)				this->add(d);
            			}
            		}
HXLINE( 145)		this->results =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,(this->background->x + 2),(this->background->y + 9),116,HX_("",00,00,00,00),18,null());
HXLINE( 146)		this->results->set_alignment(HX_("center",d5,25,db,05));
HXLINE( 147)		this->results->set_color(-256);
HXLINE( 148)		{
HXLINE( 148)			 ::flixel::text::FlxText _this = this->results;
HXDLIN( 148)			_this->set_borderStyle(::flixel::text::FlxTextBorderStyle_obj::SHADOW_dyn());
HXDLIN( 148)			_this->set_borderColor(-8355712);
HXDLIN( 148)			_this->set_borderSize(( (Float)(1) ));
HXDLIN( 148)			_this->set_borderQuality(( (Float)(1) ));
            		}
HXLINE( 149)		this->results->set_visible(false);
HXLINE( 150)		this->add(this->results);
HXLINE( 153)		this->forEach( ::Dynamic(new _hx_Closure_0()),null());
HXLINE( 160)		this->set_active(false);
HXLINE( 161)		this->set_visible(false);
HXLINE( 163)		this->fledSound = ::flixel::FlxG_obj::sound->load(HX_("assets/sounds/fled.wav",82,28,c9,3d),null(),null(),null(),null(),null(),null(),null(),null());
HXLINE( 164)		this->hurtSound = ::flixel::FlxG_obj::sound->load(HX_("assets/sounds/hurt.wav",6c,32,7c,8f),null(),null(),null(),null(),null(),null(),null(),null());
HXLINE( 165)		this->loseSound = ::flixel::FlxG_obj::sound->load(HX_("assets/sounds/lose.wav",32,db,1d,3e),null(),null(),null(),null(),null(),null(),null(),null());
HXLINE( 166)		this->missSound = ::flixel::FlxG_obj::sound->load(HX_("assets/sounds/miss.wav",d9,a3,6b,8d),null(),null(),null(),null(),null(),null(),null(),null());
HXLINE( 167)		this->selectSound = ::flixel::FlxG_obj::sound->load(HX_("assets/sounds/select.wav",99,31,ec,2e),null(),null(),null(),null(),null(),null(),null(),null());
HXLINE( 168)		this->winSound = ::flixel::FlxG_obj::sound->load(HX_("assets/sounds/win.wav",9b,6f,bc,c5),null(),null(),null(),null(),null(),null(),null(),null());
HXLINE( 169)		this->combatSound = ::flixel::FlxG_obj::sound->load(HX_("assets/sounds/combat.wav",d1,22,6e,57),null(),null(),null(),null(),null(),null(),null(),null());
            	}

Dynamic CombatHUD_obj::__CreateEmpty() { return new CombatHUD_obj; }

void *CombatHUD_obj::_hx_vtable = 0;

Dynamic CombatHUD_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< CombatHUD_obj > _hx_result = new CombatHUD_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool CombatHUD_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x7ccf8994) {
		if (inClassId<=(int)0x62817b24) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x62817b24;
		} else {
			return inClassId==(int)0x7ccf8994;
		}
	} else {
		return inClassId==(int)0x7e771c1f;
	}
}

void CombatHUD_obj::initCombat(int playerHealth, ::Enemy enemy){
            	HX_GC_STACKFRAME(&_hx_pos_94bd977f46f9a023_178_initCombat)
HXLINE( 179)		this->screen->drawFrame(null());
HXLINE( 180)		 ::openfl::display::BitmapData screenPixels = this->screen->framePixels;
HXLINE( 182)		if (::flixel::FlxG_obj::renderBlit) {
HXLINE( 183)			 ::openfl::display::BitmapData _hx_tmp = ::flixel::FlxG_obj::camera->buffer;
HXDLIN( 183)			 ::openfl::geom::Rectangle _hx_tmp1 = ::flixel::FlxG_obj::camera->buffer->rect;
HXDLIN( 183)			screenPixels->copyPixels(_hx_tmp,_hx_tmp1, ::openfl::geom::Point_obj::__alloc( HX_CTX ,null(),null()),null(),null(),null());
            		}
            		else {
HXLINE( 185)			 ::openfl::display::Sprite _hx_tmp = ::flixel::FlxG_obj::camera->canvas;
HXDLIN( 185)			screenPixels->draw(_hx_tmp, ::openfl::geom::Matrix_obj::__alloc( HX_CTX ,1,0,0,1,0,0),null(),null(),null(),null());
            		}
HXLINE( 187)		Float rc = ((Float)0.33333333333333331);
HXLINE( 188)		Float gc = ((Float)0.5);
HXLINE( 189)		Float bc = ((Float)0.16666666666666666);
HXLINE( 190)		 ::openfl::geom::Rectangle screenPixels1 = screenPixels->rect;
HXDLIN( 190)		 ::openfl::geom::Point _hx_tmp =  ::openfl::geom::Point_obj::__alloc( HX_CTX ,null(),null());
HXDLIN( 190)		screenPixels->applyFilter(screenPixels,screenPixels1,_hx_tmp, ::openfl::filters::ColorMatrixFilter_obj::__alloc( HX_CTX ,::Array_obj< Float >::__new(20)->init(0,rc)->init(1,gc)->init(2,bc)->init(3,0)->init(4,0)->init(5,rc)->init(6,gc)->init(7,bc)->init(8,0)->init(9,0)->init(10,rc)->init(11,gc)->init(12,bc)->init(13,0)->init(14,0)->init(15,0)->init(16,0)->init(17,0)->init(18,1)->init(19,0)));
HXLINE( 193)		this->combatSound->play(null(),null(),null());
HXLINE( 194)		this->playerHealth = playerHealth;
HXLINE( 195)		this->enemy = enemy;
HXLINE( 197)		this->updatePlayerHealth();
HXLINE( 200)		int _hx_tmp1;
HXDLIN( 200)		if (::hx::IsPointerEq( enemy->type,::EnemyType_obj::REGULAR_dyn() )) {
HXLINE( 200)			_hx_tmp1 = 2;
            		}
            		else {
HXLINE( 200)			_hx_tmp1 = 4;
            		}
HXDLIN( 200)		this->enemyMaxHealth = (this->enemyHealth = _hx_tmp1);
HXLINE( 201)		this->enemyHealthBar->set_value(( (Float)(100) ));
HXLINE( 202)		this->enemySprite->changeType(enemy->type);
HXLINE( 205)		this->wait = true;
HXLINE( 206)		this->results->set_text(HX_("",00,00,00,00));
HXLINE( 207)		this->pointer->set_visible(false);
HXLINE( 208)		this->results->set_visible(false);
HXLINE( 209)		this->outcome = ::Outcome_obj::NONE_dyn();
HXLINE( 210)		this->selected = ::Choice_obj::FIGHT_dyn();
HXLINE( 211)		this->movePointer();
HXLINE( 213)		this->set_visible(true);
HXLINE( 216)		::flixel::tweens::FlxTween_obj::num(( (Float)(0) ),( (Float)(1) ),((Float).66), ::Dynamic(::hx::Anon_obj::Create(2)
            			->setFixed(0,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::circOut_dyn())
            			->setFixed(1,HX_("onComplete",f8,d4,7e,5d),this->finishFadeIn_dyn())),this->updateAlpha_dyn());
            	}


HX_DEFINE_DYNAMIC_FUNC2(CombatHUD_obj,initCombat,(void))

void CombatHUD_obj::updateAlpha(Float alpha){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0,Float,alpha) HXARGC(1)
            		void _hx_run( ::flixel::FlxSprite sprite){
            			HX_STACKFRAME(&_hx_pos_94bd977f46f9a023_225_updateAlpha)
HXLINE( 225)			sprite->set_alpha(alpha);
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_STACKFRAME(&_hx_pos_94bd977f46f9a023_223_updateAlpha)
HXLINE( 224)		this->alpha = alpha;
HXLINE( 225)		this->forEach( ::Dynamic(new _hx_Closure_0(alpha)),null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(CombatHUD_obj,updateAlpha,(void))

void CombatHUD_obj::finishFadeIn( ::flixel::tweens::FlxTween _){
            	HX_STACKFRAME(&_hx_pos_94bd977f46f9a023_232_finishFadeIn)
HXLINE( 233)		this->set_active(true);
HXLINE( 234)		this->wait = false;
HXLINE( 235)		this->pointer->set_visible(true);
HXLINE( 236)		this->selectSound->play(null(),null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(CombatHUD_obj,finishFadeIn,(void))

void CombatHUD_obj::finishFadeOut( ::flixel::tweens::FlxTween _){
            	HX_STACKFRAME(&_hx_pos_94bd977f46f9a023_243_finishFadeOut)
HXLINE( 244)		this->set_active(false);
HXLINE( 245)		this->set_visible(false);
            	}


HX_DEFINE_DYNAMIC_FUNC1(CombatHUD_obj,finishFadeOut,(void))

void CombatHUD_obj::updatePlayerHealth(){
            	HX_STACKFRAME(&_hx_pos_94bd977f46f9a023_252_updatePlayerHealth)
HXLINE( 253)		this->playerHealthCounter->set_text((this->playerHealth + HX_(" / 3",e2,99,4a,15)));
HXLINE( 254)		 ::flixel::text::FlxText _hx_tmp = this->playerHealthCounter;
HXDLIN( 254)		Float _hx_tmp1 = (this->playerSprite->x + 4);
HXDLIN( 254)		_hx_tmp->set_x((_hx_tmp1 - (this->playerHealthCounter->get_width() / ( (Float)(2) ))));
            	}


HX_DEFINE_DYNAMIC_FUNC0(CombatHUD_obj,updatePlayerHealth,(void))

void CombatHUD_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_94bd977f46f9a023_258_update)
HXLINE( 259)		if (!(this->wait)) {
HXLINE( 261)			this->updateKeyboardInput();
HXLINE( 262)			this->updateTouchInput();
            		}
HXLINE( 264)		this->super::update(elapsed);
            	}


void CombatHUD_obj::updateKeyboardInput(){
            	HX_STACKFRAME(&_hx_pos_94bd977f46f9a023_268_updateKeyboardInput)
HXLINE( 271)		bool up = false;
HXLINE( 272)		bool down = false;
HXLINE( 273)		bool fire = false;
HXLINE( 276)		if (::flixel::FlxG_obj::keys->checkKeyArrayState(::Array_obj< int >::fromData( _hx_array_data_0c6cd4c3_11,3),-1)) {
HXLINE( 278)			fire = true;
            		}
            		else {
HXLINE( 280)			if (::flixel::FlxG_obj::keys->checkKeyArrayState(::Array_obj< int >::fromData( _hx_array_data_0c6cd4c3_12,2),-1)) {
HXLINE( 282)				up = true;
            			}
            			else {
HXLINE( 284)				if (::flixel::FlxG_obj::keys->checkKeyArrayState(::Array_obj< int >::fromData( _hx_array_data_0c6cd4c3_13,2),-1)) {
HXLINE( 286)					down = true;
            				}
            			}
            		}
HXLINE( 290)		if (fire) {
HXLINE( 292)			this->selectSound->play(null(),null(),null());
HXLINE( 293)			this->makeChoice();
            		}
            		else {
HXLINE( 295)			bool _hx_tmp;
HXDLIN( 295)			if (!(up)) {
HXLINE( 295)				_hx_tmp = down;
            			}
            			else {
HXLINE( 295)				_hx_tmp = true;
            			}
HXDLIN( 295)			if (_hx_tmp) {
HXLINE( 298)				 ::Choice _hx_tmp;
HXDLIN( 298)				if (::hx::IsPointerEq( this->selected,::Choice_obj::FIGHT_dyn() )) {
HXLINE( 298)					_hx_tmp = ::Choice_obj::FLEE_dyn();
            				}
            				else {
HXLINE( 298)					_hx_tmp = ::Choice_obj::FIGHT_dyn();
            				}
HXDLIN( 298)				this->selected = _hx_tmp;
HXLINE( 299)				this->selectSound->play(null(),null(),null());
HXLINE( 300)				this->movePointer();
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(CombatHUD_obj,updateKeyboardInput,(void))

void CombatHUD_obj::updateTouchInput(){
            	HX_STACKFRAME(&_hx_pos_94bd977f46f9a023_306_updateTouchInput)
            	}


HX_DEFINE_DYNAMIC_FUNC0(CombatHUD_obj,updateTouchInput,(void))

void CombatHUD_obj::movePointer(){
            	HX_STACKFRAME(&_hx_pos_94bd977f46f9a023_331_movePointer)
HXDLIN( 331)		 ::flixel::FlxSprite _hx_tmp = this->pointer;
HXDLIN( 331)		Float _hx_tmp1 = this->choices->get(this->selected).StaticCast<  ::flixel::text::FlxText >()->y;
HXDLIN( 331)		_hx_tmp->set_y(((_hx_tmp1 + (this->choices->get(this->selected).StaticCast<  ::flixel::text::FlxText >()->get_height() / ( (Float)(2) ))) - ( (Float)(8) )));
            	}


HX_DEFINE_DYNAMIC_FUNC0(CombatHUD_obj,movePointer,(void))

void CombatHUD_obj::makeChoice(){
            	HX_STACKFRAME(&_hx_pos_94bd977f46f9a023_338_makeChoice)
HXDLIN( 338)		 ::CombatHUD _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 339)		this->pointer->set_visible(false);
HXLINE( 340)		switch((int)(this->selected->_hx_getIndex())){
            			case (int)0: {
HXLINE( 346)				if ((::flixel::FlxG_obj::random->_hx_float(0,100,null()) < 85)) {
            					HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::CombatHUD,_gthis) HXARGC(1)
            					void _hx_run( ::flixel::tweens::FlxTween _){
            						HX_STACKFRAME(&_hx_pos_94bd977f46f9a023_353_makeChoice)
HXLINE( 353)						::flixel::tweens::FlxTween_obj::tween(_gthis->enemySprite, ::Dynamic(::hx::Anon_obj::Create(1)
            							->setFixed(0,HX_("x",78,00,00,00),(_gthis->enemySprite->x - ( (Float)(4) )))),((Float)0.1),null());
            					}
            					HX_END_LOCAL_FUNC1((void))

HXLINE( 349)					this->damages->__get(1).StaticCast<  ::flixel::text::FlxText >()->set_text(HX_("1",31,00,00,00));
HXLINE( 350)					::flixel::tweens::FlxTween_obj::tween(this->enemySprite, ::Dynamic(::hx::Anon_obj::Create(1)
            						->setFixed(0,HX_("x",78,00,00,00),(this->enemySprite->x + 4))),((Float)0.1), ::Dynamic(::hx::Anon_obj::Create(1)
            						->setFixed(0,HX_("onComplete",f8,d4,7e,5d), ::Dynamic(new _hx_Closure_0(_gthis)))));
HXLINE( 356)					this->hurtSound->play(null(),null(),null());
HXLINE( 357)					this->enemyHealth--;
HXLINE( 358)					this->enemyHealthBar->set_value(((( (Float)(this->enemyHealth) ) / ( (Float)(this->enemyMaxHealth) )) * ( (Float)(100) )));
            				}
            				else {
HXLINE( 363)					this->damages->__get(1).StaticCast<  ::flixel::text::FlxText >()->set_text(HX_("MISS!",a5,81,5a,86));
HXLINE( 364)					this->missSound->play(null(),null(),null());
            				}
HXLINE( 368)				 ::flixel::text::FlxText _hx_tmp = this->damages->__get(1).StaticCast<  ::flixel::text::FlxText >();
HXDLIN( 368)				Float _hx_tmp1 = (this->enemySprite->x + 2);
HXDLIN( 368)				_hx_tmp->set_x((_hx_tmp1 - (this->damages->__get(1).StaticCast<  ::flixel::text::FlxText >()->get_width() / ( (Float)(2) ))));
HXLINE( 369)				 ::flixel::text::FlxText _hx_tmp2 = this->damages->__get(1).StaticCast<  ::flixel::text::FlxText >();
HXDLIN( 369)				Float _hx_tmp3 = (this->enemySprite->y + 4);
HXDLIN( 369)				_hx_tmp2->set_y((_hx_tmp3 - (this->damages->__get(1).StaticCast<  ::flixel::text::FlxText >()->get_height() / ( (Float)(2) ))));
HXLINE( 370)				this->damages->__get(1).StaticCast<  ::flixel::text::FlxText >()->set_alpha(( (Float)(0) ));
HXLINE( 371)				this->damages->__get(1).StaticCast<  ::flixel::text::FlxText >()->set_visible(true);
HXLINE( 374)				if ((this->enemyHealth > 0)) {
HXLINE( 376)					this->enemyAttack();
            				}
HXLINE( 380)				::flixel::tweens::FlxTween_obj::num(this->damages->__get(0).StaticCast<  ::flixel::text::FlxText >()->y,(this->damages->__get(0).StaticCast<  ::flixel::text::FlxText >()->y - ( (Float)(12) )),1, ::Dynamic(::hx::Anon_obj::Create(1)
            					->setFixed(0,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::circOut_dyn())),this->updateDamageY_dyn());
HXLINE( 381)				::flixel::tweens::FlxTween_obj::num(( (Float)(0) ),( (Float)(1) ),((Float).2), ::Dynamic(::hx::Anon_obj::Create(2)
            					->setFixed(0,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::circInOut_dyn())
            					->setFixed(1,HX_("onComplete",f8,d4,7e,5d),this->doneDamageIn_dyn())),this->updateDamageAlpha_dyn());
            			}
            			break;
            			case (int)1: {
HXLINE( 385)				if ((::flixel::FlxG_obj::random->_hx_float(0,100,null()) < 50)) {
HXLINE( 388)					this->outcome = ::Outcome_obj::ESCAPE_dyn();
HXLINE( 389)					this->results->set_text(HX_("ESCAPED!",1e,cd,18,52));
HXLINE( 390)					this->fledSound->play(null(),null(),null());
HXLINE( 391)					this->results->set_visible(true);
HXLINE( 392)					this->results->set_alpha(( (Float)(0) ));
HXLINE( 393)					::flixel::tweens::FlxTween_obj::tween(this->results, ::Dynamic(::hx::Anon_obj::Create(1)
            						->setFixed(0,HX_("alpha",5e,a7,96,21),1)),((Float).66), ::Dynamic(::hx::Anon_obj::Create(2)
            						->setFixed(0,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::circInOut_dyn())
            						->setFixed(1,HX_("onComplete",f8,d4,7e,5d),this->doneResultsIn_dyn())));
            				}
            				else {
HXLINE( 398)					this->enemyAttack();
HXLINE( 399)					::flixel::tweens::FlxTween_obj::num(this->damages->__get(0).StaticCast<  ::flixel::text::FlxText >()->y,(this->damages->__get(0).StaticCast<  ::flixel::text::FlxText >()->y - ( (Float)(12) )),1, ::Dynamic(::hx::Anon_obj::Create(1)
            						->setFixed(0,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::circOut_dyn())),this->updateDamageY_dyn());
HXLINE( 400)					::flixel::tweens::FlxTween_obj::num(( (Float)(0) ),( (Float)(1) ),((Float).2), ::Dynamic(::hx::Anon_obj::Create(2)
            						->setFixed(0,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::circInOut_dyn())
            						->setFixed(1,HX_("onComplete",f8,d4,7e,5d),this->doneDamageIn_dyn())),this->updateDamageAlpha_dyn());
            				}
            			}
            			break;
            		}
HXLINE( 405)		this->wait = true;
            	}


HX_DEFINE_DYNAMIC_FUNC0(CombatHUD_obj,makeChoice,(void))

void CombatHUD_obj::enemyAttack(){
            	HX_STACKFRAME(&_hx_pos_94bd977f46f9a023_412_enemyAttack)
HXLINE( 414)		if ((::flixel::FlxG_obj::random->_hx_float(0,100,null()) < 30)) {
HXLINE( 417)			::flixel::FlxG_obj::camera->flash(-1,((Float).2),null(),null());
HXLINE( 418)			::flixel::FlxG_obj::camera->shake(((Float)0.01),((Float)0.2),null(),null(),null());
HXLINE( 419)			this->hurtSound->play(null(),null(),null());
HXLINE( 420)			this->damages->__get(0).StaticCast<  ::flixel::text::FlxText >()->set_text(HX_("1",31,00,00,00));
HXLINE( 421)			this->playerHealth--;
HXLINE( 422)			this->updatePlayerHealth();
            		}
            		else {
HXLINE( 427)			this->damages->__get(0).StaticCast<  ::flixel::text::FlxText >()->set_text(HX_("MISS!",a5,81,5a,86));
HXLINE( 428)			this->missSound->play(null(),null(),null());
            		}
HXLINE( 432)		 ::flixel::text::FlxText _hx_tmp = this->damages->__get(0).StaticCast<  ::flixel::text::FlxText >();
HXDLIN( 432)		Float _hx_tmp1 = (this->playerSprite->x + 2);
HXDLIN( 432)		_hx_tmp->set_x((_hx_tmp1 - (this->damages->__get(0).StaticCast<  ::flixel::text::FlxText >()->get_width() / ( (Float)(2) ))));
HXLINE( 433)		 ::flixel::text::FlxText _hx_tmp2 = this->damages->__get(0).StaticCast<  ::flixel::text::FlxText >();
HXDLIN( 433)		Float _hx_tmp3 = (this->playerSprite->y + 4);
HXDLIN( 433)		_hx_tmp2->set_y((_hx_tmp3 - (this->damages->__get(0).StaticCast<  ::flixel::text::FlxText >()->get_height() / ( (Float)(2) ))));
HXLINE( 434)		this->damages->__get(0).StaticCast<  ::flixel::text::FlxText >()->set_alpha(( (Float)(0) ));
HXLINE( 435)		this->damages->__get(0).StaticCast<  ::flixel::text::FlxText >()->set_visible(true);
            	}


HX_DEFINE_DYNAMIC_FUNC0(CombatHUD_obj,enemyAttack,(void))

void CombatHUD_obj::updateDamageY(Float damageY){
            	HX_STACKFRAME(&_hx_pos_94bd977f46f9a023_443_updateDamageY)
HXDLIN( 443)		 ::flixel::text::FlxText _hx_tmp = this->damages->__get(0).StaticCast<  ::flixel::text::FlxText >();
HXDLIN( 443)		_hx_tmp->set_y(this->damages->__get(1).StaticCast<  ::flixel::text::FlxText >()->set_y(damageY));
            	}


HX_DEFINE_DYNAMIC_FUNC1(CombatHUD_obj,updateDamageY,(void))

void CombatHUD_obj::updateDamageAlpha(Float damageAlpha){
            	HX_STACKFRAME(&_hx_pos_94bd977f46f9a023_451_updateDamageAlpha)
HXDLIN( 451)		 ::flixel::text::FlxText _hx_tmp = this->damages->__get(0).StaticCast<  ::flixel::text::FlxText >();
HXDLIN( 451)		_hx_tmp->set_alpha(this->damages->__get(1).StaticCast<  ::flixel::text::FlxText >()->set_alpha(damageAlpha));
            	}


HX_DEFINE_DYNAMIC_FUNC1(CombatHUD_obj,updateDamageAlpha,(void))

void CombatHUD_obj::doneDamageIn( ::flixel::tweens::FlxTween _){
            	HX_STACKFRAME(&_hx_pos_94bd977f46f9a023_459_doneDamageIn)
HXDLIN( 459)		::flixel::tweens::FlxTween_obj::num(( (Float)(1) ),( (Float)(0) ),((Float).66), ::Dynamic(::hx::Anon_obj::Create(3)
            			->setFixed(0,HX_("startDelay",c1,af,3d,f3),1)
            			->setFixed(1,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::circInOut_dyn())
            			->setFixed(2,HX_("onComplete",f8,d4,7e,5d),this->doneDamageOut_dyn())),this->updateDamageAlpha_dyn());
            	}


HX_DEFINE_DYNAMIC_FUNC1(CombatHUD_obj,doneDamageIn,(void))

void CombatHUD_obj::doneResultsIn( ::flixel::tweens::FlxTween _){
            	HX_STACKFRAME(&_hx_pos_94bd977f46f9a023_467_doneResultsIn)
HXDLIN( 467)		::flixel::tweens::FlxTween_obj::num(( (Float)(1) ),( (Float)(0) ),((Float).66), ::Dynamic(::hx::Anon_obj::Create(3)
            			->setFixed(0,HX_("startDelay",c1,af,3d,f3),1)
            			->setFixed(1,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::circOut_dyn())
            			->setFixed(2,HX_("onComplete",f8,d4,7e,5d),this->finishFadeOut_dyn())),this->updateAlpha_dyn());
            	}


HX_DEFINE_DYNAMIC_FUNC1(CombatHUD_obj,doneResultsIn,(void))

void CombatHUD_obj::doneDamageOut( ::flixel::tweens::FlxTween _){
            	HX_STACKFRAME(&_hx_pos_94bd977f46f9a023_475_doneDamageOut)
HXLINE( 476)		this->damages->__get(0).StaticCast<  ::flixel::text::FlxText >()->set_visible(false);
HXLINE( 477)		this->damages->__get(1).StaticCast<  ::flixel::text::FlxText >()->set_visible(false);
HXLINE( 478)		this->damages->__get(0).StaticCast<  ::flixel::text::FlxText >()->set_text(HX_("",00,00,00,00));
HXLINE( 479)		this->damages->__get(1).StaticCast<  ::flixel::text::FlxText >()->set_text(HX_("",00,00,00,00));
HXLINE( 481)		if ((this->playerHealth <= 0)) {
HXLINE( 484)			this->outcome = ::Outcome_obj::DEFEAT_dyn();
HXLINE( 485)			this->loseSound->play(null(),null(),null());
HXLINE( 486)			this->results->set_text(HX_("DEFEAT!",ce,60,2d,1e));
HXLINE( 487)			this->results->set_visible(true);
HXLINE( 488)			this->results->set_alpha(( (Float)(0) ));
HXLINE( 489)			::flixel::tweens::FlxTween_obj::tween(this->results, ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("alpha",5e,a7,96,21),1)),((Float)0.66), ::Dynamic(::hx::Anon_obj::Create(2)
            				->setFixed(0,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::circInOut_dyn())
            				->setFixed(1,HX_("onComplete",f8,d4,7e,5d),this->doneResultsIn_dyn())));
            		}
            		else {
HXLINE( 491)			if ((this->enemyHealth <= 0)) {
HXLINE( 494)				this->outcome = ::Outcome_obj::VICTORY_dyn();
HXLINE( 495)				this->winSound->play(null(),null(),null());
HXLINE( 496)				this->results->set_text(HX_("VICTORY!",2f,7c,99,6e));
HXLINE( 497)				this->results->set_visible(true);
HXLINE( 498)				this->results->set_alpha(( (Float)(0) ));
HXLINE( 499)				::flixel::tweens::FlxTween_obj::tween(this->results, ::Dynamic(::hx::Anon_obj::Create(1)
            					->setFixed(0,HX_("alpha",5e,a7,96,21),1)),((Float)0.66), ::Dynamic(::hx::Anon_obj::Create(2)
            					->setFixed(0,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::circInOut_dyn())
            					->setFixed(1,HX_("onComplete",f8,d4,7e,5d),this->doneResultsIn_dyn())));
            			}
            			else {
HXLINE( 504)				this->wait = false;
HXLINE( 505)				this->pointer->set_visible(true);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(CombatHUD_obj,doneDamageOut,(void))


::hx::ObjectPtr< CombatHUD_obj > CombatHUD_obj::__new() {
	::hx::ObjectPtr< CombatHUD_obj > __this = new CombatHUD_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< CombatHUD_obj > CombatHUD_obj::__alloc(::hx::Ctx *_hx_ctx) {
	CombatHUD_obj *__this = (CombatHUD_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(CombatHUD_obj), true, "CombatHUD"));
	*(void **)__this = CombatHUD_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

CombatHUD_obj::CombatHUD_obj()
{
}

void CombatHUD_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(CombatHUD);
	HX_MARK_MEMBER_NAME(enemy,"enemy");
	HX_MARK_MEMBER_NAME(playerHealth,"playerHealth");
	HX_MARK_MEMBER_NAME(outcome,"outcome");
	HX_MARK_MEMBER_NAME(background,"background");
	HX_MARK_MEMBER_NAME(playerSprite,"playerSprite");
	HX_MARK_MEMBER_NAME(enemySprite,"enemySprite");
	HX_MARK_MEMBER_NAME(enemyHealth,"enemyHealth");
	HX_MARK_MEMBER_NAME(enemyMaxHealth,"enemyMaxHealth");
	HX_MARK_MEMBER_NAME(enemyHealthBar,"enemyHealthBar");
	HX_MARK_MEMBER_NAME(playerHealthCounter,"playerHealthCounter");
	HX_MARK_MEMBER_NAME(damages,"damages");
	HX_MARK_MEMBER_NAME(pointer,"pointer");
	HX_MARK_MEMBER_NAME(selected,"selected");
	HX_MARK_MEMBER_NAME(choices,"choices");
	HX_MARK_MEMBER_NAME(results,"results");
	HX_MARK_MEMBER_NAME(alpha,"alpha");
	HX_MARK_MEMBER_NAME(wait,"wait");
	HX_MARK_MEMBER_NAME(fledSound,"fledSound");
	HX_MARK_MEMBER_NAME(hurtSound,"hurtSound");
	HX_MARK_MEMBER_NAME(loseSound,"loseSound");
	HX_MARK_MEMBER_NAME(missSound,"missSound");
	HX_MARK_MEMBER_NAME(selectSound,"selectSound");
	HX_MARK_MEMBER_NAME(winSound,"winSound");
	HX_MARK_MEMBER_NAME(combatSound,"combatSound");
	HX_MARK_MEMBER_NAME(screen,"screen");
	 ::flixel::group::FlxTypedGroup_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void CombatHUD_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(enemy,"enemy");
	HX_VISIT_MEMBER_NAME(playerHealth,"playerHealth");
	HX_VISIT_MEMBER_NAME(outcome,"outcome");
	HX_VISIT_MEMBER_NAME(background,"background");
	HX_VISIT_MEMBER_NAME(playerSprite,"playerSprite");
	HX_VISIT_MEMBER_NAME(enemySprite,"enemySprite");
	HX_VISIT_MEMBER_NAME(enemyHealth,"enemyHealth");
	HX_VISIT_MEMBER_NAME(enemyMaxHealth,"enemyMaxHealth");
	HX_VISIT_MEMBER_NAME(enemyHealthBar,"enemyHealthBar");
	HX_VISIT_MEMBER_NAME(playerHealthCounter,"playerHealthCounter");
	HX_VISIT_MEMBER_NAME(damages,"damages");
	HX_VISIT_MEMBER_NAME(pointer,"pointer");
	HX_VISIT_MEMBER_NAME(selected,"selected");
	HX_VISIT_MEMBER_NAME(choices,"choices");
	HX_VISIT_MEMBER_NAME(results,"results");
	HX_VISIT_MEMBER_NAME(alpha,"alpha");
	HX_VISIT_MEMBER_NAME(wait,"wait");
	HX_VISIT_MEMBER_NAME(fledSound,"fledSound");
	HX_VISIT_MEMBER_NAME(hurtSound,"hurtSound");
	HX_VISIT_MEMBER_NAME(loseSound,"loseSound");
	HX_VISIT_MEMBER_NAME(missSound,"missSound");
	HX_VISIT_MEMBER_NAME(selectSound,"selectSound");
	HX_VISIT_MEMBER_NAME(winSound,"winSound");
	HX_VISIT_MEMBER_NAME(combatSound,"combatSound");
	HX_VISIT_MEMBER_NAME(screen,"screen");
	 ::flixel::group::FlxTypedGroup_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val CombatHUD_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"wait") ) { return ::hx::Val( wait ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"enemy") ) { return ::hx::Val( enemy ); }
		if (HX_FIELD_EQ(inName,"alpha") ) { return ::hx::Val( alpha ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"screen") ) { return ::hx::Val( screen ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"outcome") ) { return ::hx::Val( outcome ); }
		if (HX_FIELD_EQ(inName,"damages") ) { return ::hx::Val( damages ); }
		if (HX_FIELD_EQ(inName,"pointer") ) { return ::hx::Val( pointer ); }
		if (HX_FIELD_EQ(inName,"choices") ) { return ::hx::Val( choices ); }
		if (HX_FIELD_EQ(inName,"results") ) { return ::hx::Val( results ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"selected") ) { return ::hx::Val( selected ); }
		if (HX_FIELD_EQ(inName,"winSound") ) { return ::hx::Val( winSound ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"fledSound") ) { return ::hx::Val( fledSound ); }
		if (HX_FIELD_EQ(inName,"hurtSound") ) { return ::hx::Val( hurtSound ); }
		if (HX_FIELD_EQ(inName,"loseSound") ) { return ::hx::Val( loseSound ); }
		if (HX_FIELD_EQ(inName,"missSound") ) { return ::hx::Val( missSound ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"background") ) { return ::hx::Val( background ); }
		if (HX_FIELD_EQ(inName,"initCombat") ) { return ::hx::Val( initCombat_dyn() ); }
		if (HX_FIELD_EQ(inName,"makeChoice") ) { return ::hx::Val( makeChoice_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"enemySprite") ) { return ::hx::Val( enemySprite ); }
		if (HX_FIELD_EQ(inName,"enemyHealth") ) { return ::hx::Val( enemyHealth ); }
		if (HX_FIELD_EQ(inName,"selectSound") ) { return ::hx::Val( selectSound ); }
		if (HX_FIELD_EQ(inName,"combatSound") ) { return ::hx::Val( combatSound ); }
		if (HX_FIELD_EQ(inName,"updateAlpha") ) { return ::hx::Val( updateAlpha_dyn() ); }
		if (HX_FIELD_EQ(inName,"movePointer") ) { return ::hx::Val( movePointer_dyn() ); }
		if (HX_FIELD_EQ(inName,"enemyAttack") ) { return ::hx::Val( enemyAttack_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"playerHealth") ) { return ::hx::Val( playerHealth ); }
		if (HX_FIELD_EQ(inName,"playerSprite") ) { return ::hx::Val( playerSprite ); }
		if (HX_FIELD_EQ(inName,"finishFadeIn") ) { return ::hx::Val( finishFadeIn_dyn() ); }
		if (HX_FIELD_EQ(inName,"doneDamageIn") ) { return ::hx::Val( doneDamageIn_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"finishFadeOut") ) { return ::hx::Val( finishFadeOut_dyn() ); }
		if (HX_FIELD_EQ(inName,"updateDamageY") ) { return ::hx::Val( updateDamageY_dyn() ); }
		if (HX_FIELD_EQ(inName,"doneResultsIn") ) { return ::hx::Val( doneResultsIn_dyn() ); }
		if (HX_FIELD_EQ(inName,"doneDamageOut") ) { return ::hx::Val( doneDamageOut_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"enemyMaxHealth") ) { return ::hx::Val( enemyMaxHealth ); }
		if (HX_FIELD_EQ(inName,"enemyHealthBar") ) { return ::hx::Val( enemyHealthBar ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"updateTouchInput") ) { return ::hx::Val( updateTouchInput_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"updateDamageAlpha") ) { return ::hx::Val( updateDamageAlpha_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"updatePlayerHealth") ) { return ::hx::Val( updatePlayerHealth_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"playerHealthCounter") ) { return ::hx::Val( playerHealthCounter ); }
		if (HX_FIELD_EQ(inName,"updateKeyboardInput") ) { return ::hx::Val( updateKeyboardInput_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val CombatHUD_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"wait") ) { wait=inValue.Cast< bool >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"enemy") ) { enemy=inValue.Cast<  ::Enemy >(); return inValue; }
		if (HX_FIELD_EQ(inName,"alpha") ) { alpha=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"screen") ) { screen=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"outcome") ) { outcome=inValue.Cast<  ::Outcome >(); return inValue; }
		if (HX_FIELD_EQ(inName,"damages") ) { damages=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		if (HX_FIELD_EQ(inName,"pointer") ) { pointer=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"choices") ) { choices=inValue.Cast<  ::haxe::ds::EnumValueMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"results") ) { results=inValue.Cast<  ::flixel::text::FlxText >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"selected") ) { selected=inValue.Cast<  ::Choice >(); return inValue; }
		if (HX_FIELD_EQ(inName,"winSound") ) { winSound=inValue.Cast<  ::flixel::_hx_system::FlxSound >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"fledSound") ) { fledSound=inValue.Cast<  ::flixel::_hx_system::FlxSound >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hurtSound") ) { hurtSound=inValue.Cast<  ::flixel::_hx_system::FlxSound >(); return inValue; }
		if (HX_FIELD_EQ(inName,"loseSound") ) { loseSound=inValue.Cast<  ::flixel::_hx_system::FlxSound >(); return inValue; }
		if (HX_FIELD_EQ(inName,"missSound") ) { missSound=inValue.Cast<  ::flixel::_hx_system::FlxSound >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"background") ) { background=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"enemySprite") ) { enemySprite=inValue.Cast<  ::Enemy >(); return inValue; }
		if (HX_FIELD_EQ(inName,"enemyHealth") ) { enemyHealth=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"selectSound") ) { selectSound=inValue.Cast<  ::flixel::_hx_system::FlxSound >(); return inValue; }
		if (HX_FIELD_EQ(inName,"combatSound") ) { combatSound=inValue.Cast<  ::flixel::_hx_system::FlxSound >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"playerHealth") ) { playerHealth=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"playerSprite") ) { playerSprite=inValue.Cast<  ::Player >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"enemyMaxHealth") ) { enemyMaxHealth=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"enemyHealthBar") ) { enemyHealthBar=inValue.Cast<  ::flixel::ui::FlxBar >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"playerHealthCounter") ) { playerHealthCounter=inValue.Cast<  ::flixel::text::FlxText >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void CombatHUD_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("enemy",48,12,7b,70));
	outFields->push(HX_("playerHealth",dd,c6,f7,f8));
	outFields->push(HX_("outcome",92,b8,cf,db));
	outFields->push(HX_("background",ee,93,1d,26));
	outFields->push(HX_("playerSprite",46,7a,87,bf));
	outFields->push(HX_("enemySprite",6d,48,48,ab));
	outFields->push(HX_("enemyHealth",04,95,b8,e4));
	outFields->push(HX_("enemyMaxHealth",f8,7e,e8,47));
	outFields->push(HX_("enemyHealthBar",2f,cf,e9,5d));
	outFields->push(HX_("playerHealthCounter",9f,55,64,73));
	outFields->push(HX_("damages",24,d1,19,0a));
	outFields->push(HX_("pointer",bd,c0,21,51));
	outFields->push(HX_("selected",5b,2a,6d,b1));
	outFields->push(HX_("choices",f2,b5,17,d9));
	outFields->push(HX_("results",f6,58,57,6b));
	outFields->push(HX_("alpha",5e,a7,96,21));
	outFields->push(HX_("wait",75,5a,f2,4e));
	outFields->push(HX_("fledSound",6a,e7,19,a5));
	outFields->push(HX_("hurtSound",40,8a,0f,d0));
	outFields->push(HX_("loseSound",ba,8e,e1,ee));
	outFields->push(HX_("missSound",33,58,a3,03));
	outFields->push(HX_("selectSound",33,90,37,da));
	outFields->push(HX_("winSound",13,6f,fc,b3));
	outFields->push(HX_("combatSound",fb,af,68,23));
	outFields->push(HX_("screen",6c,3b,5d,47));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo CombatHUD_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::Enemy */ ,(int)offsetof(CombatHUD_obj,enemy),HX_("enemy",48,12,7b,70)},
	{::hx::fsInt,(int)offsetof(CombatHUD_obj,playerHealth),HX_("playerHealth",dd,c6,f7,f8)},
	{::hx::fsObject /*  ::Outcome */ ,(int)offsetof(CombatHUD_obj,outcome),HX_("outcome",92,b8,cf,db)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(CombatHUD_obj,background),HX_("background",ee,93,1d,26)},
	{::hx::fsObject /*  ::Player */ ,(int)offsetof(CombatHUD_obj,playerSprite),HX_("playerSprite",46,7a,87,bf)},
	{::hx::fsObject /*  ::Enemy */ ,(int)offsetof(CombatHUD_obj,enemySprite),HX_("enemySprite",6d,48,48,ab)},
	{::hx::fsInt,(int)offsetof(CombatHUD_obj,enemyHealth),HX_("enemyHealth",04,95,b8,e4)},
	{::hx::fsInt,(int)offsetof(CombatHUD_obj,enemyMaxHealth),HX_("enemyMaxHealth",f8,7e,e8,47)},
	{::hx::fsObject /*  ::flixel::ui::FlxBar */ ,(int)offsetof(CombatHUD_obj,enemyHealthBar),HX_("enemyHealthBar",2f,cf,e9,5d)},
	{::hx::fsObject /*  ::flixel::text::FlxText */ ,(int)offsetof(CombatHUD_obj,playerHealthCounter),HX_("playerHealthCounter",9f,55,64,73)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(CombatHUD_obj,damages),HX_("damages",24,d1,19,0a)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(CombatHUD_obj,pointer),HX_("pointer",bd,c0,21,51)},
	{::hx::fsObject /*  ::Choice */ ,(int)offsetof(CombatHUD_obj,selected),HX_("selected",5b,2a,6d,b1)},
	{::hx::fsObject /*  ::haxe::ds::EnumValueMap */ ,(int)offsetof(CombatHUD_obj,choices),HX_("choices",f2,b5,17,d9)},
	{::hx::fsObject /*  ::flixel::text::FlxText */ ,(int)offsetof(CombatHUD_obj,results),HX_("results",f6,58,57,6b)},
	{::hx::fsFloat,(int)offsetof(CombatHUD_obj,alpha),HX_("alpha",5e,a7,96,21)},
	{::hx::fsBool,(int)offsetof(CombatHUD_obj,wait),HX_("wait",75,5a,f2,4e)},
	{::hx::fsObject /*  ::flixel::_hx_system::FlxSound */ ,(int)offsetof(CombatHUD_obj,fledSound),HX_("fledSound",6a,e7,19,a5)},
	{::hx::fsObject /*  ::flixel::_hx_system::FlxSound */ ,(int)offsetof(CombatHUD_obj,hurtSound),HX_("hurtSound",40,8a,0f,d0)},
	{::hx::fsObject /*  ::flixel::_hx_system::FlxSound */ ,(int)offsetof(CombatHUD_obj,loseSound),HX_("loseSound",ba,8e,e1,ee)},
	{::hx::fsObject /*  ::flixel::_hx_system::FlxSound */ ,(int)offsetof(CombatHUD_obj,missSound),HX_("missSound",33,58,a3,03)},
	{::hx::fsObject /*  ::flixel::_hx_system::FlxSound */ ,(int)offsetof(CombatHUD_obj,selectSound),HX_("selectSound",33,90,37,da)},
	{::hx::fsObject /*  ::flixel::_hx_system::FlxSound */ ,(int)offsetof(CombatHUD_obj,winSound),HX_("winSound",13,6f,fc,b3)},
	{::hx::fsObject /*  ::flixel::_hx_system::FlxSound */ ,(int)offsetof(CombatHUD_obj,combatSound),HX_("combatSound",fb,af,68,23)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(CombatHUD_obj,screen),HX_("screen",6c,3b,5d,47)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *CombatHUD_obj_sStaticStorageInfo = 0;
#endif

static ::String CombatHUD_obj_sMemberFields[] = {
	HX_("enemy",48,12,7b,70),
	HX_("playerHealth",dd,c6,f7,f8),
	HX_("outcome",92,b8,cf,db),
	HX_("background",ee,93,1d,26),
	HX_("playerSprite",46,7a,87,bf),
	HX_("enemySprite",6d,48,48,ab),
	HX_("enemyHealth",04,95,b8,e4),
	HX_("enemyMaxHealth",f8,7e,e8,47),
	HX_("enemyHealthBar",2f,cf,e9,5d),
	HX_("playerHealthCounter",9f,55,64,73),
	HX_("damages",24,d1,19,0a),
	HX_("pointer",bd,c0,21,51),
	HX_("selected",5b,2a,6d,b1),
	HX_("choices",f2,b5,17,d9),
	HX_("results",f6,58,57,6b),
	HX_("alpha",5e,a7,96,21),
	HX_("wait",75,5a,f2,4e),
	HX_("fledSound",6a,e7,19,a5),
	HX_("hurtSound",40,8a,0f,d0),
	HX_("loseSound",ba,8e,e1,ee),
	HX_("missSound",33,58,a3,03),
	HX_("selectSound",33,90,37,da),
	HX_("winSound",13,6f,fc,b3),
	HX_("combatSound",fb,af,68,23),
	HX_("screen",6c,3b,5d,47),
	HX_("initCombat",64,6b,6b,cb),
	HX_("updateAlpha",95,10,2f,07),
	HX_("finishFadeIn",34,81,24,e2),
	HX_("finishFadeOut",5f,20,d1,fd),
	HX_("updatePlayerHealth",86,02,05,71),
	HX_("update",09,86,05,87),
	HX_("updateKeyboardInput",1a,32,78,25),
	HX_("updateTouchInput",34,77,9a,01),
	HX_("movePointer",ac,f9,9d,29),
	HX_("makeChoice",ef,93,7f,12),
	HX_("enemyAttack",30,68,c2,c7),
	HX_("updateDamageY",01,36,88,d5),
	HX_("updateDamageAlpha",e6,40,5c,e6),
	HX_("doneDamageIn",d6,08,a4,0e),
	HX_("doneResultsIn",99,11,90,12),
	HX_("doneDamageOut",7d,46,e8,c0),
	::String(null()) };

::hx::Class CombatHUD_obj::__mClass;

void CombatHUD_obj::__register()
{
	CombatHUD_obj _hx_dummy;
	CombatHUD_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("CombatHUD",c3,d4,6c,0c);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(CombatHUD_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< CombatHUD_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = CombatHUD_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = CombatHUD_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

