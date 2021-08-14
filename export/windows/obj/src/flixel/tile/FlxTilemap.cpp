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
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_graphics_FlxGraphic
#include <flixel/graphics/FlxGraphic.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxFrame
#include <flixel/graphics/frames/FlxFrame.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxFramesCollection
#include <flixel/graphics/frames/FlxFramesCollection.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxImageFrame
#include <flixel/graphics/frames/FlxImageFrame.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxTileFrames
#include <flixel/graphics/frames/FlxTileFrames.h>
#endif
#ifndef INCLUDED_flixel_graphics_tile_FlxDrawBaseItem
#include <flixel/graphics/tile/FlxDrawBaseItem.h>
#endif
#ifndef INCLUDED_flixel_graphics_tile_FlxDrawQuadsItem
#include <flixel/graphics/tile/FlxDrawQuadsItem.h>
#endif
#ifndef INCLUDED_flixel_graphics_tile_FlxGraphicsShader
#include <flixel/graphics/tile/FlxGraphicsShader.h>
#endif
#ifndef INCLUDED_flixel_math_FlxCallbackPoint
#include <flixel/math/FlxCallbackPoint.h>
#endif
#ifndef INCLUDED_flixel_math_FlxMatrix
#include <flixel/math/FlxMatrix.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_math_FlxRect
#include <flixel/math/FlxRect.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_BitmapFrontEnd
#include <flixel/system/frontEnds/BitmapFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_CameraFrontEnd
#include <flixel/system/frontEnds/CameraFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_SignalFrontEnd
#include <flixel/system/frontEnds/SignalFrontEnd.h>
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
#ifndef INCLUDED_flixel_util_FlxColorTransformUtil
#include <flixel/util/FlxColorTransformUtil.h>
#endif
#ifndef INCLUDED_flixel_util_FlxDestroyUtil
#include <flixel/util/FlxDestroyUtil.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool_flixel_math_FlxPoint
#include <flixel/util/FlxPool_flixel_math_FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool_flixel_math_FlxRect
#include <flixel/util/FlxPool_flixel_math_FlxRect.h>
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
#ifndef INCLUDED_flixel_util_IFlxSignal
#include <flixel/util/IFlxSignal.h>
#endif
#ifndef INCLUDED_flixel_util__FlxSignal_FlxBaseSignal
#include <flixel/util/_FlxSignal/FlxBaseSignal.h>
#endif
#ifndef INCLUDED_flixel_util__FlxSignal_FlxSignal1
#include <flixel/util/_FlxSignal/FlxSignal1.h>
#endif
#ifndef INCLUDED_flixel_util__FlxSignal_FlxSignal2
#include <flixel/util/_FlxSignal/FlxSignal2.h>
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
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_1146cbfc6764fb25_52_new,"flixel.tile.FlxTilemap","new",0xbe02531c,"flixel.tile.FlxTilemap.new","flixel/tile/FlxTilemap.hx",52,0x448feb74)
HX_LOCAL_STACK_FRAME(_hx_pos_1146cbfc6764fb25_197_destroy,"flixel.tile.FlxTilemap","destroy",0xa7f2bdb6,"flixel.tile.FlxTilemap.destroy","flixel/tile/FlxTilemap.hx",197,0x448feb74)
HX_LOCAL_STACK_FRAME(_hx_pos_1146cbfc6764fb25_244_set_frames,"flixel.tile.FlxTilemap","set_frames",0xb39c4aa7,"flixel.tile.FlxTilemap.set_frames","flixel/tile/FlxTilemap.hx",244,0x448feb74)
HX_LOCAL_STACK_FRAME(_hx_pos_1146cbfc6764fb25_261_onGameResized,"flixel.tile.FlxTilemap","onGameResized",0x240fb4fb,"flixel.tile.FlxTilemap.onGameResized","flixel/tile/FlxTilemap.hx",261,0x448feb74)
HX_LOCAL_STACK_FRAME(_hx_pos_1146cbfc6764fb25_266_onCameraChanged,"flixel.tile.FlxTilemap","onCameraChanged",0xe013f4ec,"flixel.tile.FlxTilemap.onCameraChanged","flixel/tile/FlxTilemap.hx",266,0x448feb74)
HX_LOCAL_STACK_FRAME(_hx_pos_1146cbfc6764fb25_270_cacheGraphics,"flixel.tile.FlxTilemap","cacheGraphics",0x759126e9,"flixel.tile.FlxTilemap.cacheGraphics","flixel/tile/FlxTilemap.hx",270,0x448feb74)
HX_LOCAL_STACK_FRAME(_hx_pos_1146cbfc6764fb25_294_initTileObjects,"flixel.tile.FlxTilemap","initTileObjects",0xb20b6ad2,"flixel.tile.FlxTilemap.initTileObjects","flixel/tile/FlxTilemap.hx",294,0x448feb74)
HX_LOCAL_STACK_FRAME(_hx_pos_1146cbfc6764fb25_357_computeDimensions,"flixel.tile.FlxTilemap","computeDimensions",0x3602f860,"flixel.tile.FlxTilemap.computeDimensions","flixel/tile/FlxTilemap.hx",357,0x448feb74)
HX_LOCAL_STACK_FRAME(_hx_pos_1146cbfc6764fb25_367_updateMap,"flixel.tile.FlxTilemap","updateMap",0x271f1fcf,"flixel.tile.FlxTilemap.updateMap","flixel/tile/FlxTilemap.hx",367,0x448feb74)
HX_LOCAL_STACK_FRAME(_hx_pos_1146cbfc6764fb25_457_isOnScreen,"flixel.tile.FlxTilemap","isOnScreen",0xb4cad0b9,"flixel.tile.FlxTilemap.isOnScreen","flixel/tile/FlxTilemap.hx",457,0x448feb74)
HX_LOCAL_STACK_FRAME(_hx_pos_1146cbfc6764fb25_472_draw,"flixel.tile.FlxTilemap","draw",0x7d740dc8,"flixel.tile.FlxTilemap.draw","flixel/tile/FlxTilemap.hx",472,0x448feb74)
HX_LOCAL_STACK_FRAME(_hx_pos_1146cbfc6764fb25_525_refreshBuffers,"flixel.tile.FlxTilemap","refreshBuffers",0x89f6f19c,"flixel.tile.FlxTilemap.refreshBuffers","flixel/tile/FlxTilemap.hx",525,0x448feb74)
HX_LOCAL_STACK_FRAME(_hx_pos_1146cbfc6764fb25_545_setDirty,"flixel.tile.FlxTilemap","setDirty",0x6396ccd4,"flixel.tile.FlxTilemap.setDirty","flixel/tile/FlxTilemap.hx",545,0x448feb74)
HX_LOCAL_STACK_FRAME(_hx_pos_1146cbfc6764fb25_567_overlapsWithCallback,"flixel.tile.FlxTilemap","overlapsWithCallback",0xe7b56cdb,"flixel.tile.FlxTilemap.overlapsWithCallback","flixel/tile/FlxTilemap.hx",567,0x448feb74)
HX_LOCAL_STACK_FRAME(_hx_pos_1146cbfc6764fb25_669_getTileIndexByCoords,"flixel.tile.FlxTilemap","getTileIndexByCoords",0xb5ce22c7,"flixel.tile.FlxTilemap.getTileIndexByCoords","flixel/tile/FlxTilemap.hx",669,0x448feb74)
HX_LOCAL_STACK_FRAME(_hx_pos_1146cbfc6764fb25_681_getTileCoordsByIndex,"flixel.tile.FlxTilemap","getTileCoordsByIndex",0xe0680d7d,"flixel.tile.FlxTilemap.getTileCoordsByIndex","flixel/tile/FlxTilemap.hx",681,0x448feb74)
HX_LOCAL_STACK_FRAME(_hx_pos_1146cbfc6764fb25_699_getTileCoords,"flixel.tile.FlxTilemap","getTileCoords",0x02899bde,"flixel.tile.FlxTilemap.getTileCoords","flixel/tile/FlxTilemap.hx",699,0x448feb74)
HX_LOCAL_STACK_FRAME(_hx_pos_1146cbfc6764fb25_736_follow,"flixel.tile.FlxTilemap","follow",0xe6a96c35,"flixel.tile.FlxTilemap.follow","flixel/tile/FlxTilemap.hx",736,0x448feb74)
HX_LOCAL_STACK_FRAME(_hx_pos_1146cbfc6764fb25_759_ray,"flixel.tile.FlxTilemap","ray",0xbe0558a6,"flixel.tile.FlxTilemap.ray","flixel/tile/FlxTilemap.hx",759,0x448feb74)
HX_LOCAL_STACK_FRAME(_hx_pos_1146cbfc6764fb25_868_tileToSprite,"flixel.tile.FlxTilemap","tileToSprite",0xe7482ef2,"flixel.tile.FlxTilemap.tileToSprite","flixel/tile/FlxTilemap.hx",868,0x448feb74)
HX_LOCAL_STACK_FRAME(_hx_pos_1146cbfc6764fb25_902_updateBuffers,"flixel.tile.FlxTilemap","updateBuffers",0xf5face26,"flixel.tile.FlxTilemap.updateBuffers","flixel/tile/FlxTilemap.hx",902,0x448feb74)
HX_LOCAL_STACK_FRAME(_hx_pos_1146cbfc6764fb25_915_drawTilemap,"flixel.tile.FlxTilemap","drawTilemap",0x2b20d346,"flixel.tile.FlxTilemap.drawTilemap","flixel/tile/FlxTilemap.hx",915,0x448feb74)
HX_LOCAL_STACK_FRAME(_hx_pos_1146cbfc6764fb25_1101_updateTile,"flixel.tile.FlxTilemap","updateTile",0x18c3429b,"flixel.tile.FlxTilemap.updateTile","flixel/tile/FlxTilemap.hx",1101,0x448feb74)
HX_LOCAL_STACK_FRAME(_hx_pos_1146cbfc6764fb25_1110_createBuffer,"flixel.tile.FlxTilemap","createBuffer",0x170b42e0,"flixel.tile.FlxTilemap.createBuffer","flixel/tile/FlxTilemap.hx",1110,0x448feb74)
HX_LOCAL_STACK_FRAME(_hx_pos_1146cbfc6764fb25_1118_set_antialiasing,"flixel.tile.FlxTilemap","set_antialiasing",0x6cc568b5,"flixel.tile.FlxTilemap.set_antialiasing","flixel/tile/FlxTilemap.hx",1118,0x448feb74)
HX_LOCAL_STACK_FRAME(_hx_pos_1146cbfc6764fb25_1129_set_graphic,"flixel.tile.FlxTilemap","set_graphic",0xa0b86087,"flixel.tile.FlxTilemap.set_graphic","flixel/tile/FlxTilemap.hx",1129,0x448feb74)
HX_LOCAL_STACK_FRAME(_hx_pos_1146cbfc6764fb25_1146_set_pixelPerfectRender,"flixel.tile.FlxTilemap","set_pixelPerfectRender",0x5122f25e,"flixel.tile.FlxTilemap.set_pixelPerfectRender","flixel/tile/FlxTilemap.hx",1146,0x448feb74)
HX_LOCAL_STACK_FRAME(_hx_pos_1146cbfc6764fb25_1155_set_alpha,"flixel.tile.FlxTilemap","set_alpha",0xecd0277d,"flixel.tile.FlxTilemap.set_alpha","flixel/tile/FlxTilemap.hx",1155,0x448feb74)
HX_LOCAL_STACK_FRAME(_hx_pos_1146cbfc6764fb25_1162_set_color,"flixel.tile.FlxTilemap","set_color",0x1595f182,"flixel.tile.FlxTilemap.set_color","flixel/tile/FlxTilemap.hx",1162,0x448feb74)
HX_LOCAL_STACK_FRAME(_hx_pos_1146cbfc6764fb25_1172_updateColorTransform,"flixel.tile.FlxTilemap","updateColorTransform",0x6f14b936,"flixel.tile.FlxTilemap.updateColorTransform","flixel/tile/FlxTilemap.hx",1172,0x448feb74)
HX_LOCAL_STACK_FRAME(_hx_pos_1146cbfc6764fb25_1185_set_blend,"flixel.tile.FlxTilemap","set_blend",0x802e6870,"flixel.tile.FlxTilemap.set_blend","flixel/tile/FlxTilemap.hx",1185,0x448feb74)
HX_LOCAL_STACK_FRAME(_hx_pos_1146cbfc6764fb25_1191_setScaleXYCallback,"flixel.tile.FlxTilemap","setScaleXYCallback",0x2287ee32,"flixel.tile.FlxTilemap.setScaleXYCallback","flixel/tile/FlxTilemap.hx",1191,0x448feb74)
HX_LOCAL_STACK_FRAME(_hx_pos_1146cbfc6764fb25_1197_setScaleXCallback,"flixel.tile.FlxTilemap","setScaleXCallback",0x45b95971,"flixel.tile.FlxTilemap.setScaleXCallback","flixel/tile/FlxTilemap.hx",1197,0x448feb74)
HX_LOCAL_STACK_FRAME(_hx_pos_1146cbfc6764fb25_1210_setScaleYCallback,"flixel.tile.FlxTilemap","setScaleYCallback",0x18aac272,"flixel.tile.FlxTilemap.setScaleYCallback","flixel/tile/FlxTilemap.hx",1210,0x448feb74)
HX_LOCAL_STACK_FRAME(_hx_pos_1146cbfc6764fb25_1229_defaultTileToSprite,"flixel.tile.FlxTilemap","defaultTileToSprite",0xb4e0664b,"flixel.tile.FlxTilemap.defaultTileToSprite","flixel/tile/FlxTilemap.hx",1229,0x448feb74)
HX_LOCAL_STACK_FRAME(_hx_pos_1146cbfc6764fb25_1240_set_allowCollisions,"flixel.tile.FlxTilemap","set_allowCollisions",0x96e24689,"flixel.tile.FlxTilemap.set_allowCollisions","flixel/tile/FlxTilemap.hx",1240,0x448feb74)
namespace flixel{
namespace tile{

void FlxTilemap_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_1146cbfc6764fb25_52_new)
HXLINE( 163)		this->_checkBufferChanges = false;
HXLINE( 141)		this->_scaledTileHeight = ((Float)0);
HXLINE( 140)		this->_scaledTileWidth = ((Float)0);
HXLINE( 138)		this->_tileHeight = 0;
HXLINE( 133)		this->_tileWidth = 0;
HXLINE( 128)		this->_buffers = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 123)		this->_flashRect =  ::openfl::geom::Rectangle_obj::__alloc( HX_CTX ,null(),null(),null(),null());
HXLINE( 118)		this->_flashPoint =  ::openfl::geom::Point_obj::__alloc( HX_CTX ,null(),null());
HXLINE( 103)		this->blend = null();
HXLINE(  98)		this->colorTransform =  ::openfl::geom::ColorTransform_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null(),null(),null());
HXLINE(  96)		this->alpha = ((Float)1.0);
HXLINE(  91)		this->color = 16777215;
HXLINE(  78)		 ::flixel::math::FlxPoint point = ::flixel::math::FlxPoint_obj::_pool->get()->set(( (Float)(0) ),( (Float)(0) ));
HXDLIN(  78)		point->_inPool = false;
HXDLIN(  78)		this->offset = point;
HXLINE(  72)		this->antialiasing = false;
HXLINE(  60)		this->useScaleHack = true;
HXLINE( 167)		super::__construct();
HXLINE( 169)		if (::flixel::FlxG_obj::renderTile) {
HXLINE( 171)			this->_helperPoint =  ::openfl::geom::Point_obj::__alloc( HX_CTX ,null(),null());
HXLINE( 172)			this->_matrix =  ::flixel::math::FlxMatrix_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            		}
HXLINE( 175)		this->scale =  ::flixel::math::FlxCallbackPoint_obj::__alloc( HX_CTX ,this->setScaleXCallback_dyn(),this->setScaleYCallback_dyn(),this->setScaleXYCallback_dyn());
HXLINE( 176)		this->scale->set(1,1);
HXLINE( 178)		::flixel::FlxG_obj::signals->gameResized->add(this->onGameResized_dyn());
HXLINE( 179)		::flixel::FlxG_obj::cameras->cameraAdded->add(this->onCameraChanged_dyn());
HXLINE( 180)		::flixel::FlxG_obj::cameras->cameraRemoved->add(this->onCameraChanged_dyn());
HXLINE( 181)		::flixel::FlxG_obj::cameras->cameraResized->add(this->onCameraChanged_dyn());
            	}

Dynamic FlxTilemap_obj::__CreateEmpty() { return new FlxTilemap_obj; }

void *FlxTilemap_obj::_hx_vtable = 0;

Dynamic FlxTilemap_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxTilemap_obj > _hx_result = new FlxTilemap_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool FlxTilemap_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x3d6253b5) {
		if (inClassId<=(int)0x1dc5d3c6) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x1dc5d3c6;
		} else {
			return inClassId==(int)0x3d6253b5;
		}
	} else {
		return inClassId==(int)0x7ccf8994 || inClassId==(int)0x7dab0655;
	}
}

void FlxTilemap_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_1146cbfc6764fb25_197_destroy)
HXLINE( 198)		this->_flashPoint = null();
HXLINE( 199)		this->_flashRect = null();
HXLINE( 201)		this->_tileObjects = ::flixel::util::FlxDestroyUtil_obj::destroyArray(this->_tileObjects);
HXLINE( 202)		this->_buffers = ::flixel::util::FlxDestroyUtil_obj::destroyArray(this->_buffers);
HXLINE( 204)		if (!(::flixel::FlxG_obj::renderBlit)) {
HXLINE( 215)			this->_helperPoint = null();
HXLINE( 216)			this->_matrix = null();
            		}
HXLINE( 219)		this->set_frames(null());
HXLINE( 220)		this->set_graphic(null());
HXLINE( 223)		this->scale = ( ( ::flixel::math::FlxPoint)(::flixel::util::FlxDestroyUtil_obj::destroy(this->scale)) );
HXLINE( 224)		this->offset = ( ( ::flixel::math::FlxPoint)(::flixel::util::FlxDestroyUtil_obj::put(this->offset)) );
HXLINE( 226)		this->colorTransform = null();
HXLINE( 228)		::flixel::FlxG_obj::signals->gameResized->remove(this->onGameResized_dyn());
HXLINE( 229)		::flixel::FlxG_obj::cameras->cameraAdded->remove(this->onCameraChanged_dyn());
HXLINE( 230)		::flixel::FlxG_obj::cameras->cameraRemoved->remove(this->onCameraChanged_dyn());
HXLINE( 231)		::flixel::FlxG_obj::cameras->cameraResized->remove(this->onCameraChanged_dyn());
HXLINE( 238)		this->shader = null();
HXLINE( 240)		this->super::destroy();
            	}


 ::flixel::graphics::frames::FlxFramesCollection FlxTilemap_obj::set_frames( ::flixel::graphics::frames::FlxFramesCollection value){
            	HX_STACKFRAME(&_hx_pos_1146cbfc6764fb25_244_set_frames)
HXLINE( 245)		this->frames = value;
HXLINE( 247)		if (::hx::IsNotNull( value )) {
HXLINE( 249)			this->_tileWidth = ::Std_obj::_hx_int(value->frames->__get(0).StaticCast<  ::flixel::graphics::frames::FlxFrame >()->sourceSize->x);
HXLINE( 250)			this->_tileHeight = ::Std_obj::_hx_int(value->frames->__get(0).StaticCast<  ::flixel::graphics::frames::FlxFrame >()->sourceSize->y);
HXLINE( 251)			this->_flashRect->setTo(( (Float)(0) ),( (Float)(0) ),( (Float)(this->_tileWidth) ),( (Float)(this->_tileHeight) ));
HXLINE( 252)			this->set_graphic(value->parent);
HXLINE( 253)			this->postGraphicLoad();
            		}
HXLINE( 256)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxTilemap_obj,set_frames,return )

void FlxTilemap_obj::onGameResized(int _,int _1){
            	HX_STACKFRAME(&_hx_pos_1146cbfc6764fb25_261_onGameResized)
HXDLIN( 261)		this->_checkBufferChanges = true;
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxTilemap_obj,onGameResized,(void))

void FlxTilemap_obj::onCameraChanged( ::flixel::FlxCamera _){
            	HX_STACKFRAME(&_hx_pos_1146cbfc6764fb25_266_onCameraChanged)
HXDLIN( 266)		this->_checkBufferChanges = true;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxTilemap_obj,onCameraChanged,(void))

void FlxTilemap_obj::cacheGraphics(int TileWidth,int TileHeight, ::Dynamic TileGraphic){
            	HX_STACKFRAME(&_hx_pos_1146cbfc6764fb25_270_cacheGraphics)
HXLINE( 271)		if (::Std_obj::isOfType(TileGraphic,::hx::ClassOf< ::flixel::graphics::frames::FlxFramesCollection >())) {
HXLINE( 273)			this->set_frames(( ( ::flixel::graphics::frames::FlxFramesCollection)(TileGraphic) ));
HXLINE( 274)			return;
            		}
HXLINE( 277)		 ::flixel::graphics::FlxGraphic graph = ::flixel::FlxG_obj::bitmap->add(TileGraphic,null(),null());
HXLINE( 278)		if (::hx::IsNull( graph )) {
HXLINE( 279)			return;
            		}
HXLINE( 282)		this->_tileWidth = TileWidth;
HXLINE( 283)		if ((this->_tileWidth <= 0)) {
HXLINE( 284)			this->_tileWidth = graph->height;
            		}
HXLINE( 286)		this->_tileHeight = TileHeight;
HXLINE( 287)		if ((this->_tileHeight <= 0)) {
HXLINE( 288)			this->_tileHeight = this->_tileWidth;
            		}
HXLINE( 290)		Float X = ( (Float)(this->_tileWidth) );
HXDLIN( 290)		Float Y = ( (Float)(this->_tileHeight) );
HXDLIN( 290)		 ::flixel::math::FlxPoint point = ::flixel::math::FlxPoint_obj::_pool->get()->set(X,Y);
HXDLIN( 290)		point->_inPool = false;
HXDLIN( 290)		this->set_frames(::flixel::graphics::frames::FlxTileFrames_obj::fromGraphic(graph,point,null(),null()));
            	}


void FlxTilemap_obj::initTileObjects(){
            	HX_GC_STACKFRAME(&_hx_pos_1146cbfc6764fb25_294_initTileObjects)
HXLINE( 295)		if (::hx::IsNull( this->frames )) {
HXLINE( 296)			return;
            		}
HXLINE( 298)		this->_tileObjects = ::flixel::util::FlxDestroyUtil_obj::destroyArray(this->_tileObjects);
HXLINE( 300)		this->_tileObjects = ::Array_obj< ::Dynamic>::__new();
HXLINE( 302)		int length = this->frames->frames->length;
HXLINE( 303)		length = (length + this->_startingIndex);
HXLINE( 305)		{
HXLINE( 305)			int _g = 0;
HXDLIN( 305)			int _g1 = length;
HXDLIN( 305)			while((_g < _g1)){
HXLINE( 305)				_g = (_g + 1);
HXDLIN( 305)				int i = (_g - 1);
HXLINE( 306)				int _hx_tmp;
HXDLIN( 306)				if ((i >= this->_collideIndex)) {
HXLINE( 306)					_hx_tmp = this->allowCollisions;
            				}
            				else {
HXLINE( 306)					_hx_tmp = 0;
            				}
HXDLIN( 306)				this->_tileObjects->set(i, ::flixel::tile::FlxTile_obj::__alloc( HX_CTX ,::hx::ObjectPtr<OBJ_>(this),i,( (Float)(this->_tileWidth) ),( (Float)(this->_tileHeight) ),(i >= this->_drawIndex),_hx_tmp));
            			}
            		}
            	}


void FlxTilemap_obj::computeDimensions(){
            	HX_STACKFRAME(&_hx_pos_1146cbfc6764fb25_357_computeDimensions)
HXLINE( 358)		this->_scaledTileWidth = (( (Float)(this->_tileWidth) ) * this->scale->x);
HXLINE( 359)		this->_scaledTileHeight = (( (Float)(this->_tileHeight) ) * this->scale->y);
HXLINE( 362)		this->set_width((( (Float)(this->widthInTiles) ) * this->_scaledTileWidth));
HXLINE( 363)		this->set_height((( (Float)(this->heightInTiles) ) * this->_scaledTileHeight));
            	}


void FlxTilemap_obj::updateMap(){
            	HX_STACKFRAME(&_hx_pos_1146cbfc6764fb25_367_updateMap)
HXLINE( 373)		int numTiles = this->_tileObjects->get_length();
HXLINE( 374)		{
HXLINE( 374)			int _g = 0;
HXDLIN( 374)			int _g1 = numTiles;
HXDLIN( 374)			while((_g < _g1)){
HXLINE( 374)				_g = (_g + 1);
HXDLIN( 374)				int i = (_g - 1);
HXLINE( 375)				this->updateTile(i);
            			}
            		}
            	}


bool FlxTilemap_obj::isOnScreen( ::flixel::FlxCamera Camera){
            	HX_STACKFRAME(&_hx_pos_1146cbfc6764fb25_457_isOnScreen)
HXLINE( 458)		if (::hx::IsNull( Camera )) {
HXLINE( 459)			Camera = ::flixel::FlxG_obj::camera;
            		}
HXLINE( 461)		Float minX = ((this->x - this->offset->x) - (Camera->scroll->x * this->scrollFactor->x));
HXLINE( 462)		Float minY = ((this->y - this->offset->y) - (Camera->scroll->y * this->scrollFactor->y));
HXLINE( 464)		this->_point->set(minX,minY);
HXLINE( 465)		 ::flixel::math::FlxPoint point = this->_point;
HXDLIN( 465)		bool _hx_tmp;
HXDLIN( 465)		bool _hx_tmp1;
HXDLIN( 465)		if (((point->x + (this->_scaledTileWidth * ( (Float)(this->widthInTiles) ))) > Camera->viewOffsetX)) {
HXLINE( 465)			_hx_tmp1 = (point->x < Camera->viewOffsetWidth);
            		}
            		else {
HXLINE( 465)			_hx_tmp1 = false;
            		}
HXDLIN( 465)		if (_hx_tmp1) {
HXLINE( 465)			_hx_tmp = ((point->y + (this->_scaledTileHeight * ( (Float)(this->heightInTiles) ))) > Camera->viewOffsetY);
            		}
            		else {
HXLINE( 465)			_hx_tmp = false;
            		}
HXDLIN( 465)		if (_hx_tmp) {
HXLINE( 465)			return (point->y < Camera->viewOffsetHeight);
            		}
            		else {
HXLINE( 465)			return false;
            		}
HXDLIN( 465)		return false;
            	}


void FlxTilemap_obj::draw(){
            	HX_GC_STACKFRAME(&_hx_pos_1146cbfc6764fb25_472_draw)
HXLINE( 474)		if (::hx::IsNull( this->graphic )) {
HXLINE( 475)			return;
            		}
HXLINE( 477)		if (this->_checkBufferChanges) {
HXLINE( 479)			this->refreshBuffers();
HXLINE( 480)			this->_checkBufferChanges = false;
            		}
HXLINE( 483)		 ::flixel::FlxCamera camera;
HXLINE( 484)		 ::flixel::tile::FlxTilemapBuffer buffer;
HXLINE( 485)		int l = this->get_cameras()->length;
HXLINE( 487)		{
HXLINE( 487)			int _g = 0;
HXDLIN( 487)			int _g1 = l;
HXDLIN( 487)			while((_g < _g1)){
HXLINE( 487)				_g = (_g + 1);
HXDLIN( 487)				int i = (_g - 1);
HXLINE( 489)				camera = this->get_cameras()->__get(i).StaticCast<  ::flixel::FlxCamera >();
HXLINE( 491)				bool _hx_tmp;
HXDLIN( 491)				bool _hx_tmp1;
HXDLIN( 491)				if (camera->visible) {
HXLINE( 491)					_hx_tmp1 = !(camera->exists);
            				}
            				else {
HXLINE( 491)					_hx_tmp1 = true;
            				}
HXDLIN( 491)				if (!(_hx_tmp1)) {
HXLINE( 491)					_hx_tmp = !(this->isOnScreen(camera));
            				}
            				else {
HXLINE( 491)					_hx_tmp = true;
            				}
HXDLIN( 491)				if (_hx_tmp) {
HXLINE( 492)					continue;
            				}
HXLINE( 494)				if (::hx::IsNull( this->_buffers->__get(i).StaticCast<  ::flixel::tile::FlxTilemapBuffer >() )) {
HXLINE( 495)					::Array< ::Dynamic> _hx_tmp = this->_buffers;
HXDLIN( 495)					 ::flixel::tile::FlxTilemapBuffer buffer =  ::flixel::tile::FlxTilemapBuffer_obj::__alloc( HX_CTX ,this->_tileWidth,this->_tileHeight,this->widthInTiles,this->heightInTiles,camera,this->scale->x,this->scale->y);
HXDLIN( 495)					buffer->pixelPerfectRender = this->pixelPerfectRender;
HXDLIN( 495)					buffer->antialiasing = this->antialiasing;
HXDLIN( 495)					_hx_tmp[i] = buffer;
            				}
HXLINE( 497)				buffer = this->_buffers->__get(i).StaticCast<  ::flixel::tile::FlxTilemapBuffer >();
HXLINE( 499)				if (::flixel::FlxG_obj::renderBlit) {
HXLINE( 501)					if (buffer->isDirty(::hx::ObjectPtr<OBJ_>(this),camera)) {
HXLINE( 502)						this->drawTilemap(buffer,camera);
            					}
HXLINE( 504)					{
HXLINE( 504)						 ::flixel::math::FlxPoint _this = this->getScreenPosition(this->_point,camera)->subtractPoint(this->offset);
HXDLIN( 504)						Float Y = buffer->y;
HXDLIN( 504)						_this->set_x((_this->x + buffer->x));
HXDLIN( 504)						_this->set_y((_this->y + Y));
HXDLIN( 504)						 ::flixel::math::FlxPoint _this1 = _this;
HXDLIN( 504)						 ::openfl::geom::Point FlashPoint = this->_flashPoint;
HXDLIN( 504)						if (::hx::IsNull( FlashPoint )) {
HXLINE( 504)							FlashPoint =  ::openfl::geom::Point_obj::__alloc( HX_CTX ,null(),null());
            						}
HXDLIN( 504)						FlashPoint->x = _this1->x;
HXDLIN( 504)						FlashPoint->y = _this1->y;
            					}
HXLINE( 505)					buffer->draw(camera,this->_flashPoint,this->scale->x,this->scale->y);
            				}
            				else {
HXLINE( 509)					this->drawTilemap(buffer,camera);
            				}
            			}
            		}
            	}


void FlxTilemap_obj::refreshBuffers(){
            	HX_GC_STACKFRAME(&_hx_pos_1146cbfc6764fb25_525_refreshBuffers)
HXDLIN( 525)		int _g = 0;
HXDLIN( 525)		int _g1 = this->get_cameras()->length;
HXDLIN( 525)		while((_g < _g1)){
HXDLIN( 525)			_g = (_g + 1);
HXDLIN( 525)			int i = (_g - 1);
HXLINE( 527)			 ::flixel::FlxCamera camera = this->get_cameras()->__get(i).StaticCast<  ::flixel::FlxCamera >();
HXLINE( 528)			 ::flixel::tile::FlxTilemapBuffer buffer = this->_buffers->__get(i).StaticCast<  ::flixel::tile::FlxTilemapBuffer >();
HXLINE( 531)			if (::hx::IsNull( buffer )) {
HXLINE( 532)				::Array< ::Dynamic> _hx_tmp = this->_buffers;
HXDLIN( 532)				 ::flixel::tile::FlxTilemapBuffer buffer =  ::flixel::tile::FlxTilemapBuffer_obj::__alloc( HX_CTX ,this->_tileWidth,this->_tileHeight,this->widthInTiles,this->heightInTiles,camera,this->scale->x,this->scale->y);
HXDLIN( 532)				buffer->pixelPerfectRender = this->pixelPerfectRender;
HXDLIN( 532)				buffer->antialiasing = this->antialiasing;
HXDLIN( 532)				_hx_tmp[i] = buffer;
            			}
            			else {
HXLINE( 534)				buffer->resize(this->_tileWidth,this->_tileHeight,this->widthInTiles,this->heightInTiles,camera,this->scale->x,this->scale->y);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxTilemap_obj,refreshBuffers,(void))

void FlxTilemap_obj::setDirty(::hx::Null< bool >  __o_Dirty){
            		bool Dirty = __o_Dirty.Default(true);
            	HX_STACKFRAME(&_hx_pos_1146cbfc6764fb25_545_setDirty)
HXLINE( 546)		if (::flixel::FlxG_obj::renderTile) {
HXLINE( 547)			return;
            		}
HXLINE( 549)		{
HXLINE( 549)			int _g = 0;
HXDLIN( 549)			::Array< ::Dynamic> _g1 = this->_buffers;
HXDLIN( 549)			while((_g < _g1->length)){
HXLINE( 549)				 ::flixel::tile::FlxTilemapBuffer buffer = _g1->__get(_g).StaticCast<  ::flixel::tile::FlxTilemapBuffer >();
HXDLIN( 549)				_g = (_g + 1);
HXLINE( 550)				if (::hx::IsNotNull( buffer )) {
HXLINE( 551)					buffer->dirty = Dirty;
            				}
            			}
            		}
            	}


bool FlxTilemap_obj::overlapsWithCallback( ::flixel::FlxObject Object, ::Dynamic Callback,::hx::Null< bool >  __o_FlipCallbackParams, ::flixel::math::FlxPoint Position){
            		bool FlipCallbackParams = __o_FlipCallbackParams.Default(false);
            	HX_STACKFRAME(&_hx_pos_1146cbfc6764fb25_567_overlapsWithCallback)
HXLINE( 568)		bool results = false;
HXLINE( 570)		Float xPos = this->x;
HXLINE( 571)		Float yPos = this->y;
HXLINE( 573)		if (::hx::IsNotNull( Position )) {
HXLINE( 575)			xPos = Position->x;
HXLINE( 576)			yPos = Position->y;
            		}
HXLINE( 580)		int selectionX = ::Math_obj::floor(((Object->x - xPos) / this->_scaledTileWidth));
HXLINE( 581)		int selectionY = ::Math_obj::floor(((Object->y - yPos) / this->_scaledTileHeight));
HXLINE( 582)		Float selectionWidth = Object->get_width();
HXDLIN( 582)		int selectionWidth1 = ((selectionX + ::Math_obj::ceil((selectionWidth / this->_scaledTileWidth))) + 1);
HXLINE( 583)		Float selectionHeight = Object->get_height();
HXDLIN( 583)		int selectionHeight1 = ((selectionY + ::Math_obj::ceil((selectionHeight / this->_scaledTileHeight))) + 1);
HXLINE( 586)		 ::Dynamic Max = this->widthInTiles;
HXDLIN( 586)		Float lowerBound;
HXDLIN( 586)		if ((selectionX < 0)) {
HXLINE( 586)			lowerBound = ( (Float)(0) );
            		}
            		else {
HXLINE( 586)			lowerBound = ( (Float)(selectionX) );
            		}
HXDLIN( 586)		Float selectionX1;
HXDLIN( 586)		bool selectionX2;
HXDLIN( 586)		if (::hx::IsNotNull( Max )) {
HXLINE( 586)			selectionX2 = ::hx::IsGreater( lowerBound,Max );
            		}
            		else {
HXLINE( 586)			selectionX2 = false;
            		}
HXDLIN( 586)		if (selectionX2) {
HXLINE( 586)			selectionX1 = ( (Float)(Max) );
            		}
            		else {
HXLINE( 586)			selectionX1 = lowerBound;
            		}
HXDLIN( 586)		selectionX = ::Std_obj::_hx_int(selectionX1);
HXLINE( 587)		 ::Dynamic Max1 = this->heightInTiles;
HXDLIN( 587)		Float lowerBound1;
HXDLIN( 587)		if ((selectionY < 0)) {
HXLINE( 587)			lowerBound1 = ( (Float)(0) );
            		}
            		else {
HXLINE( 587)			lowerBound1 = ( (Float)(selectionY) );
            		}
HXDLIN( 587)		Float selectionY1;
HXDLIN( 587)		bool selectionY2;
HXDLIN( 587)		if (::hx::IsNotNull( Max1 )) {
HXLINE( 587)			selectionY2 = ::hx::IsGreater( lowerBound1,Max1 );
            		}
            		else {
HXLINE( 587)			selectionY2 = false;
            		}
HXDLIN( 587)		if (selectionY2) {
HXLINE( 587)			selectionY1 = ( (Float)(Max1) );
            		}
            		else {
HXLINE( 587)			selectionY1 = lowerBound1;
            		}
HXDLIN( 587)		selectionY = ::Std_obj::_hx_int(selectionY1);
HXLINE( 588)		 ::Dynamic Max2 = this->widthInTiles;
HXDLIN( 588)		Float lowerBound2;
HXDLIN( 588)		if ((selectionWidth1 < 0)) {
HXLINE( 588)			lowerBound2 = ( (Float)(0) );
            		}
            		else {
HXLINE( 588)			lowerBound2 = ( (Float)(selectionWidth1) );
            		}
HXDLIN( 588)		Float selectionWidth2;
HXDLIN( 588)		bool selectionWidth3;
HXDLIN( 588)		if (::hx::IsNotNull( Max2 )) {
HXLINE( 588)			selectionWidth3 = ::hx::IsGreater( lowerBound2,Max2 );
            		}
            		else {
HXLINE( 588)			selectionWidth3 = false;
            		}
HXDLIN( 588)		if (selectionWidth3) {
HXLINE( 588)			selectionWidth2 = ( (Float)(Max2) );
            		}
            		else {
HXLINE( 588)			selectionWidth2 = lowerBound2;
            		}
HXDLIN( 588)		selectionWidth1 = ::Std_obj::_hx_int(selectionWidth2);
HXLINE( 589)		 ::Dynamic Max3 = this->heightInTiles;
HXDLIN( 589)		Float lowerBound3;
HXDLIN( 589)		if ((selectionHeight1 < 0)) {
HXLINE( 589)			lowerBound3 = ( (Float)(0) );
            		}
            		else {
HXLINE( 589)			lowerBound3 = ( (Float)(selectionHeight1) );
            		}
HXDLIN( 589)		Float selectionHeight2;
HXDLIN( 589)		bool selectionHeight3;
HXDLIN( 589)		if (::hx::IsNotNull( Max3 )) {
HXLINE( 589)			selectionHeight3 = ::hx::IsGreater( lowerBound3,Max3 );
            		}
            		else {
HXLINE( 589)			selectionHeight3 = false;
            		}
HXDLIN( 589)		if (selectionHeight3) {
HXLINE( 589)			selectionHeight2 = ( (Float)(Max3) );
            		}
            		else {
HXLINE( 589)			selectionHeight2 = lowerBound3;
            		}
HXDLIN( 589)		selectionHeight1 = ::Std_obj::_hx_int(selectionHeight2);
HXLINE( 592)		int rowStart = (selectionY * this->widthInTiles);
HXLINE( 593)		int column;
HXLINE( 594)		 ::flixel::tile::FlxTile tile;
HXLINE( 595)		bool overlapFound;
HXLINE( 596)		Float deltaX = (xPos - this->last->x);
HXLINE( 597)		Float deltaY = (yPos - this->last->y);
HXLINE( 599)		{
HXLINE( 599)			int _g = selectionY;
HXDLIN( 599)			int _g1 = selectionHeight1;
HXDLIN( 599)			while((_g < _g1)){
HXLINE( 599)				_g = (_g + 1);
HXDLIN( 599)				int row = (_g - 1);
HXLINE( 601)				column = selectionX;
HXLINE( 603)				while((column < selectionWidth1)){
HXLINE( 605)					int index = (rowStart + column);
HXLINE( 606)					bool _hx_tmp;
HXDLIN( 606)					if ((index >= 0)) {
HXLINE( 606)						_hx_tmp = (index > (this->_data->length - 1));
            					}
            					else {
HXLINE( 606)						_hx_tmp = true;
            					}
HXDLIN( 606)					if (_hx_tmp) {
HXLINE( 608)						column = (column + 1);
HXLINE( 609)						continue;
            					}
HXLINE( 612)					int dataIndex = this->_data->__get(index);
HXLINE( 613)					if ((dataIndex < 0)) {
HXLINE( 615)						column = (column + 1);
HXLINE( 616)						continue;
            					}
HXLINE( 619)					tile = Dynamic( this->_tileObjects->__get(dataIndex)).StaticCast<  ::flixel::tile::FlxTile >();
HXLINE( 620)					tile->set_width(this->_scaledTileWidth);
HXLINE( 621)					tile->set_height(this->_scaledTileHeight);
HXLINE( 622)					tile->set_x((xPos + (( (Float)(column) ) * tile->get_width())));
HXLINE( 623)					tile->set_y((yPos + (( (Float)(row) ) * tile->get_height())));
HXLINE( 624)					tile->last->set_x((tile->x - deltaX));
HXLINE( 625)					tile->last->set_y((tile->y - deltaY));
HXLINE( 627)					bool overlapFound1;
HXDLIN( 627)					bool overlapFound2;
HXDLIN( 627)					Float Object1 = Object->x;
HXDLIN( 627)					Float overlapFound3 = (Object1 + Object->get_width());
HXDLIN( 627)					if ((overlapFound3 > tile->x)) {
HXLINE( 628)						Float Object1 = Object->x;
HXDLIN( 628)						Float tile1 = tile->x;
HXLINE( 627)						overlapFound2 = (Object1 < (tile1 + tile->get_width()));
            					}
            					else {
HXLINE( 627)						overlapFound2 = false;
            					}
HXDLIN( 627)					if (overlapFound2) {
HXLINE( 629)						Float Object1 = Object->y;
HXDLIN( 629)						Float overlapFound = (Object1 + Object->get_height());
HXLINE( 627)						overlapFound1 = (overlapFound > tile->y);
            					}
            					else {
HXLINE( 627)						overlapFound1 = false;
            					}
HXDLIN( 627)					if (overlapFound1) {
HXLINE( 630)						Float Object1 = Object->y;
HXDLIN( 630)						Float tile1 = tile->y;
HXDLIN( 630)						overlapFound = (Object1 < (tile1 + tile->get_height()));
            					}
            					else {
HXLINE( 627)						overlapFound = false;
            					}
HXLINE( 632)					if ((tile->allowCollisions != 0)) {
HXLINE( 634)						if (::hx::IsNotNull( Callback )) {
HXLINE( 636)							if (FlipCallbackParams) {
HXLINE( 638)								overlapFound = ( (bool)(Callback(Object,tile)) );
            							}
            							else {
HXLINE( 642)								overlapFound = ( (bool)(Callback(tile,Object)) );
            							}
            						}
            					}
HXLINE( 647)					if (overlapFound) {
HXLINE( 649)						bool _hx_tmp;
HXDLIN( 649)						if (::hx::IsNotNull( tile->callbackFunction )) {
HXLINE( 649)							if (::hx::IsNotNull( tile->filter )) {
HXLINE( 649)								_hx_tmp = ::Std_obj::isOfType(Object,tile->filter);
            							}
            							else {
HXLINE( 649)								_hx_tmp = true;
            							}
            						}
            						else {
HXLINE( 649)							_hx_tmp = false;
            						}
HXDLIN( 649)						if (_hx_tmp) {
HXLINE( 651)							tile->mapIndex = (rowStart + column);
HXLINE( 652)							tile->callbackFunction(tile,Object);
            						}
HXLINE( 655)						if ((tile->allowCollisions != 0)) {
HXLINE( 656)							results = true;
            						}
            					}
HXLINE( 659)					column = (column + 1);
            				}
HXLINE( 662)				rowStart = (rowStart + this->widthInTiles);
            			}
            		}
HXLINE( 665)		return results;
            	}


int FlxTilemap_obj::getTileIndexByCoords( ::flixel::math::FlxPoint Coord){
            	HX_STACKFRAME(&_hx_pos_1146cbfc6764fb25_669_getTileIndexByCoords)
HXLINE( 670)		Float localX = (Coord->x - this->x);
HXLINE( 671)		Float localY = (Coord->y - this->y);
HXLINE( 672)		if (Coord->_weak) {
HXLINE( 672)			Coord->put();
            		}
HXLINE( 674)		bool _hx_tmp;
HXDLIN( 674)		bool _hx_tmp1;
HXDLIN( 674)		bool _hx_tmp2;
HXDLIN( 674)		if (!((localX < 0))) {
HXLINE( 674)			_hx_tmp2 = (localY < 0);
            		}
            		else {
HXLINE( 674)			_hx_tmp2 = true;
            		}
HXDLIN( 674)		if (!(_hx_tmp2)) {
HXLINE( 674)			_hx_tmp1 = (localX >= this->get_width());
            		}
            		else {
HXLINE( 674)			_hx_tmp1 = true;
            		}
HXDLIN( 674)		if (!(_hx_tmp1)) {
HXLINE( 674)			_hx_tmp = (localY >= this->get_height());
            		}
            		else {
HXLINE( 674)			_hx_tmp = true;
            		}
HXDLIN( 674)		if (_hx_tmp) {
HXLINE( 675)			return -1;
            		}
HXLINE( 677)		int _hx_tmp3 = ::Std_obj::_hx_int((localY / this->_scaledTileHeight));
HXDLIN( 677)		int _hx_tmp4 = (_hx_tmp3 * this->widthInTiles);
HXDLIN( 677)		return (_hx_tmp4 + ::Std_obj::_hx_int((localX / this->_scaledTileWidth)));
            	}


 ::flixel::math::FlxPoint FlxTilemap_obj::getTileCoordsByIndex(int Index,::hx::Null< bool >  __o_Midpoint){
            		bool Midpoint = __o_Midpoint.Default(true);
            	HX_STACKFRAME(&_hx_pos_1146cbfc6764fb25_681_getTileCoordsByIndex)
HXLINE( 682)		Float X = (this->x + (( (Float)(::hx::Mod(Index,this->widthInTiles)) ) * this->_scaledTileWidth));
HXDLIN( 682)		Float Y = this->y;
HXDLIN( 682)		int Y1 = ::Std_obj::_hx_int((( (Float)(Index) ) / ( (Float)(this->widthInTiles) )));
HXDLIN( 682)		Float Y2 = (Y + (( (Float)(Y1) ) * this->_scaledTileHeight));
HXDLIN( 682)		 ::flixel::math::FlxPoint point = ::flixel::math::FlxPoint_obj::_pool->get()->set(X,Y2);
HXDLIN( 682)		point->_inPool = false;
HXDLIN( 682)		 ::flixel::math::FlxPoint point1 = point;
HXLINE( 683)		if (Midpoint) {
HXLINE( 685)			point1->set_x((point1->x + (this->_scaledTileWidth * ((Float)0.5))));
HXLINE( 686)			point1->set_y((point1->y + (this->_scaledTileHeight * ((Float)0.5))));
            		}
HXLINE( 688)		return point1;
            	}


::Array< ::Dynamic> FlxTilemap_obj::getTileCoords(int Index,::hx::Null< bool >  __o_Midpoint){
            		bool Midpoint = __o_Midpoint.Default(true);
            	HX_STACKFRAME(&_hx_pos_1146cbfc6764fb25_699_getTileCoords)
HXLINE( 700)		::Array< ::Dynamic> array = null();
HXLINE( 702)		 ::flixel::math::FlxPoint point;
HXLINE( 703)		int l = (this->widthInTiles * this->heightInTiles);
HXLINE( 705)		{
HXLINE( 705)			int _g = 0;
HXDLIN( 705)			int _g1 = l;
HXDLIN( 705)			while((_g < _g1)){
HXLINE( 705)				_g = (_g + 1);
HXDLIN( 705)				int i = (_g - 1);
HXLINE( 707)				if ((this->_data->__get(i) == Index)) {
HXLINE( 709)					Float X = (this->x + (( (Float)(::hx::Mod(i,this->widthInTiles)) ) * this->_scaledTileWidth));
HXDLIN( 709)					Float Y = this->y;
HXDLIN( 709)					int Y1 = ::Std_obj::_hx_int((( (Float)(i) ) / ( (Float)(this->widthInTiles) )));
HXDLIN( 709)					Float Y2 = (Y + (( (Float)(Y1) ) * this->_scaledTileHeight));
HXDLIN( 709)					 ::flixel::math::FlxPoint point1 = ::flixel::math::FlxPoint_obj::_pool->get()->set(X,Y2);
HXDLIN( 709)					point1->_inPool = false;
HXDLIN( 709)					point = point1;
HXLINE( 711)					if (Midpoint) {
HXLINE( 713)						point->set_x((point->x + (this->_scaledTileWidth * ((Float)0.5))));
HXLINE( 714)						point->set_y((point->y + (this->_scaledTileHeight * ((Float)0.5))));
            					}
HXLINE( 717)					if (::hx::IsNull( array )) {
HXLINE( 719)						array = ::Array_obj< ::Dynamic>::__new();
            					}
HXLINE( 721)					array->push(point);
            				}
            			}
            		}
HXLINE( 725)		return array;
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxTilemap_obj,getTileCoords,return )

void FlxTilemap_obj::follow( ::flixel::FlxCamera Camera,::hx::Null< int >  __o_Border,::hx::Null< bool >  __o_UpdateWorld){
            		int Border = __o_Border.Default(0);
            		bool UpdateWorld = __o_UpdateWorld.Default(true);
            	HX_STACKFRAME(&_hx_pos_1146cbfc6764fb25_736_follow)
HXLINE( 737)		if (::hx::IsNull( Camera )) {
HXLINE( 738)			Camera = ::flixel::FlxG_obj::camera;
            		}
HXLINE( 740)		Float _hx_tmp = (this->x + (( (Float)(Border) ) * this->_scaledTileWidth));
HXLINE( 741)		Float _hx_tmp1 = (this->y + (( (Float)(Border) ) * this->_scaledTileHeight));
HXLINE( 742)		Float _hx_tmp2 = this->get_width();
HXDLIN( 742)		Float _hx_tmp3 = (_hx_tmp2 - ((( (Float)(Border) ) * this->_scaledTileWidth) * ( (Float)(2) )));
HXLINE( 744)		Float _hx_tmp4 = this->get_height();
HXLINE( 740)		Camera->setScrollBoundsRect(_hx_tmp,_hx_tmp1,_hx_tmp3,(_hx_tmp4 - ((( (Float)(Border) ) * this->_scaledTileHeight) * ( (Float)(2) ))),UpdateWorld);
            	}


HX_DEFINE_DYNAMIC_FUNC3(FlxTilemap_obj,follow,(void))

bool FlxTilemap_obj::ray( ::flixel::math::FlxPoint Start, ::flixel::math::FlxPoint End, ::flixel::math::FlxPoint Result,::hx::Null< Float >  __o_Resolution){
            		Float Resolution = __o_Resolution.Default(1);
            	HX_STACKFRAME(&_hx_pos_1146cbfc6764fb25_759_ray)
HXLINE( 760)		Float step = this->_scaledTileWidth;
HXLINE( 762)		if ((this->_scaledTileHeight < this->_scaledTileWidth)) {
HXLINE( 763)			step = this->_scaledTileHeight;
            		}
HXLINE( 765)		step = (step / Resolution);
HXLINE( 766)		Float deltaX = (End->x - Start->x);
HXLINE( 767)		Float deltaY = (End->y - Start->y);
HXLINE( 768)		Float distance = ::Math_obj::sqrt(((deltaX * deltaX) + (deltaY * deltaY)));
HXLINE( 769)		int steps = ::Math_obj::ceil((distance / step));
HXLINE( 770)		Float stepX = (deltaX / ( (Float)(steps) ));
HXLINE( 771)		Float stepY = (deltaY / ( (Float)(steps) ));
HXLINE( 772)		Float curX = ((Start->x - stepX) - this->x);
HXLINE( 773)		Float curY = ((Start->y - stepY) - this->y);
HXLINE( 774)		int tileX;
HXLINE( 775)		int tileY;
HXLINE( 776)		int i = 0;
HXLINE( 778)		if (Start->_weak) {
HXLINE( 778)			Start->put();
            		}
HXLINE( 779)		if (End->_weak) {
HXLINE( 779)			End->put();
            		}
HXLINE( 781)		while((i < steps)){
HXLINE( 783)			curX = (curX + stepX);
HXLINE( 784)			curY = (curY + stepY);
HXLINE( 786)			bool _hx_tmp;
HXDLIN( 786)			bool _hx_tmp1;
HXDLIN( 786)			bool _hx_tmp2;
HXDLIN( 786)			if (!((curX < 0))) {
HXLINE( 786)				_hx_tmp2 = (curX > this->get_width());
            			}
            			else {
HXLINE( 786)				_hx_tmp2 = true;
            			}
HXDLIN( 786)			if (!(_hx_tmp2)) {
HXLINE( 786)				_hx_tmp1 = (curY < 0);
            			}
            			else {
HXLINE( 786)				_hx_tmp1 = true;
            			}
HXDLIN( 786)			if (!(_hx_tmp1)) {
HXLINE( 786)				_hx_tmp = (curY > this->get_height());
            			}
            			else {
HXLINE( 786)				_hx_tmp = true;
            			}
HXDLIN( 786)			if (_hx_tmp) {
HXLINE( 788)				i = (i + 1);
HXLINE( 789)				continue;
            			}
HXLINE( 792)			tileX = ::Math_obj::floor((curX / this->_scaledTileWidth));
HXLINE( 793)			tileY = ::Math_obj::floor((curY / this->_scaledTileHeight));
HXLINE( 795)			if ((Dynamic( this->_tileObjects->__get(this->_data->__get(((tileY * this->widthInTiles) + tileX)))).StaticCast<  ::flixel::tile::FlxTile >()->allowCollisions != 0)) {
HXLINE( 798)				tileX = (tileX * ::Std_obj::_hx_int(this->_scaledTileWidth));
HXLINE( 799)				tileY = (tileY * ::Std_obj::_hx_int(this->_scaledTileHeight));
HXLINE( 800)				Float rx = ( (Float)(0) );
HXLINE( 801)				Float ry = ( (Float)(0) );
HXLINE( 803)				Float lx = (curX - stepX);
HXLINE( 804)				Float ly = (curY - stepY);
HXLINE( 802)				Float q = ( (Float)(tileX) );
HXLINE( 809)				if ((deltaX < 0)) {
HXLINE( 811)					q = (q + this->_scaledTileWidth);
            				}
HXLINE( 814)				rx = q;
HXLINE( 815)				ry = (ly + (stepY * ((q - lx) / stepX)));
HXLINE( 817)				bool _hx_tmp;
HXDLIN( 817)				if ((ry >= tileY)) {
HXLINE( 817)					_hx_tmp = (ry <= (tileY + this->_scaledTileHeight));
            				}
            				else {
HXLINE( 817)					_hx_tmp = false;
            				}
HXDLIN( 817)				if (_hx_tmp) {
HXLINE( 819)					if (::hx::IsNull( Result )) {
HXLINE( 821)						 ::flixel::math::FlxPoint point = ::flixel::math::FlxPoint_obj::_pool->get()->set(( (Float)(0) ),( (Float)(0) ));
HXDLIN( 821)						point->_inPool = false;
HXDLIN( 821)						Result = point;
            					}
HXLINE( 824)					Result->set(rx,ry);
HXLINE( 825)					return false;
            				}
HXLINE( 829)				q = ( (Float)(tileY) );
HXLINE( 831)				if ((deltaY < 0)) {
HXLINE( 833)					q = (q + this->_scaledTileHeight);
            				}
HXLINE( 836)				rx = (lx + (stepX * ((q - ly) / stepY)));
HXLINE( 837)				ry = q;
HXLINE( 839)				bool _hx_tmp1;
HXDLIN( 839)				if ((rx >= tileX)) {
HXLINE( 839)					_hx_tmp1 = (rx <= (tileX + this->_scaledTileWidth));
            				}
            				else {
HXLINE( 839)					_hx_tmp1 = false;
            				}
HXDLIN( 839)				if (_hx_tmp1) {
HXLINE( 841)					if (::hx::IsNull( Result )) {
HXLINE( 843)						 ::flixel::math::FlxPoint point = ::flixel::math::FlxPoint_obj::_pool->get()->set(( (Float)(0) ),( (Float)(0) ));
HXDLIN( 843)						point->_inPool = false;
HXDLIN( 843)						Result = point;
            					}
HXLINE( 846)					Result->set(rx,ry);
HXLINE( 847)					return false;
            				}
HXLINE( 850)				return true;
            			}
HXLINE( 852)			i = (i + 1);
            		}
HXLINE( 855)		return true;
            	}


 ::flixel::FlxSprite FlxTilemap_obj::tileToSprite(int X,int Y,::hx::Null< int >  __o_NewTile, ::Dynamic SpriteFactory){
            		int NewTile = __o_NewTile.Default(0);
            	HX_STACKFRAME(&_hx_pos_1146cbfc6764fb25_868_tileToSprite)
HXLINE( 869)		if (::hx::IsNull( SpriteFactory )) {
HXLINE( 870)			SpriteFactory = this->defaultTileToSprite_dyn();
            		}
HXLINE( 872)		int rowIndex = (X + (Y * this->widthInTiles));
HXLINE( 873)		 ::flixel::tile::FlxTile tile = Dynamic( this->_tileObjects->__get(this->_data->__get(rowIndex))).StaticCast<  ::flixel::tile::FlxTile >();
HXLINE( 874)		 ::flixel::graphics::frames::FlxImageFrame image = null();
HXLINE( 876)		bool _hx_tmp;
HXDLIN( 876)		if (::hx::IsNotNull( tile )) {
HXLINE( 876)			_hx_tmp = tile->visible;
            		}
            		else {
HXLINE( 876)			_hx_tmp = false;
            		}
HXDLIN( 876)		if (_hx_tmp) {
HXLINE( 877)			image = ::flixel::graphics::frames::FlxImageFrame_obj::fromFrame(tile->frame);
            		}
            		else {
HXLINE( 879)			 ::flixel::graphics::FlxGraphic image1 = this->graphic;
HXDLIN( 879)			Float Width = ( (Float)(this->_tileWidth) );
HXDLIN( 879)			Float Height = ( (Float)(this->_tileHeight) );
HXDLIN( 879)			 ::flixel::math::FlxRect _this = ::flixel::math::FlxRect_obj::_pool->get();
HXDLIN( 879)			_this->x = ( (Float)(0) );
HXDLIN( 879)			_this->y = ( (Float)(0) );
HXDLIN( 879)			_this->width = Width;
HXDLIN( 879)			_this->height = Height;
HXDLIN( 879)			 ::flixel::math::FlxRect rect = _this;
HXDLIN( 879)			rect->_inPool = false;
HXDLIN( 879)			image = ::flixel::graphics::frames::FlxImageFrame_obj::fromEmptyFrame(image1,rect);
            		}
HXLINE( 881)		Float tileX = ((( (Float)((X * this->_tileWidth)) ) * this->scale->x) + this->x);
HXLINE( 882)		Float tileY = ((( (Float)((Y * this->_tileHeight)) ) * this->scale->y) + this->y);
HXLINE( 887)		 ::flixel::math::FlxPoint point = ::flixel::math::FlxPoint_obj::_pool->get()->set(( (Float)(0) ),( (Float)(0) ));
HXDLIN( 887)		point->_inPool = false;
HXDLIN( 887)		 ::flixel::math::FlxPoint _this = point;
HXDLIN( 887)		 ::flixel::math::FlxPoint point1 = this->scale;
HXDLIN( 887)		_this->set_x(point1->x);
HXDLIN( 887)		_this->set_y(point1->y);
HXDLIN( 887)		if (point1->_weak) {
HXLINE( 887)			point1->put();
            		}
HXLINE( 883)		 ::flixel::FlxSprite tileSprite = ( ( ::flixel::FlxSprite)(SpriteFactory( ::Dynamic(::hx::Anon_obj::Create(6)
            			->setFixed(0,HX_("blend",51,e8,f4,b4),this->blend)
            			->setFixed(1,HX_("x",78,00,00,00),tileX)
            			->setFixed(2,HX_("y",79,00,00,00),tileY)
            			->setFixed(3,HX_("alpha",5e,a7,96,21),this->alpha)
            			->setFixed(4,HX_("graphic",a8,5a,07,74),image)
            			->setFixed(5,HX_("scale",8a,ce,ce,78),_this)))) );
HXLINE( 892)		if ((NewTile >= 0)) {
HXLINE( 893)			this->setTile(X,Y,NewTile,null());
            		}
HXLINE( 895)		return tileSprite;
            	}


HX_DEFINE_DYNAMIC_FUNC4(FlxTilemap_obj,tileToSprite,return )

void FlxTilemap_obj::updateBuffers(){
            	HX_STACKFRAME(&_hx_pos_1146cbfc6764fb25_902_updateBuffers)
HXLINE( 903)		::flixel::util::FlxDestroyUtil_obj::destroyArray(this->_buffers);
HXLINE( 904)		this->_buffers = ::Array_obj< ::Dynamic>::__new(0);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxTilemap_obj,updateBuffers,(void))

void FlxTilemap_obj::drawTilemap( ::flixel::tile::FlxTilemapBuffer Buffer, ::flixel::FlxCamera Camera){
            	HX_GC_STACKFRAME(&_hx_pos_1146cbfc6764fb25_915_drawTilemap)
HXLINE( 916)		bool isColored;
HXDLIN( 916)		if ((this->alpha == 1)) {
HXLINE( 916)			isColored = (this->color != 16777215);
            		}
            		else {
HXLINE( 916)			isColored = true;
            		}
HXLINE( 919)		Float drawX = ( (Float)(0) );
HXLINE( 920)		Float drawY = ( (Float)(0) );
HXLINE( 921)		Float scaledWidth = ( (Float)(0) );
HXLINE( 922)		Float scaledHeight = ( (Float)(0) );
HXLINE( 923)		 ::flixel::graphics::tile::FlxDrawQuadsItem drawItem = null();
HXLINE( 925)		if (::flixel::FlxG_obj::renderBlit) {
HXLINE( 927)			Buffer->fill(null());
            		}
            		else {
HXLINE( 931)			{
HXLINE( 931)				 ::flixel::math::FlxPoint _this = this->getScreenPosition(this->_point,Camera)->subtractPoint(this->offset);
HXDLIN( 931)				 ::openfl::geom::Point FlashPoint = this->_helperPoint;
HXDLIN( 931)				if (::hx::IsNull( FlashPoint )) {
HXLINE( 931)					FlashPoint =  ::openfl::geom::Point_obj::__alloc( HX_CTX ,null(),null());
            				}
HXDLIN( 931)				FlashPoint->x = _this->x;
HXDLIN( 931)				FlashPoint->y = _this->y;
            			}
HXLINE( 933)			Float _hx_tmp;
HXDLIN( 933)			if (this->isPixelPerfectRender(Camera)) {
HXLINE( 933)				_hx_tmp = ( (Float)(::Math_obj::floor(this->_helperPoint->x)) );
            			}
            			else {
HXLINE( 933)				_hx_tmp = this->_helperPoint->x;
            			}
HXDLIN( 933)			this->_helperPoint->x = _hx_tmp;
HXLINE( 934)			Float _hx_tmp1;
HXDLIN( 934)			if (this->isPixelPerfectRender(Camera)) {
HXLINE( 934)				_hx_tmp1 = ( (Float)(::Math_obj::floor(this->_helperPoint->y)) );
            			}
            			else {
HXLINE( 934)				_hx_tmp1 = this->_helperPoint->y;
            			}
HXDLIN( 934)			this->_helperPoint->y = _hx_tmp1;
HXLINE( 936)			scaledWidth = this->_scaledTileWidth;
HXLINE( 937)			scaledHeight = this->_scaledTileHeight;
HXLINE( 939)			bool hasColorOffsets;
HXDLIN( 939)			if (::hx::IsNotNull( this->colorTransform )) {
HXLINE( 939)				hasColorOffsets = ::flixel::util::FlxColorTransformUtil_obj::hasRGBAOffsets(this->colorTransform);
            			}
            			else {
HXLINE( 939)				hasColorOffsets = false;
            			}
HXLINE( 940)			drawItem = Camera->startQuadBatch(this->graphic,isColored,hasColorOffsets,this->blend,this->antialiasing,this->shader);
            		}
HXLINE( 944)		this->_point->set_x(((((Camera->scroll->x * this->scrollFactor->x) - this->x) - this->offset->x) + Camera->viewOffsetX));
HXLINE( 945)		this->_point->set_y(((((Camera->scroll->y * this->scrollFactor->y) - this->y) - this->offset->y) + Camera->viewOffsetY));
HXLINE( 947)		int screenXInTiles = ::Math_obj::floor((this->_point->x / this->_scaledTileWidth));
HXLINE( 948)		int screenYInTiles = ::Math_obj::floor((this->_point->y / this->_scaledTileHeight));
HXLINE( 949)		int screenRows = Buffer->rows;
HXLINE( 950)		int screenColumns = Buffer->columns;
HXLINE( 953)		 ::Dynamic Max = (this->widthInTiles - screenColumns);
HXDLIN( 953)		Float lowerBound;
HXDLIN( 953)		if ((screenXInTiles < 0)) {
HXLINE( 953)			lowerBound = ( (Float)(0) );
            		}
            		else {
HXLINE( 953)			lowerBound = ( (Float)(screenXInTiles) );
            		}
HXDLIN( 953)		Float screenXInTiles1;
HXDLIN( 953)		bool screenXInTiles2;
HXDLIN( 953)		if (::hx::IsNotNull( Max )) {
HXLINE( 953)			screenXInTiles2 = ::hx::IsGreater( lowerBound,Max );
            		}
            		else {
HXLINE( 953)			screenXInTiles2 = false;
            		}
HXDLIN( 953)		if (screenXInTiles2) {
HXLINE( 953)			screenXInTiles1 = ( (Float)(Max) );
            		}
            		else {
HXLINE( 953)			screenXInTiles1 = lowerBound;
            		}
HXDLIN( 953)		screenXInTiles = ::Std_obj::_hx_int(screenXInTiles1);
HXLINE( 954)		 ::Dynamic Max1 = (this->heightInTiles - screenRows);
HXDLIN( 954)		Float lowerBound1;
HXDLIN( 954)		if ((screenYInTiles < 0)) {
HXLINE( 954)			lowerBound1 = ( (Float)(0) );
            		}
            		else {
HXLINE( 954)			lowerBound1 = ( (Float)(screenYInTiles) );
            		}
HXDLIN( 954)		Float screenYInTiles1;
HXDLIN( 954)		bool screenYInTiles2;
HXDLIN( 954)		if (::hx::IsNotNull( Max1 )) {
HXLINE( 954)			screenYInTiles2 = ::hx::IsGreater( lowerBound1,Max1 );
            		}
            		else {
HXLINE( 954)			screenYInTiles2 = false;
            		}
HXDLIN( 954)		if (screenYInTiles2) {
HXLINE( 954)			screenYInTiles1 = ( (Float)(Max1) );
            		}
            		else {
HXLINE( 954)			screenYInTiles1 = lowerBound1;
            		}
HXDLIN( 954)		screenYInTiles = ::Std_obj::_hx_int(screenYInTiles1);
HXLINE( 956)		int rowIndex = ((screenYInTiles * this->widthInTiles) + screenXInTiles);
HXLINE( 957)		this->_flashPoint->y = ( (Float)(0) );
HXLINE( 958)		int columnIndex;
HXLINE( 959)		 ::flixel::tile::FlxTile tile;
HXLINE( 960)		 ::flixel::graphics::frames::FlxFrame frame;
HXLINE( 966)		{
HXLINE( 966)			int _g = 0;
HXDLIN( 966)			int _g1 = screenRows;
HXDLIN( 966)			while((_g < _g1)){
HXLINE( 966)				_g = (_g + 1);
HXDLIN( 966)				int row = (_g - 1);
HXLINE( 968)				columnIndex = rowIndex;
HXLINE( 969)				this->_flashPoint->x = ( (Float)(0) );
HXLINE( 971)				{
HXLINE( 971)					int _g1 = 0;
HXDLIN( 971)					int _g2 = screenColumns;
HXDLIN( 971)					while((_g1 < _g2)){
HXLINE( 971)						_g1 = (_g1 + 1);
HXDLIN( 971)						int column = (_g1 - 1);
HXLINE( 973)						tile = Dynamic( this->_tileObjects->__get(this->_data->__get(columnIndex))).StaticCast<  ::flixel::tile::FlxTile >();
HXLINE( 975)						bool _hx_tmp;
HXDLIN( 975)						bool _hx_tmp1;
HXDLIN( 975)						if (::hx::IsNotNull( tile )) {
HXLINE( 975)							_hx_tmp1 = tile->visible;
            						}
            						else {
HXLINE( 975)							_hx_tmp1 = false;
            						}
HXDLIN( 975)						if (_hx_tmp1) {
HXLINE( 975)							_hx_tmp = (tile->frame->type != 2);
            						}
            						else {
HXLINE( 975)							_hx_tmp = false;
            						}
HXDLIN( 975)						if (_hx_tmp) {
HXLINE( 977)							frame = tile->frame;
HXLINE( 979)							if (::flixel::FlxG_obj::renderBlit) {
HXLINE( 981)								frame->paint(Buffer->pixels,this->_flashPoint,true,null());
            							}
            							else {
HXLINE(1007)								drawX = (this->_helperPoint->x + (( (Float)(::hx::Mod(columnIndex,this->widthInTiles)) ) * scaledWidth));
HXLINE(1008)								drawY = (this->_helperPoint->y + (( (Float)(::Math_obj::floor((( (Float)(columnIndex) ) / ( (Float)(this->widthInTiles) )))) ) * scaledHeight));
HXLINE(1010)								this->_matrix->identity();
HXLINE(1012)								if ((frame->angle != 0)) {
HXLINE(1014)									frame->prepareMatrix(this->_matrix,null(),null(),null());
            								}
HXLINE(1017)								Float scaleX = this->scale->x;
HXLINE(1018)								Float scaleY = this->scale->y;
HXLINE(1020)								if (this->useScaleHack) {
HXLINE(1022)									scaleX = (scaleX + (( (Float)(1) ) / (frame->sourceSize->x * Camera->totalScaleX)));
HXLINE(1023)									scaleY = (scaleY + (( (Float)(1) ) / (frame->sourceSize->y * Camera->totalScaleY)));
            								}
HXLINE(1026)								this->_matrix->scale(scaleX,scaleY);
HXLINE(1027)								this->_matrix->translate(drawX,drawY);
HXLINE(1029)								drawItem->addQuad(frame,this->_matrix,this->colorTransform);
            							}
            						}
HXLINE(1033)						if (::flixel::FlxG_obj::renderBlit) {
HXLINE(1034)							 ::openfl::geom::Point fh = this->_flashPoint;
HXDLIN(1034)							fh->x = (fh->x + this->_tileWidth);
            						}
HXLINE(1036)						columnIndex = (columnIndex + 1);
            					}
            				}
HXLINE(1039)				if (::flixel::FlxG_obj::renderBlit) {
HXLINE(1040)					 ::openfl::geom::Point fh = this->_flashPoint;
HXDLIN(1040)					fh->y = (fh->y + this->_tileHeight);
            				}
HXLINE(1041)				rowIndex = (rowIndex + this->widthInTiles);
            			}
            		}
HXLINE(1044)		Buffer->x = (( (Float)(screenXInTiles) ) * this->_scaledTileWidth);
HXLINE(1045)		Buffer->y = (( (Float)(screenYInTiles) ) * this->_scaledTileHeight);
HXLINE(1047)		if (::flixel::FlxG_obj::renderBlit) {
HXLINE(1049)			if (isColored) {
HXLINE(1050)				Buffer->colorTransform(this->colorTransform);
            			}
HXLINE(1051)			Buffer->blend = this->blend;
            		}
HXLINE(1054)		Buffer->dirty = false;
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxTilemap_obj,drawTilemap,(void))

void FlxTilemap_obj::updateTile(int Index){
            	HX_STACKFRAME(&_hx_pos_1146cbfc6764fb25_1101_updateTile)
HXLINE(1102)		 ::flixel::tile::FlxTile tile = Dynamic( this->_tileObjects->__get(Index)).StaticCast<  ::flixel::tile::FlxTile >();
HXLINE(1103)		bool _hx_tmp;
HXDLIN(1103)		if (::hx::IsNotNull( tile )) {
HXLINE(1103)			_hx_tmp = !(tile->visible);
            		}
            		else {
HXLINE(1103)			_hx_tmp = true;
            		}
HXDLIN(1103)		if (_hx_tmp) {
HXLINE(1104)			return;
            		}
HXLINE(1106)		tile->frame = this->frames->frames->__get((Index - this->_startingIndex)).StaticCast<  ::flixel::graphics::frames::FlxFrame >();
            	}


 ::flixel::tile::FlxTilemapBuffer FlxTilemap_obj::createBuffer( ::flixel::FlxCamera camera){
            	HX_GC_STACKFRAME(&_hx_pos_1146cbfc6764fb25_1110_createBuffer)
HXLINE(1111)		 ::flixel::tile::FlxTilemapBuffer buffer =  ::flixel::tile::FlxTilemapBuffer_obj::__alloc( HX_CTX ,this->_tileWidth,this->_tileHeight,this->widthInTiles,this->heightInTiles,camera,this->scale->x,this->scale->y);
HXLINE(1112)		buffer->pixelPerfectRender = this->pixelPerfectRender;
HXLINE(1113)		buffer->antialiasing = this->antialiasing;
HXLINE(1114)		return buffer;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxTilemap_obj,createBuffer,return )

bool FlxTilemap_obj::set_antialiasing(bool value){
            	HX_STACKFRAME(&_hx_pos_1146cbfc6764fb25_1118_set_antialiasing)
HXLINE(1119)		{
HXLINE(1119)			int _g = 0;
HXDLIN(1119)			::Array< ::Dynamic> _g1 = this->_buffers;
HXDLIN(1119)			while((_g < _g1->length)){
HXLINE(1119)				 ::flixel::tile::FlxTilemapBuffer buffer = _g1->__get(_g).StaticCast<  ::flixel::tile::FlxTilemapBuffer >();
HXDLIN(1119)				_g = (_g + 1);
HXLINE(1120)				buffer->antialiasing = value;
            			}
            		}
HXLINE(1121)		return (this->antialiasing = value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxTilemap_obj,set_antialiasing,return )

 ::flixel::graphics::FlxGraphic FlxTilemap_obj::set_graphic( ::flixel::graphics::FlxGraphic Value){
            	HX_STACKFRAME(&_hx_pos_1146cbfc6764fb25_1129_set_graphic)
HXLINE(1131)		if (::hx::IsInstanceNotEq( this->graphic,Value )) {
HXLINE(1134)			if (::hx::IsNotNull( Value )) {
HXLINE(1135)				Value->set_useCount((Value->get_useCount() + 1));
            			}
HXLINE(1138)			if (::hx::IsNotNull( this->graphic )) {
HXLINE(1139)				 ::flixel::graphics::FlxGraphic fh = this->graphic;
HXDLIN(1139)				fh->set_useCount((fh->get_useCount() - 1));
            			}
            		}
HXLINE(1142)		return (this->graphic = Value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxTilemap_obj,set_graphic,return )

bool FlxTilemap_obj::set_pixelPerfectRender(bool Value){
            	HX_STACKFRAME(&_hx_pos_1146cbfc6764fb25_1146_set_pixelPerfectRender)
HXLINE(1147)		if (::hx::IsNotNull( this->_buffers )) {
HXLINE(1148)			int _g = 0;
HXDLIN(1148)			::Array< ::Dynamic> _g1 = this->_buffers;
HXDLIN(1148)			while((_g < _g1->length)){
HXLINE(1148)				 ::flixel::tile::FlxTilemapBuffer buffer = _g1->__get(_g).StaticCast<  ::flixel::tile::FlxTilemapBuffer >();
HXDLIN(1148)				_g = (_g + 1);
HXLINE(1149)				buffer->pixelPerfectRender = Value;
            			}
            		}
HXLINE(1151)		return ( (bool)((this->pixelPerfectRender = Value)) );
            	}


Float FlxTilemap_obj::set_alpha(Float Alpha){
            	HX_STACKFRAME(&_hx_pos_1146cbfc6764fb25_1155_set_alpha)
HXLINE(1156)		Float lowerBound;
HXDLIN(1156)		if ((Alpha < 0)) {
HXLINE(1156)			lowerBound = ( (Float)(0) );
            		}
            		else {
HXLINE(1156)			lowerBound = Alpha;
            		}
HXDLIN(1156)		Float _hx_tmp;
HXDLIN(1156)		if ((lowerBound > 1)) {
HXLINE(1156)			_hx_tmp = ( (Float)(1) );
            		}
            		else {
HXLINE(1156)			_hx_tmp = lowerBound;
            		}
HXDLIN(1156)		this->alpha = _hx_tmp;
HXLINE(1157)		this->updateColorTransform();
HXLINE(1158)		return this->alpha;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxTilemap_obj,set_alpha,return )

int FlxTilemap_obj::set_color(int Color){
            	HX_STACKFRAME(&_hx_pos_1146cbfc6764fb25_1162_set_color)
HXLINE(1163)		if ((this->color == Color)) {
HXLINE(1164)			return Color;
            		}
HXLINE(1166)		this->color = Color;
HXLINE(1167)		this->updateColorTransform();
HXLINE(1168)		return this->color;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxTilemap_obj,set_color,return )

void FlxTilemap_obj::updateColorTransform(){
            	HX_GC_STACKFRAME(&_hx_pos_1146cbfc6764fb25_1172_updateColorTransform)
HXLINE(1173)		if (::hx::IsNull( this->colorTransform )) {
HXLINE(1174)			this->colorTransform =  ::openfl::geom::ColorTransform_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null(),null(),null());
            		}
HXLINE(1176)		bool _hx_tmp;
HXDLIN(1176)		if ((this->alpha == 1)) {
HXLINE(1176)			_hx_tmp = (this->color != 16777215);
            		}
            		else {
HXLINE(1176)			_hx_tmp = true;
            		}
HXDLIN(1176)		if (_hx_tmp) {
HXLINE(1177)			::flixel::util::FlxColorTransformUtil_obj::setMultipliers(this->colorTransform,(( (Float)(((this->color >> 16) & 255)) ) / ( (Float)(255) )),(( (Float)(((this->color >> 8) & 255)) ) / ( (Float)(255) )),(( (Float)((this->color & 255)) ) / ( (Float)(255) )),this->alpha);
            		}
            		else {
HXLINE(1179)			::flixel::util::FlxColorTransformUtil_obj::setMultipliers(this->colorTransform,( (Float)(1) ),( (Float)(1) ),( (Float)(1) ),( (Float)(1) ));
            		}
HXLINE(1181)		this->setDirty(null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxTilemap_obj,updateColorTransform,(void))

 ::Dynamic FlxTilemap_obj::set_blend( ::Dynamic Value){
            	HX_STACKFRAME(&_hx_pos_1146cbfc6764fb25_1185_set_blend)
HXLINE(1186)		this->setDirty(null());
HXLINE(1187)		return (this->blend = Value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxTilemap_obj,set_blend,return )

void FlxTilemap_obj::setScaleXYCallback( ::flixel::math::FlxPoint Scale){
            	HX_STACKFRAME(&_hx_pos_1146cbfc6764fb25_1191_setScaleXYCallback)
HXLINE(1192)		this->setScaleXCallback(Scale);
HXLINE(1193)		this->setScaleYCallback(Scale);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxTilemap_obj,setScaleXYCallback,(void))

void FlxTilemap_obj::setScaleXCallback( ::flixel::math::FlxPoint Scale){
            	HX_STACKFRAME(&_hx_pos_1146cbfc6764fb25_1197_setScaleXCallback)
HXLINE(1198)		this->_scaledTileWidth = (( (Float)(this->_tileWidth) ) * this->scale->x);
HXLINE(1199)		this->set_width((( (Float)(this->widthInTiles) ) * this->_scaledTileWidth));
HXLINE(1201)		if (::hx::IsNull( this->get_cameras() )) {
HXLINE(1202)			return;
            		}
HXLINE(1204)		{
HXLINE(1204)			int _g = 0;
HXDLIN(1204)			int _g1 = this->get_cameras()->length;
HXDLIN(1204)			while((_g < _g1)){
HXLINE(1204)				_g = (_g + 1);
HXDLIN(1204)				int i = (_g - 1);
HXLINE(1205)				if (::hx::IsNotNull( this->_buffers->__get(i).StaticCast<  ::flixel::tile::FlxTilemapBuffer >() )) {
HXLINE(1206)					 ::flixel::tile::FlxTilemapBuffer _hx_tmp = this->_buffers->__get(i).StaticCast<  ::flixel::tile::FlxTilemapBuffer >();
HXDLIN(1206)					int _hx_tmp1 = this->_tileWidth;
HXDLIN(1206)					int _hx_tmp2 = this->widthInTiles;
HXDLIN(1206)					Float _hx_tmp3 = this->scale->x;
HXDLIN(1206)					_hx_tmp->updateColumns(_hx_tmp1,_hx_tmp2,_hx_tmp3,this->get_cameras()->__get(i).StaticCast<  ::flixel::FlxCamera >());
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxTilemap_obj,setScaleXCallback,(void))

void FlxTilemap_obj::setScaleYCallback( ::flixel::math::FlxPoint Scale){
            	HX_STACKFRAME(&_hx_pos_1146cbfc6764fb25_1210_setScaleYCallback)
HXLINE(1211)		this->_scaledTileHeight = (( (Float)(this->_tileHeight) ) * this->scale->y);
HXLINE(1212)		this->set_height((( (Float)(this->heightInTiles) ) * this->_scaledTileHeight));
HXLINE(1214)		if (::hx::IsNull( this->get_cameras() )) {
HXLINE(1215)			return;
            		}
HXLINE(1217)		{
HXLINE(1217)			int _g = 0;
HXDLIN(1217)			int _g1 = this->get_cameras()->length;
HXDLIN(1217)			while((_g < _g1)){
HXLINE(1217)				_g = (_g + 1);
HXDLIN(1217)				int i = (_g - 1);
HXLINE(1218)				if (::hx::IsNotNull( this->_buffers->__get(i).StaticCast<  ::flixel::tile::FlxTilemapBuffer >() )) {
HXLINE(1219)					 ::flixel::tile::FlxTilemapBuffer _hx_tmp = this->_buffers->__get(i).StaticCast<  ::flixel::tile::FlxTilemapBuffer >();
HXDLIN(1219)					int _hx_tmp1 = this->_tileHeight;
HXDLIN(1219)					int _hx_tmp2 = this->heightInTiles;
HXDLIN(1219)					Float _hx_tmp3 = this->scale->y;
HXDLIN(1219)					_hx_tmp->updateRows(_hx_tmp1,_hx_tmp2,_hx_tmp3,this->get_cameras()->__get(i).StaticCast<  ::flixel::FlxCamera >());
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxTilemap_obj,setScaleYCallback,(void))

 ::flixel::FlxSprite FlxTilemap_obj::defaultTileToSprite( ::Dynamic TileProperties){
            	HX_GC_STACKFRAME(&_hx_pos_1146cbfc6764fb25_1229_defaultTileToSprite)
HXLINE(1230)		 ::flixel::FlxSprite tileSprite =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,TileProperties->__Field(HX_("x",78,00,00,00),::hx::paccDynamic),TileProperties->__Field(HX_("y",79,00,00,00),::hx::paccDynamic),null());
HXLINE(1231)		tileSprite->set_frames(( ( ::flixel::graphics::frames::FlxFramesCollection)(TileProperties->__Field(HX_("graphic",a8,5a,07,74),::hx::paccDynamic)) ));
HXLINE(1232)		{
HXLINE(1232)			 ::flixel::math::FlxPoint _this = tileSprite->scale;
HXDLIN(1232)			 ::flixel::math::FlxPoint point = ( ( ::flixel::math::FlxPoint)(TileProperties->__Field(HX_("scale",8a,ce,ce,78),::hx::paccDynamic)) );
HXDLIN(1232)			_this->set_x(point->x);
HXDLIN(1232)			_this->set_y(point->y);
HXDLIN(1232)			if (point->_weak) {
HXLINE(1232)				point->put();
            			}
            		}
HXLINE(1233)		TileProperties->__SetField(HX_("scale",8a,ce,ce,78),::flixel::util::FlxDestroyUtil_obj::put( ::Dynamic(TileProperties->__Field(HX_("scale",8a,ce,ce,78),::hx::paccDynamic))),::hx::paccDynamic);
HXLINE(1234)		tileSprite->set_alpha(( (Float)(TileProperties->__Field(HX_("alpha",5e,a7,96,21),::hx::paccDynamic)) ));
HXLINE(1235)		tileSprite->set_blend(TileProperties->__Field(HX_("blend",51,e8,f4,b4),::hx::paccDynamic));
HXLINE(1236)		return tileSprite;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxTilemap_obj,defaultTileToSprite,return )

int FlxTilemap_obj::set_allowCollisions(int Value){
            	HX_STACKFRAME(&_hx_pos_1146cbfc6764fb25_1240_set_allowCollisions)
HXLINE(1241)		{
HXLINE(1241)			int _g = 0;
HXDLIN(1241)			::Array< ::Dynamic> _g1 = this->_tileObjects;
HXDLIN(1241)			while((_g < _g1->length)){
HXLINE(1241)				 ::flixel::tile::FlxTile tile = _g1->__get(_g).StaticCast<  ::flixel::tile::FlxTile >();
HXDLIN(1241)				_g = (_g + 1);
HXLINE(1242)				if ((tile->index >= this->_collideIndex)) {
HXLINE(1243)					tile->set_allowCollisions(Value);
            				}
            			}
            		}
HXLINE(1245)		return this->super::set_allowCollisions(Value);
            	}



::hx::ObjectPtr< FlxTilemap_obj > FlxTilemap_obj::__new() {
	::hx::ObjectPtr< FlxTilemap_obj > __this = new FlxTilemap_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< FlxTilemap_obj > FlxTilemap_obj::__alloc(::hx::Ctx *_hx_ctx) {
	FlxTilemap_obj *__this = (FlxTilemap_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FlxTilemap_obj), true, "flixel.tile.FlxTilemap"));
	*(void **)__this = FlxTilemap_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

FlxTilemap_obj::FlxTilemap_obj()
{
}

void FlxTilemap_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxTilemap);
	HX_MARK_MEMBER_NAME(useScaleHack,"useScaleHack");
	HX_MARK_MEMBER_NAME(scale,"scale");
	HX_MARK_MEMBER_NAME(antialiasing,"antialiasing");
	HX_MARK_MEMBER_NAME(offset,"offset");
	HX_MARK_MEMBER_NAME(frames,"frames");
	HX_MARK_MEMBER_NAME(graphic,"graphic");
	HX_MARK_MEMBER_NAME(color,"color");
	HX_MARK_MEMBER_NAME(alpha,"alpha");
	HX_MARK_MEMBER_NAME(colorTransform,"colorTransform");
	HX_MARK_MEMBER_NAME(blend,"blend");
	HX_MARK_MEMBER_NAME(shader,"shader");
	HX_MARK_MEMBER_NAME(_flashPoint,"_flashPoint");
	HX_MARK_MEMBER_NAME(_flashRect,"_flashRect");
	HX_MARK_MEMBER_NAME(_buffers,"_buffers");
	HX_MARK_MEMBER_NAME(_tileWidth,"_tileWidth");
	HX_MARK_MEMBER_NAME(_tileHeight,"_tileHeight");
	HX_MARK_MEMBER_NAME(_scaledTileWidth,"_scaledTileWidth");
	HX_MARK_MEMBER_NAME(_scaledTileHeight,"_scaledTileHeight");
	HX_MARK_MEMBER_NAME(_helperPoint,"_helperPoint");
	HX_MARK_MEMBER_NAME(_matrix,"_matrix");
	HX_MARK_MEMBER_NAME(_checkBufferChanges,"_checkBufferChanges");
	 ::flixel::tile::FlxBaseTilemap_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxTilemap_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(useScaleHack,"useScaleHack");
	HX_VISIT_MEMBER_NAME(scale,"scale");
	HX_VISIT_MEMBER_NAME(antialiasing,"antialiasing");
	HX_VISIT_MEMBER_NAME(offset,"offset");
	HX_VISIT_MEMBER_NAME(frames,"frames");
	HX_VISIT_MEMBER_NAME(graphic,"graphic");
	HX_VISIT_MEMBER_NAME(color,"color");
	HX_VISIT_MEMBER_NAME(alpha,"alpha");
	HX_VISIT_MEMBER_NAME(colorTransform,"colorTransform");
	HX_VISIT_MEMBER_NAME(blend,"blend");
	HX_VISIT_MEMBER_NAME(shader,"shader");
	HX_VISIT_MEMBER_NAME(_flashPoint,"_flashPoint");
	HX_VISIT_MEMBER_NAME(_flashRect,"_flashRect");
	HX_VISIT_MEMBER_NAME(_buffers,"_buffers");
	HX_VISIT_MEMBER_NAME(_tileWidth,"_tileWidth");
	HX_VISIT_MEMBER_NAME(_tileHeight,"_tileHeight");
	HX_VISIT_MEMBER_NAME(_scaledTileWidth,"_scaledTileWidth");
	HX_VISIT_MEMBER_NAME(_scaledTileHeight,"_scaledTileHeight");
	HX_VISIT_MEMBER_NAME(_helperPoint,"_helperPoint");
	HX_VISIT_MEMBER_NAME(_matrix,"_matrix");
	HX_VISIT_MEMBER_NAME(_checkBufferChanges,"_checkBufferChanges");
	 ::flixel::tile::FlxBaseTilemap_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val FlxTilemap_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"ray") ) { return ::hx::Val( ray_dyn() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"draw") ) { return ::hx::Val( draw_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"scale") ) { return ::hx::Val( scale ); }
		if (HX_FIELD_EQ(inName,"color") ) { return ::hx::Val( color ); }
		if (HX_FIELD_EQ(inName,"alpha") ) { return ::hx::Val( alpha ); }
		if (HX_FIELD_EQ(inName,"blend") ) { return ::hx::Val( blend ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"offset") ) { return ::hx::Val( offset ); }
		if (HX_FIELD_EQ(inName,"frames") ) { return ::hx::Val( frames ); }
		if (HX_FIELD_EQ(inName,"shader") ) { return ::hx::Val( shader ); }
		if (HX_FIELD_EQ(inName,"follow") ) { return ::hx::Val( follow_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"graphic") ) { return ::hx::Val( graphic ); }
		if (HX_FIELD_EQ(inName,"_matrix") ) { return ::hx::Val( _matrix ); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return ::hx::Val( destroy_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_buffers") ) { return ::hx::Val( _buffers ); }
		if (HX_FIELD_EQ(inName,"setDirty") ) { return ::hx::Val( setDirty_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"updateMap") ) { return ::hx::Val( updateMap_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_alpha") ) { return ::hx::Val( set_alpha_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_color") ) { return ::hx::Val( set_color_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_blend") ) { return ::hx::Val( set_blend_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_flashRect") ) { return ::hx::Val( _flashRect ); }
		if (HX_FIELD_EQ(inName,"_tileWidth") ) { return ::hx::Val( _tileWidth ); }
		if (HX_FIELD_EQ(inName,"set_frames") ) { return ::hx::Val( set_frames_dyn() ); }
		if (HX_FIELD_EQ(inName,"isOnScreen") ) { return ::hx::Val( isOnScreen_dyn() ); }
		if (HX_FIELD_EQ(inName,"updateTile") ) { return ::hx::Val( updateTile_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_flashPoint") ) { return ::hx::Val( _flashPoint ); }
		if (HX_FIELD_EQ(inName,"_tileHeight") ) { return ::hx::Val( _tileHeight ); }
		if (HX_FIELD_EQ(inName,"drawTilemap") ) { return ::hx::Val( drawTilemap_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_graphic") ) { return ::hx::Val( set_graphic_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"useScaleHack") ) { return ::hx::Val( useScaleHack ); }
		if (HX_FIELD_EQ(inName,"antialiasing") ) { return ::hx::Val( antialiasing ); }
		if (HX_FIELD_EQ(inName,"_helperPoint") ) { return ::hx::Val( _helperPoint ); }
		if (HX_FIELD_EQ(inName,"tileToSprite") ) { return ::hx::Val( tileToSprite_dyn() ); }
		if (HX_FIELD_EQ(inName,"createBuffer") ) { return ::hx::Val( createBuffer_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"onGameResized") ) { return ::hx::Val( onGameResized_dyn() ); }
		if (HX_FIELD_EQ(inName,"cacheGraphics") ) { return ::hx::Val( cacheGraphics_dyn() ); }
		if (HX_FIELD_EQ(inName,"getTileCoords") ) { return ::hx::Val( getTileCoords_dyn() ); }
		if (HX_FIELD_EQ(inName,"updateBuffers") ) { return ::hx::Val( updateBuffers_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"colorTransform") ) { return ::hx::Val( colorTransform ); }
		if (HX_FIELD_EQ(inName,"refreshBuffers") ) { return ::hx::Val( refreshBuffers_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"onCameraChanged") ) { return ::hx::Val( onCameraChanged_dyn() ); }
		if (HX_FIELD_EQ(inName,"initTileObjects") ) { return ::hx::Val( initTileObjects_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_scaledTileWidth") ) { return ::hx::Val( _scaledTileWidth ); }
		if (HX_FIELD_EQ(inName,"set_antialiasing") ) { return ::hx::Val( set_antialiasing_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_scaledTileHeight") ) { return ::hx::Val( _scaledTileHeight ); }
		if (HX_FIELD_EQ(inName,"computeDimensions") ) { return ::hx::Val( computeDimensions_dyn() ); }
		if (HX_FIELD_EQ(inName,"setScaleXCallback") ) { return ::hx::Val( setScaleXCallback_dyn() ); }
		if (HX_FIELD_EQ(inName,"setScaleYCallback") ) { return ::hx::Val( setScaleYCallback_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"setScaleXYCallback") ) { return ::hx::Val( setScaleXYCallback_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_checkBufferChanges") ) { return ::hx::Val( _checkBufferChanges ); }
		if (HX_FIELD_EQ(inName,"defaultTileToSprite") ) { return ::hx::Val( defaultTileToSprite_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_allowCollisions") ) { return ::hx::Val( set_allowCollisions_dyn() ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"overlapsWithCallback") ) { return ::hx::Val( overlapsWithCallback_dyn() ); }
		if (HX_FIELD_EQ(inName,"getTileIndexByCoords") ) { return ::hx::Val( getTileIndexByCoords_dyn() ); }
		if (HX_FIELD_EQ(inName,"getTileCoordsByIndex") ) { return ::hx::Val( getTileCoordsByIndex_dyn() ); }
		if (HX_FIELD_EQ(inName,"updateColorTransform") ) { return ::hx::Val( updateColorTransform_dyn() ); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"set_pixelPerfectRender") ) { return ::hx::Val( set_pixelPerfectRender_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val FlxTilemap_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"scale") ) { scale=inValue.Cast<  ::flixel::math::FlxPoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"color") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_color(inValue.Cast< int >()) );color=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"alpha") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_alpha(inValue.Cast< Float >()) );alpha=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"blend") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_blend(inValue.Cast<  ::Dynamic >()) );blend=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"offset") ) { offset=inValue.Cast<  ::flixel::math::FlxPoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"frames") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_frames(inValue.Cast<  ::flixel::graphics::frames::FlxFramesCollection >()) );frames=inValue.Cast<  ::flixel::graphics::frames::FlxFramesCollection >(); return inValue; }
		if (HX_FIELD_EQ(inName,"shader") ) { shader=inValue.Cast<  ::flixel::graphics::tile::FlxGraphicsShader >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"graphic") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_graphic(inValue.Cast<  ::flixel::graphics::FlxGraphic >()) );graphic=inValue.Cast<  ::flixel::graphics::FlxGraphic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_matrix") ) { _matrix=inValue.Cast<  ::flixel::math::FlxMatrix >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_buffers") ) { _buffers=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_flashRect") ) { _flashRect=inValue.Cast<  ::openfl::geom::Rectangle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_tileWidth") ) { _tileWidth=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_flashPoint") ) { _flashPoint=inValue.Cast<  ::openfl::geom::Point >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_tileHeight") ) { _tileHeight=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"useScaleHack") ) { useScaleHack=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"antialiasing") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_antialiasing(inValue.Cast< bool >()) );antialiasing=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_helperPoint") ) { _helperPoint=inValue.Cast<  ::openfl::geom::Point >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"colorTransform") ) { colorTransform=inValue.Cast<  ::openfl::geom::ColorTransform >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_scaledTileWidth") ) { _scaledTileWidth=inValue.Cast< Float >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_scaledTileHeight") ) { _scaledTileHeight=inValue.Cast< Float >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_checkBufferChanges") ) { _checkBufferChanges=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxTilemap_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("useScaleHack",44,9c,16,98));
	outFields->push(HX_("scale",8a,ce,ce,78));
	outFields->push(HX_("antialiasing",f4,16,b3,48));
	outFields->push(HX_("offset",93,97,3f,60));
	outFields->push(HX_("frames",a6,af,85,ac));
	outFields->push(HX_("graphic",a8,5a,07,74));
	outFields->push(HX_("color",63,71,5c,4a));
	outFields->push(HX_("alpha",5e,a7,96,21));
	outFields->push(HX_("colorTransform",89,d7,3f,ad));
	outFields->push(HX_("blend",51,e8,f4,b4));
	outFields->push(HX_("shader",25,bf,20,1d));
	outFields->push(HX_("_flashPoint",9f,1d,2a,b7));
	outFields->push(HX_("_flashRect",b5,c2,f3,5d));
	outFields->push(HX_("_buffers",f4,fc,48,eb));
	outFields->push(HX_("_tileWidth",b9,8f,60,b1));
	outFields->push(HX_("_tileHeight",d4,aa,6c,39));
	outFields->push(HX_("_scaledTileWidth",7f,28,09,38));
	outFields->push(HX_("_scaledTileHeight",4e,bf,49,86));
	outFields->push(HX_("_helperPoint",03,e6,14,f8));
	outFields->push(HX_("_matrix",e0,47,3f,2a));
	outFields->push(HX_("_checkBufferChanges",1a,1a,89,0b));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo FlxTilemap_obj_sMemberStorageInfo[] = {
	{::hx::fsBool,(int)offsetof(FlxTilemap_obj,useScaleHack),HX_("useScaleHack",44,9c,16,98)},
	{::hx::fsObject /*  ::flixel::math::FlxPoint */ ,(int)offsetof(FlxTilemap_obj,scale),HX_("scale",8a,ce,ce,78)},
	{::hx::fsBool,(int)offsetof(FlxTilemap_obj,antialiasing),HX_("antialiasing",f4,16,b3,48)},
	{::hx::fsObject /*  ::flixel::math::FlxPoint */ ,(int)offsetof(FlxTilemap_obj,offset),HX_("offset",93,97,3f,60)},
	{::hx::fsObject /*  ::flixel::graphics::frames::FlxFramesCollection */ ,(int)offsetof(FlxTilemap_obj,frames),HX_("frames",a6,af,85,ac)},
	{::hx::fsObject /*  ::flixel::graphics::FlxGraphic */ ,(int)offsetof(FlxTilemap_obj,graphic),HX_("graphic",a8,5a,07,74)},
	{::hx::fsInt,(int)offsetof(FlxTilemap_obj,color),HX_("color",63,71,5c,4a)},
	{::hx::fsFloat,(int)offsetof(FlxTilemap_obj,alpha),HX_("alpha",5e,a7,96,21)},
	{::hx::fsObject /*  ::openfl::geom::ColorTransform */ ,(int)offsetof(FlxTilemap_obj,colorTransform),HX_("colorTransform",89,d7,3f,ad)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(FlxTilemap_obj,blend),HX_("blend",51,e8,f4,b4)},
	{::hx::fsObject /*  ::flixel::graphics::tile::FlxGraphicsShader */ ,(int)offsetof(FlxTilemap_obj,shader),HX_("shader",25,bf,20,1d)},
	{::hx::fsObject /*  ::openfl::geom::Point */ ,(int)offsetof(FlxTilemap_obj,_flashPoint),HX_("_flashPoint",9f,1d,2a,b7)},
	{::hx::fsObject /*  ::openfl::geom::Rectangle */ ,(int)offsetof(FlxTilemap_obj,_flashRect),HX_("_flashRect",b5,c2,f3,5d)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(FlxTilemap_obj,_buffers),HX_("_buffers",f4,fc,48,eb)},
	{::hx::fsInt,(int)offsetof(FlxTilemap_obj,_tileWidth),HX_("_tileWidth",b9,8f,60,b1)},
	{::hx::fsInt,(int)offsetof(FlxTilemap_obj,_tileHeight),HX_("_tileHeight",d4,aa,6c,39)},
	{::hx::fsFloat,(int)offsetof(FlxTilemap_obj,_scaledTileWidth),HX_("_scaledTileWidth",7f,28,09,38)},
	{::hx::fsFloat,(int)offsetof(FlxTilemap_obj,_scaledTileHeight),HX_("_scaledTileHeight",4e,bf,49,86)},
	{::hx::fsObject /*  ::openfl::geom::Point */ ,(int)offsetof(FlxTilemap_obj,_helperPoint),HX_("_helperPoint",03,e6,14,f8)},
	{::hx::fsObject /*  ::flixel::math::FlxMatrix */ ,(int)offsetof(FlxTilemap_obj,_matrix),HX_("_matrix",e0,47,3f,2a)},
	{::hx::fsBool,(int)offsetof(FlxTilemap_obj,_checkBufferChanges),HX_("_checkBufferChanges",1a,1a,89,0b)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *FlxTilemap_obj_sStaticStorageInfo = 0;
#endif

static ::String FlxTilemap_obj_sMemberFields[] = {
	HX_("useScaleHack",44,9c,16,98),
	HX_("scale",8a,ce,ce,78),
	HX_("antialiasing",f4,16,b3,48),
	HX_("offset",93,97,3f,60),
	HX_("frames",a6,af,85,ac),
	HX_("graphic",a8,5a,07,74),
	HX_("color",63,71,5c,4a),
	HX_("alpha",5e,a7,96,21),
	HX_("colorTransform",89,d7,3f,ad),
	HX_("blend",51,e8,f4,b4),
	HX_("shader",25,bf,20,1d),
	HX_("_flashPoint",9f,1d,2a,b7),
	HX_("_flashRect",b5,c2,f3,5d),
	HX_("_buffers",f4,fc,48,eb),
	HX_("_tileWidth",b9,8f,60,b1),
	HX_("_tileHeight",d4,aa,6c,39),
	HX_("_scaledTileWidth",7f,28,09,38),
	HX_("_scaledTileHeight",4e,bf,49,86),
	HX_("_helperPoint",03,e6,14,f8),
	HX_("_matrix",e0,47,3f,2a),
	HX_("_checkBufferChanges",1a,1a,89,0b),
	HX_("destroy",fa,2c,86,24),
	HX_("set_frames",e3,bd,8a,a0),
	HX_("onGameResized",3f,ef,13,ab),
	HX_("onCameraChanged",30,48,4e,5c),
	HX_("cacheGraphics",2d,61,95,fc),
	HX_("initTileObjects",16,be,45,2e),
	HX_("computeDimensions",a4,a4,eb,f3),
	HX_("updateMap",13,e8,df,82),
	HX_("isOnScreen",f5,43,b9,a1),
	HX_("draw",04,2c,70,42),
	HX_("refreshBuffers",d8,b2,a5,26),
	HX_("setDirty",10,b9,04,e8),
	HX_("overlapsWithCallback",17,c3,72,a8),
	HX_("getTileIndexByCoords",03,79,8b,76),
	HX_("getTileCoordsByIndex",b9,63,25,a1),
	HX_("getTileCoords",22,d6,8d,89),
	HX_("follow",71,91,96,f9),
	HX_("ray",ea,d5,56,00),
	HX_("tileToSprite",2e,e9,26,c3),
	HX_("updateBuffers",6a,08,ff,7c),
	HX_("drawTilemap",8a,34,d7,8e),
	HX_("updateTile",d7,b5,b1,05),
	HX_("createBuffer",1c,fd,e9,f2),
	HX_("set_antialiasing",f1,f0,93,a3),
	HX_("set_graphic",cb,c1,6e,04),
	HX_("set_pixelPerfectRender",9a,4f,8f,bc),
	HX_("set_alpha",c1,ef,90,48),
	HX_("set_color",c6,b9,56,71),
	HX_("updateColorTransform",72,0f,d2,2f),
	HX_("set_blend",b4,30,ef,db),
	HX_("setScaleXYCallback",6e,fd,35,90),
	HX_("setScaleXCallback",b5,05,a2,03),
	HX_("setScaleYCallback",b6,6e,93,d6),
	HX_("defaultTileToSprite",8f,ab,7f,3f),
	HX_("set_allowCollisions",cd,8b,81,21),
	::String(null()) };

::hx::Class FlxTilemap_obj::__mClass;

void FlxTilemap_obj::__register()
{
	FlxTilemap_obj _hx_dummy;
	FlxTilemap_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.tile.FlxTilemap",2a,d5,63,29);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FlxTilemap_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FlxTilemap_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxTilemap_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxTilemap_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace tile
