#include <hxcpp.h>

#ifndef INCLUDED_Coin
#include <Coin.h>
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
#ifndef INCLUDED_GameOverState
#include <GameOverState.h>
#endif
#ifndef INCLUDED_HUD
#include <HUD.h>
#endif
#ifndef INCLUDED_Outcome
#include <Outcome.h>
#endif
#ifndef INCLUDED_PlayState
#include <PlayState.h>
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
#ifndef INCLUDED_flixel_FlxCameraFollowStyle
#include <flixel/FlxCameraFollowStyle.h>
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
#ifndef INCLUDED_flixel_addons_editors_ogmo_FlxOgmo3Loader
#include <flixel/addons/editors/ogmo/FlxOgmo3Loader.h>
#endif
#ifndef INCLUDED_flixel_effects_FlxFlicker
#include <flixel/effects/FlxFlicker.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
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
#ifndef INCLUDED_flixel_tile_FlxBaseTilemap
#include <flixel/tile/FlxBaseTilemap.h>
#endif
#ifndef INCLUDED_flixel_tile_FlxTilemap
#include <flixel/tile/FlxTilemap.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_af23706db05c7feb_15_new,"PlayState","new",0xf8bf96cf,"PlayState.new","PlayState.hx",15,0xb30d7781)
HX_LOCAL_STACK_FRAME(_hx_pos_af23706db05c7feb_40_create,"PlayState","create",0x82220fed,"PlayState.create","PlayState.hx",40,0xb30d7781)
HX_LOCAL_STACK_FRAME(_hx_pos_af23706db05c7feb_76_placeEntities,"PlayState","placeEntities",0xcb21ad57,"PlayState.placeEntities","PlayState.hx",76,0xb30d7781)
HX_LOCAL_STACK_FRAME(_hx_pos_af23706db05c7feb_97_update,"PlayState","update",0x8d182efa,"PlayState.update","PlayState.hx",97,0xb30d7781)
HX_LOCAL_STACK_FRAME(_hx_pos_af23706db05c7feb_148_checkEnemyVision,"PlayState","checkEnemyVision",0xe46dc499,"PlayState.checkEnemyVision","PlayState.hx",148,0xb30d7781)
HX_LOCAL_STACK_FRAME(_hx_pos_af23706db05c7feb_161_playerTouchCoin,"PlayState","playerTouchCoin",0x7f00763e,"PlayState.playerTouchCoin","PlayState.hx",161,0xb30d7781)
HX_LOCAL_STACK_FRAME(_hx_pos_af23706db05c7feb_172_playerTouchEnemy,"PlayState","playerTouchEnemy",0xc787e8fb,"PlayState.playerTouchEnemy","PlayState.hx",172,0xb30d7781)
HX_LOCAL_STACK_FRAME(_hx_pos_af23706db05c7feb_179_startCombat,"PlayState","startCombat",0x485abba5,"PlayState.startCombat","PlayState.hx",179,0xb30d7781)
HX_LOCAL_STACK_FRAME(_hx_pos_af23706db05c7feb_192_doneFadeOut,"PlayState","doneFadeOut",0xf3a9b17f,"PlayState.doneFadeOut","PlayState.hx",192,0xb30d7781)

void PlayState_obj::__construct( ::Dynamic MaxSize){
            	HX_STACKFRAME(&_hx_pos_af23706db05c7feb_15_new)
HXLINE(  30)		this->inCombat = false;
HXLINE(  28)		this->health = 3;
HXLINE(  27)		this->money = 0;
HXLINE(  15)		super::__construct(MaxSize);
            	}

Dynamic PlayState_obj::__CreateEmpty() { return new PlayState_obj; }

void *PlayState_obj::_hx_vtable = 0;

Dynamic PlayState_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< PlayState_obj > _hx_result = new PlayState_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool PlayState_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x62817b24) {
		if (inClassId<=(int)0x0a05f89d) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x0a05f89d;
		} else {
			return inClassId==(int)0x62817b24;
		}
	} else {
		return inClassId==(int)0x7c795c9f || inClassId==(int)0x7ccf8994;
	}
}

void PlayState_obj::create(){
            	HX_GC_STACKFRAME(&_hx_pos_af23706db05c7feb_40_create)
HXLINE(  41)		this->map =  ::flixel::addons::editors::ogmo::FlxOgmo3Loader_obj::__alloc( HX_CTX ,HX_("assets/data/turnBaseRPG.ogmo",66,61,15,72),HX_("assets/data/room-001.json",9e,bc,95,49));
HXLINE(  42)		this->walls = this->map->loadTilemap(HX_("assets/images/tiles.png",35,bc,d1,f5),HX_("walls",29,0c,1f,c5),null());
HXLINE(  43)		this->walls->follow(null(),null(),null());
HXLINE(  44)		this->walls->setTileProperties(1,0,null(),null(),null());
HXLINE(  45)		this->walls->setTileProperties(2,4369,null(),null(),null());
HXLINE(  46)		this->add(this->walls);
HXLINE(  48)		this->coins =  ::flixel::group::FlxTypedGroup_obj::__alloc( HX_CTX ,null());
HXLINE(  49)		this->coinSound = ::flixel::FlxG_obj::sound->load(HX_("assets/sounds/coin.wav",ee,74,61,6a),null(),null(),null(),null(),null(),null(),null(),null());
HXLINE(  50)		this->add(this->coins);
HXLINE(  52)		this->enemies =  ::flixel::group::FlxTypedGroup_obj::__alloc( HX_CTX ,null());
HXLINE(  53)		this->add(this->enemies);
HXLINE(  55)		this->player =  ::Player_obj::__alloc( HX_CTX ,null(),null());
HXLINE(  56)		this->map->loadEntities(this->placeEntities_dyn(),HX_("entities",41,96,95,92));
HXLINE(  57)		this->add(this->player);
HXLINE(  59)		::flixel::FlxG_obj::camera->follow(this->player,::flixel::FlxCameraFollowStyle_obj::TOPDOWN_dyn(),1);
HXLINE(  61)		this->hud =  ::HUD_obj::__alloc( HX_CTX );
HXLINE(  62)		this->add(this->hud);
HXLINE(  64)		this->combatHud =  ::CombatHUD_obj::__alloc( HX_CTX );
HXLINE(  65)		this->add(this->combatHud);
HXLINE(  72)		this->super::create();
            	}


void PlayState_obj::placeEntities( ::Dynamic entity){
            	HX_GC_STACKFRAME(&_hx_pos_af23706db05c7feb_76_placeEntities)
HXLINE(  77)		int x = ( (int)(entity->__Field(HX_("x",78,00,00,00),::hx::paccDynamic)) );
HXLINE(  78)		int y = ( (int)(entity->__Field(HX_("y",79,00,00,00),::hx::paccDynamic)) );
HXLINE(  80)		::String _hx_switch_0 = ( (::String)(entity->__Field(HX_("name",4b,72,ff,48),::hx::paccDynamic)) );
            		if (  (_hx_switch_0==HX_("boss",ad,87,1b,41)) ){
HXLINE(  92)			 ::flixel::group::FlxTypedGroup _hx_tmp = this->enemies;
HXDLIN(  92)			_hx_tmp->add( ::Enemy_obj::__alloc( HX_CTX ,( (Float)((x + 4)) ),( (Float)(y) ),::EnemyType_obj::BOSS_dyn())).StaticCast<  ::Enemy >();
HXDLIN(  92)			goto _hx_goto_2;
            		}
            		if (  (_hx_switch_0==HX_("coin",91,b5,c4,41)) ){
HXLINE(  86)			 ::flixel::group::FlxTypedGroup _hx_tmp = this->coins;
HXDLIN(  86)			_hx_tmp->add( ::Coin_obj::__alloc( HX_CTX ,( (Float)((x + 4)) ),( (Float)((y + 4)) ))).StaticCast<  ::Coin >();
HXDLIN(  86)			goto _hx_goto_2;
            		}
            		if (  (_hx_switch_0==HX_("enemy",48,12,7b,70)) ){
HXLINE(  89)			 ::flixel::group::FlxTypedGroup _hx_tmp = this->enemies;
HXDLIN(  89)			_hx_tmp->add( ::Enemy_obj::__alloc( HX_CTX ,( (Float)((x + 4)) ),( (Float)(y) ),::EnemyType_obj::REGULAR_dyn())).StaticCast<  ::Enemy >();
HXDLIN(  89)			goto _hx_goto_2;
            		}
            		if (  (_hx_switch_0==HX_("player",61,eb,b8,37)) ){
HXLINE(  83)			this->player->setPosition(x,y);
HXDLIN(  83)			goto _hx_goto_2;
            		}
            		_hx_goto_2:;
            	}


HX_DEFINE_DYNAMIC_FUNC1(PlayState_obj,placeEntities,(void))

void PlayState_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_af23706db05c7feb_97_update)
HXLINE(  98)		this->super::update(elapsed);
HXLINE( 100)		if (this->inCombat) {
HXLINE( 102)			if (!(this->combatHud->visible)) {
HXLINE( 104)				this->health = this->combatHud->playerHealth;
HXLINE( 105)				this->hud->updateHUD(this->health,this->money);
HXLINE( 106)				if (::hx::IsPointerEq( this->combatHud->outcome,::Outcome_obj::DEFEAT_dyn() )) {
HXLINE( 108)					this->ending = true;
HXLINE( 109)					::flixel::FlxG_obj::camera->fade(-16777216,((Float)0.33),false,this->doneFadeOut_dyn(),null());
            				}
            				else {
HXLINE( 113)					if (::hx::IsPointerEq( this->combatHud->outcome,::Outcome_obj::VICTORY_dyn() )) {
HXLINE( 115)						this->combatHud->enemy->kill();
HXLINE( 116)						if (::hx::IsPointerEq( this->combatHud->enemy->type,::EnemyType_obj::BOSS_dyn() )) {
HXLINE( 118)							this->won = true;
HXLINE( 119)							this->ending = true;
HXLINE( 120)							::flixel::FlxG_obj::camera->fade(-16777216,((Float)0.33),false,this->doneFadeOut_dyn(),null());
            						}
            					}
            					else {
HXLINE( 125)						 ::Dynamic CompletionCallback = null();
HXDLIN( 125)						 ::Dynamic ProgressCallback = null();
HXDLIN( 125)						::flixel::effects::FlxFlicker_obj::flicker(( ( ::flixel::FlxObject)(this->combatHud->enemy) ),( (Float)(1) ),((Float)0.04),true,true,CompletionCallback,ProgressCallback);
            					}
HXLINE( 127)					this->inCombat = false;
HXLINE( 128)					this->player->set_active(true);
HXLINE( 129)					this->enemies->set_active(true);
            				}
            			}
            		}
            		else {
HXLINE( 135)			{
HXLINE( 135)				 ::Dynamic NotifyCallback = null();
HXDLIN( 135)				::flixel::FlxG_obj::overlap(( ( ::flixel::FlxBasic)(this->player) ),( ( ::flixel::FlxBasic)(this->walls) ),NotifyCallback,::flixel::FlxObject_obj::separate_dyn());
            			}
HXLINE( 136)			::flixel::FlxG_obj::overlap(this->player,this->coins,this->playerTouchCoin_dyn(),null());
HXLINE( 137)			{
HXLINE( 137)				 ::Dynamic NotifyCallback1 = null();
HXDLIN( 137)				::flixel::FlxG_obj::overlap(( ( ::flixel::FlxBasic)(this->enemies) ),( ( ::flixel::FlxBasic)(this->walls) ),NotifyCallback1,::flixel::FlxObject_obj::separate_dyn());
            			}
HXLINE( 138)			this->enemies->forEachAlive(this->checkEnemyVision_dyn(),null());
HXLINE( 139)			::flixel::FlxG_obj::overlap(this->player,this->enemies,this->playerTouchEnemy_dyn(),null());
            		}
            	}


void PlayState_obj::checkEnemyVision( ::Enemy enemy){
            	HX_STACKFRAME(&_hx_pos_af23706db05c7feb_148_checkEnemyVision)
HXDLIN( 148)		 ::flixel::tile::FlxTilemap _hx_tmp = this->walls;
HXDLIN( 148)		 ::flixel::math::FlxPoint _hx_tmp1 = enemy->getMidpoint(null());
HXDLIN( 148)		if (_hx_tmp->ray(_hx_tmp1,this->player->getMidpoint(null()),null(),null())) {
HXLINE( 150)			enemy->seesPlayer = true;
HXLINE( 151)			enemy->playerPosition = this->player->getMidpoint(null());
            		}
            		else {
HXLINE( 155)			enemy->seesPlayer = false;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(PlayState_obj,checkEnemyVision,(void))

void PlayState_obj::playerTouchCoin( ::Player player, ::Coin coin){
            	HX_STACKFRAME(&_hx_pos_af23706db05c7feb_161_playerTouchCoin)
HXDLIN( 161)		bool _hx_tmp;
HXDLIN( 161)		bool _hx_tmp1;
HXDLIN( 161)		bool _hx_tmp2;
HXDLIN( 161)		if (player->alive) {
HXDLIN( 161)			_hx_tmp2 = player->exists;
            		}
            		else {
HXDLIN( 161)			_hx_tmp2 = false;
            		}
HXDLIN( 161)		if (_hx_tmp2) {
HXDLIN( 161)			_hx_tmp1 = coin->alive;
            		}
            		else {
HXDLIN( 161)			_hx_tmp1 = false;
            		}
HXDLIN( 161)		if (_hx_tmp1) {
HXDLIN( 161)			_hx_tmp = coin->exists;
            		}
            		else {
HXDLIN( 161)			_hx_tmp = false;
            		}
HXDLIN( 161)		if (_hx_tmp) {
HXLINE( 163)			this->coinSound->play(true,null(),null());
HXLINE( 164)			coin->kill();
HXLINE( 165)			this->money++;
HXLINE( 166)			this->hud->updateHUD(this->health,this->money);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(PlayState_obj,playerTouchCoin,(void))

void PlayState_obj::playerTouchEnemy( ::Player player, ::Enemy enemy){
            	HX_STACKFRAME(&_hx_pos_af23706db05c7feb_172_playerTouchEnemy)
HXDLIN( 172)		bool _hx_tmp;
HXDLIN( 172)		bool _hx_tmp1;
HXDLIN( 172)		bool _hx_tmp2;
HXDLIN( 172)		bool _hx_tmp3;
HXDLIN( 172)		if (player->alive) {
HXDLIN( 172)			_hx_tmp3 = player->exists;
            		}
            		else {
HXDLIN( 172)			_hx_tmp3 = false;
            		}
HXDLIN( 172)		if (_hx_tmp3) {
HXDLIN( 172)			_hx_tmp2 = enemy->alive;
            		}
            		else {
HXDLIN( 172)			_hx_tmp2 = false;
            		}
HXDLIN( 172)		if (_hx_tmp2) {
HXDLIN( 172)			_hx_tmp1 = enemy->exists;
            		}
            		else {
HXDLIN( 172)			_hx_tmp1 = false;
            		}
HXDLIN( 172)		if (_hx_tmp1) {
HXDLIN( 172)			_hx_tmp = !(::flixel::effects::FlxFlicker_obj::isFlickering(enemy));
            		}
            		else {
HXDLIN( 172)			_hx_tmp = false;
            		}
HXDLIN( 172)		if (_hx_tmp) {
HXLINE( 174)			this->startCombat(enemy);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(PlayState_obj,playerTouchEnemy,(void))

void PlayState_obj::startCombat( ::Enemy enemy){
            	HX_STACKFRAME(&_hx_pos_af23706db05c7feb_179_startCombat)
HXLINE( 184)		this->inCombat = true;
HXLINE( 185)		this->player->set_active(false);
HXLINE( 186)		this->enemies->set_active(false);
HXLINE( 187)		this->combatHud->initCombat(this->health,enemy);
            	}


HX_DEFINE_DYNAMIC_FUNC1(PlayState_obj,startCombat,(void))

void PlayState_obj::doneFadeOut(){
            	HX_GC_STACKFRAME(&_hx_pos_af23706db05c7feb_192_doneFadeOut)
HXDLIN( 192)		 ::flixel::FlxState nextState =  ::GameOverState_obj::__alloc( HX_CTX ,this->won,this->money);
HXDLIN( 192)		if (::flixel::FlxG_obj::game->_state->switchTo(nextState)) {
HXDLIN( 192)			::flixel::FlxG_obj::game->_requestedState = nextState;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(PlayState_obj,doneFadeOut,(void))


::hx::ObjectPtr< PlayState_obj > PlayState_obj::__new( ::Dynamic MaxSize) {
	::hx::ObjectPtr< PlayState_obj > __this = new PlayState_obj();
	__this->__construct(MaxSize);
	return __this;
}

::hx::ObjectPtr< PlayState_obj > PlayState_obj::__alloc(::hx::Ctx *_hx_ctx, ::Dynamic MaxSize) {
	PlayState_obj *__this = (PlayState_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(PlayState_obj), true, "PlayState"));
	*(void **)__this = PlayState_obj::_hx_vtable;
	__this->__construct(MaxSize);
	return __this;
}

PlayState_obj::PlayState_obj()
{
}

void PlayState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(PlayState);
	HX_MARK_MEMBER_NAME(ending,"ending");
	HX_MARK_MEMBER_NAME(won,"won");
	HX_MARK_MEMBER_NAME(player,"player");
	HX_MARK_MEMBER_NAME(map,"map");
	HX_MARK_MEMBER_NAME(walls,"walls");
	HX_MARK_MEMBER_NAME(coins,"coins");
	HX_MARK_MEMBER_NAME(enemies,"enemies");
	HX_MARK_MEMBER_NAME(hud,"hud");
	HX_MARK_MEMBER_NAME(money,"money");
	HX_MARK_MEMBER_NAME(health,"health");
	HX_MARK_MEMBER_NAME(inCombat,"inCombat");
	HX_MARK_MEMBER_NAME(combatHud,"combatHud");
	HX_MARK_MEMBER_NAME(coinSound,"coinSound");
	 ::flixel::FlxState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void PlayState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(ending,"ending");
	HX_VISIT_MEMBER_NAME(won,"won");
	HX_VISIT_MEMBER_NAME(player,"player");
	HX_VISIT_MEMBER_NAME(map,"map");
	HX_VISIT_MEMBER_NAME(walls,"walls");
	HX_VISIT_MEMBER_NAME(coins,"coins");
	HX_VISIT_MEMBER_NAME(enemies,"enemies");
	HX_VISIT_MEMBER_NAME(hud,"hud");
	HX_VISIT_MEMBER_NAME(money,"money");
	HX_VISIT_MEMBER_NAME(health,"health");
	HX_VISIT_MEMBER_NAME(inCombat,"inCombat");
	HX_VISIT_MEMBER_NAME(combatHud,"combatHud");
	HX_VISIT_MEMBER_NAME(coinSound,"coinSound");
	 ::flixel::FlxState_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val PlayState_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"won") ) { return ::hx::Val( won ); }
		if (HX_FIELD_EQ(inName,"map") ) { return ::hx::Val( map ); }
		if (HX_FIELD_EQ(inName,"hud") ) { return ::hx::Val( hud ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"walls") ) { return ::hx::Val( walls ); }
		if (HX_FIELD_EQ(inName,"coins") ) { return ::hx::Val( coins ); }
		if (HX_FIELD_EQ(inName,"money") ) { return ::hx::Val( money ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"ending") ) { return ::hx::Val( ending ); }
		if (HX_FIELD_EQ(inName,"player") ) { return ::hx::Val( player ); }
		if (HX_FIELD_EQ(inName,"health") ) { return ::hx::Val( health ); }
		if (HX_FIELD_EQ(inName,"create") ) { return ::hx::Val( create_dyn() ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"enemies") ) { return ::hx::Val( enemies ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"inCombat") ) { return ::hx::Val( inCombat ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"combatHud") ) { return ::hx::Val( combatHud ); }
		if (HX_FIELD_EQ(inName,"coinSound") ) { return ::hx::Val( coinSound ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"startCombat") ) { return ::hx::Val( startCombat_dyn() ); }
		if (HX_FIELD_EQ(inName,"doneFadeOut") ) { return ::hx::Val( doneFadeOut_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"placeEntities") ) { return ::hx::Val( placeEntities_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"playerTouchCoin") ) { return ::hx::Val( playerTouchCoin_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"checkEnemyVision") ) { return ::hx::Val( checkEnemyVision_dyn() ); }
		if (HX_FIELD_EQ(inName,"playerTouchEnemy") ) { return ::hx::Val( playerTouchEnemy_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val PlayState_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"won") ) { won=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"map") ) { map=inValue.Cast<  ::flixel::addons::editors::ogmo::FlxOgmo3Loader >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hud") ) { hud=inValue.Cast<  ::HUD >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"walls") ) { walls=inValue.Cast<  ::flixel::tile::FlxTilemap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"coins") ) { coins=inValue.Cast<  ::flixel::group::FlxTypedGroup >(); return inValue; }
		if (HX_FIELD_EQ(inName,"money") ) { money=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"ending") ) { ending=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"player") ) { player=inValue.Cast<  ::Player >(); return inValue; }
		if (HX_FIELD_EQ(inName,"health") ) { health=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"enemies") ) { enemies=inValue.Cast<  ::flixel::group::FlxTypedGroup >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"inCombat") ) { inCombat=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"combatHud") ) { combatHud=inValue.Cast<  ::CombatHUD >(); return inValue; }
		if (HX_FIELD_EQ(inName,"coinSound") ) { coinSound=inValue.Cast<  ::flixel::_hx_system::FlxSound >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void PlayState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("ending",e7,a3,88,fa));
	outFields->push(HX_("won",56,ad,5a,00));
	outFields->push(HX_("player",61,eb,b8,37));
	outFields->push(HX_("map",9c,0a,53,00));
	outFields->push(HX_("walls",29,0c,1f,c5));
	outFields->push(HX_("coins",c2,29,5a,4a));
	outFields->push(HX_("enemies",a6,68,0e,d3));
	outFields->push(HX_("hud",b7,50,4f,00));
	outFields->push(HX_("money",40,ba,5f,0c));
	outFields->push(HX_("health",9c,28,06,fd));
	outFields->push(HX_("inCombat",f9,59,a4,4f));
	outFields->push(HX_("combatHud",e3,10,9a,6a));
	outFields->push(HX_("coinSound",7e,79,c4,7d));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo PlayState_obj_sMemberStorageInfo[] = {
	{::hx::fsBool,(int)offsetof(PlayState_obj,ending),HX_("ending",e7,a3,88,fa)},
	{::hx::fsBool,(int)offsetof(PlayState_obj,won),HX_("won",56,ad,5a,00)},
	{::hx::fsObject /*  ::Player */ ,(int)offsetof(PlayState_obj,player),HX_("player",61,eb,b8,37)},
	{::hx::fsObject /*  ::flixel::addons::editors::ogmo::FlxOgmo3Loader */ ,(int)offsetof(PlayState_obj,map),HX_("map",9c,0a,53,00)},
	{::hx::fsObject /*  ::flixel::tile::FlxTilemap */ ,(int)offsetof(PlayState_obj,walls),HX_("walls",29,0c,1f,c5)},
	{::hx::fsObject /*  ::flixel::group::FlxTypedGroup */ ,(int)offsetof(PlayState_obj,coins),HX_("coins",c2,29,5a,4a)},
	{::hx::fsObject /*  ::flixel::group::FlxTypedGroup */ ,(int)offsetof(PlayState_obj,enemies),HX_("enemies",a6,68,0e,d3)},
	{::hx::fsObject /*  ::HUD */ ,(int)offsetof(PlayState_obj,hud),HX_("hud",b7,50,4f,00)},
	{::hx::fsInt,(int)offsetof(PlayState_obj,money),HX_("money",40,ba,5f,0c)},
	{::hx::fsInt,(int)offsetof(PlayState_obj,health),HX_("health",9c,28,06,fd)},
	{::hx::fsBool,(int)offsetof(PlayState_obj,inCombat),HX_("inCombat",f9,59,a4,4f)},
	{::hx::fsObject /*  ::CombatHUD */ ,(int)offsetof(PlayState_obj,combatHud),HX_("combatHud",e3,10,9a,6a)},
	{::hx::fsObject /*  ::flixel::_hx_system::FlxSound */ ,(int)offsetof(PlayState_obj,coinSound),HX_("coinSound",7e,79,c4,7d)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *PlayState_obj_sStaticStorageInfo = 0;
#endif

static ::String PlayState_obj_sMemberFields[] = {
	HX_("ending",e7,a3,88,fa),
	HX_("won",56,ad,5a,00),
	HX_("player",61,eb,b8,37),
	HX_("map",9c,0a,53,00),
	HX_("walls",29,0c,1f,c5),
	HX_("coins",c2,29,5a,4a),
	HX_("enemies",a6,68,0e,d3),
	HX_("hud",b7,50,4f,00),
	HX_("money",40,ba,5f,0c),
	HX_("health",9c,28,06,fd),
	HX_("inCombat",f9,59,a4,4f),
	HX_("combatHud",e3,10,9a,6a),
	HX_("coinSound",7e,79,c4,7d),
	HX_("create",fc,66,0f,7c),
	HX_("placeEntities",28,e6,91,17),
	HX_("update",09,86,05,87),
	HX_("checkEnemyVision",68,24,16,8c),
	HX_("playerTouchCoin",4f,45,8d,f2),
	HX_("playerTouchEnemy",ca,48,30,6f),
	HX_("startCombat",36,6e,0c,3f),
	HX_("doneFadeOut",10,64,5b,ea),
	::String(null()) };

::hx::Class PlayState_obj::__mClass;

void PlayState_obj::__register()
{
	PlayState_obj _hx_dummy;
	PlayState_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("PlayState",5d,83,c2,46);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(PlayState_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< PlayState_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = PlayState_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = PlayState_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

