#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
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
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_addons_tile_FlxTileAnimation
#include <flixel/addons/tile/FlxTileAnimation.h>
#endif
#ifndef INCLUDED_flixel_addons_tile_FlxTileSpecial
#include <flixel/addons/tile/FlxTileSpecial.h>
#endif
#ifndef INCLUDED_flixel_addons_tile_FlxTilemapExt
#include <flixel/addons/tile/FlxTilemapExt.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxFrame
#include <flixel/graphics/frames/FlxFrame.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxFramesCollection
#include <flixel/graphics/frames/FlxFramesCollection.h>
#endif
#ifndef INCLUDED_flixel_graphics_tile_FlxGraphicsShader
#include <flixel/graphics/tile/FlxGraphicsShader.h>
#endif
#ifndef INCLUDED_flixel_math_FlxMatrix
#include <flixel/math/FlxMatrix.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_tile_FlxBaseTilemap
#include <flixel/tile/FlxBaseTilemap.h>
#endif
#ifndef INCLUDED_flixel_tile_FlxTile
#include <flixel/tile/FlxTile.h>
#endif
#ifndef INCLUDED_flixel_tile_FlxTilemap
#include <flixel/tile/FlxTilemap.h>
#endif
#ifndef INCLUDED_flixel_tile_FlxTilemapBuffer
#include <flixel/tile/FlxTilemapBuffer.h>
#endif
#ifndef INCLUDED_flixel_util_FlxDestroyUtil
#include <flixel/util/FlxDestroyUtil.h>
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
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_GraphicsShader
#include <openfl/display/GraphicsShader.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_Shader
#include <openfl/display/Shader.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_fc36390f83f7f1e5_35_new,"flixel.addons.tile.FlxTilemapExt","new",0xf39da2c0,"flixel.addons.tile.FlxTilemapExt.new","flixel/addons/tile/FlxTilemapExt.hx",35,0x29266091)
HX_LOCAL_STACK_FRAME(_hx_pos_fc36390f83f7f1e5_60_destroy,"flixel.addons.tile.FlxTilemapExt","destroy",0x5c98af5a,"flixel.addons.tile.FlxTilemapExt.destroy","flixel/addons/tile/FlxTilemapExt.hx",60,0x29266091)
HX_LOCAL_STACK_FRAME(_hx_pos_fc36390f83f7f1e5_80_update,"flixel.addons.tile.FlxTilemapExt","update",0x159f6fa9,"flixel.addons.tile.FlxTilemapExt.update","flixel/addons/tile/FlxTilemapExt.hx",80,0x29266091)
HX_LOCAL_STACK_FRAME(_hx_pos_fc36390f83f7f1e5_108_drawTilemap,"flixel.addons.tile.FlxTilemapExt","drawTilemap",0x95ca66ea,"flixel.addons.tile.FlxTilemapExt.drawTilemap","flixel/addons/tile/FlxTilemapExt.hx",108,0x29266091)
HX_LOCAL_STACK_FRAME(_hx_pos_fc36390f83f7f1e5_268_setSpecialTiles,"flixel.addons.tile.FlxTilemapExt","setSpecialTiles",0xceebf9ae,"flixel.addons.tile.FlxTilemapExt.setSpecialTiles","flixel/addons/tile/FlxTilemapExt.hx",268,0x29266091)
HX_LOCAL_STACK_FRAME(_hx_pos_fc36390f83f7f1e5_317_overlapsWithCallback,"flixel.addons.tile.FlxTilemapExt","overlapsWithCallback",0x527644b7,"flixel.addons.tile.FlxTilemapExt.overlapsWithCallback","flixel/addons/tile/FlxTilemapExt.hx",317,0x29266091)
HX_LOCAL_STACK_FRAME(_hx_pos_fc36390f83f7f1e5_420_setDownwardsGlue,"flixel.addons.tile.FlxTilemapExt","setDownwardsGlue",0xcc5aee08,"flixel.addons.tile.FlxTilemapExt.setDownwardsGlue","flixel/addons/tile/FlxTilemapExt.hx",420,0x29266091)
HX_LOCAL_STACK_FRAME(_hx_pos_fc36390f83f7f1e5_435_setSlopes,"flixel.addons.tile.FlxTilemapExt","setSlopes",0x172c788a,"flixel.addons.tile.FlxTilemapExt.setSlopes","flixel/addons/tile/FlxTilemapExt.hx",435,0x29266091)
HX_LOCAL_STACK_FRAME(_hx_pos_fc36390f83f7f1e5_462_setGentle,"flixel.addons.tile.FlxTilemapExt","setGentle",0x426fecff,"flixel.addons.tile.FlxTilemapExt.setGentle","flixel/addons/tile/FlxTilemapExt.hx",462,0x29266091)
HX_LOCAL_STACK_FRAME(_hx_pos_fc36390f83f7f1e5_485_setSteep,"flixel.addons.tile.FlxTilemapExt","setSteep",0x6a626cad,"flixel.addons.tile.FlxTilemapExt.setSteep","flixel/addons/tile/FlxTilemapExt.hx",485,0x29266091)
HX_LOCAL_STACK_FRAME(_hx_pos_fc36390f83f7f1e5_509_checkThickGentle,"flixel.addons.tile.FlxTilemapExt","checkThickGentle",0x33400952,"flixel.addons.tile.FlxTilemapExt.checkThickGentle","flixel/addons/tile/FlxTilemapExt.hx",509,0x29266091)
HX_LOCAL_STACK_FRAME(_hx_pos_fc36390f83f7f1e5_514_checkThinGentle,"flixel.addons.tile.FlxTilemapExt","checkThinGentle",0xc0dd29de,"flixel.addons.tile.FlxTilemapExt.checkThinGentle","flixel/addons/tile/FlxTilemapExt.hx",514,0x29266091)
HX_LOCAL_STACK_FRAME(_hx_pos_fc36390f83f7f1e5_519_checkThickSteep,"flixel.addons.tile.FlxTilemapExt","checkThickSteep",0x02ff7bba,"flixel.addons.tile.FlxTilemapExt.checkThickSteep","flixel/addons/tile/FlxTilemapExt.hx",519,0x29266091)
HX_LOCAL_STACK_FRAME(_hx_pos_fc36390f83f7f1e5_524_checkThinSteep,"flixel.addons.tile.FlxTilemapExt","checkThinSteep",0x3870b0ae,"flixel.addons.tile.FlxTilemapExt.checkThinSteep","flixel/addons/tile/FlxTilemapExt.hx",524,0x29266091)
HX_LOCAL_STACK_FRAME(_hx_pos_fc36390f83f7f1e5_533_fixSlopePoint,"flixel.addons.tile.FlxTilemapExt","fixSlopePoint",0x4a6df7ba,"flixel.addons.tile.FlxTilemapExt.fixSlopePoint","flixel/addons/tile/FlxTilemapExt.hx",533,0x29266091)
HX_LOCAL_STACK_FRAME(_hx_pos_fc36390f83f7f1e5_545_onCollideFloorSlope,"flixel.addons.tile.FlxTilemapExt","onCollideFloorSlope",0xd997f31e,"flixel.addons.tile.FlxTilemapExt.onCollideFloorSlope","flixel/addons/tile/FlxTilemapExt.hx",545,0x29266091)
HX_LOCAL_STACK_FRAME(_hx_pos_fc36390f83f7f1e5_571_onCollideCeilSlope,"flixel.addons.tile.FlxTilemapExt","onCollideCeilSlope",0x2272f167,"flixel.addons.tile.FlxTilemapExt.onCollideCeilSlope","flixel/addons/tile/FlxTilemapExt.hx",571,0x29266091)
HX_LOCAL_STACK_FRAME(_hx_pos_fc36390f83f7f1e5_594_solveCollisionSlopeNorthwest,"flixel.addons.tile.FlxTilemapExt","solveCollisionSlopeNorthwest",0x6b73d6bc,"flixel.addons.tile.FlxTilemapExt.solveCollisionSlopeNorthwest","flixel/addons/tile/FlxTilemapExt.hx",594,0x29266091)
HX_LOCAL_STACK_FRAME(_hx_pos_fc36390f83f7f1e5_666_solveCollisionSlopeNortheast,"flixel.addons.tile.FlxTilemapExt","solveCollisionSlopeNortheast",0x5f8af68a,"flixel.addons.tile.FlxTilemapExt.solveCollisionSlopeNortheast","flixel/addons/tile/FlxTilemapExt.hx",666,0x29266091)
HX_LOCAL_STACK_FRAME(_hx_pos_fc36390f83f7f1e5_738_solveCollisionSlopeSouthwest,"flixel.addons.tile.FlxTilemapExt","solveCollisionSlopeSouthwest",0x06eb4804,"flixel.addons.tile.FlxTilemapExt.solveCollisionSlopeSouthwest","flixel/addons/tile/FlxTilemapExt.hx",738,0x29266091)
HX_LOCAL_STACK_FRAME(_hx_pos_fc36390f83f7f1e5_794_solveCollisionSlopeSoutheast,"flixel.addons.tile.FlxTilemapExt","solveCollisionSlopeSoutheast",0xfb0267d2,"flixel.addons.tile.FlxTilemapExt.solveCollisionSlopeSoutheast","flixel/addons/tile/FlxTilemapExt.hx",794,0x29266091)
HX_LOCAL_STACK_FRAME(_hx_pos_fc36390f83f7f1e5_848_setSlopeProperties,"flixel.addons.tile.FlxTilemapExt","setSlopeProperties",0x29f54d1c,"flixel.addons.tile.FlxTilemapExt.setSlopeProperties","flixel/addons/tile/FlxTilemapExt.hx",848,0x29266091)
HX_LOCAL_STACK_FRAME(_hx_pos_fc36390f83f7f1e5_875_checkArrays,"flixel.addons.tile.FlxTilemapExt","checkArrays",0xa0f57e02,"flixel.addons.tile.FlxTilemapExt.checkArrays","flixel/addons/tile/FlxTilemapExt.hx",875,0x29266091)
HX_LOCAL_STACK_FRAME(_hx_pos_fc36390f83f7f1e5_882_set_frames,"flixel.addons.tile.FlxTilemapExt","set_frames",0x6ce9f783,"flixel.addons.tile.FlxTilemapExt.set_frames","flixel/addons/tile/FlxTilemapExt.hx",882,0x29266091)
namespace flixel{
namespace addons{
namespace tile{

void FlxTilemapExt_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_fc36390f83f7f1e5_35_new)
HXLINE(  54)		this->_slopeThinSteep = ::Array_obj< int >::__new(0);
HXLINE(  53)		this->_slopeThickSteep = ::Array_obj< int >::__new(0);
HXLINE(  52)		this->_slopeThinGentle = ::Array_obj< int >::__new(0);
HXLINE(  51)		this->_slopeThickGentle = ::Array_obj< int >::__new(0);
HXLINE(  49)		this->_slopeSoutheast = ::Array_obj< int >::__new(0);
HXLINE(  48)		this->_slopeSouthwest = ::Array_obj< int >::__new(0);
HXLINE(  47)		this->_slopeNortheast = ::Array_obj< int >::__new(0);
HXLINE(  46)		this->_slopeNorthwest = ::Array_obj< int >::__new(0);
HXLINE(  44)		this->_slopeSlowDownFactor = ((Float)0);
HXLINE(  41)		this->_downwardsGlue = false;
HXLINE(  40)		 ::flixel::math::FlxPoint point = ::flixel::math::FlxPoint_obj::_pool->get()->set(( (Float)(0) ),( (Float)(0) ));
HXDLIN(  40)		point->_inPool = false;
HXDLIN(  40)		this->_objPoint = point;
HXLINE(  39)		 ::flixel::math::FlxPoint point1 = ::flixel::math::FlxPoint_obj::_pool->get()->set(( (Float)(0) ),( (Float)(0) ));
HXDLIN(  39)		point1->_inPool = false;
HXDLIN(  39)		this->_slopePoint = point1;
HXLINE(  38)		this->_snapping = 2;
HXLINE(  35)		super::__construct();
            	}

Dynamic FlxTilemapExt_obj::__CreateEmpty() { return new FlxTilemapExt_obj; }

void *FlxTilemapExt_obj::_hx_vtable = 0;

Dynamic FlxTilemapExt_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxTilemapExt_obj > _hx_result = new FlxTilemapExt_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool FlxTilemapExt_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x3d6253b5) {
		if (inClassId<=(int)0x37464a20) {
			if (inClassId<=(int)0x1dc5d3c6) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x1dc5d3c6;
			} else {
				return inClassId==(int)0x37464a20;
			}
		} else {
			return inClassId==(int)0x3d6253b5;
		}
	} else {
		return inClassId==(int)0x7ccf8994 || inClassId==(int)0x7dab0655;
	}
}

void FlxTilemapExt_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_fc36390f83f7f1e5_60_destroy)
HXLINE(  61)		this->_slopePoint = ( ( ::flixel::math::FlxPoint)(::flixel::util::FlxDestroyUtil_obj::put(this->_slopePoint)) );
HXLINE(  62)		this->_objPoint = ( ( ::flixel::math::FlxPoint)(::flixel::util::FlxDestroyUtil_obj::put(this->_objPoint)) );
HXLINE(  64)		this->_slopeNorthwest = null();
HXLINE(  65)		this->_slopeNortheast = null();
HXLINE(  66)		this->_slopeSouthwest = null();
HXLINE(  67)		this->_slopeSoutheast = null();
HXLINE(  69)		this->_slopeThickGentle = null();
HXLINE(  70)		this->_slopeThinGentle = null();
HXLINE(  71)		this->_slopeThickSteep = null();
HXLINE(  72)		this->_slopeThinSteep = null();
HXLINE(  74)		this->super::destroy();
HXLINE(  76)		this->_specialTiles = ::flixel::util::FlxDestroyUtil_obj::destroyArray(this->_specialTiles);
            	}


void FlxTilemapExt_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_fc36390f83f7f1e5_80_update)
HXLINE(  81)		this->super::update(elapsed);
HXLINE(  82)		bool dirty = false;
HXLINE(  84)		bool _hx_tmp;
HXDLIN(  84)		if (::hx::IsNotNull( this->_specialTiles )) {
HXLINE(  84)			_hx_tmp = (this->_specialTiles->length > 0);
            		}
            		else {
HXLINE(  84)			_hx_tmp = false;
            		}
HXDLIN(  84)		if (_hx_tmp) {
HXLINE(  86)			int _g = 0;
HXDLIN(  86)			::Array< ::Dynamic> _g1 = this->_specialTiles;
HXDLIN(  86)			while((_g < _g1->length)){
HXLINE(  86)				 ::flixel::addons::tile::FlxTileSpecial tile = _g1->__get(_g).StaticCast<  ::flixel::addons::tile::FlxTileSpecial >();
HXDLIN(  86)				_g = (_g + 1);
HXLINE(  88)				bool _hx_tmp;
HXDLIN(  88)				if (::hx::IsNotNull( tile )) {
HXLINE(  88)					_hx_tmp = ::hx::IsNotNull( tile->animation );
            				}
            				else {
HXLINE(  88)					_hx_tmp = false;
            				}
HXDLIN(  88)				if (_hx_tmp) {
HXLINE(  90)					tile->update(elapsed);
HXLINE(  91)					if (!(dirty)) {
HXLINE(  91)						dirty = tile->dirty;
            					}
            					else {
HXLINE(  91)						dirty = true;
            					}
            				}
            			}
            		}
HXLINE(  96)		if (dirty) {
HXLINE(  97)			this->setDirty(true);
            		}
            	}


void FlxTilemapExt_obj::drawTilemap( ::flixel::tile::FlxTilemapBuffer Buffer, ::flixel::FlxCamera Camera){
            	HX_GC_STACKFRAME(&_hx_pos_fc36390f83f7f1e5_108_drawTilemap)
HXLINE( 109)		bool isColored;
HXDLIN( 109)		if ((this->alpha == 1)) {
HXLINE( 109)			isColored = (this->color != 16777215);
            		}
            		else {
HXLINE( 109)			isColored = true;
            		}
HXLINE( 111)		Float drawX = ( (Float)(0) );
HXLINE( 112)		Float drawY = ( (Float)(0) );
HXLINE( 113)		Float scaledWidth = ( (Float)(this->_tileWidth) );
HXLINE( 114)		Float scaledHeight = ( (Float)(this->_tileHeight) );
HXLINE( 116)		 ::flixel::math::FlxMatrix _tileTransformMatrix = null();
HXLINE( 117)		 ::flixel::math::FlxMatrix matrixToUse;
HXLINE( 119)		if (::flixel::FlxG_obj::renderBlit) {
HXLINE( 121)			Buffer->fill(null());
            		}
            		else {
HXLINE( 125)			{
HXLINE( 125)				 ::flixel::math::FlxPoint _this = this->getScreenPosition(this->_point,Camera);
HXDLIN( 125)				 ::openfl::geom::Point FlashPoint = this->_helperPoint;
HXDLIN( 125)				if (::hx::IsNull( FlashPoint )) {
HXLINE( 125)					FlashPoint =  ::openfl::geom::Point_obj::__alloc( HX_CTX ,null(),null());
            				}
HXDLIN( 125)				FlashPoint->x = _this->x;
HXDLIN( 125)				FlashPoint->y = _this->y;
            			}
HXLINE( 127)			Float _hx_tmp;
HXDLIN( 127)			if (this->isPixelPerfectRender(Camera)) {
HXLINE( 127)				_hx_tmp = ( (Float)(::Math_obj::floor(this->_helperPoint->x)) );
            			}
            			else {
HXLINE( 127)				_hx_tmp = this->_helperPoint->x;
            			}
HXDLIN( 127)			this->_helperPoint->x = _hx_tmp;
HXLINE( 128)			Float _hx_tmp1;
HXDLIN( 128)			if (this->isPixelPerfectRender(Camera)) {
HXLINE( 128)				_hx_tmp1 = ( (Float)(::Math_obj::floor(this->_helperPoint->y)) );
            			}
            			else {
HXLINE( 128)				_hx_tmp1 = this->_helperPoint->y;
            			}
HXDLIN( 128)			this->_helperPoint->y = _hx_tmp1;
            		}
HXLINE( 132)		this->_point->set_x(((((Camera->scroll->x * this->scrollFactor->x) - this->x) - this->offset->x) + Camera->viewOffsetX));
HXLINE( 133)		this->_point->set_y(((((Camera->scroll->y * this->scrollFactor->y) - this->y) - this->offset->y) + Camera->viewOffsetY));
HXLINE( 135)		int screenXInTiles = ::Math_obj::floor((this->_point->x / ( (Float)(this->_tileWidth) )));
HXLINE( 136)		int screenYInTiles = ::Math_obj::floor((this->_point->y / ( (Float)(this->_tileHeight) )));
HXLINE( 137)		int screenRows = Buffer->rows;
HXLINE( 138)		int screenColumns = Buffer->columns;
HXLINE( 141)		 ::Dynamic Max = (this->widthInTiles - screenColumns);
HXDLIN( 141)		Float lowerBound;
HXDLIN( 141)		if ((screenXInTiles < 0)) {
HXLINE( 141)			lowerBound = ( (Float)(0) );
            		}
            		else {
HXLINE( 141)			lowerBound = ( (Float)(screenXInTiles) );
            		}
HXDLIN( 141)		Float screenXInTiles1;
HXDLIN( 141)		bool screenXInTiles2;
HXDLIN( 141)		if (::hx::IsNotNull( Max )) {
HXLINE( 141)			screenXInTiles2 = ::hx::IsGreater( lowerBound,Max );
            		}
            		else {
HXLINE( 141)			screenXInTiles2 = false;
            		}
HXDLIN( 141)		if (screenXInTiles2) {
HXLINE( 141)			screenXInTiles1 = ( (Float)(Max) );
            		}
            		else {
HXLINE( 141)			screenXInTiles1 = lowerBound;
            		}
HXDLIN( 141)		screenXInTiles = ::Std_obj::_hx_int(screenXInTiles1);
HXLINE( 142)		 ::Dynamic Max1 = (this->heightInTiles - screenRows);
HXDLIN( 142)		Float lowerBound1;
HXDLIN( 142)		if ((screenYInTiles < 0)) {
HXLINE( 142)			lowerBound1 = ( (Float)(0) );
            		}
            		else {
HXLINE( 142)			lowerBound1 = ( (Float)(screenYInTiles) );
            		}
HXDLIN( 142)		Float screenYInTiles1;
HXDLIN( 142)		bool screenYInTiles2;
HXDLIN( 142)		if (::hx::IsNotNull( Max1 )) {
HXLINE( 142)			screenYInTiles2 = ::hx::IsGreater( lowerBound1,Max1 );
            		}
            		else {
HXLINE( 142)			screenYInTiles2 = false;
            		}
HXDLIN( 142)		if (screenYInTiles2) {
HXLINE( 142)			screenYInTiles1 = ( (Float)(Max1) );
            		}
            		else {
HXLINE( 142)			screenYInTiles1 = lowerBound1;
            		}
HXDLIN( 142)		screenYInTiles = ::Std_obj::_hx_int(screenYInTiles1);
HXLINE( 144)		int rowIndex = ((screenYInTiles * this->widthInTiles) + screenXInTiles);
HXLINE( 145)		this->_flashPoint->y = ( (Float)(0) );
HXLINE( 146)		int columnIndex;
HXLINE( 147)		 ::flixel::tile::FlxTile tile;
HXLINE( 148)		 ::flixel::graphics::frames::FlxFrame frame;
HXLINE( 149)		 ::flixel::addons::tile::FlxTileSpecial special;
HXLINE( 155)		bool isSpecial = false;
HXLINE( 157)		{
HXLINE( 157)			int _g = 0;
HXDLIN( 157)			int _g1 = screenRows;
HXDLIN( 157)			while((_g < _g1)){
HXLINE( 157)				_g = (_g + 1);
HXDLIN( 157)				int row = (_g - 1);
HXLINE( 159)				columnIndex = rowIndex;
HXLINE( 160)				this->_flashPoint->x = ( (Float)(0) );
HXLINE( 162)				{
HXLINE( 162)					int _g1 = 0;
HXDLIN( 162)					int _g2 = screenColumns;
HXDLIN( 162)					while((_g1 < _g2)){
HXLINE( 162)						_g1 = (_g1 + 1);
HXDLIN( 162)						int column = (_g1 - 1);
HXLINE( 164)						tile = Dynamic( this->_tileObjects->__get(this->_data->__get(columnIndex))).StaticCast<  ::flixel::tile::FlxTile >();
HXLINE( 165)						special = null();
HXLINE( 166)						isSpecial = false;
HXLINE( 168)						bool _hx_tmp;
HXDLIN( 168)						if (::hx::IsNotNull( this->_specialTiles )) {
HXLINE( 168)							_hx_tmp = ::hx::IsNotNull( this->_specialTiles->__get(columnIndex).StaticCast<  ::flixel::addons::tile::FlxTileSpecial >() );
            						}
            						else {
HXLINE( 168)							_hx_tmp = false;
            						}
HXDLIN( 168)						if (_hx_tmp) {
HXLINE( 170)							special = this->_specialTiles->__get(columnIndex).StaticCast<  ::flixel::addons::tile::FlxTileSpecial >();
HXLINE( 171)							bool isSpecial1;
HXDLIN( 171)							bool isSpecial2;
HXDLIN( 171)							if (!(special->flipX)) {
HXLINE( 171)								isSpecial2 = special->flipY;
            							}
            							else {
HXLINE( 171)								isSpecial2 = true;
            							}
HXDLIN( 171)							if (!(isSpecial2)) {
HXLINE( 171)								isSpecial1 = (special->rotate != 0);
            							}
            							else {
HXLINE( 171)								isSpecial1 = true;
            							}
HXDLIN( 171)							if (!(isSpecial1)) {
HXLINE( 171)								isSpecial = ::hx::IsNotNull( special->animation );
            							}
            							else {
HXLINE( 171)								isSpecial = true;
            							}
            						}
HXLINE( 174)						if (::flixel::FlxG_obj::renderBlit) {
HXLINE( 176)							if (isSpecial) {
HXLINE( 178)								special->paint(Buffer->pixels,this->_flashPoint);
HXLINE( 179)								bool _hx_tmp;
HXDLIN( 179)								if (!(special->dirty)) {
HXLINE( 179)									_hx_tmp = Buffer->dirty;
            								}
            								else {
HXLINE( 179)									_hx_tmp = true;
            								}
HXDLIN( 179)								Buffer->dirty = _hx_tmp;
            							}
            							else {
HXLINE( 181)								bool _hx_tmp;
HXDLIN( 181)								bool _hx_tmp1;
HXDLIN( 181)								if (::hx::IsNotNull( tile )) {
HXLINE( 181)									_hx_tmp1 = tile->visible;
            								}
            								else {
HXLINE( 181)									_hx_tmp1 = false;
            								}
HXDLIN( 181)								if (_hx_tmp1) {
HXLINE( 181)									_hx_tmp = (tile->frame->type != 2);
            								}
            								else {
HXLINE( 181)									_hx_tmp = false;
            								}
HXDLIN( 181)								if (_hx_tmp) {
HXLINE( 183)									tile->frame->paint(Buffer->pixels,this->_flashPoint,true,null());
            								}
            							}
            						}
            						else {
HXLINE( 213)							if (isSpecial) {
HXLINE( 213)								frame = special->currFrame;
            							}
            							else {
HXLINE( 213)								frame = tile->frame;
            							}
HXLINE( 215)							if (::hx::IsNotNull( frame )) {
HXLINE( 217)								drawX = (this->_helperPoint->x + (( (Float)(::hx::Mod(columnIndex,this->widthInTiles)) ) * scaledWidth));
HXLINE( 218)								drawY = (this->_helperPoint->y + (( (Float)(::Math_obj::floor((( (Float)(columnIndex) ) / ( (Float)(this->widthInTiles) )))) ) * scaledHeight));
HXLINE( 220)								if (isSpecial) {
HXLINE( 222)									_tileTransformMatrix = special->getMatrix();
HXLINE( 223)									matrixToUse = _tileTransformMatrix;
            								}
            								else {
HXLINE( 227)									frame->prepareMatrix(this->_matrix,null(),null(),null());
HXLINE( 228)									matrixToUse = this->_matrix;
            								}
HXLINE( 231)								matrixToUse->translate(drawX,drawY);
HXLINE( 232)								Camera->drawPixels(frame,null(),matrixToUse,this->colorTransform,this->blend,null(),null());
            							}
            						}
HXLINE( 236)						if (::flixel::FlxG_obj::renderBlit) {
HXLINE( 238)							 ::openfl::geom::Point fh = this->_flashPoint;
HXDLIN( 238)							fh->x = (fh->x + this->_tileWidth);
            						}
HXLINE( 240)						columnIndex = (columnIndex + 1);
            					}
            				}
HXLINE( 243)				rowIndex = (rowIndex + this->widthInTiles);
HXLINE( 244)				if (::flixel::FlxG_obj::renderBlit) {
HXLINE( 246)					 ::openfl::geom::Point fh = this->_flashPoint;
HXDLIN( 246)					fh->y = (fh->y + this->_tileHeight);
            				}
            			}
            		}
HXLINE( 250)		Buffer->x = ( (Float)((screenXInTiles * this->_tileWidth)) );
HXLINE( 251)		Buffer->y = ( (Float)((screenYInTiles * this->_tileHeight)) );
HXLINE( 253)		if (::flixel::FlxG_obj::renderBlit) {
HXLINE( 255)			if (isColored) {
HXLINE( 256)				Buffer->colorTransform(this->colorTransform);
            			}
HXLINE( 257)			Buffer->blend = this->blend;
            		}
HXLINE( 260)		Buffer->dirty = false;
            	}


void FlxTilemapExt_obj::setSpecialTiles(::Array< ::Dynamic> tiles){
            	HX_STACKFRAME(&_hx_pos_fc36390f83f7f1e5_268_setSpecialTiles)
HXLINE( 269)		this->_specialTiles = ::Array_obj< ::Dynamic>::__new();
HXLINE( 271)		 ::flixel::addons::tile::FlxTileSpecial tile;
HXLINE( 272)		{
HXLINE( 272)			int _g = 0;
HXDLIN( 272)			int _g1 = tiles->length;
HXDLIN( 272)			while((_g < _g1)){
HXLINE( 272)				_g = (_g + 1);
HXDLIN( 272)				int i = (_g - 1);
HXLINE( 274)				tile = tiles->__get(i).StaticCast<  ::flixel::addons::tile::FlxTileSpecial >();
HXLINE( 275)				bool _hx_tmp;
HXDLIN( 275)				if (::hx::IsNotNull( tile )) {
HXLINE( 275)					bool _hx_tmp1;
HXDLIN( 275)					bool _hx_tmp2;
HXDLIN( 275)					if (!(tile->flipX)) {
HXLINE( 275)						_hx_tmp2 = tile->flipY;
            					}
            					else {
HXLINE( 275)						_hx_tmp2 = true;
            					}
HXDLIN( 275)					if (!(_hx_tmp2)) {
HXLINE( 275)						_hx_tmp1 = (tile->rotate != 0);
            					}
            					else {
HXLINE( 275)						_hx_tmp1 = true;
            					}
HXDLIN( 275)					if (!(_hx_tmp1)) {
HXLINE( 275)						_hx_tmp = ::hx::IsNotNull( tile->animation );
            					}
            					else {
HXLINE( 275)						_hx_tmp = true;
            					}
            				}
            				else {
HXLINE( 275)					_hx_tmp = false;
            				}
HXDLIN( 275)				if (_hx_tmp) {
HXLINE( 277)					this->_specialTiles[i] = tile;
HXLINE( 279)					tile->set_currTileId((tile->currTileId - this->_startingIndex));
HXLINE( 280)					tile->set_frames(this->frames);
HXLINE( 282)					if (::hx::IsNotNull( tile->animation )) {
HXLINE( 284)						::Array< int > animFrames = tile->animation->frames;
HXLINE( 285)						::Array< int > preparedFrames = ::Array_obj< int >::__new(0);
HXLINE( 287)						{
HXLINE( 287)							int _g = 0;
HXDLIN( 287)							int _g1 = animFrames->length;
HXDLIN( 287)							while((_g < _g1)){
HXLINE( 287)								_g = (_g + 1);
HXDLIN( 287)								int j = (_g - 1);
HXLINE( 289)								preparedFrames[j] = (animFrames->__get(j) - this->_startingIndex);
            							}
            						}
HXLINE( 292)						tile->animation->frames = preparedFrames;
            					}
            				}
            				else {
HXLINE( 297)					this->_specialTiles[i] = null();
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxTilemapExt_obj,setSpecialTiles,(void))

bool FlxTilemapExt_obj::overlapsWithCallback( ::flixel::FlxObject Object, ::Dynamic Callback,::hx::Null< bool >  __o_FlipCallbackParams, ::flixel::math::FlxPoint Position){
            		bool FlipCallbackParams = __o_FlipCallbackParams.Default(false);
            	HX_STACKFRAME(&_hx_pos_fc36390f83f7f1e5_317_overlapsWithCallback)
HXLINE( 318)		bool results = false;
HXLINE( 320)		Float X = this->x;
HXLINE( 321)		Float Y = this->y;
HXLINE( 323)		if (::hx::IsNotNull( Position )) {
HXLINE( 325)			X = Position->x;
HXLINE( 326)			Y = Position->y;
            		}
HXLINE( 330)		int selectionX = ::Math_obj::floor(((Object->x - X) / ( (Float)(this->_tileWidth) )));
HXLINE( 331)		int selectionY = ::Math_obj::floor(((Object->y - Y) / ( (Float)(this->_tileHeight) )));
HXLINE( 332)		Float selectionWidth = Object->get_width();
HXDLIN( 332)		int selectionWidth1 = ((selectionX + ::Math_obj::ceil((selectionWidth / ( (Float)(this->_tileWidth) )))) + 1);
HXLINE( 333)		Float selectionHeight = Object->get_height();
HXDLIN( 333)		int selectionHeight1 = ((selectionY + ::Math_obj::ceil((selectionHeight / ( (Float)(this->_tileHeight) )))) + 1);
HXLINE( 336)		if ((selectionX <= 0)) {
HXLINE( 336)			selectionX = 0;
            		}
HXLINE( 337)		if ((selectionY <= 0)) {
HXLINE( 337)			selectionY = 0;
            		}
HXLINE( 338)		int b = this->widthInTiles;
HXDLIN( 338)		if ((selectionWidth1 > b)) {
HXLINE( 338)			selectionWidth1 = b;
            		}
HXLINE( 339)		int b1 = this->heightInTiles;
HXDLIN( 339)		if ((selectionHeight1 > b1)) {
HXLINE( 339)			selectionHeight1 = b1;
            		}
HXLINE( 342)		int rowStart = (selectionY * this->widthInTiles);
HXLINE( 343)		int row = selectionY;
HXLINE( 344)		int column;
HXLINE( 345)		 ::flixel::tile::FlxTile tile;
HXLINE( 346)		bool overlapFound;
HXLINE( 347)		Float deltaX = (X - this->last->x);
HXLINE( 348)		Float deltaY = (Y - this->last->y);
HXLINE( 350)		while((row < selectionHeight1)){
HXLINE( 352)			column = selectionX;
HXLINE( 354)			while((column < selectionWidth1)){
HXLINE( 356)				overlapFound = false;
HXLINE( 357)				tile = Dynamic( this->_tileObjects->__get(this->_data->__get((rowStart + column)))).StaticCast<  ::flixel::tile::FlxTile >();
HXLINE( 359)				if ((tile->allowCollisions != 0)) {
HXLINE( 361)					tile->set_x((X + (column * this->_tileWidth)));
HXLINE( 362)					tile->set_y((Y + (row * this->_tileHeight)));
HXLINE( 363)					tile->last->set_x((tile->x - deltaX));
HXLINE( 364)					tile->last->set_y((tile->y - deltaY));
HXLINE( 366)					if (::hx::IsNotNull( Callback )) {
HXLINE( 368)						if (FlipCallbackParams) {
HXLINE( 370)							overlapFound = ( (bool)(Callback(Object,tile)) );
            						}
            						else {
HXLINE( 374)							overlapFound = ( (bool)(Callback(tile,Object)) );
            						}
            					}
            					else {
HXLINE( 379)						bool overlapFound1;
HXDLIN( 379)						bool overlapFound2;
HXDLIN( 379)						Float Object1 = Object->x;
HXDLIN( 379)						Float overlapFound3 = (Object1 + Object->get_width());
HXDLIN( 379)						if ((overlapFound3 > tile->x)) {
HXLINE( 379)							Float Object1 = Object->x;
HXDLIN( 379)							Float tile1 = tile->x;
HXDLIN( 379)							overlapFound2 = (Object1 < (tile1 + tile->get_width()));
            						}
            						else {
HXLINE( 379)							overlapFound2 = false;
            						}
HXDLIN( 379)						if (overlapFound2) {
HXLINE( 379)							Float Object1 = Object->y;
HXDLIN( 379)							Float overlapFound = (Object1 + Object->get_height());
HXDLIN( 379)							overlapFound1 = (overlapFound > tile->y);
            						}
            						else {
HXLINE( 379)							overlapFound1 = false;
            						}
HXDLIN( 379)						if (overlapFound1) {
HXLINE( 380)							Float Object1 = Object->y;
HXDLIN( 380)							Float tile1 = tile->y;
HXDLIN( 380)							overlapFound = (Object1 < (tile1 + tile->get_height()));
            						}
            						else {
HXLINE( 379)							overlapFound = false;
            						}
            					}
HXLINE( 384)					bool _hx_tmp;
HXDLIN( 384)					if (!(overlapFound)) {
HXLINE( 384)						if (!(overlapFound)) {
HXLINE( 384)							_hx_tmp = this->checkArrays(tile->index);
            						}
            						else {
HXLINE( 384)							_hx_tmp = false;
            						}
            					}
            					else {
HXLINE( 384)						_hx_tmp = true;
            					}
HXDLIN( 384)					if (_hx_tmp) {
HXLINE( 386)						bool _hx_tmp;
HXDLIN( 386)						if (::hx::IsNotNull( tile->callbackFunction )) {
HXLINE( 387)							if (::hx::IsNotNull( tile->filter )) {
HXLINE( 386)								_hx_tmp = ::Std_obj::isOfType(Object,tile->filter);
            							}
            							else {
HXLINE( 386)								_hx_tmp = true;
            							}
            						}
            						else {
HXLINE( 386)							_hx_tmp = false;
            						}
HXDLIN( 386)						if (_hx_tmp) {
HXLINE( 389)							tile->mapIndex = (rowStart + column);
HXLINE( 390)							tile->callbackFunction(tile,Object);
            						}
HXLINE( 392)						results = true;
            					}
            				}
            				else {
HXLINE( 395)					bool _hx_tmp;
HXDLIN( 395)					if (::hx::IsNotNull( tile->callbackFunction )) {
HXLINE( 396)						if (::hx::IsNotNull( tile->filter )) {
HXLINE( 395)							_hx_tmp = ::Std_obj::isOfType(Object,tile->filter);
            						}
            						else {
HXLINE( 395)							_hx_tmp = true;
            						}
            					}
            					else {
HXLINE( 395)						_hx_tmp = false;
            					}
HXDLIN( 395)					if (_hx_tmp) {
HXLINE( 398)						tile->mapIndex = (rowStart + column);
HXLINE( 399)						tile->callbackFunction(tile,Object);
            					}
            				}
HXLINE( 401)				column = (column + 1);
            			}
HXLINE( 403)			rowStart = (rowStart + this->widthInTiles);
HXLINE( 404)			row = (row + 1);
            		}
HXLINE( 407)		return results;
            	}


void FlxTilemapExt_obj::setDownwardsGlue(bool downwardsGlue,::hx::Null< Float >  __o_slopeSlowDownFactor,::hx::Null< Float >  __o_velocityYDownSlope){
            		Float slopeSlowDownFactor = __o_slopeSlowDownFactor.Default(((Float)0.0));
            		Float velocityYDownSlope = __o_velocityYDownSlope.Default(200);
            	HX_STACKFRAME(&_hx_pos_fc36390f83f7f1e5_420_setDownwardsGlue)
HXLINE( 421)		this->_downwardsGlue = downwardsGlue;
HXLINE( 422)		this->_slopeSlowDownFactor = (( (Float)(1) ) - (slopeSlowDownFactor / ( (Float)(10) )));
HXLINE( 423)		this->_velocityYDownSlope = velocityYDownSlope;
            	}


HX_DEFINE_DYNAMIC_FUNC3(FlxTilemapExt_obj,setDownwardsGlue,(void))

void FlxTilemapExt_obj::setSlopes(::Array< int > Northwest,::Array< int > Northeast,::Array< int > Southwest,::Array< int > Southeast){
            	HX_STACKFRAME(&_hx_pos_fc36390f83f7f1e5_435_setSlopes)
HXLINE( 436)		if (::hx::IsNotNull( Northwest )) {
HXLINE( 438)			this->_slopeNorthwest = Northwest;
            		}
HXLINE( 440)		if (::hx::IsNotNull( Northeast )) {
HXLINE( 442)			this->_slopeNortheast = Northeast;
            		}
HXLINE( 444)		if (::hx::IsNotNull( Southwest )) {
HXLINE( 446)			this->_slopeSouthwest = Southwest;
            		}
HXLINE( 448)		if (::hx::IsNotNull( Southeast )) {
HXLINE( 450)			this->_slopeSoutheast = Southeast;
            		}
HXLINE( 452)		this->setSlopeProperties();
            	}


HX_DEFINE_DYNAMIC_FUNC4(FlxTilemapExt_obj,setSlopes,(void))

void FlxTilemapExt_obj::setGentle(::Array< int > ThickTiles,::Array< int > ThinTiles){
            	HX_STACKFRAME(&_hx_pos_fc36390f83f7f1e5_462_setGentle)
HXLINE( 463)		if (::hx::IsNotNull( ThickTiles )) {
HXLINE( 465)			this->_slopeThickGentle = ThickTiles;
            		}
HXLINE( 468)		if (::hx::IsNotNull( ThinTiles )) {
HXLINE( 470)			this->_slopeThinGentle = ThinTiles;
HXLINE( 471)			{
HXLINE( 471)				int _g = 0;
HXDLIN( 471)				::Array< int > _g1 = this->_slopeThinGentle;
HXDLIN( 471)				while((_g < _g1->length)){
HXLINE( 471)					int tile = _g1->__get(_g);
HXDLIN( 471)					_g = (_g + 1);
HXLINE( 473)					 ::flixel::tile::FlxTile _hx_tmp = Dynamic( this->_tileObjects->__get(tile)).StaticCast<  ::flixel::tile::FlxTile >();
HXDLIN( 473)					int _hx_tmp1;
HXDLIN( 473)					bool _hx_tmp2;
HXDLIN( 473)					if ((this->_slopeSouthwest->indexOf(tile,null()) < 0)) {
HXLINE( 473)						_hx_tmp2 = (this->_slopeSoutheast->indexOf(tile,null()) >= 0);
            					}
            					else {
HXLINE( 473)						_hx_tmp2 = true;
            					}
HXDLIN( 473)					if (_hx_tmp2) {
HXLINE( 473)						_hx_tmp1 = 256;
            					}
            					else {
HXLINE( 473)						_hx_tmp1 = 4096;
            					}
HXDLIN( 473)					_hx_tmp->set_allowCollisions(_hx_tmp1);
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxTilemapExt_obj,setGentle,(void))

void FlxTilemapExt_obj::setSteep(::Array< int > ThickTiles,::Array< int > ThinTiles){
            	HX_STACKFRAME(&_hx_pos_fc36390f83f7f1e5_485_setSteep)
HXLINE( 486)		if (::hx::IsNotNull( ThickTiles )) {
HXLINE( 488)			this->_slopeThickSteep = ThickTiles;
            		}
HXLINE( 491)		if (::hx::IsNotNull( ThinTiles )) {
HXLINE( 493)			this->_slopeThinSteep = ThinTiles;
HXLINE( 494)			{
HXLINE( 494)				int _g = 0;
HXDLIN( 494)				::Array< int > _g1 = this->_slopeThinSteep;
HXDLIN( 494)				while((_g < _g1->length)){
HXLINE( 494)					int tile = _g1->__get(_g);
HXDLIN( 494)					_g = (_g + 1);
HXLINE( 496)					 ::flixel::tile::FlxTile _hx_tmp = Dynamic( this->_tileObjects->__get(tile)).StaticCast<  ::flixel::tile::FlxTile >();
HXDLIN( 496)					int _hx_tmp1;
HXDLIN( 496)					bool _hx_tmp2;
HXDLIN( 496)					if ((this->_slopeSouthwest->indexOf(tile,null()) < 0)) {
HXLINE( 496)						_hx_tmp2 = (this->_slopeNorthwest->indexOf(tile,null()) >= 0);
            					}
            					else {
HXLINE( 496)						_hx_tmp2 = true;
            					}
HXDLIN( 496)					if (_hx_tmp2) {
HXLINE( 496)						_hx_tmp1 = 16;
            					}
            					else {
HXLINE( 496)						_hx_tmp1 = 1;
            					}
HXDLIN( 496)					_hx_tmp->set_allowCollisions(_hx_tmp1);
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxTilemapExt_obj,setSteep,(void))

bool FlxTilemapExt_obj::checkThickGentle(int TileIndex){
            	HX_STACKFRAME(&_hx_pos_fc36390f83f7f1e5_509_checkThickGentle)
HXDLIN( 509)		return (this->_slopeThickGentle->indexOf(TileIndex,null()) >= 0);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxTilemapExt_obj,checkThickGentle,return )

bool FlxTilemapExt_obj::checkThinGentle(int TileIndex){
            	HX_STACKFRAME(&_hx_pos_fc36390f83f7f1e5_514_checkThinGentle)
HXDLIN( 514)		return (this->_slopeThinGentle->indexOf(TileIndex,null()) >= 0);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxTilemapExt_obj,checkThinGentle,return )

bool FlxTilemapExt_obj::checkThickSteep(int TileIndex){
            	HX_STACKFRAME(&_hx_pos_fc36390f83f7f1e5_519_checkThickSteep)
HXDLIN( 519)		return (this->_slopeThickSteep->indexOf(TileIndex,null()) >= 0);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxTilemapExt_obj,checkThickSteep,return )

bool FlxTilemapExt_obj::checkThinSteep(int TileIndex){
            	HX_STACKFRAME(&_hx_pos_fc36390f83f7f1e5_524_checkThinSteep)
HXDLIN( 524)		return (this->_slopeThinSteep->indexOf(TileIndex,null()) >= 0);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxTilemapExt_obj,checkThinSteep,return )

void FlxTilemapExt_obj::fixSlopePoint( ::flixel::tile::FlxTile Slope){
            	HX_STACKFRAME(&_hx_pos_fc36390f83f7f1e5_533_fixSlopePoint)
HXLINE( 534)		Float Value = this->_slopePoint->x;
HXDLIN( 534)		 ::Dynamic Min = Slope->x;
HXDLIN( 534)		 ::Dynamic Max = (Slope->x + this->_tileWidth);
HXDLIN( 534)		Float lowerBound;
HXDLIN( 534)		bool lowerBound1;
HXDLIN( 534)		if (::hx::IsNotNull( Min )) {
HXLINE( 534)			lowerBound1 = ::hx::IsLess( Value,Min );
            		}
            		else {
HXLINE( 534)			lowerBound1 = false;
            		}
HXDLIN( 534)		if (lowerBound1) {
HXLINE( 534)			lowerBound = ( (Float)(Min) );
            		}
            		else {
HXLINE( 534)			lowerBound = Value;
            		}
HXDLIN( 534)		Float _hx_tmp;
HXDLIN( 534)		bool _hx_tmp1;
HXDLIN( 534)		if (::hx::IsNotNull( Max )) {
HXLINE( 534)			_hx_tmp1 = ::hx::IsGreater( lowerBound,Max );
            		}
            		else {
HXLINE( 534)			_hx_tmp1 = false;
            		}
HXDLIN( 534)		if (_hx_tmp1) {
HXLINE( 534)			_hx_tmp = ( (Float)(Max) );
            		}
            		else {
HXLINE( 534)			_hx_tmp = lowerBound;
            		}
HXDLIN( 534)		this->_slopePoint->set_x(_hx_tmp);
HXLINE( 535)		Float Value1 = this->_slopePoint->y;
HXDLIN( 535)		 ::Dynamic Min1 = Slope->y;
HXDLIN( 535)		 ::Dynamic Max1 = (Slope->y + this->_tileHeight);
HXDLIN( 535)		Float lowerBound2;
HXDLIN( 535)		bool lowerBound3;
HXDLIN( 535)		if (::hx::IsNotNull( Min1 )) {
HXLINE( 535)			lowerBound3 = ::hx::IsLess( Value1,Min1 );
            		}
            		else {
HXLINE( 535)			lowerBound3 = false;
            		}
HXDLIN( 535)		if (lowerBound3) {
HXLINE( 535)			lowerBound2 = ( (Float)(Min1) );
            		}
            		else {
HXLINE( 535)			lowerBound2 = Value1;
            		}
HXDLIN( 535)		Float _hx_tmp2;
HXDLIN( 535)		bool _hx_tmp3;
HXDLIN( 535)		if (::hx::IsNotNull( Max1 )) {
HXLINE( 535)			_hx_tmp3 = ::hx::IsGreater( lowerBound2,Max1 );
            		}
            		else {
HXLINE( 535)			_hx_tmp3 = false;
            		}
HXDLIN( 535)		if (_hx_tmp3) {
HXLINE( 535)			_hx_tmp2 = ( (Float)(Max1) );
            		}
            		else {
HXLINE( 535)			_hx_tmp2 = lowerBound2;
            		}
HXDLIN( 535)		this->_slopePoint->set_y(_hx_tmp2);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxTilemapExt_obj,fixSlopePoint,(void))

void FlxTilemapExt_obj::onCollideFloorSlope( ::flixel::FlxObject Slope, ::flixel::FlxObject Object){
            	HX_STACKFRAME(&_hx_pos_fc36390f83f7f1e5_545_onCollideFloorSlope)
HXLINE( 547)		Object->touching = 4096;
HXLINE( 550)		if (this->_downwardsGlue) {
HXLINE( 551)			Object->velocity->set_y(this->_velocityYDownSlope);
            		}
            		else {
HXLINE( 553)			Object->velocity->set_y(::Math_obj::min(Object->velocity->y,( (Float)(0) )));
            		}
HXLINE( 556)		Float _hx_tmp = this->_slopePoint->y;
HXDLIN( 556)		Object->set_y((_hx_tmp - Object->get_height()));
HXLINE( 558)		Float Object1 = Object->y;
HXDLIN( 558)		Float Slope1 = Slope->y;
HXDLIN( 558)		if ((Object1 < (Slope1 - Object->get_height()))) {
HXLINE( 560)			Float Slope1 = Slope->y;
HXDLIN( 560)			Object->set_y((Slope1 - Object->get_height()));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxTilemapExt_obj,onCollideFloorSlope,(void))

void FlxTilemapExt_obj::onCollideCeilSlope( ::flixel::FlxObject Slope, ::flixel::FlxObject Object){
            	HX_STACKFRAME(&_hx_pos_fc36390f83f7f1e5_571_onCollideCeilSlope)
HXLINE( 573)		Object->touching = 256;
HXLINE( 576)		Object->velocity->set_y(::Math_obj::max(Object->velocity->y,( (Float)(0) )));
HXLINE( 579)		Object->set_y(this->_slopePoint->y);
HXLINE( 581)		if ((Object->y > (Slope->y + this->_tileHeight))) {
HXLINE( 583)			Object->set_y((Slope->y + this->_tileHeight));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxTilemapExt_obj,onCollideCeilSlope,(void))

void FlxTilemapExt_obj::solveCollisionSlopeNorthwest( ::flixel::FlxObject Slope, ::flixel::FlxObject Object){
            	HX_STACKFRAME(&_hx_pos_fc36390f83f7f1e5_594_solveCollisionSlopeNorthwest)
HXLINE( 595)		Float Object1 = Object->x;
HXDLIN( 595)		Float _hx_tmp = (Object1 + Object->get_width());
HXDLIN( 595)		Float Slope1 = Slope->x;
HXDLIN( 595)		Float _hx_tmp1 = (Slope1 + Slope->get_width());
HXDLIN( 595)		if ((_hx_tmp > (_hx_tmp1 + this->_snapping))) {
HXLINE( 597)			return;
            		}
HXLINE( 600)		 ::flixel::math::FlxPoint _hx_tmp2 = this->_objPoint;
HXDLIN( 600)		Float Object2 = Object->x;
HXDLIN( 600)		Float _hx_tmp3 = (Object2 + Object->get_width());
HXDLIN( 600)		_hx_tmp2->set_x(( (Float)(::Math_obj::floor((_hx_tmp3 + this->_snapping))) ));
HXLINE( 601)		 ::flixel::math::FlxPoint _hx_tmp4 = this->_objPoint;
HXDLIN( 601)		Float Object3 = Object->y;
HXDLIN( 601)		_hx_tmp4->set_y(( (Float)(::Math_obj::floor((Object3 + Object->get_height()))) ));
HXLINE( 605)		this->_slopePoint->set_x(this->_objPoint->x);
HXLINE( 606)		this->_slopePoint->set_y(((Slope->y + this->_tileHeight) - (this->_slopePoint->x - Slope->x)));
HXLINE( 608)		int tileId = ::hx::TCast<  ::flixel::tile::FlxTile >::cast(Slope)->index;
HXLINE( 609)		if (this->checkThinSteep(tileId)) {
HXLINE( 611)			if (((this->_slopePoint->x - Slope->x) <= (( (Float)(this->_tileWidth) ) / ( (Float)(2) )))) {
HXLINE( 613)				return;
            			}
            			else {
HXLINE( 617)				this->_slopePoint->set_y(((Slope->y + (( (Float)(this->_tileHeight) ) * (( (Float)(2) ) - ((( (Float)(2) ) * (this->_slopePoint->x - Slope->x)) / ( (Float)(this->_tileWidth) ))))) + this->_snapping));
HXLINE( 618)				bool _hx_tmp;
HXDLIN( 618)				if (this->_downwardsGlue) {
HXLINE( 618)					_hx_tmp = (Object->velocity->x > 0);
            				}
            				else {
HXLINE( 618)					_hx_tmp = false;
            				}
HXDLIN( 618)				if (_hx_tmp) {
HXLINE( 619)					 ::flixel::math::FlxPoint fh = Object->velocity;
HXDLIN( 619)					fh->set_x((fh->x * (( (Float)(1) ) - ((( (Float)(1) ) - this->_slopeSlowDownFactor) * ( (Float)(3) )))));
            				}
            			}
            		}
            		else {
HXLINE( 622)			if (this->checkThickSteep(tileId)) {
HXLINE( 624)				this->_slopePoint->set_y(((Slope->y + (( (Float)(this->_tileHeight) ) * (( (Float)(1) ) - (( (Float)(2) ) * ((this->_slopePoint->x - Slope->x) / ( (Float)(this->_tileWidth) )))))) + this->_snapping));
HXLINE( 625)				bool _hx_tmp;
HXDLIN( 625)				if (this->_downwardsGlue) {
HXLINE( 625)					_hx_tmp = (Object->velocity->x > 0);
            				}
            				else {
HXLINE( 625)					_hx_tmp = false;
            				}
HXDLIN( 625)				if (_hx_tmp) {
HXLINE( 626)					 ::flixel::math::FlxPoint fh = Object->velocity;
HXDLIN( 626)					fh->set_x((fh->x * (( (Float)(1) ) - ((( (Float)(1) ) - this->_slopeSlowDownFactor) * ( (Float)(3) )))));
            				}
            			}
            			else {
HXLINE( 628)				if (this->checkThickGentle(tileId)) {
HXLINE( 630)					this->_slopePoint->set_y((Slope->y + (((( (Float)(this->_tileHeight) ) - this->_slopePoint->x) + Slope->x) / ( (Float)(2) ))));
HXLINE( 631)					bool _hx_tmp;
HXDLIN( 631)					if (this->_downwardsGlue) {
HXLINE( 631)						_hx_tmp = (Object->velocity->x > 0);
            					}
            					else {
HXLINE( 631)						_hx_tmp = false;
            					}
HXDLIN( 631)					if (_hx_tmp) {
HXLINE( 632)						 ::flixel::math::FlxPoint fh = Object->velocity;
HXDLIN( 632)						fh->set_x((fh->x * this->_slopeSlowDownFactor));
            					}
            				}
            				else {
HXLINE( 634)					if (this->checkThinGentle(tileId)) {
HXLINE( 636)						this->_slopePoint->set_y(((Slope->y + this->_tileHeight) - ((this->_slopePoint->x - Slope->x) / ( (Float)(2) ))));
HXLINE( 637)						bool _hx_tmp;
HXDLIN( 637)						if (this->_downwardsGlue) {
HXLINE( 637)							_hx_tmp = (Object->velocity->x > 0);
            						}
            						else {
HXLINE( 637)							_hx_tmp = false;
            						}
HXDLIN( 637)						if (_hx_tmp) {
HXLINE( 638)							 ::flixel::math::FlxPoint fh = Object->velocity;
HXDLIN( 638)							fh->set_x((fh->x * this->_slopeSlowDownFactor));
            						}
            					}
            					else {
HXLINE( 642)						bool _hx_tmp;
HXDLIN( 642)						if (this->_downwardsGlue) {
HXLINE( 642)							_hx_tmp = (Object->velocity->x > 0);
            						}
            						else {
HXLINE( 642)							_hx_tmp = false;
            						}
HXDLIN( 642)						if (_hx_tmp) {
HXLINE( 643)							 ::flixel::math::FlxPoint fh = Object->velocity;
HXDLIN( 643)							fh->set_x((fh->x * this->_slopeSlowDownFactor));
            						}
            					}
            				}
            			}
            		}
HXLINE( 646)		this->fixSlopePoint(::hx::TCast<  ::flixel::tile::FlxTile >::cast(Slope));
HXLINE( 649)		bool _hx_tmp5;
HXDLIN( 649)		bool _hx_tmp6;
HXDLIN( 649)		bool _hx_tmp7;
HXDLIN( 649)		if ((this->_objPoint->x > (Slope->x + this->_snapping))) {
HXLINE( 650)			Float _hx_tmp = this->_objPoint->x;
HXDLIN( 650)			Float _hx_tmp1 = (Slope->x + this->_tileWidth);
HXDLIN( 650)			Float _hx_tmp2 = (_hx_tmp1 + Object->get_width());
HXLINE( 649)			_hx_tmp7 = (_hx_tmp < (_hx_tmp2 + this->_snapping));
            		}
            		else {
HXLINE( 649)			_hx_tmp7 = false;
            		}
HXDLIN( 649)		if (_hx_tmp7) {
HXLINE( 649)			_hx_tmp6 = (this->_objPoint->y >= this->_slopePoint->y);
            		}
            		else {
HXLINE( 649)			_hx_tmp6 = false;
            		}
HXDLIN( 649)		if (_hx_tmp6) {
HXLINE( 649)			_hx_tmp5 = (this->_objPoint->y <= (Slope->y + this->_tileHeight));
            		}
            		else {
HXLINE( 649)			_hx_tmp5 = false;
            		}
HXDLIN( 649)		if (_hx_tmp5) {
HXLINE( 655)			this->onCollideFloorSlope(Slope,Object);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxTilemapExt_obj,solveCollisionSlopeNorthwest,(void))

void FlxTilemapExt_obj::solveCollisionSlopeNortheast( ::flixel::FlxObject Slope, ::flixel::FlxObject Object){
            	HX_STACKFRAME(&_hx_pos_fc36390f83f7f1e5_666_solveCollisionSlopeNortheast)
HXLINE( 667)		if ((Object->x < (Slope->x - ( (Float)(this->_snapping) )))) {
HXLINE( 669)			return;
            		}
HXLINE( 672)		this->_objPoint->set_x(( (Float)(::Math_obj::floor((Object->x - ( (Float)(this->_snapping) )))) ));
HXLINE( 673)		 ::flixel::math::FlxPoint _hx_tmp = this->_objPoint;
HXDLIN( 673)		Float Object1 = Object->y;
HXDLIN( 673)		_hx_tmp->set_y(( (Float)(::Math_obj::floor((Object1 + Object->get_height()))) ));
HXLINE( 677)		this->_slopePoint->set_x(this->_objPoint->x);
HXLINE( 678)		this->_slopePoint->set_y(((Slope->y + this->_tileHeight) - ((Slope->x - this->_slopePoint->x) + this->_tileWidth)));
HXLINE( 680)		int tileId = ::hx::TCast<  ::flixel::tile::FlxTile >::cast(Slope)->index;
HXLINE( 681)		if (this->checkThinSteep(tileId)) {
HXLINE( 683)			if (((this->_slopePoint->x - Slope->x) >= (( (Float)(this->_tileWidth) ) / ( (Float)(2) )))) {
HXLINE( 685)				return;
            			}
            			else {
HXLINE( 689)				this->_slopePoint->set_y(((Slope->y + (( (Float)((this->_tileHeight * 2)) ) * ((this->_slopePoint->x - Slope->x) / ( (Float)(this->_tileWidth) )))) + this->_snapping));
            			}
HXLINE( 691)			bool _hx_tmp;
HXDLIN( 691)			if (this->_downwardsGlue) {
HXLINE( 691)				_hx_tmp = (Object->velocity->x < 0);
            			}
            			else {
HXLINE( 691)				_hx_tmp = false;
            			}
HXDLIN( 691)			if (_hx_tmp) {
HXLINE( 692)				 ::flixel::math::FlxPoint fh = Object->velocity;
HXDLIN( 692)				fh->set_x((fh->x * (( (Float)(1) ) - ((( (Float)(1) ) - this->_slopeSlowDownFactor) * ( (Float)(3) )))));
            			}
            		}
            		else {
HXLINE( 694)			if (this->checkThickSteep(tileId)) {
HXLINE( 696)				this->_slopePoint->set_y(((Slope->y - (( (Float)(this->_tileHeight) ) * (1 + (( (Float)(2) ) * ((Slope->x - this->_slopePoint->x) / ( (Float)(this->_tileWidth) )))))) + this->_snapping));
HXLINE( 697)				bool _hx_tmp;
HXDLIN( 697)				if (this->_downwardsGlue) {
HXLINE( 697)					_hx_tmp = (Object->velocity->x < 0);
            				}
            				else {
HXLINE( 697)					_hx_tmp = false;
            				}
HXDLIN( 697)				if (_hx_tmp) {
HXLINE( 698)					 ::flixel::math::FlxPoint fh = Object->velocity;
HXDLIN( 698)					fh->set_x((fh->x * (( (Float)(1) ) - ((( (Float)(1) ) - this->_slopeSlowDownFactor) * ( (Float)(3) )))));
            				}
            			}
            			else {
HXLINE( 700)				if (this->checkThickGentle(tileId)) {
HXLINE( 702)					this->_slopePoint->set_y((Slope->y + ((((( (Float)(this->_tileHeight) ) - Slope->x) + this->_slopePoint->x) - ( (Float)(this->_tileWidth) )) / ( (Float)(2) ))));
HXLINE( 703)					bool _hx_tmp;
HXDLIN( 703)					if (this->_downwardsGlue) {
HXLINE( 703)						_hx_tmp = (Object->velocity->x < 0);
            					}
            					else {
HXLINE( 703)						_hx_tmp = false;
            					}
HXDLIN( 703)					if (_hx_tmp) {
HXLINE( 704)						 ::flixel::math::FlxPoint fh = Object->velocity;
HXDLIN( 704)						fh->set_x((fh->x * this->_slopeSlowDownFactor));
            					}
            				}
            				else {
HXLINE( 706)					if (this->checkThinGentle(tileId)) {
HXLINE( 708)						this->_slopePoint->set_y(((Slope->y + this->_tileHeight) - (((Slope->x - this->_slopePoint->x) + this->_tileWidth) / ( (Float)(2) ))));
HXLINE( 709)						bool _hx_tmp;
HXDLIN( 709)						if (this->_downwardsGlue) {
HXLINE( 709)							_hx_tmp = (Object->velocity->x < 0);
            						}
            						else {
HXLINE( 709)							_hx_tmp = false;
            						}
HXDLIN( 709)						if (_hx_tmp) {
HXLINE( 710)							 ::flixel::math::FlxPoint fh = Object->velocity;
HXDLIN( 710)							fh->set_x((fh->x * this->_slopeSlowDownFactor));
            						}
            					}
            					else {
HXLINE( 714)						bool _hx_tmp;
HXDLIN( 714)						if (this->_downwardsGlue) {
HXLINE( 714)							_hx_tmp = (Object->velocity->x < 0);
            						}
            						else {
HXLINE( 714)							_hx_tmp = false;
            						}
HXDLIN( 714)						if (_hx_tmp) {
HXLINE( 715)							 ::flixel::math::FlxPoint fh = Object->velocity;
HXDLIN( 715)							fh->set_x((fh->x * this->_slopeSlowDownFactor));
            						}
            					}
            				}
            			}
            		}
HXLINE( 718)		this->fixSlopePoint(::hx::TCast<  ::flixel::tile::FlxTile >::cast(Slope));
HXLINE( 721)		bool _hx_tmp1;
HXDLIN( 721)		bool _hx_tmp2;
HXDLIN( 721)		bool _hx_tmp3;
HXDLIN( 721)		Float _hx_tmp4 = this->_objPoint->x;
HXDLIN( 721)		Float Slope1 = Slope->x;
HXDLIN( 721)		Float _hx_tmp5 = (Slope1 - Object->get_width());
HXDLIN( 721)		if ((_hx_tmp4 > (_hx_tmp5 - ( (Float)(this->_snapping) )))) {
HXLINE( 721)			_hx_tmp3 = (this->_objPoint->x < ((Slope->x + this->_tileWidth) + this->_snapping));
            		}
            		else {
HXLINE( 721)			_hx_tmp3 = false;
            		}
HXDLIN( 721)		if (_hx_tmp3) {
HXLINE( 721)			_hx_tmp2 = (this->_objPoint->y >= this->_slopePoint->y);
            		}
            		else {
HXLINE( 721)			_hx_tmp2 = false;
            		}
HXDLIN( 721)		if (_hx_tmp2) {
HXLINE( 721)			_hx_tmp1 = (this->_objPoint->y <= (Slope->y + this->_tileHeight));
            		}
            		else {
HXLINE( 721)			_hx_tmp1 = false;
            		}
HXDLIN( 721)		if (_hx_tmp1) {
HXLINE( 727)			this->onCollideFloorSlope(Slope,Object);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxTilemapExt_obj,solveCollisionSlopeNortheast,(void))

void FlxTilemapExt_obj::solveCollisionSlopeSouthwest( ::flixel::FlxObject Slope, ::flixel::FlxObject Object){
            	HX_STACKFRAME(&_hx_pos_fc36390f83f7f1e5_738_solveCollisionSlopeSouthwest)
HXLINE( 740)		 ::flixel::math::FlxPoint _hx_tmp = this->_objPoint;
HXDLIN( 740)		Float Object1 = Object->x;
HXDLIN( 740)		Float _hx_tmp1 = (Object1 + Object->get_width());
HXDLIN( 740)		_hx_tmp->set_x(( (Float)(::Math_obj::floor((_hx_tmp1 + this->_snapping))) ));
HXLINE( 741)		this->_objPoint->set_y(( (Float)(::Math_obj::ceil(Object->y)) ));
HXLINE( 745)		this->_slopePoint->set_x(this->_objPoint->x);
HXLINE( 746)		this->_slopePoint->set_y((Slope->y + (this->_slopePoint->x - Slope->x)));
HXLINE( 748)		int tileId = ::hx::TCast<  ::flixel::tile::FlxTile >::cast(Slope)->index;
HXLINE( 749)		if (this->checkThinSteep(tileId)) {
HXLINE( 751)			if (((this->_slopePoint->x - Slope->x) <= (( (Float)(this->_tileWidth) ) / ( (Float)(2) )))) {
HXLINE( 753)				return;
            			}
            			else {
HXLINE( 757)				this->_slopePoint->set_y(((Slope->y - (( (Float)(this->_tileHeight) ) * (1 + (( (Float)(2) ) * ((Slope->x - this->_slopePoint->x) / ( (Float)(this->_tileWidth) )))))) - ( (Float)(this->_snapping) )));
            			}
            		}
            		else {
HXLINE( 760)			if (this->checkThickSteep(tileId)) {
HXLINE( 762)				this->_slopePoint->set_y(((Slope->y + (( (Float)((this->_tileHeight * 2)) ) * ((this->_slopePoint->x - Slope->x) / ( (Float)(this->_tileWidth) )))) - ( (Float)(this->_snapping) )));
            			}
            			else {
HXLINE( 764)				if (this->checkThickGentle(tileId)) {
HXLINE( 766)					this->_slopePoint->set_y(((Slope->y + this->_tileHeight) - (((Slope->x - this->_slopePoint->x) + this->_tileWidth) / ( (Float)(2) ))));
            				}
            				else {
HXLINE( 768)					if (this->checkThinGentle(tileId)) {
HXLINE( 770)						this->_slopePoint->set_y((Slope->y + ((((( (Float)(this->_tileHeight) ) - Slope->x) + this->_slopePoint->x) - ( (Float)(this->_tileWidth) )) / ( (Float)(2) ))));
            					}
            				}
            			}
            		}
HXLINE( 774)		this->fixSlopePoint(::hx::TCast<  ::flixel::tile::FlxTile >::cast(Slope));
HXLINE( 777)		bool _hx_tmp2;
HXDLIN( 777)		bool _hx_tmp3;
HXDLIN( 777)		bool _hx_tmp4;
HXDLIN( 777)		if ((this->_objPoint->x > (Slope->x + this->_snapping))) {
HXLINE( 778)			Float _hx_tmp = this->_objPoint->x;
HXDLIN( 778)			Float _hx_tmp1 = (Slope->x + this->_tileWidth);
HXDLIN( 778)			Float _hx_tmp2 = (_hx_tmp1 + Object->get_width());
HXLINE( 777)			_hx_tmp4 = (_hx_tmp < (_hx_tmp2 + this->_snapping));
            		}
            		else {
HXLINE( 777)			_hx_tmp4 = false;
            		}
HXDLIN( 777)		if (_hx_tmp4) {
HXLINE( 777)			_hx_tmp3 = (this->_objPoint->y <= this->_slopePoint->y);
            		}
            		else {
HXLINE( 777)			_hx_tmp3 = false;
            		}
HXDLIN( 777)		if (_hx_tmp3) {
HXLINE( 777)			_hx_tmp2 = (this->_objPoint->y >= Slope->y);
            		}
            		else {
HXLINE( 777)			_hx_tmp2 = false;
            		}
HXDLIN( 777)		if (_hx_tmp2) {
HXLINE( 783)			this->onCollideCeilSlope(Slope,Object);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxTilemapExt_obj,solveCollisionSlopeSouthwest,(void))

void FlxTilemapExt_obj::solveCollisionSlopeSoutheast( ::flixel::FlxObject Slope, ::flixel::FlxObject Object){
            	HX_STACKFRAME(&_hx_pos_fc36390f83f7f1e5_794_solveCollisionSlopeSoutheast)
HXLINE( 796)		this->_objPoint->set_x(( (Float)(::Math_obj::floor((Object->x - ( (Float)(this->_snapping) )))) ));
HXLINE( 797)		this->_objPoint->set_y(( (Float)(::Math_obj::ceil(Object->y)) ));
HXLINE( 801)		this->_slopePoint->set_x(this->_objPoint->x);
HXLINE( 802)		this->_slopePoint->set_y((Slope->y + ((Slope->x - this->_slopePoint->x) + this->_tileWidth)));
HXLINE( 804)		int tileId = ::hx::TCast<  ::flixel::tile::FlxTile >::cast(Slope)->index;
HXLINE( 805)		if (this->checkThinSteep(tileId)) {
HXLINE( 807)			if (((this->_slopePoint->x - Slope->x) >= (( (Float)(this->_tileWidth) ) / ( (Float)(2) )))) {
HXLINE( 809)				return;
            			}
            			else {
HXLINE( 813)				this->_slopePoint->set_y(((Slope->y + (( (Float)(this->_tileHeight) ) * (( (Float)(1) ) - (( (Float)(2) ) * ((this->_slopePoint->x - Slope->x) / ( (Float)(this->_tileWidth) )))))) - ( (Float)(this->_snapping) )));
            			}
            		}
            		else {
HXLINE( 816)			if (this->checkThickSteep(tileId)) {
HXLINE( 818)				this->_slopePoint->set_y(((Slope->y + (( (Float)(this->_tileHeight) ) * (( (Float)(2) ) - ((( (Float)(2) ) * (this->_slopePoint->x - Slope->x)) / ( (Float)(this->_tileWidth) ))))) - ( (Float)(this->_snapping) )));
            			}
            			else {
HXLINE( 820)				if (this->checkThickGentle(tileId)) {
HXLINE( 822)					this->_slopePoint->set_y(((Slope->y + this->_tileHeight) - ((this->_slopePoint->x - Slope->x) / ( (Float)(2) ))));
            				}
            				else {
HXLINE( 824)					if (this->checkThinGentle(tileId)) {
HXLINE( 826)						this->_slopePoint->set_y((Slope->y + (((( (Float)(this->_tileHeight) ) - this->_slopePoint->x) + Slope->x) / ( (Float)(2) ))));
            					}
            				}
            			}
            		}
HXLINE( 830)		this->fixSlopePoint(::hx::TCast<  ::flixel::tile::FlxTile >::cast(Slope));
HXLINE( 833)		bool _hx_tmp;
HXDLIN( 833)		bool _hx_tmp1;
HXDLIN( 833)		bool _hx_tmp2;
HXDLIN( 833)		Float _hx_tmp3 = this->_objPoint->x;
HXDLIN( 833)		Float Slope1 = Slope->x;
HXDLIN( 833)		Float _hx_tmp4 = (Slope1 - Object->get_width());
HXDLIN( 833)		if ((_hx_tmp3 > (_hx_tmp4 - ( (Float)(this->_snapping) )))) {
HXLINE( 833)			_hx_tmp2 = (this->_objPoint->x < ((Slope->x + this->_tileWidth) + this->_snapping));
            		}
            		else {
HXLINE( 833)			_hx_tmp2 = false;
            		}
HXDLIN( 833)		if (_hx_tmp2) {
HXLINE( 833)			_hx_tmp1 = (this->_objPoint->y <= this->_slopePoint->y);
            		}
            		else {
HXLINE( 833)			_hx_tmp1 = false;
            		}
HXDLIN( 833)		if (_hx_tmp1) {
HXLINE( 833)			_hx_tmp = (this->_objPoint->y >= Slope->y);
            		}
            		else {
HXLINE( 833)			_hx_tmp = false;
            		}
HXDLIN( 833)		if (_hx_tmp) {
HXLINE( 839)			this->onCollideCeilSlope(Slope,Object);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxTilemapExt_obj,solveCollisionSlopeSoutheast,(void))

void FlxTilemapExt_obj::setSlopeProperties(){
            	HX_STACKFRAME(&_hx_pos_fc36390f83f7f1e5_848_setSlopeProperties)
HXLINE( 849)		{
HXLINE( 849)			int _g = 0;
HXDLIN( 849)			::Array< int > _g1 = this->_slopeNorthwest;
HXDLIN( 849)			while((_g < _g1->length)){
HXLINE( 849)				int tile = _g1->__get(_g);
HXDLIN( 849)				_g = (_g + 1);
HXLINE( 851)				this->setTileProperties(tile,4112,this->solveCollisionSlopeNorthwest_dyn(),null(),null());
            			}
            		}
HXLINE( 853)		{
HXLINE( 853)			int _g2 = 0;
HXDLIN( 853)			::Array< int > _g3 = this->_slopeNortheast;
HXDLIN( 853)			while((_g2 < _g3->length)){
HXLINE( 853)				int tile = _g3->__get(_g2);
HXDLIN( 853)				_g2 = (_g2 + 1);
HXLINE( 855)				this->setTileProperties(tile,4097,this->solveCollisionSlopeNortheast_dyn(),null(),null());
            			}
            		}
HXLINE( 857)		{
HXLINE( 857)			int _g4 = 0;
HXDLIN( 857)			::Array< int > _g5 = this->_slopeSouthwest;
HXDLIN( 857)			while((_g4 < _g5->length)){
HXLINE( 857)				int tile = _g5->__get(_g4);
HXDLIN( 857)				_g4 = (_g4 + 1);
HXLINE( 859)				this->setTileProperties(tile,272,this->solveCollisionSlopeSouthwest_dyn(),null(),null());
            			}
            		}
HXLINE( 861)		{
HXLINE( 861)			int _g6 = 0;
HXDLIN( 861)			::Array< int > _g7 = this->_slopeSoutheast;
HXDLIN( 861)			while((_g6 < _g7->length)){
HXLINE( 861)				int tile = _g7->__get(_g6);
HXDLIN( 861)				_g6 = (_g6 + 1);
HXLINE( 863)				this->setTileProperties(tile,257,this->solveCollisionSlopeSoutheast_dyn(),null(),null());
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxTilemapExt_obj,setSlopeProperties,(void))

bool FlxTilemapExt_obj::checkArrays(int TileIndex){
            	HX_STACKFRAME(&_hx_pos_fc36390f83f7f1e5_875_checkArrays)
HXDLIN( 875)		bool _hx_tmp;
HXDLIN( 875)		bool _hx_tmp1;
HXDLIN( 875)		if ((this->_slopeNorthwest->indexOf(TileIndex,null()) < 0)) {
HXDLIN( 875)			_hx_tmp1 = (this->_slopeNortheast->indexOf(TileIndex,null()) >= 0);
            		}
            		else {
HXDLIN( 875)			_hx_tmp1 = true;
            		}
HXDLIN( 875)		if (!(_hx_tmp1)) {
HXDLIN( 875)			_hx_tmp = (this->_slopeSouthwest->indexOf(TileIndex,null()) >= 0);
            		}
            		else {
HXDLIN( 875)			_hx_tmp = true;
            		}
HXDLIN( 875)		if (!(_hx_tmp)) {
HXLINE( 878)			return (this->_slopeSoutheast->indexOf(TileIndex,null()) >= 0);
            		}
            		else {
HXDLIN( 875)			return true;
            		}
HXDLIN( 875)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxTilemapExt_obj,checkArrays,return )

 ::flixel::graphics::frames::FlxFramesCollection FlxTilemapExt_obj::set_frames( ::flixel::graphics::frames::FlxFramesCollection value){
            	HX_STACKFRAME(&_hx_pos_fc36390f83f7f1e5_882_set_frames)
HXLINE( 883)		this->super::set_frames(value);
HXLINE( 885)		bool _hx_tmp;
HXDLIN( 885)		bool _hx_tmp1;
HXDLIN( 885)		if (::hx::IsNotNull( value )) {
HXLINE( 885)			_hx_tmp1 = ::hx::IsNotNull( this->_specialTiles );
            		}
            		else {
HXLINE( 885)			_hx_tmp1 = false;
            		}
HXDLIN( 885)		if (_hx_tmp1) {
HXLINE( 885)			_hx_tmp = (this->_specialTiles->length > 0);
            		}
            		else {
HXLINE( 885)			_hx_tmp = false;
            		}
HXDLIN( 885)		if (_hx_tmp) {
HXLINE( 887)			int _g = 0;
HXDLIN( 887)			::Array< ::Dynamic> _g1 = this->_specialTiles;
HXDLIN( 887)			while((_g < _g1->length)){
HXLINE( 887)				 ::flixel::addons::tile::FlxTileSpecial tile = _g1->__get(_g).StaticCast<  ::flixel::addons::tile::FlxTileSpecial >();
HXDLIN( 887)				_g = (_g + 1);
HXLINE( 889)				if (::hx::IsNotNull( tile )) {
HXLINE( 891)					tile->set_frames(this->frames);
            				}
            			}
            		}
HXLINE( 896)		return value;
            	}



::hx::ObjectPtr< FlxTilemapExt_obj > FlxTilemapExt_obj::__new() {
	::hx::ObjectPtr< FlxTilemapExt_obj > __this = new FlxTilemapExt_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< FlxTilemapExt_obj > FlxTilemapExt_obj::__alloc(::hx::Ctx *_hx_ctx) {
	FlxTilemapExt_obj *__this = (FlxTilemapExt_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FlxTilemapExt_obj), true, "flixel.addons.tile.FlxTilemapExt"));
	*(void **)__this = FlxTilemapExt_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

FlxTilemapExt_obj::FlxTilemapExt_obj()
{
}

void FlxTilemapExt_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxTilemapExt);
	HX_MARK_MEMBER_NAME(_snapping,"_snapping");
	HX_MARK_MEMBER_NAME(_slopePoint,"_slopePoint");
	HX_MARK_MEMBER_NAME(_objPoint,"_objPoint");
	HX_MARK_MEMBER_NAME(_downwardsGlue,"_downwardsGlue");
	HX_MARK_MEMBER_NAME(_velocityYDownSlope,"_velocityYDownSlope");
	HX_MARK_MEMBER_NAME(_slopeSlowDownFactor,"_slopeSlowDownFactor");
	HX_MARK_MEMBER_NAME(_slopeNorthwest,"_slopeNorthwest");
	HX_MARK_MEMBER_NAME(_slopeNortheast,"_slopeNortheast");
	HX_MARK_MEMBER_NAME(_slopeSouthwest,"_slopeSouthwest");
	HX_MARK_MEMBER_NAME(_slopeSoutheast,"_slopeSoutheast");
	HX_MARK_MEMBER_NAME(_slopeThickGentle,"_slopeThickGentle");
	HX_MARK_MEMBER_NAME(_slopeThinGentle,"_slopeThinGentle");
	HX_MARK_MEMBER_NAME(_slopeThickSteep,"_slopeThickSteep");
	HX_MARK_MEMBER_NAME(_slopeThinSteep,"_slopeThinSteep");
	HX_MARK_MEMBER_NAME(_specialTiles,"_specialTiles");
	 ::flixel::tile::FlxTilemap_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxTilemapExt_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_snapping,"_snapping");
	HX_VISIT_MEMBER_NAME(_slopePoint,"_slopePoint");
	HX_VISIT_MEMBER_NAME(_objPoint,"_objPoint");
	HX_VISIT_MEMBER_NAME(_downwardsGlue,"_downwardsGlue");
	HX_VISIT_MEMBER_NAME(_velocityYDownSlope,"_velocityYDownSlope");
	HX_VISIT_MEMBER_NAME(_slopeSlowDownFactor,"_slopeSlowDownFactor");
	HX_VISIT_MEMBER_NAME(_slopeNorthwest,"_slopeNorthwest");
	HX_VISIT_MEMBER_NAME(_slopeNortheast,"_slopeNortheast");
	HX_VISIT_MEMBER_NAME(_slopeSouthwest,"_slopeSouthwest");
	HX_VISIT_MEMBER_NAME(_slopeSoutheast,"_slopeSoutheast");
	HX_VISIT_MEMBER_NAME(_slopeThickGentle,"_slopeThickGentle");
	HX_VISIT_MEMBER_NAME(_slopeThinGentle,"_slopeThinGentle");
	HX_VISIT_MEMBER_NAME(_slopeThickSteep,"_slopeThickSteep");
	HX_VISIT_MEMBER_NAME(_slopeThinSteep,"_slopeThinSteep");
	HX_VISIT_MEMBER_NAME(_specialTiles,"_specialTiles");
	 ::flixel::tile::FlxTilemap_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val FlxTilemapExt_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return ::hx::Val( destroy_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"setSteep") ) { return ::hx::Val( setSteep_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_snapping") ) { return ::hx::Val( _snapping ); }
		if (HX_FIELD_EQ(inName,"_objPoint") ) { return ::hx::Val( _objPoint ); }
		if (HX_FIELD_EQ(inName,"setSlopes") ) { return ::hx::Val( setSlopes_dyn() ); }
		if (HX_FIELD_EQ(inName,"setGentle") ) { return ::hx::Val( setGentle_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"set_frames") ) { return ::hx::Val( set_frames_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_slopePoint") ) { return ::hx::Val( _slopePoint ); }
		if (HX_FIELD_EQ(inName,"drawTilemap") ) { return ::hx::Val( drawTilemap_dyn() ); }
		if (HX_FIELD_EQ(inName,"checkArrays") ) { return ::hx::Val( checkArrays_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_specialTiles") ) { return ::hx::Val( _specialTiles ); }
		if (HX_FIELD_EQ(inName,"fixSlopePoint") ) { return ::hx::Val( fixSlopePoint_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_downwardsGlue") ) { return ::hx::Val( _downwardsGlue ); }
		if (HX_FIELD_EQ(inName,"checkThinSteep") ) { return ::hx::Val( checkThinSteep_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_slopeNorthwest") ) { return ::hx::Val( _slopeNorthwest ); }
		if (HX_FIELD_EQ(inName,"_slopeNortheast") ) { return ::hx::Val( _slopeNortheast ); }
		if (HX_FIELD_EQ(inName,"_slopeSouthwest") ) { return ::hx::Val( _slopeSouthwest ); }
		if (HX_FIELD_EQ(inName,"_slopeSoutheast") ) { return ::hx::Val( _slopeSoutheast ); }
		if (HX_FIELD_EQ(inName,"_slopeThinSteep") ) { return ::hx::Val( _slopeThinSteep ); }
		if (HX_FIELD_EQ(inName,"setSpecialTiles") ) { return ::hx::Val( setSpecialTiles_dyn() ); }
		if (HX_FIELD_EQ(inName,"checkThinGentle") ) { return ::hx::Val( checkThinGentle_dyn() ); }
		if (HX_FIELD_EQ(inName,"checkThickSteep") ) { return ::hx::Val( checkThickSteep_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_slopeThinGentle") ) { return ::hx::Val( _slopeThinGentle ); }
		if (HX_FIELD_EQ(inName,"_slopeThickSteep") ) { return ::hx::Val( _slopeThickSteep ); }
		if (HX_FIELD_EQ(inName,"setDownwardsGlue") ) { return ::hx::Val( setDownwardsGlue_dyn() ); }
		if (HX_FIELD_EQ(inName,"checkThickGentle") ) { return ::hx::Val( checkThickGentle_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_slopeThickGentle") ) { return ::hx::Val( _slopeThickGentle ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"onCollideCeilSlope") ) { return ::hx::Val( onCollideCeilSlope_dyn() ); }
		if (HX_FIELD_EQ(inName,"setSlopeProperties") ) { return ::hx::Val( setSlopeProperties_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_velocityYDownSlope") ) { return ::hx::Val( _velocityYDownSlope ); }
		if (HX_FIELD_EQ(inName,"onCollideFloorSlope") ) { return ::hx::Val( onCollideFloorSlope_dyn() ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"_slopeSlowDownFactor") ) { return ::hx::Val( _slopeSlowDownFactor ); }
		if (HX_FIELD_EQ(inName,"overlapsWithCallback") ) { return ::hx::Val( overlapsWithCallback_dyn() ); }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"solveCollisionSlopeNorthwest") ) { return ::hx::Val( solveCollisionSlopeNorthwest_dyn() ); }
		if (HX_FIELD_EQ(inName,"solveCollisionSlopeNortheast") ) { return ::hx::Val( solveCollisionSlopeNortheast_dyn() ); }
		if (HX_FIELD_EQ(inName,"solveCollisionSlopeSouthwest") ) { return ::hx::Val( solveCollisionSlopeSouthwest_dyn() ); }
		if (HX_FIELD_EQ(inName,"solveCollisionSlopeSoutheast") ) { return ::hx::Val( solveCollisionSlopeSoutheast_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val FlxTilemapExt_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"_snapping") ) { _snapping=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_objPoint") ) { _objPoint=inValue.Cast<  ::flixel::math::FlxPoint >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_slopePoint") ) { _slopePoint=inValue.Cast<  ::flixel::math::FlxPoint >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_specialTiles") ) { _specialTiles=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_downwardsGlue") ) { _downwardsGlue=inValue.Cast< bool >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_slopeNorthwest") ) { _slopeNorthwest=inValue.Cast< ::Array< int > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_slopeNortheast") ) { _slopeNortheast=inValue.Cast< ::Array< int > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_slopeSouthwest") ) { _slopeSouthwest=inValue.Cast< ::Array< int > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_slopeSoutheast") ) { _slopeSoutheast=inValue.Cast< ::Array< int > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_slopeThinSteep") ) { _slopeThinSteep=inValue.Cast< ::Array< int > >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_slopeThinGentle") ) { _slopeThinGentle=inValue.Cast< ::Array< int > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_slopeThickSteep") ) { _slopeThickSteep=inValue.Cast< ::Array< int > >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_slopeThickGentle") ) { _slopeThickGentle=inValue.Cast< ::Array< int > >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_velocityYDownSlope") ) { _velocityYDownSlope=inValue.Cast< Float >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"_slopeSlowDownFactor") ) { _slopeSlowDownFactor=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxTilemapExt_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_snapping",1b,2d,4f,67));
	outFields->push(HX_("_slopePoint",44,f8,e1,eb));
	outFields->push(HX_("_objPoint",38,4c,3e,bb));
	outFields->push(HX_("_downwardsGlue",ab,15,d0,27));
	outFields->push(HX_("_velocityYDownSlope",4c,ea,f9,4e));
	outFields->push(HX_("_slopeSlowDownFactor",be,e5,ff,c6));
	outFields->push(HX_("_slopeNorthwest",68,65,26,14));
	outFields->push(HX_("_slopeNortheast",36,85,3d,08));
	outFields->push(HX_("_slopeSouthwest",b0,d6,9d,af));
	outFields->push(HX_("_slopeSoutheast",7e,f6,b4,a3));
	outFields->push(HX_("_slopeThickGentle",8e,e6,40,0b));
	outFields->push(HX_("_slopeThinGentle",22,c8,46,c5));
	outFields->push(HX_("_slopeThickSteep",fe,19,69,07));
	outFields->push(HX_("_slopeThinSteep",ea,86,a2,7f));
	outFields->push(HX_("_specialTiles",6b,d7,b8,46));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo FlxTilemapExt_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(FlxTilemapExt_obj,_snapping),HX_("_snapping",1b,2d,4f,67)},
	{::hx::fsObject /*  ::flixel::math::FlxPoint */ ,(int)offsetof(FlxTilemapExt_obj,_slopePoint),HX_("_slopePoint",44,f8,e1,eb)},
	{::hx::fsObject /*  ::flixel::math::FlxPoint */ ,(int)offsetof(FlxTilemapExt_obj,_objPoint),HX_("_objPoint",38,4c,3e,bb)},
	{::hx::fsBool,(int)offsetof(FlxTilemapExt_obj,_downwardsGlue),HX_("_downwardsGlue",ab,15,d0,27)},
	{::hx::fsFloat,(int)offsetof(FlxTilemapExt_obj,_velocityYDownSlope),HX_("_velocityYDownSlope",4c,ea,f9,4e)},
	{::hx::fsFloat,(int)offsetof(FlxTilemapExt_obj,_slopeSlowDownFactor),HX_("_slopeSlowDownFactor",be,e5,ff,c6)},
	{::hx::fsObject /* ::Array< int > */ ,(int)offsetof(FlxTilemapExt_obj,_slopeNorthwest),HX_("_slopeNorthwest",68,65,26,14)},
	{::hx::fsObject /* ::Array< int > */ ,(int)offsetof(FlxTilemapExt_obj,_slopeNortheast),HX_("_slopeNortheast",36,85,3d,08)},
	{::hx::fsObject /* ::Array< int > */ ,(int)offsetof(FlxTilemapExt_obj,_slopeSouthwest),HX_("_slopeSouthwest",b0,d6,9d,af)},
	{::hx::fsObject /* ::Array< int > */ ,(int)offsetof(FlxTilemapExt_obj,_slopeSoutheast),HX_("_slopeSoutheast",7e,f6,b4,a3)},
	{::hx::fsObject /* ::Array< int > */ ,(int)offsetof(FlxTilemapExt_obj,_slopeThickGentle),HX_("_slopeThickGentle",8e,e6,40,0b)},
	{::hx::fsObject /* ::Array< int > */ ,(int)offsetof(FlxTilemapExt_obj,_slopeThinGentle),HX_("_slopeThinGentle",22,c8,46,c5)},
	{::hx::fsObject /* ::Array< int > */ ,(int)offsetof(FlxTilemapExt_obj,_slopeThickSteep),HX_("_slopeThickSteep",fe,19,69,07)},
	{::hx::fsObject /* ::Array< int > */ ,(int)offsetof(FlxTilemapExt_obj,_slopeThinSteep),HX_("_slopeThinSteep",ea,86,a2,7f)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(FlxTilemapExt_obj,_specialTiles),HX_("_specialTiles",6b,d7,b8,46)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *FlxTilemapExt_obj_sStaticStorageInfo = 0;
#endif

static ::String FlxTilemapExt_obj_sMemberFields[] = {
	HX_("_snapping",1b,2d,4f,67),
	HX_("_slopePoint",44,f8,e1,eb),
	HX_("_objPoint",38,4c,3e,bb),
	HX_("_downwardsGlue",ab,15,d0,27),
	HX_("_velocityYDownSlope",4c,ea,f9,4e),
	HX_("_slopeSlowDownFactor",be,e5,ff,c6),
	HX_("_slopeNorthwest",68,65,26,14),
	HX_("_slopeNortheast",36,85,3d,08),
	HX_("_slopeSouthwest",b0,d6,9d,af),
	HX_("_slopeSoutheast",7e,f6,b4,a3),
	HX_("_slopeThickGentle",8e,e6,40,0b),
	HX_("_slopeThinGentle",22,c8,46,c5),
	HX_("_slopeThickSteep",fe,19,69,07),
	HX_("_slopeThinSteep",ea,86,a2,7f),
	HX_("_specialTiles",6b,d7,b8,46),
	HX_("destroy",fa,2c,86,24),
	HX_("update",09,86,05,87),
	HX_("drawTilemap",8a,34,d7,8e),
	HX_("setSpecialTiles",4e,17,00,83),
	HX_("overlapsWithCallback",17,c3,72,a8),
	HX_("setDownwardsGlue",68,bc,e0,a9),
	HX_("setSlopes",2a,9e,ac,d3),
	HX_("setGentle",9f,12,f0,fe),
	HX_("setSteep",0d,db,42,92),
	HX_("checkThickGentle",b2,d7,c5,10),
	HX_("checkThinGentle",7e,47,f1,74),
	HX_("checkThickSteep",5a,99,13,b7),
	HX_("checkThinSteep",0e,27,64,59),
	HX_("fixSlopePoint",5a,6d,81,3a),
	HX_("onCollideFloorSlope",be,60,9b,e6),
	HX_("onCollideCeilSlope",c7,17,d1,c7),
	HX_("solveCollisionSlopeNorthwest",1c,b5,a5,09),
	HX_("solveCollisionSlopeNortheast",ea,d4,bc,fd),
	HX_("solveCollisionSlopeSouthwest",64,26,1d,a5),
	HX_("solveCollisionSlopeSoutheast",32,46,34,99),
	HX_("setSlopeProperties",7c,73,53,cf),
	HX_("checkArrays",a2,4b,02,9a),
	HX_("set_frames",e3,bd,8a,a0),
	::String(null()) };

::hx::Class FlxTilemapExt_obj::__mClass;

void FlxTilemapExt_obj::__register()
{
	FlxTilemapExt_obj _hx_dummy;
	FlxTilemapExt_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.addons.tile.FlxTilemapExt",ce,82,6d,e6);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FlxTilemapExt_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FlxTilemapExt_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxTilemapExt_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxTilemapExt_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace addons
} // end namespace tile