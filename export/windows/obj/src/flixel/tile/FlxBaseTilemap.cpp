#include <hxcpp.h>

#ifndef INCLUDED_EReg
#include <EReg.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
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
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_math_FlxRandom
#include <flixel/math/FlxRandom.h>
#endif
#ifndef INCLUDED_flixel_math_FlxRect
#include <flixel/math/FlxRect.h>
#endif
#ifndef INCLUDED_flixel_system_FlxAssets
#include <flixel/system/FlxAssets.h>
#endif
#ifndef INCLUDED_flixel_tile_FlxBaseTilemap
#include <flixel/tile/FlxBaseTilemap.h>
#endif
#ifndef INCLUDED_flixel_tile_FlxTilemapAutoTiling
#include <flixel/tile/FlxTilemapAutoTiling.h>
#endif
#ifndef INCLUDED_flixel_util_FlxArrayUtil
#include <flixel/util/FlxArrayUtil.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool_flixel_math_FlxRect
#include <flixel/util/FlxPool_flixel_math_FlxRect.h>
#endif
#ifndef INCLUDED_flixel_util_FlxStringUtil
#include <flixel/util/FlxStringUtil.h>
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
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_utils_Assets
#include <openfl/utils/Assets.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_36d94048d9e4941f_18_new,"flixel.tile.FlxBaseTilemap","new",0x601e788b,"flixel.tile.FlxBaseTilemap.new","flixel/tile/FlxBaseTilemap.hx",18,0x0139d8e5)
HX_LOCAL_STACK_FRAME(_hx_pos_36d94048d9e4941f_112_updateTile,"flixel.tile.FlxBaseTilemap","updateTile",0x4985390c,"flixel.tile.FlxBaseTilemap.updateTile","flixel/tile/FlxBaseTilemap.hx",112,0x0139d8e5)
HX_LOCAL_STACK_FRAME(_hx_pos_36d94048d9e4941f_117_cacheGraphics,"flixel.tile.FlxBaseTilemap","cacheGraphics",0x589e0d18,"flixel.tile.FlxBaseTilemap.cacheGraphics","flixel/tile/FlxBaseTilemap.hx",117,0x0139d8e5)
HX_LOCAL_STACK_FRAME(_hx_pos_36d94048d9e4941f_122_initTileObjects,"flixel.tile.FlxBaseTilemap","initTileObjects",0x1ec17ac1,"flixel.tile.FlxBaseTilemap.initTileObjects","flixel/tile/FlxBaseTilemap.hx",122,0x0139d8e5)
HX_LOCAL_STACK_FRAME(_hx_pos_36d94048d9e4941f_127_updateMap,"flixel.tile.FlxBaseTilemap","updateMap",0xe833827e,"flixel.tile.FlxBaseTilemap.updateMap","flixel/tile/FlxBaseTilemap.hx",127,0x0139d8e5)
HX_LOCAL_STACK_FRAME(_hx_pos_36d94048d9e4941f_132_computeDimensions,"flixel.tile.FlxBaseTilemap","computeDimensions",0xc850220f,"flixel.tile.FlxBaseTilemap.computeDimensions","flixel/tile/FlxBaseTilemap.hx",132,0x0139d8e5)
HX_LOCAL_STACK_FRAME(_hx_pos_36d94048d9e4941f_137_getTileIndexByCoords,"flixel.tile.FlxBaseTilemap","getTileIndexByCoords",0x5f0cf078,"flixel.tile.FlxBaseTilemap.getTileIndexByCoords","flixel/tile/FlxBaseTilemap.hx",137,0x0139d8e5)
HX_LOCAL_STACK_FRAME(_hx_pos_36d94048d9e4941f_143_getTileCoordsByIndex,"flixel.tile.FlxBaseTilemap","getTileCoordsByIndex",0x89a6db2e,"flixel.tile.FlxBaseTilemap.getTileCoordsByIndex","flixel/tile/FlxBaseTilemap.hx",143,0x0139d8e5)
HX_LOCAL_STACK_FRAME(_hx_pos_36d94048d9e4941f_149_ray,"flixel.tile.FlxBaseTilemap","ray",0x60217e15,"flixel.tile.FlxBaseTilemap.ray","flixel/tile/FlxBaseTilemap.hx",149,0x0139d8e5)
HX_LOCAL_STACK_FRAME(_hx_pos_36d94048d9e4941f_155_overlapsWithCallback,"flixel.tile.FlxBaseTilemap","overlapsWithCallback",0x90f43a8c,"flixel.tile.FlxBaseTilemap.overlapsWithCallback","flixel/tile/FlxBaseTilemap.hx",155,0x0139d8e5)
HX_LOCAL_STACK_FRAME(_hx_pos_36d94048d9e4941f_161_setDirty,"flixel.tile.FlxBaseTilemap","setDirty",0x31f19505,"flixel.tile.FlxBaseTilemap.setDirty","flixel/tile/FlxBaseTilemap.hx",161,0x0139d8e5)
HX_LOCAL_STACK_FRAME(_hx_pos_36d94048d9e4941f_174_destroy,"flixel.tile.FlxBaseTilemap","destroy",0x44ffc6a5,"flixel.tile.FlxBaseTilemap.destroy","flixel/tile/FlxBaseTilemap.hx",174,0x0139d8e5)
HX_LOCAL_STACK_FRAME(_hx_pos_36d94048d9e4941f_199_loadMapFromCSV,"flixel.tile.FlxBaseTilemap","loadMapFromCSV",0xbac5ecbb,"flixel.tile.FlxBaseTilemap.loadMapFromCSV","flixel/tile/FlxBaseTilemap.hx",199,0x0139d8e5)
HX_LOCAL_STACK_FRAME(_hx_pos_36d94048d9e4941f_278_loadMapFromArray,"flixel.tile.FlxBaseTilemap","loadMapFromArray",0x576cd9ce,"flixel.tile.FlxBaseTilemap.loadMapFromArray","flixel/tile/FlxBaseTilemap.hx",278,0x0139d8e5)
HX_LOCAL_STACK_FRAME(_hx_pos_36d94048d9e4941f_307_loadMapFrom2DArray,"flixel.tile.FlxBaseTilemap","loadMapFrom2DArray",0xb01a13fc,"flixel.tile.FlxBaseTilemap.loadMapFrom2DArray","flixel/tile/FlxBaseTilemap.hx",307,0x0139d8e5)
HX_LOCAL_STACK_FRAME(_hx_pos_36d94048d9e4941f_341_loadMapFromGraphic,"flixel.tile.FlxBaseTilemap","loadMapFromGraphic",0xe93ffe1d,"flixel.tile.FlxBaseTilemap.loadMapFromGraphic","flixel/tile/FlxBaseTilemap.hx",341,0x0139d8e5)
HX_LOCAL_STACK_FRAME(_hx_pos_36d94048d9e4941f_349_loadMapHelper,"flixel.tile.FlxBaseTilemap","loadMapHelper",0xc59c560f,"flixel.tile.FlxBaseTilemap.loadMapHelper","flixel/tile/FlxBaseTilemap.hx",349,0x0139d8e5)
HX_LOCAL_STACK_FRAME(_hx_pos_36d94048d9e4941f_379_postGraphicLoad,"flixel.tile.FlxBaseTilemap","postGraphicLoad",0x0dc00119,"flixel.tile.FlxBaseTilemap.postGraphicLoad","flixel/tile/FlxBaseTilemap.hx",379,0x0139d8e5)
HX_LOCAL_STACK_FRAME(_hx_pos_36d94048d9e4941f_388_applyAutoTile,"flixel.tile.FlxBaseTilemap","applyAutoTile",0xcc60c5b6,"flixel.tile.FlxBaseTilemap.applyAutoTile","flixel/tile/FlxBaseTilemap.hx",388,0x0139d8e5)
HX_LOCAL_STACK_FRAME(_hx_pos_36d94048d9e4941f_399_applyCustomRemap,"flixel.tile.FlxBaseTilemap","applyCustomRemap",0x2fd5c57f,"flixel.tile.FlxBaseTilemap.applyCustomRemap","flixel/tile/FlxBaseTilemap.hx",399,0x0139d8e5)
HX_LOCAL_STACK_FRAME(_hx_pos_36d94048d9e4941f_419_randomizeIndices,"flixel.tile.FlxBaseTilemap","randomizeIndices",0x9015e6eb,"flixel.tile.FlxBaseTilemap.randomizeIndices","flixel/tile/FlxBaseTilemap.hx",419,0x0139d8e5)
HX_LOCAL_STACK_FRAME(_hx_pos_36d94048d9e4941f_426_randomizeIndices,"flixel.tile.FlxBaseTilemap","randomizeIndices",0x9015e6eb,"flixel.tile.FlxBaseTilemap.randomizeIndices","flixel/tile/FlxBaseTilemap.hx",426,0x0139d8e5)
HX_LOCAL_STACK_FRAME(_hx_pos_36d94048d9e4941f_455_autoTile,"flixel.tile.FlxBaseTilemap","autoTile",0x7a0f9632,"flixel.tile.FlxBaseTilemap.autoTile","flixel/tile/FlxBaseTilemap.hx",455,0x0139d8e5)
HX_LOCAL_STACK_FRAME(_hx_pos_36d94048d9e4941f_526_autoTileFull,"flixel.tile.FlxBaseTilemap","autoTileFull",0x4139ace1,"flixel.tile.FlxBaseTilemap.autoTileFull","flixel/tile/FlxBaseTilemap.hx",526,0x0139d8e5)
HX_LOCAL_STACK_FRAME(_hx_pos_36d94048d9e4941f_573_setCustomTileMappings,"flixel.tile.FlxBaseTilemap","setCustomTileMappings",0x91d80f71,"flixel.tile.FlxBaseTilemap.setCustomTileMappings","flixel/tile/FlxBaseTilemap.hx",573,0x0139d8e5)
HX_LOCAL_STACK_FRAME(_hx_pos_36d94048d9e4941f_595_getTile,"flixel.tile.FlxBaseTilemap","getTile",0x3ff9148f,"flixel.tile.FlxBaseTilemap.getTile","flixel/tile/FlxBaseTilemap.hx",595,0x0139d8e5)
HX_LOCAL_STACK_FRAME(_hx_pos_36d94048d9e4941f_606_getTileByIndex,"flixel.tile.FlxBaseTilemap","getTileByIndex",0xf0387cec,"flixel.tile.FlxBaseTilemap.getTileByIndex","flixel/tile/FlxBaseTilemap.hx",606,0x0139d8e5)
HX_LOCAL_STACK_FRAME(_hx_pos_36d94048d9e4941f_617_getTileCollisions,"flixel.tile.FlxBaseTilemap","getTileCollisions",0x9ca1bd30,"flixel.tile.FlxBaseTilemap.getTileCollisions","flixel/tile/FlxBaseTilemap.hx",617,0x0139d8e5)
HX_LOCAL_STACK_FRAME(_hx_pos_36d94048d9e4941f_627_getTileInstances,"flixel.tile.FlxBaseTilemap","getTileInstances",0xa0cac4af,"flixel.tile.FlxBaseTilemap.getTileInstances","flixel/tile/FlxBaseTilemap.hx",627,0x0139d8e5)
HX_LOCAL_STACK_FRAME(_hx_pos_36d94048d9e4941f_658_setTile,"flixel.tile.FlxBaseTilemap","setTile",0x32faa59b,"flixel.tile.FlxBaseTilemap.setTile","flixel/tile/FlxBaseTilemap.hx",658,0x0139d8e5)
HX_LOCAL_STACK_FRAME(_hx_pos_36d94048d9e4941f_676_setTileByIndex,"flixel.tile.FlxBaseTilemap","setTileByIndex",0x10586560,"flixel.tile.FlxBaseTilemap.setTileByIndex","flixel/tile/FlxBaseTilemap.hx",676,0x0139d8e5)
HX_LOCAL_STACK_FRAME(_hx_pos_36d94048d9e4941f_737_setTileProperties,"flixel.tile.FlxBaseTilemap","setTileProperties",0x2905d56e,"flixel.tile.FlxBaseTilemap.setTileProperties","flixel/tile/FlxBaseTilemap.hx",737,0x0139d8e5)
HX_LOCAL_STACK_FRAME(_hx_pos_36d94048d9e4941f_770_getData,"flixel.tile.FlxBaseTilemap","getData",0x355f9f8b,"flixel.tile.FlxBaseTilemap.getData","flixel/tile/FlxBaseTilemap.hx",770,0x0139d8e5)
HX_LOCAL_STACK_FRAME(_hx_pos_36d94048d9e4941f_803_findPath,"flixel.tile.FlxBaseTilemap","findPath",0xe6d2ce73,"flixel.tile.FlxBaseTilemap.findPath","flixel/tile/FlxBaseTilemap.hx",803,0x0139d8e5)
HX_LOCAL_STACK_FRAME(_hx_pos_36d94048d9e4941f_875_computePathDistance,"flixel.tile.FlxBaseTilemap","computePathDistance",0x34e53a3c,"flixel.tile.FlxBaseTilemap.computePathDistance","flixel/tile/FlxBaseTilemap.hx",875,0x0139d8e5)
HX_LOCAL_STACK_FRAME(_hx_pos_36d94048d9e4941f_1074_walkPath,"flixel.tile.FlxBaseTilemap","walkPath",0xa1980343,"flixel.tile.FlxBaseTilemap.walkPath","flixel/tile/FlxBaseTilemap.hx",1074,0x0139d8e5)
HX_LOCAL_STACK_FRAME(_hx_pos_36d94048d9e4941f_1173_simplifyPath,"flixel.tile.FlxBaseTilemap","simplifyPath",0xe8519bc3,"flixel.tile.FlxBaseTilemap.simplifyPath","flixel/tile/FlxBaseTilemap.hx",1173,0x0139d8e5)
HX_LOCAL_STACK_FRAME(_hx_pos_36d94048d9e4941f_1206_raySimplifyPath,"flixel.tile.FlxBaseTilemap","raySimplifyPath",0x32723703,"flixel.tile.FlxBaseTilemap.raySimplifyPath","flixel/tile/FlxBaseTilemap.hx",1206,0x0139d8e5)
HX_LOCAL_STACK_FRAME(_hx_pos_36d94048d9e4941f_1250_overlaps,"flixel.tile.FlxBaseTilemap","overlaps",0x8f17af01,"flixel.tile.FlxBaseTilemap.overlaps","flixel/tile/FlxBaseTilemap.hx",1250,0x0139d8e5)
HX_LOCAL_STACK_FRAME(_hx_pos_36d94048d9e4941f_1265_tilemapOverlapsCallback,"flixel.tile.FlxBaseTilemap","tilemapOverlapsCallback",0x40d17cea,"flixel.tile.FlxBaseTilemap.tilemapOverlapsCallback","flixel/tile/FlxBaseTilemap.hx",1265,0x0139d8e5)
HX_LOCAL_STACK_FRAME(_hx_pos_36d94048d9e4941f_1289_overlapsAt,"flixel.tile.FlxBaseTilemap","overlapsAt",0x47a26a54,"flixel.tile.FlxBaseTilemap.overlapsAt","flixel/tile/FlxBaseTilemap.hx",1289,0x0139d8e5)
HX_LOCAL_STACK_FRAME(_hx_pos_36d94048d9e4941f_1305_tilemapOverlapsAtCallback,"flixel.tile.FlxBaseTilemap","tilemapOverlapsAtCallback",0xbef90c3d,"flixel.tile.FlxBaseTilemap.tilemapOverlapsAtCallback","flixel/tile/FlxBaseTilemap.hx",1305,0x0139d8e5)
HX_LOCAL_STACK_FRAME(_hx_pos_36d94048d9e4941f_1324_overlapsPoint,"flixel.tile.FlxBaseTilemap","overlapsPoint",0x91c6718f,"flixel.tile.FlxBaseTilemap.overlapsPoint","flixel/tile/FlxBaseTilemap.hx",1324,0x0139d8e5)
HX_LOCAL_STACK_FRAME(_hx_pos_36d94048d9e4941f_1338_tileAtPointAllowsCollisions,"flixel.tile.FlxBaseTilemap","tileAtPointAllowsCollisions",0x26e8ec45,"flixel.tile.FlxBaseTilemap.tileAtPointAllowsCollisions","flixel/tile/FlxBaseTilemap.hx",1338,0x0139d8e5)
HX_LOCAL_STACK_FRAME(_hx_pos_36d94048d9e4941f_1352_getBounds,"flixel.tile.FlxBaseTilemap","getBounds",0x47c7aa16,"flixel.tile.FlxBaseTilemap.getBounds","flixel/tile/FlxBaseTilemap.hx",1352,0x0139d8e5)
HX_LOCAL_STACK_FRAME(_hx_pos_36d94048d9e4941f_25_boot,"flixel.tile.FlxBaseTilemap","boot",0xb2a401a7,"flixel.tile.FlxBaseTilemap.boot","flixel/tile/FlxBaseTilemap.hx",25,0x0139d8e5)
static const int _hx_array_data_6aa6d719_65[] = {
	(int)0,(int)0,(int)0,(int)0,(int)2,(int)2,(int)0,(int)3,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)11,(int)11,(int)0,(int)0,(int)13,(int)13,(int)0,(int)14,(int)0,(int)0,(int)0,(int)0,(int)18,(int)18,(int)0,(int)19,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)51,(int)51,(int)0,(int)0,(int)53,(int)53,(int)0,(int)54,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)62,(int)62,(int)0,(int)0,(int)64,(int)64,(int)0,(int)65,(int)0,(int)0,(int)0,(int)0,(int)69,(int)69,(int)0,(int)70,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)86,(int)86,(int)0,(int)0,(int)88,(int)88,(int)0,(int)89,(int)0,(int)0,(int)0,(int)0,(int)93,(int)93,(int)0,(int)94,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)159,(int)0,(int)0,(int)0,(int)162,(int)0,(int)163,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)172,(int)0,(int)0,(int)0,(int)175,(int)0,(int)176,(int)0,(int)0,(int)0,(int)0,(int)0,(int)181,(int)0,(int)182,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)0,(int)199,(int)0,(int)0,(int)0,(int)202,(int)0,(int)203,(int)0,(int)0,(int)0,(int)0,(int)0,(int)208,(int)0,(int)209,
};
namespace flixel{
namespace tile{

void FlxBaseTilemap_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_36d94048d9e4941f_18_new)
HXLINE( 105)		this->_collideIndex = 0;
HXLINE( 104)		this->_drawIndex = 0;
HXLINE(  97)		this->_startingIndex = 0;
HXLINE(  92)		this->_tileObjects = ::cpp::VirtualArray_obj::__new(0);
HXLINE(  48)		this->totalTiles = 0;
HXLINE(  46)		this->heightInTiles = 0;
HXLINE(  44)		this->widthInTiles = 0;
HXLINE(  23)		this->_hx_auto = ::flixel::tile::FlxTilemapAutoTiling_obj::OFF_dyn();
HXLINE( 166)		super::__construct(null(),null(),null(),null());
HXLINE( 168)		this->flixelType = 3;
HXLINE( 169)		this->set_immovable(true);
HXLINE( 170)		this->set_moves(false);
            	}

Dynamic FlxBaseTilemap_obj::__CreateEmpty() { return new FlxBaseTilemap_obj; }

void *FlxBaseTilemap_obj::_hx_vtable = 0;

Dynamic FlxBaseTilemap_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxBaseTilemap_obj > _hx_result = new FlxBaseTilemap_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool FlxBaseTilemap_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x7ccf8994) {
		if (inClassId<=(int)0x3d6253b5) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x3d6253b5;
		} else {
			return inClassId==(int)0x7ccf8994;
		}
	} else {
		return inClassId==(int)0x7dab0655;
	}
}

void FlxBaseTilemap_obj::updateTile(int Index){
            	HX_STACKFRAME(&_hx_pos_36d94048d9e4941f_112_updateTile)
HXDLIN( 112)		HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("updateTile must be implemented",53,76,b0,30)));
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxBaseTilemap_obj,updateTile,(void))

void FlxBaseTilemap_obj::cacheGraphics(int TileWidth,int TileHeight, ::Dynamic TileGraphic){
            	HX_STACKFRAME(&_hx_pos_36d94048d9e4941f_117_cacheGraphics)
HXDLIN( 117)		HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("cacheGraphics must be implemented",a9,10,20,38)));
            	}


HX_DEFINE_DYNAMIC_FUNC3(FlxBaseTilemap_obj,cacheGraphics,(void))

void FlxBaseTilemap_obj::initTileObjects(){
            	HX_STACKFRAME(&_hx_pos_36d94048d9e4941f_122_initTileObjects)
HXDLIN( 122)		HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("initTileObjects must be implemented",12,b8,a6,2f)));
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxBaseTilemap_obj,initTileObjects,(void))

void FlxBaseTilemap_obj::updateMap(){
            	HX_STACKFRAME(&_hx_pos_36d94048d9e4941f_127_updateMap)
HXDLIN( 127)		HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("updateMap must be implemented",8f,ae,0f,b7)));
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxBaseTilemap_obj,updateMap,(void))

void FlxBaseTilemap_obj::computeDimensions(){
            	HX_STACKFRAME(&_hx_pos_36d94048d9e4941f_132_computeDimensions)
HXDLIN( 132)		HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("computeDimensions must be implemented",a0,79,f6,10)));
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxBaseTilemap_obj,computeDimensions,(void))

int FlxBaseTilemap_obj::getTileIndexByCoords( ::flixel::math::FlxPoint Coord){
            	HX_STACKFRAME(&_hx_pos_36d94048d9e4941f_137_getTileIndexByCoords)
HXDLIN( 137)		HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("getTileIndexByCoords must be implemented",7f,57,93,9c)));
HXDLIN( 137)		return 0;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxBaseTilemap_obj,getTileIndexByCoords,return )

 ::flixel::math::FlxPoint FlxBaseTilemap_obj::getTileCoordsByIndex(int Index,::hx::Null< bool >  __o_Midpoint){
            		bool Midpoint = __o_Midpoint.Default(true);
            	HX_STACKFRAME(&_hx_pos_36d94048d9e4941f_143_getTileCoordsByIndex)
HXDLIN( 143)		HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("getTileCoordsByIndex must be implemented",35,21,39,05)));
HXDLIN( 143)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxBaseTilemap_obj,getTileCoordsByIndex,return )

bool FlxBaseTilemap_obj::ray( ::flixel::math::FlxPoint Start, ::flixel::math::FlxPoint End, ::flixel::math::FlxPoint Result,::hx::Null< Float >  __o_Resolution){
            		Float Resolution = __o_Resolution.Default(1);
            	HX_STACKFRAME(&_hx_pos_36d94048d9e4941f_149_ray)
HXDLIN( 149)		HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("ray must be implemented",e6,31,5e,58)));
HXDLIN( 149)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC4(FlxBaseTilemap_obj,ray,return )

bool FlxBaseTilemap_obj::overlapsWithCallback( ::flixel::FlxObject Object, ::Dynamic Callback,::hx::Null< bool >  __o_FlipCallbackParams, ::flixel::math::FlxPoint Position){
            		bool FlipCallbackParams = __o_FlipCallbackParams.Default(false);
            	HX_STACKFRAME(&_hx_pos_36d94048d9e4941f_155_overlapsWithCallback)
HXDLIN( 155)		HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("overlapsWithCallback must be implemented",93,a3,ff,38)));
HXDLIN( 155)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC4(FlxBaseTilemap_obj,overlapsWithCallback,return )

void FlxBaseTilemap_obj::setDirty(::hx::Null< bool >  __o_Dirty){
            		bool Dirty = __o_Dirty.Default(true);
            	HX_STACKFRAME(&_hx_pos_36d94048d9e4941f_161_setDirty)
HXDLIN( 161)		HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("setDirty must be implemented",0c,cc,e0,5f)));
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxBaseTilemap_obj,setDirty,(void))

void FlxBaseTilemap_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_36d94048d9e4941f_174_destroy)
HXLINE( 175)		this->_data = null();
HXLINE( 176)		this->super::destroy();
            	}


 ::flixel::tile::FlxBaseTilemap FlxBaseTilemap_obj::loadMapFromCSV(::String MapData, ::Dynamic TileGraphic,::hx::Null< int >  __o_TileWidth,::hx::Null< int >  __o_TileHeight, ::flixel::tile::FlxTilemapAutoTiling AutoTile,::hx::Null< int >  __o_StartingIndex,::hx::Null< int >  __o_DrawIndex,::hx::Null< int >  __o_CollideIndex){
            		int TileWidth = __o_TileWidth.Default(0);
            		int TileHeight = __o_TileHeight.Default(0);
            		int StartingIndex = __o_StartingIndex.Default(0);
            		int DrawIndex = __o_DrawIndex.Default(1);
            		int CollideIndex = __o_CollideIndex.Default(1);
            	HX_GC_STACKFRAME(&_hx_pos_36d94048d9e4941f_199_loadMapFromCSV)
HXLINE( 201)		if (::openfl::utils::Assets_obj::exists(MapData,null())) {
HXLINE( 203)			MapData = ::openfl::utils::Assets_obj::getText(MapData);
            		}
HXLINE( 207)		this->_data = ::Array_obj< int >::__new();
HXLINE( 208)		::Array< ::String > columns;
HXLINE( 210)		 ::EReg regex =  ::EReg_obj::__alloc( HX_CTX ,HX_("[ \t]*((\r\n)|\r|\n)[ \t]*",22,2c,8d,6d),HX_("g",67,00,00,00));
HXLINE( 211)		::Array< ::String > lines = regex->split(MapData);
HXLINE( 212)		::Array< ::String > _g = ::Array_obj< ::String >::__new(0);
HXDLIN( 212)		{
HXLINE( 212)			int _g1 = 0;
HXDLIN( 212)			::Array< ::String > _g2 = lines;
HXDLIN( 212)			while((_g1 < _g2->length)){
HXLINE( 212)				::String v = _g2->__get(_g1);
HXDLIN( 212)				_g1 = (_g1 + 1);
HXDLIN( 212)				if ((v != HX_("",00,00,00,00))) {
HXLINE( 212)					_g->push(v);
            				}
            			}
            		}
HXDLIN( 212)		::Array< ::String > rows = _g;
HXLINE( 214)		this->heightInTiles = rows->length;
HXLINE( 215)		this->widthInTiles = 0;
HXLINE( 217)		int row = 0;
HXLINE( 218)		while((row < this->heightInTiles)){
HXLINE( 220)			::String rowString = rows->__get(row);
HXLINE( 221)			if (::StringTools_obj::endsWith(rowString,HX_(",",2c,00,00,00))) {
HXLINE( 222)				rowString = rowString.substr(0,(rowString.length - 1));
            			}
HXLINE( 223)			columns = rowString.split(HX_(",",2c,00,00,00));
HXLINE( 225)			if ((columns->length == 0)) {
HXLINE( 227)				this->heightInTiles--;
HXLINE( 228)				continue;
            			}
HXLINE( 230)			if ((this->widthInTiles == 0)) {
HXLINE( 232)				this->widthInTiles = columns->length;
            			}
HXLINE( 235)			int column = 0;
HXLINE( 236)			while((column < this->widthInTiles)){
HXLINE( 239)				::String columnString = columns->__get(column);
HXLINE( 240)				 ::Dynamic curTile = ::Std_obj::parseInt(columnString);
HXLINE( 242)				if (::hx::IsNull( curTile )) {
HXLINE( 243)					HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(((((((HX_("String in row ",b2,a4,63,43) + row) + HX_(", column ",96,fc,25,5b)) + column) + HX_(" is not a valid integer: \"",44,67,cc,45)) + columnString) + HX_("\"",22,00,00,00))));
            				}
HXLINE( 245)				this->_data->push(curTile);
HXLINE( 246)				column = (column + 1);
            			}
HXLINE( 249)			row = (row + 1);
            		}
HXLINE( 252)		this->loadMapHelper(TileGraphic,TileWidth,TileHeight,AutoTile,StartingIndex,DrawIndex,CollideIndex);
HXLINE( 253)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC8(FlxBaseTilemap_obj,loadMapFromCSV,return )

 ::flixel::tile::FlxBaseTilemap FlxBaseTilemap_obj::loadMapFromArray(::Array< int > MapData,int WidthInTiles,int HeightInTiles, ::Dynamic TileGraphic,::hx::Null< int >  __o_TileWidth,::hx::Null< int >  __o_TileHeight, ::flixel::tile::FlxTilemapAutoTiling AutoTile,::hx::Null< int >  __o_StartingIndex,::hx::Null< int >  __o_DrawIndex,::hx::Null< int >  __o_CollideIndex){
            		int TileWidth = __o_TileWidth.Default(0);
            		int TileHeight = __o_TileHeight.Default(0);
            		int StartingIndex = __o_StartingIndex.Default(0);
            		int DrawIndex = __o_DrawIndex.Default(1);
            		int CollideIndex = __o_CollideIndex.Default(1);
            	HX_STACKFRAME(&_hx_pos_36d94048d9e4941f_278_loadMapFromArray)
HXLINE( 279)		this->widthInTiles = WidthInTiles;
HXLINE( 280)		this->heightInTiles = HeightInTiles;
HXLINE( 281)		this->_data = MapData->copy();
HXLINE( 283)		this->loadMapHelper(TileGraphic,TileWidth,TileHeight,AutoTile,StartingIndex,DrawIndex,CollideIndex);
HXLINE( 284)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC10(FlxBaseTilemap_obj,loadMapFromArray,return )

 ::flixel::tile::FlxBaseTilemap FlxBaseTilemap_obj::loadMapFrom2DArray(::Array< ::Dynamic> MapData, ::Dynamic TileGraphic,::hx::Null< int >  __o_TileWidth,::hx::Null< int >  __o_TileHeight, ::flixel::tile::FlxTilemapAutoTiling AutoTile,::hx::Null< int >  __o_StartingIndex,::hx::Null< int >  __o_DrawIndex,::hx::Null< int >  __o_CollideIndex){
            		int TileWidth = __o_TileWidth.Default(0);
            		int TileHeight = __o_TileHeight.Default(0);
            		int StartingIndex = __o_StartingIndex.Default(0);
            		int DrawIndex = __o_DrawIndex.Default(1);
            		int CollideIndex = __o_CollideIndex.Default(1);
            	HX_STACKFRAME(&_hx_pos_36d94048d9e4941f_307_loadMapFrom2DArray)
HXLINE( 308)		this->widthInTiles = MapData->__get(0).StaticCast< ::Array< int > >()->length;
HXLINE( 309)		this->heightInTiles = MapData->length;
HXLINE( 310)		this->_data = ::flixel::util::FlxArrayUtil_obj::flatten2DArray_Int(MapData);
HXLINE( 312)		this->loadMapHelper(TileGraphic,TileWidth,TileHeight,AutoTile,StartingIndex,DrawIndex,CollideIndex);
HXLINE( 313)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC8(FlxBaseTilemap_obj,loadMapFrom2DArray,return )

 ::flixel::tile::FlxBaseTilemap FlxBaseTilemap_obj::loadMapFromGraphic( ::Dynamic MapGraphic,::hx::Null< bool >  __o_Invert,::hx::Null< int >  __o_Scale,::Array< int > ColorMap, ::Dynamic TileGraphic,::hx::Null< int >  __o_TileWidth,::hx::Null< int >  __o_TileHeight, ::flixel::tile::FlxTilemapAutoTiling AutoTile,::hx::Null< int >  __o_StartingIndex,::hx::Null< int >  __o_DrawIndex,::hx::Null< int >  __o_CollideIndex){
            		bool Invert = __o_Invert.Default(false);
            		int Scale = __o_Scale.Default(1);
            		int TileWidth = __o_TileWidth.Default(0);
            		int TileHeight = __o_TileHeight.Default(0);
            		int StartingIndex = __o_StartingIndex.Default(0);
            		int DrawIndex = __o_DrawIndex.Default(1);
            		int CollideIndex = __o_CollideIndex.Default(1);
            	HX_STACKFRAME(&_hx_pos_36d94048d9e4941f_341_loadMapFromGraphic)
HXLINE( 342)		 ::openfl::display::BitmapData mapBitmap = ::flixel::_hx_system::FlxAssets_obj::resolveBitmapData(MapGraphic);
HXLINE( 343)		::String mapData = ::flixel::util::FlxStringUtil_obj::bitmapToCSV(mapBitmap,Invert,Scale,ColorMap);
HXLINE( 344)		return this->loadMapFromCSV(mapData,TileGraphic,TileWidth,TileHeight,AutoTile,StartingIndex,DrawIndex,CollideIndex);
            	}


HX_DEFINE_DYNAMIC_FUNC11(FlxBaseTilemap_obj,loadMapFromGraphic,return )

void FlxBaseTilemap_obj::loadMapHelper( ::Dynamic TileGraphic,::hx::Null< int >  __o_TileWidth,::hx::Null< int >  __o_TileHeight, ::flixel::tile::FlxTilemapAutoTiling AutoTile,::hx::Null< int >  __o_StartingIndex,::hx::Null< int >  __o_DrawIndex,::hx::Null< int >  __o_CollideIndex){
            		int TileWidth = __o_TileWidth.Default(0);
            		int TileHeight = __o_TileHeight.Default(0);
            		int StartingIndex = __o_StartingIndex.Default(0);
            		int DrawIndex = __o_DrawIndex.Default(1);
            		int CollideIndex = __o_CollideIndex.Default(1);
            	HX_STACKFRAME(&_hx_pos_36d94048d9e4941f_349_loadMapHelper)
HXLINE( 351)		{
HXLINE( 351)			int _g = 0;
HXDLIN( 351)			int _g1 = this->_data->length;
HXDLIN( 351)			while((_g < _g1)){
HXLINE( 351)				_g = (_g + 1);
HXDLIN( 351)				int i = (_g - 1);
HXLINE( 353)				if ((this->_data->__get(i) < 0)) {
HXLINE( 354)					this->_data[i] = 0;
            				}
            			}
            		}
HXLINE( 357)		this->totalTiles = this->_data->length;
HXLINE( 358)		 ::flixel::tile::FlxTilemapAutoTiling _hx_tmp;
HXDLIN( 358)		if (::hx::IsNull( AutoTile )) {
HXLINE( 358)			_hx_tmp = ::flixel::tile::FlxTilemapAutoTiling_obj::OFF_dyn();
            		}
            		else {
HXLINE( 358)			_hx_tmp = AutoTile;
            		}
HXDLIN( 358)		this->_hx_auto = _hx_tmp;
HXLINE( 359)		int _hx_tmp1;
HXDLIN( 359)		if ((StartingIndex <= 0)) {
HXLINE( 359)			_hx_tmp1 = 0;
            		}
            		else {
HXLINE( 359)			_hx_tmp1 = StartingIndex;
            		}
HXDLIN( 359)		this->_startingIndex = _hx_tmp1;
HXLINE( 361)		if (::hx::IsPointerNotEq( this->_hx_auto,::flixel::tile::FlxTilemapAutoTiling_obj::OFF_dyn() )) {
HXLINE( 363)			this->_startingIndex = 1;
HXLINE( 364)			DrawIndex = 1;
HXLINE( 365)			CollideIndex = 1;
            		}
HXLINE( 368)		this->_drawIndex = DrawIndex;
HXLINE( 369)		this->_collideIndex = CollideIndex;
HXLINE( 371)		this->applyAutoTile();
HXLINE( 372)		this->applyCustomRemap();
HXLINE( 373)		this->randomizeIndices();
HXLINE( 374)		this->cacheGraphics(TileWidth,TileHeight,TileGraphic);
HXLINE( 375)		this->postGraphicLoad();
            	}


HX_DEFINE_DYNAMIC_FUNC7(FlxBaseTilemap_obj,loadMapHelper,(void))

void FlxBaseTilemap_obj::postGraphicLoad(){
            	HX_STACKFRAME(&_hx_pos_36d94048d9e4941f_379_postGraphicLoad)
HXLINE( 380)		this->initTileObjects();
HXLINE( 381)		this->computeDimensions();
HXLINE( 382)		this->updateMap();
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxBaseTilemap_obj,postGraphicLoad,(void))

void FlxBaseTilemap_obj::applyAutoTile(){
            	HX_STACKFRAME(&_hx_pos_36d94048d9e4941f_388_applyAutoTile)
HXDLIN( 388)		if (::hx::IsPointerNotEq( this->_hx_auto,::flixel::tile::FlxTilemapAutoTiling_obj::OFF_dyn() )) {
HXLINE( 390)			int i = 0;
HXLINE( 391)			while((i < this->totalTiles)){
HXLINE( 393)				i = (i + 1);
HXDLIN( 393)				this->autoTile((i - 1));
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxBaseTilemap_obj,applyAutoTile,(void))

void FlxBaseTilemap_obj::applyCustomRemap(){
            	HX_STACKFRAME(&_hx_pos_36d94048d9e4941f_399_applyCustomRemap)
HXLINE( 400)		int i = 0;
HXLINE( 402)		if (::hx::IsNotNull( this->customTileRemap )) {
HXLINE( 404)			while((i < this->totalTiles)){
HXLINE( 406)				int oldIndex = this->_data->__get(i);
HXLINE( 407)				int newIndex = oldIndex;
HXLINE( 408)				if ((oldIndex < this->customTileRemap->length)) {
HXLINE( 410)					newIndex = this->customTileRemap->__get(oldIndex);
            				}
HXLINE( 412)				this->_data[i] = newIndex;
HXLINE( 413)				i = (i + 1);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxBaseTilemap_obj,applyCustomRemap,(void))

void FlxBaseTilemap_obj::randomizeIndices(){
            	HX_STACKFRAME(&_hx_pos_36d94048d9e4941f_419_randomizeIndices)
HXLINE( 420)		int i = 0;
HXLINE( 422)		if (::hx::IsNotNull( this->_randomIndices )) {
HXLINE( 424)			 ::Dynamic randLambda;
HXDLIN( 424)			if (::hx::IsNotNull( this->_randomLambda )) {
HXLINE( 424)				randLambda = this->_randomLambda;
            			}
            			else {
            				HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(0)
            				Float _hx_run(){
            					HX_STACKFRAME(&_hx_pos_36d94048d9e4941f_426_randomizeIndices)
HXLINE( 426)					return ::flixel::FlxG_obj::random->_hx_float(null(),null(),null());
            				}
            				HX_END_LOCAL_FUNC0(return)

HXLINE( 424)				randLambda =  ::Dynamic(new _hx_Closure_0());
            			}
HXLINE( 429)			while((i < this->totalTiles)){
HXLINE( 431)				int oldIndex = this->_data->__get(i);
HXLINE( 432)				int j = 0;
HXLINE( 433)				int newIndex = oldIndex;
HXLINE( 434)				{
HXLINE( 434)					int _g = 0;
HXDLIN( 434)					::Array< int > _g1 = this->_randomIndices;
HXDLIN( 434)					while((_g < _g1->length)){
HXLINE( 434)						int rand = _g1->__get(_g);
HXDLIN( 434)						_g = (_g + 1);
HXLINE( 436)						if ((oldIndex == rand)) {
HXLINE( 438)							Float k = ( (Float)(randLambda()) );
HXDLIN( 438)							int k1 = ::Std_obj::_hx_int((k * ( (Float)(this->_randomChoices->__get(j).StaticCast< ::Array< int > >()->length) )));
HXLINE( 439)							newIndex = this->_randomChoices->__get(j).StaticCast< ::Array< int > >()->__get(k1);
            						}
HXLINE( 441)						j = (j + 1);
            					}
            				}
HXLINE( 443)				this->_data[i] = newIndex;
HXLINE( 444)				i = (i + 1);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxBaseTilemap_obj,randomizeIndices,(void))

void FlxBaseTilemap_obj::autoTile(int Index){
            	HX_STACKFRAME(&_hx_pos_36d94048d9e4941f_455_autoTile)
HXLINE( 456)		if ((this->_data->__get(Index) == 0)) {
HXLINE( 458)			return;
            		}
HXLINE( 461)		if (::hx::IsPointerEq( this->_hx_auto,::flixel::tile::FlxTilemapAutoTiling_obj::FULL_dyn() )) {
HXLINE( 463)			this->autoTileFull(Index);
HXLINE( 464)			return;
            		}
HXLINE( 467)		this->_data[Index] = 0;
HXLINE( 470)		bool _hx_tmp;
HXDLIN( 470)		if (((Index - this->widthInTiles) >= 0)) {
HXLINE( 470)			_hx_tmp = (this->_data->__get((Index - this->widthInTiles)) > 0);
            		}
            		else {
HXLINE( 470)			_hx_tmp = true;
            		}
HXDLIN( 470)		if (_hx_tmp) {
HXLINE( 472)			::Array< int > base = this->_data;
HXDLIN( 472)			int Index1 = Index;
HXDLIN( 472)			base[Index1] = (base->__get(Index1) + 1);
            		}
HXLINE( 475)		bool _hx_tmp1;
HXDLIN( 475)		if ((::hx::Mod(Index,this->widthInTiles) < (this->widthInTiles - 1))) {
HXLINE( 475)			_hx_tmp1 = (this->_data->__get((Index + 1)) > 0);
            		}
            		else {
HXLINE( 475)			_hx_tmp1 = true;
            		}
HXDLIN( 475)		if (_hx_tmp1) {
HXLINE( 477)			::Array< int > base = this->_data;
HXDLIN( 477)			int Index1 = Index;
HXDLIN( 477)			base[Index1] = (base->__get(Index1) + 2);
            		}
HXLINE( 480)		bool _hx_tmp2;
HXDLIN( 480)		int _hx_tmp3 = ::Std_obj::_hx_int(( (Float)((Index + this->widthInTiles)) ));
HXDLIN( 480)		if ((_hx_tmp3 < this->totalTiles)) {
HXLINE( 480)			_hx_tmp2 = (this->_data->__get((Index + this->widthInTiles)) > 0);
            		}
            		else {
HXLINE( 480)			_hx_tmp2 = true;
            		}
HXDLIN( 480)		if (_hx_tmp2) {
HXLINE( 482)			::Array< int > base = this->_data;
HXDLIN( 482)			int Index1 = Index;
HXDLIN( 482)			base[Index1] = (base->__get(Index1) + 4);
            		}
HXLINE( 485)		bool _hx_tmp4;
HXDLIN( 485)		if ((::hx::Mod(Index,this->widthInTiles) > 0)) {
HXLINE( 485)			_hx_tmp4 = (this->_data->__get((Index - 1)) > 0);
            		}
            		else {
HXLINE( 485)			_hx_tmp4 = true;
            		}
HXDLIN( 485)		if (_hx_tmp4) {
HXLINE( 487)			::Array< int > base = this->_data;
HXDLIN( 487)			int Index1 = Index;
HXDLIN( 487)			base[Index1] = (base->__get(Index1) + 8);
            		}
HXLINE( 491)		bool _hx_tmp5;
HXDLIN( 491)		if (::hx::IsPointerEq( this->_hx_auto,::flixel::tile::FlxTilemapAutoTiling_obj::ALT_dyn() )) {
HXLINE( 491)			_hx_tmp5 = (this->_data->__get(Index) == 15);
            		}
            		else {
HXLINE( 491)			_hx_tmp5 = false;
            		}
HXDLIN( 491)		if (_hx_tmp5) {
HXLINE( 494)			bool _hx_tmp;
HXDLIN( 494)			bool _hx_tmp1;
HXDLIN( 494)			if ((::hx::Mod(Index,this->widthInTiles) > 0)) {
HXLINE( 494)				int _hx_tmp = ::Std_obj::_hx_int(( (Float)((Index + this->widthInTiles)) ));
HXDLIN( 494)				_hx_tmp1 = (_hx_tmp < this->totalTiles);
            			}
            			else {
HXLINE( 494)				_hx_tmp1 = false;
            			}
HXDLIN( 494)			if (_hx_tmp1) {
HXLINE( 494)				_hx_tmp = (this->_data->__get(((Index + this->widthInTiles) - 1)) <= 0);
            			}
            			else {
HXLINE( 494)				_hx_tmp = false;
            			}
HXDLIN( 494)			if (_hx_tmp) {
HXLINE( 496)				this->_data[Index] = 1;
            			}
HXLINE( 499)			bool _hx_tmp2;
HXDLIN( 499)			bool _hx_tmp3;
HXDLIN( 499)			if ((::hx::Mod(Index,this->widthInTiles) > 0)) {
HXLINE( 499)				_hx_tmp3 = ((Index - this->widthInTiles) >= 0);
            			}
            			else {
HXLINE( 499)				_hx_tmp3 = false;
            			}
HXDLIN( 499)			if (_hx_tmp3) {
HXLINE( 499)				_hx_tmp2 = (this->_data->__get(((Index - this->widthInTiles) - 1)) <= 0);
            			}
            			else {
HXLINE( 499)				_hx_tmp2 = false;
            			}
HXDLIN( 499)			if (_hx_tmp2) {
HXLINE( 501)				this->_data[Index] = 2;
            			}
HXLINE( 504)			bool _hx_tmp4;
HXDLIN( 504)			bool _hx_tmp5;
HXDLIN( 504)			if ((::hx::Mod(Index,this->widthInTiles) < (this->widthInTiles - 1))) {
HXLINE( 504)				_hx_tmp5 = ((Index - this->widthInTiles) >= 0);
            			}
            			else {
HXLINE( 504)				_hx_tmp5 = false;
            			}
HXDLIN( 504)			if (_hx_tmp5) {
HXLINE( 504)				_hx_tmp4 = (this->_data->__get(((Index - this->widthInTiles) + 1)) <= 0);
            			}
            			else {
HXLINE( 504)				_hx_tmp4 = false;
            			}
HXDLIN( 504)			if (_hx_tmp4) {
HXLINE( 506)				this->_data[Index] = 4;
            			}
HXLINE( 509)			bool _hx_tmp6;
HXDLIN( 509)			bool _hx_tmp7;
HXDLIN( 509)			if ((::hx::Mod(Index,this->widthInTiles) < (this->widthInTiles - 1))) {
HXLINE( 510)				int _hx_tmp = ::Std_obj::_hx_int(( (Float)((Index + this->widthInTiles)) ));
HXLINE( 509)				_hx_tmp7 = (_hx_tmp < this->totalTiles);
            			}
            			else {
HXLINE( 509)				_hx_tmp7 = false;
            			}
HXDLIN( 509)			if (_hx_tmp7) {
HXLINE( 509)				_hx_tmp6 = (this->_data->__get(((Index + this->widthInTiles) + 1)) <= 0);
            			}
            			else {
HXLINE( 509)				_hx_tmp6 = false;
            			}
HXDLIN( 509)			if (_hx_tmp6) {
HXLINE( 513)				this->_data[Index] = 8;
            			}
            		}
HXLINE( 517)		::Array< int > base = this->_data;
HXDLIN( 517)		int Index1 = Index;
HXDLIN( 517)		base[Index1] = (base->__get(Index1) + 1);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxBaseTilemap_obj,autoTile,(void))

void FlxBaseTilemap_obj::autoTileFull(int Index){
            	HX_STACKFRAME(&_hx_pos_36d94048d9e4941f_526_autoTileFull)
HXLINE( 527)		this->_data[Index] = 0;
HXLINE( 529)		bool wallUp = ((Index - this->widthInTiles) < 0);
HXLINE( 530)		bool wallRight = (::hx::Mod(Index,this->widthInTiles) >= (this->widthInTiles - 1));
HXLINE( 531)		int wallDown = ::Std_obj::_hx_int(( (Float)((Index + this->widthInTiles)) ));
HXDLIN( 531)		bool wallDown1 = (wallDown >= this->totalTiles);
HXLINE( 532)		bool wallLeft = (::hx::Mod(Index,this->widthInTiles) <= 0);
HXLINE( 534)		bool up;
HXDLIN( 534)		if (!(wallUp)) {
HXLINE( 534)			up = (this->_data->__get((Index - this->widthInTiles)) > 0);
            		}
            		else {
HXLINE( 534)			up = true;
            		}
HXLINE( 535)		bool upRight;
HXDLIN( 535)		bool upRight1;
HXDLIN( 535)		if (!(wallUp)) {
HXLINE( 535)			upRight1 = wallRight;
            		}
            		else {
HXLINE( 535)			upRight1 = true;
            		}
HXDLIN( 535)		if (!(upRight1)) {
HXLINE( 535)			upRight = (this->_data->__get(((Index - this->widthInTiles) + 1)) > 0);
            		}
            		else {
HXLINE( 535)			upRight = true;
            		}
HXLINE( 536)		bool right;
HXDLIN( 536)		if (!(wallRight)) {
HXLINE( 536)			right = (this->_data->__get((Index + 1)) > 0);
            		}
            		else {
HXLINE( 536)			right = true;
            		}
HXLINE( 537)		bool rightDown;
HXDLIN( 537)		bool rightDown1;
HXDLIN( 537)		if (!(wallRight)) {
HXLINE( 537)			rightDown1 = wallDown1;
            		}
            		else {
HXLINE( 537)			rightDown1 = true;
            		}
HXDLIN( 537)		if (!(rightDown1)) {
HXLINE( 537)			rightDown = (this->_data->__get(((Index + this->widthInTiles) + 1)) > 0);
            		}
            		else {
HXLINE( 537)			rightDown = true;
            		}
HXLINE( 538)		bool down;
HXDLIN( 538)		if (!(wallDown1)) {
HXLINE( 538)			down = (this->_data->__get((Index + this->widthInTiles)) > 0);
            		}
            		else {
HXLINE( 538)			down = true;
            		}
HXLINE( 539)		bool downLeft;
HXDLIN( 539)		bool downLeft1;
HXDLIN( 539)		if (!(wallDown1)) {
HXLINE( 539)			downLeft1 = wallLeft;
            		}
            		else {
HXLINE( 539)			downLeft1 = true;
            		}
HXDLIN( 539)		if (!(downLeft1)) {
HXLINE( 539)			downLeft = (this->_data->__get(((Index + this->widthInTiles) - 1)) > 0);
            		}
            		else {
HXLINE( 539)			downLeft = true;
            		}
HXLINE( 540)		bool left;
HXDLIN( 540)		if (!(wallLeft)) {
HXLINE( 540)			left = (this->_data->__get((Index - 1)) > 0);
            		}
            		else {
HXLINE( 540)			left = true;
            		}
HXLINE( 541)		bool leftUp;
HXDLIN( 541)		bool leftUp1;
HXDLIN( 541)		if (!(wallLeft)) {
HXLINE( 541)			leftUp1 = wallUp;
            		}
            		else {
HXLINE( 541)			leftUp1 = true;
            		}
HXDLIN( 541)		if (!(leftUp1)) {
HXLINE( 541)			leftUp = (this->_data->__get(((Index - this->widthInTiles) - 1)) > 0);
            		}
            		else {
HXLINE( 541)			leftUp = true;
            		}
HXLINE( 543)		if (up) {
HXLINE( 544)			::Array< int > base = this->_data;
HXDLIN( 544)			int Index1 = Index;
HXDLIN( 544)			base[Index1] = (base->__get(Index1) + 1);
            		}
HXLINE( 545)		bool _hx_tmp;
HXDLIN( 545)		bool _hx_tmp1;
HXDLIN( 545)		if (upRight) {
HXLINE( 545)			_hx_tmp1 = up;
            		}
            		else {
HXLINE( 545)			_hx_tmp1 = false;
            		}
HXDLIN( 545)		if (_hx_tmp1) {
HXLINE( 545)			_hx_tmp = right;
            		}
            		else {
HXLINE( 545)			_hx_tmp = false;
            		}
HXDLIN( 545)		if (_hx_tmp) {
HXLINE( 546)			::Array< int > base = this->_data;
HXDLIN( 546)			int Index1 = Index;
HXDLIN( 546)			base[Index1] = (base->__get(Index1) + 2);
            		}
HXLINE( 547)		if (right) {
HXLINE( 548)			::Array< int > base = this->_data;
HXDLIN( 548)			int Index1 = Index;
HXDLIN( 548)			base[Index1] = (base->__get(Index1) + 4);
            		}
HXLINE( 549)		bool _hx_tmp2;
HXDLIN( 549)		bool _hx_tmp3;
HXDLIN( 549)		if (rightDown) {
HXLINE( 549)			_hx_tmp3 = right;
            		}
            		else {
HXLINE( 549)			_hx_tmp3 = false;
            		}
HXDLIN( 549)		if (_hx_tmp3) {
HXLINE( 549)			_hx_tmp2 = down;
            		}
            		else {
HXLINE( 549)			_hx_tmp2 = false;
            		}
HXDLIN( 549)		if (_hx_tmp2) {
HXLINE( 550)			::Array< int > base = this->_data;
HXDLIN( 550)			int Index1 = Index;
HXDLIN( 550)			base[Index1] = (base->__get(Index1) + 8);
            		}
HXLINE( 551)		if (down) {
HXLINE( 552)			::Array< int > base = this->_data;
HXDLIN( 552)			int Index1 = Index;
HXDLIN( 552)			base[Index1] = (base->__get(Index1) + 16);
            		}
HXLINE( 553)		bool _hx_tmp4;
HXDLIN( 553)		bool _hx_tmp5;
HXDLIN( 553)		if (downLeft) {
HXLINE( 553)			_hx_tmp5 = down;
            		}
            		else {
HXLINE( 553)			_hx_tmp5 = false;
            		}
HXDLIN( 553)		if (_hx_tmp5) {
HXLINE( 553)			_hx_tmp4 = left;
            		}
            		else {
HXLINE( 553)			_hx_tmp4 = false;
            		}
HXDLIN( 553)		if (_hx_tmp4) {
HXLINE( 554)			::Array< int > base = this->_data;
HXDLIN( 554)			int Index1 = Index;
HXDLIN( 554)			base[Index1] = (base->__get(Index1) + 32);
            		}
HXLINE( 555)		if (left) {
HXLINE( 556)			::Array< int > base = this->_data;
HXDLIN( 556)			int Index1 = Index;
HXDLIN( 556)			base[Index1] = (base->__get(Index1) + 64);
            		}
HXLINE( 557)		bool _hx_tmp6;
HXDLIN( 557)		bool _hx_tmp7;
HXDLIN( 557)		if (leftUp) {
HXLINE( 557)			_hx_tmp7 = left;
            		}
            		else {
HXLINE( 557)			_hx_tmp7 = false;
            		}
HXDLIN( 557)		if (_hx_tmp7) {
HXLINE( 557)			_hx_tmp6 = up;
            		}
            		else {
HXLINE( 557)			_hx_tmp6 = false;
            		}
HXDLIN( 557)		if (_hx_tmp6) {
HXLINE( 558)			::Array< int > base = this->_data;
HXDLIN( 558)			int Index1 = Index;
HXDLIN( 558)			base[Index1] = (base->__get(Index1) + 128);
            		}
HXLINE( 560)		::Array< int > base = this->_data;
HXDLIN( 560)		int Index1 = Index;
HXDLIN( 560)		base[Index1] = (base->__get(Index1) - (::flixel::tile::FlxBaseTilemap_obj::offsetAutoTile->__get(this->_data->__get(Index)) - 1));
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxBaseTilemap_obj,autoTileFull,(void))

void FlxBaseTilemap_obj::setCustomTileMappings(::Array< int > mappings,::Array< int > randomIndices,::Array< ::Dynamic> randomChoices, ::Dynamic randomLambda){
            	HX_STACKFRAME(&_hx_pos_36d94048d9e4941f_573_setCustomTileMappings)
HXLINE( 574)		this->customTileRemap = mappings;
HXLINE( 575)		this->_randomIndices = randomIndices;
HXLINE( 576)		this->_randomChoices = randomChoices;
HXLINE( 577)		this->_randomLambda = randomLambda;
HXLINE( 580)		bool _hx_tmp;
HXDLIN( 580)		if (::hx::IsNotNull( this->_randomIndices )) {
HXLINE( 580)			if (::hx::IsNotNull( this->_randomChoices )) {
HXLINE( 580)				_hx_tmp = (this->_randomChoices->length == 0);
            			}
            			else {
HXLINE( 580)				_hx_tmp = true;
            			}
            		}
            		else {
HXLINE( 580)			_hx_tmp = false;
            		}
HXDLIN( 580)		if (_hx_tmp) {
HXLINE( 582)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("You must provide valid 'randomChoices' if you wish to randomize tilemap indices, please read documentation of 'setCustomTileMappings' function.",b3,ce,50,22)));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC4(FlxBaseTilemap_obj,setCustomTileMappings,(void))

int FlxBaseTilemap_obj::getTile(int X,int Y){
            	HX_STACKFRAME(&_hx_pos_36d94048d9e4941f_595_getTile)
HXDLIN( 595)		return this->_data->__get(((Y * this->widthInTiles) + X));
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxBaseTilemap_obj,getTile,return )

int FlxBaseTilemap_obj::getTileByIndex(int Index){
            	HX_STACKFRAME(&_hx_pos_36d94048d9e4941f_606_getTileByIndex)
HXDLIN( 606)		return this->_data->__get(Index);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxBaseTilemap_obj,getTileByIndex,return )

int FlxBaseTilemap_obj::getTileCollisions(int Index){
            	HX_STACKFRAME(&_hx_pos_36d94048d9e4941f_617_getTileCollisions)
HXDLIN( 617)		return ( ( ::flixel::FlxObject)(this->_tileObjects->__get(Index)) )->allowCollisions;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxBaseTilemap_obj,getTileCollisions,return )

::Array< int > FlxBaseTilemap_obj::getTileInstances(int Index){
            	HX_STACKFRAME(&_hx_pos_36d94048d9e4941f_627_getTileInstances)
HXLINE( 628)		::Array< int > array = null();
HXLINE( 629)		int i = 0;
HXLINE( 630)		int l = (this->widthInTiles * this->heightInTiles);
HXLINE( 632)		while((i < l)){
HXLINE( 634)			if ((this->_data->__get(i) == Index)) {
HXLINE( 636)				if (::hx::IsNull( array )) {
HXLINE( 638)					array = ::Array_obj< int >::__new(0);
            				}
HXLINE( 640)				array->push(i);
            			}
HXLINE( 642)			i = (i + 1);
            		}
HXLINE( 645)		return array;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxBaseTilemap_obj,getTileInstances,return )

bool FlxBaseTilemap_obj::setTile(int X,int Y,int Tile,::hx::Null< bool >  __o_UpdateGraphics){
            		bool UpdateGraphics = __o_UpdateGraphics.Default(true);
            	HX_STACKFRAME(&_hx_pos_36d94048d9e4941f_658_setTile)
HXLINE( 659)		bool _hx_tmp;
HXDLIN( 659)		if ((X < this->widthInTiles)) {
HXLINE( 659)			_hx_tmp = (Y >= this->heightInTiles);
            		}
            		else {
HXLINE( 659)			_hx_tmp = true;
            		}
HXDLIN( 659)		if (_hx_tmp) {
HXLINE( 661)			return false;
            		}
HXLINE( 664)		return this->setTileByIndex(((Y * this->widthInTiles) + X),Tile,UpdateGraphics);
            	}


HX_DEFINE_DYNAMIC_FUNC4(FlxBaseTilemap_obj,setTile,return )

bool FlxBaseTilemap_obj::setTileByIndex(int Index,int Tile,::hx::Null< bool >  __o_UpdateGraphics){
            		bool UpdateGraphics = __o_UpdateGraphics.Default(true);
            	HX_STACKFRAME(&_hx_pos_36d94048d9e4941f_676_setTileByIndex)
HXLINE( 677)		if ((Index >= this->_data->length)) {
HXLINE( 679)			return false;
            		}
HXLINE( 682)		bool ok = true;
HXLINE( 683)		this->_data[Index] = Tile;
HXLINE( 685)		if (!(UpdateGraphics)) {
HXLINE( 687)			return ok;
            		}
HXLINE( 690)		this->setDirty(null());
HXLINE( 692)		if (::hx::IsPointerEq( this->_hx_auto,::flixel::tile::FlxTilemapAutoTiling_obj::OFF_dyn() )) {
HXLINE( 694)			this->updateTile(this->_data->__get(Index));
HXLINE( 695)			return ok;
            		}
HXLINE( 699)		int i;
HXLINE( 700)		int row = (::Std_obj::_hx_int((( (Float)(Index) ) / ( (Float)(this->widthInTiles) ))) - 1);
HXLINE( 701)		int rowLength = (row + 3);
HXLINE( 702)		int column = (::hx::Mod(Index,this->widthInTiles) - 1);
HXLINE( 703)		int columnHeight = (column + 3);
HXLINE( 705)		while((row < rowLength)){
HXLINE( 707)			column = (columnHeight - 3);
HXLINE( 709)			while((column < columnHeight)){
HXLINE( 711)				bool _hx_tmp;
HXDLIN( 711)				bool _hx_tmp1;
HXDLIN( 711)				bool _hx_tmp2;
HXDLIN( 711)				if ((row >= 0)) {
HXLINE( 711)					_hx_tmp2 = (row < this->heightInTiles);
            				}
            				else {
HXLINE( 711)					_hx_tmp2 = false;
            				}
HXDLIN( 711)				if (_hx_tmp2) {
HXLINE( 711)					_hx_tmp1 = (column >= 0);
            				}
            				else {
HXLINE( 711)					_hx_tmp1 = false;
            				}
HXDLIN( 711)				if (_hx_tmp1) {
HXLINE( 711)					_hx_tmp = (column < this->widthInTiles);
            				}
            				else {
HXLINE( 711)					_hx_tmp = false;
            				}
HXDLIN( 711)				if (_hx_tmp) {
HXLINE( 713)					i = ((row * this->widthInTiles) + column);
HXLINE( 714)					this->autoTile(i);
HXLINE( 715)					this->updateTile(this->_data->__get(i));
            				}
HXLINE( 717)				column = (column + 1);
            			}
HXLINE( 719)			row = (row + 1);
            		}
HXLINE( 722)		return ok;
            	}


HX_DEFINE_DYNAMIC_FUNC3(FlxBaseTilemap_obj,setTileByIndex,return )

void FlxBaseTilemap_obj::setTileProperties(int Tile,::hx::Null< int >  __o_AllowCollisions, ::Dynamic Callback,::hx::Class CallbackFilter,::hx::Null< int >  __o_Range){
            		int AllowCollisions = __o_AllowCollisions.Default(4369);
            		int Range = __o_Range.Default(1);
            	HX_STACKFRAME(&_hx_pos_36d94048d9e4941f_737_setTileProperties)
HXLINE( 738)		if ((Range <= 0)) {
HXLINE( 740)			Range = 1;
            		}
HXLINE( 743)		 ::Dynamic tile;
HXLINE( 744)		int i = Tile;
HXLINE( 745)		int l = (Tile + Range);
HXLINE( 747)		int maxIndex = this->_tileObjects->get_length();
HXLINE( 748)		if ((l > maxIndex)) {
HXLINE( 750)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(((((((((HX_("Index ",ee,88,87,c8) + l) + HX_(" exceeds the maximum tile index of ",d9,51,06,f4)) + maxIndex) + HX_(". Please verify the Tile (",88,d4,6b,e3)) + Tile) + HX_(") and Range (",25,ce,96,19)) + Range) + HX_(") parameters.",cd,e3,29,61))));
            		}
HXLINE( 753)		while((i < l)){
HXLINE( 755)			i = (i + 1);
HXDLIN( 755)			tile = this->_tileObjects->__get((i - 1));
HXLINE( 756)			( ( ::flixel::FlxObject)(tile) )->set_allowCollisions(AllowCollisions);
HXLINE( 757)			tile->__SetField(HX_("callbackFunction",fd,cd,91,7e),Callback,::hx::paccDynamic);
HXLINE( 758)			tile->__SetField(HX_("filter",b8,1f,35,85),CallbackFilter,::hx::paccDynamic);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC5(FlxBaseTilemap_obj,setTileProperties,(void))

::Array< int > FlxBaseTilemap_obj::getData(::hx::Null< bool >  __o_Simple){
            		bool Simple = __o_Simple.Default(false);
            	HX_STACKFRAME(&_hx_pos_36d94048d9e4941f_770_getData)
HXLINE( 771)		if (!(Simple)) {
HXLINE( 773)			return this->_data;
            		}
HXLINE( 776)		int i = 0;
HXLINE( 777)		int l = this->_data->length;
HXLINE( 778)		::Array< int > data = ::Array_obj< int >::__new();
HXLINE( 779)		::flixel::util::FlxArrayUtil_obj::setLength_Int(data,l);
HXLINE( 781)		while((i < l)){
HXLINE( 783)			int _hx_tmp;
HXDLIN( 783)			if ((( ( ::flixel::FlxObject)(this->_tileObjects->__get(this->_data->__get(i))) )->allowCollisions > 0)) {
HXLINE( 783)				_hx_tmp = 1;
            			}
            			else {
HXLINE( 783)				_hx_tmp = 0;
            			}
HXDLIN( 783)			data[i] = _hx_tmp;
HXLINE( 784)			i = (i + 1);
            		}
HXLINE( 787)		return data;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxBaseTilemap_obj,getData,return )

::Array< ::Dynamic> FlxBaseTilemap_obj::findPath( ::flixel::math::FlxPoint Start, ::flixel::math::FlxPoint End,::hx::Null< bool >  __o_Simplify,::hx::Null< bool >  __o_RaySimplify,::hx::Null< int >  __o_DiagonalPolicy){
            		bool Simplify = __o_Simplify.Default(true);
            		bool RaySimplify = __o_RaySimplify.Default(false);
            		int DiagonalPolicy = __o_DiagonalPolicy.Default(2);
            	HX_STACKFRAME(&_hx_pos_36d94048d9e4941f_803_findPath)
HXLINE( 805)		int startIndex = this->getTileIndexByCoords(Start);
HXLINE( 806)		int endIndex = this->getTileIndexByCoords(End);
HXLINE( 809)		bool _hx_tmp;
HXDLIN( 809)		if ((startIndex >= 0)) {
HXLINE( 809)			_hx_tmp = (endIndex < 0);
            		}
            		else {
HXLINE( 809)			_hx_tmp = true;
            		}
HXDLIN( 809)		if (_hx_tmp) {
HXLINE( 810)			return null();
            		}
HXLINE( 813)		bool _hx_tmp1;
HXDLIN( 813)		if ((( ( ::flixel::FlxObject)(this->_tileObjects->__get(this->_data->__get(startIndex))) )->allowCollisions <= 0)) {
HXLINE( 813)			_hx_tmp1 = (( ( ::flixel::FlxObject)(this->_tileObjects->__get(this->_data->__get(endIndex))) )->allowCollisions > 0);
            		}
            		else {
HXLINE( 813)			_hx_tmp1 = true;
            		}
HXDLIN( 813)		if (_hx_tmp1) {
HXLINE( 815)			return null();
            		}
HXLINE( 819)		::Array< int > distances = this->computePathDistance(startIndex,endIndex,DiagonalPolicy,null());
HXLINE( 821)		if (::hx::IsNull( distances )) {
HXLINE( 823)			return null();
            		}
HXLINE( 827)		::Array< ::Dynamic> points = ::Array_obj< ::Dynamic>::__new();
HXLINE( 828)		this->walkPath(distances,endIndex,points);
HXLINE( 831)		 ::flixel::math::FlxPoint node = points->__get((points->length - 1)).StaticCast<  ::flixel::math::FlxPoint >();
HXLINE( 833)		{
HXLINE( 833)			node->set_x(Start->x);
HXDLIN( 833)			node->set_y(Start->y);
HXDLIN( 833)			if (Start->_weak) {
HXLINE( 833)				Start->put();
            			}
            		}
HXLINE( 834)		node = points->__get(0).StaticCast<  ::flixel::math::FlxPoint >();
HXLINE( 835)		{
HXLINE( 835)			node->set_x(End->x);
HXDLIN( 835)			node->set_y(End->y);
HXDLIN( 835)			if (End->_weak) {
HXLINE( 835)				End->put();
            			}
            		}
HXLINE( 838)		if (Simplify) {
HXLINE( 840)			this->simplifyPath(points);
            		}
HXLINE( 842)		if (RaySimplify) {
HXLINE( 844)			this->raySimplifyPath(points);
            		}
HXLINE( 848)		::Array< ::Dynamic> path = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 849)		int i = (points->length - 1);
HXLINE( 851)		while((i >= 0)){
HXLINE( 853)			i = (i - 1);
HXDLIN( 853)			node = points->__get((i + 1)).StaticCast<  ::flixel::math::FlxPoint >();
HXLINE( 855)			if (::hx::IsNotNull( node )) {
HXLINE( 857)				path->push(node);
            			}
            		}
HXLINE( 861)		return path;
            	}


HX_DEFINE_DYNAMIC_FUNC5(FlxBaseTilemap_obj,findPath,return )

::Array< int > FlxBaseTilemap_obj::computePathDistance(int StartIndex,int EndIndex,int DiagonalPolicy,::hx::Null< bool >  __o_StopOnEnd){
            		bool StopOnEnd = __o_StopOnEnd.Default(true);
            	HX_STACKFRAME(&_hx_pos_36d94048d9e4941f_875_computePathDistance)
HXLINE( 878)		int mapSize = (this->widthInTiles * this->heightInTiles);
HXLINE( 879)		::Array< int > distances = ::Array_obj< int >::__new();
HXLINE( 880)		::flixel::util::FlxArrayUtil_obj::setLength_Int(distances,mapSize);
HXLINE( 881)		int i = 0;
HXLINE( 883)		while((i < mapSize)){
HXLINE( 885)			if ((( ( ::flixel::FlxObject)(this->_tileObjects->__get(this->_data->__get(i))) )->allowCollisions != 0)) {
HXLINE( 887)				distances[i] = -2;
            			}
            			else {
HXLINE( 891)				distances[i] = -1;
            			}
HXLINE( 893)			i = (i + 1);
            		}
HXLINE( 896)		distances[StartIndex] = 0;
HXLINE( 897)		int distance = 1;
HXLINE( 898)		::Array< int > neighbors = ::Array_obj< int >::__new(1)->init(0,StartIndex);
HXLINE( 899)		::Array< int > current;
HXLINE( 900)		int currentIndex;
HXLINE( 901)		bool left;
HXLINE( 902)		bool right;
HXLINE( 903)		bool up;
HXLINE( 904)		bool down;
HXLINE( 905)		int currentLength;
HXLINE( 906)		bool foundEnd = false;
HXLINE( 908)		while((neighbors->length > 0)){
HXLINE( 910)			current = neighbors;
HXLINE( 911)			neighbors = ::Array_obj< int >::__new();
HXLINE( 913)			i = 0;
HXLINE( 914)			currentLength = current->length;
HXLINE( 915)			while((i < currentLength)){
HXLINE( 917)				i = (i + 1);
HXDLIN( 917)				currentIndex = current->__get((i - 1));
HXLINE( 919)				if ((currentIndex == ::Std_obj::_hx_int(( (Float)(EndIndex) )))) {
HXLINE( 921)					foundEnd = true;
HXLINE( 922)					if (StopOnEnd) {
HXLINE( 924)						neighbors = ::Array_obj< int >::__new(0);
HXLINE( 925)						goto _hx_goto_50;
            					}
            				}
HXLINE( 930)				left = (::hx::Mod(currentIndex,this->widthInTiles) > 0);
HXLINE( 931)				right = (::hx::Mod(currentIndex,this->widthInTiles) < (this->widthInTiles - 1));
HXLINE( 932)				up = ((( (Float)(currentIndex) ) / ( (Float)(this->widthInTiles) )) > 0);
HXLINE( 933)				down = ((( (Float)(currentIndex) ) / ( (Float)(this->widthInTiles) )) < (this->heightInTiles - 1));
HXLINE( 935)				int index;
HXLINE( 937)				if (up) {
HXLINE( 939)					index = (currentIndex - this->widthInTiles);
HXLINE( 941)					if ((distances->__get(index) == -1)) {
HXLINE( 943)						distances[index] = distance;
HXLINE( 944)						neighbors->push(index);
            					}
            				}
HXLINE( 947)				if (right) {
HXLINE( 949)					index = (currentIndex + 1);
HXLINE( 951)					if ((distances->__get(index) == -1)) {
HXLINE( 953)						distances[index] = distance;
HXLINE( 954)						neighbors->push(index);
            					}
            				}
HXLINE( 957)				if (down) {
HXLINE( 959)					index = (currentIndex + this->widthInTiles);
HXLINE( 961)					if ((distances->__get(index) == -1)) {
HXLINE( 963)						distances[index] = distance;
HXLINE( 964)						neighbors->push(index);
            					}
            				}
HXLINE( 967)				if (left) {
HXLINE( 969)					index = (currentIndex - 1);
HXLINE( 971)					if ((distances->__get(index) == -1)) {
HXLINE( 973)						distances[index] = distance;
HXLINE( 974)						neighbors->push(index);
            					}
            				}
HXLINE( 978)				if ((DiagonalPolicy != 0)) {
HXLINE( 980)					bool wideDiagonal = (DiagonalPolicy == 2);
HXLINE( 981)					bool _hx_tmp;
HXDLIN( 981)					if (up) {
HXLINE( 981)						_hx_tmp = right;
            					}
            					else {
HXLINE( 981)						_hx_tmp = false;
            					}
HXDLIN( 981)					if (_hx_tmp) {
HXLINE( 983)						index = ((currentIndex - this->widthInTiles) + 1);
HXLINE( 985)						bool _hx_tmp;
HXDLIN( 985)						bool _hx_tmp1;
HXDLIN( 985)						bool _hx_tmp2;
HXDLIN( 985)						if (wideDiagonal) {
HXLINE( 985)							_hx_tmp2 = (distances->__get(index) == -1);
            						}
            						else {
HXLINE( 985)							_hx_tmp2 = false;
            						}
HXDLIN( 985)						if (_hx_tmp2) {
HXLINE( 985)							_hx_tmp1 = (distances->__get((currentIndex - this->widthInTiles)) >= -1);
            						}
            						else {
HXLINE( 985)							_hx_tmp1 = false;
            						}
HXDLIN( 985)						if (_hx_tmp1) {
HXLINE( 985)							_hx_tmp = (distances->__get((currentIndex + 1)) >= -1);
            						}
            						else {
HXLINE( 985)							_hx_tmp = false;
            						}
HXDLIN( 985)						if (_hx_tmp) {
HXLINE( 990)							distances[index] = distance;
HXLINE( 991)							neighbors->push(index);
            						}
            						else {
HXLINE( 993)							bool _hx_tmp;
HXDLIN( 993)							if (!(wideDiagonal)) {
HXLINE( 993)								_hx_tmp = (distances->__get(index) == -1);
            							}
            							else {
HXLINE( 993)								_hx_tmp = false;
            							}
HXDLIN( 993)							if (_hx_tmp) {
HXLINE( 995)								distances[index] = distance;
HXLINE( 996)								neighbors->push(index);
            							}
            						}
            					}
HXLINE( 999)					bool _hx_tmp1;
HXDLIN( 999)					if (right) {
HXLINE( 999)						_hx_tmp1 = down;
            					}
            					else {
HXLINE( 999)						_hx_tmp1 = false;
            					}
HXDLIN( 999)					if (_hx_tmp1) {
HXLINE(1001)						index = ((currentIndex + this->widthInTiles) + 1);
HXLINE(1003)						bool _hx_tmp;
HXDLIN(1003)						bool _hx_tmp1;
HXDLIN(1003)						bool _hx_tmp2;
HXDLIN(1003)						if (wideDiagonal) {
HXLINE(1003)							_hx_tmp2 = (distances->__get(index) == -1);
            						}
            						else {
HXLINE(1003)							_hx_tmp2 = false;
            						}
HXDLIN(1003)						if (_hx_tmp2) {
HXLINE(1003)							_hx_tmp1 = (distances->__get((currentIndex + this->widthInTiles)) >= -1);
            						}
            						else {
HXLINE(1003)							_hx_tmp1 = false;
            						}
HXDLIN(1003)						if (_hx_tmp1) {
HXLINE(1003)							_hx_tmp = (distances->__get((currentIndex + 1)) >= -1);
            						}
            						else {
HXLINE(1003)							_hx_tmp = false;
            						}
HXDLIN(1003)						if (_hx_tmp) {
HXLINE(1008)							distances[index] = distance;
HXLINE(1009)							neighbors->push(index);
            						}
            						else {
HXLINE(1011)							bool _hx_tmp;
HXDLIN(1011)							if (!(wideDiagonal)) {
HXLINE(1011)								_hx_tmp = (distances->__get(index) == -1);
            							}
            							else {
HXLINE(1011)								_hx_tmp = false;
            							}
HXDLIN(1011)							if (_hx_tmp) {
HXLINE(1013)								distances[index] = distance;
HXLINE(1014)								neighbors->push(index);
            							}
            						}
            					}
HXLINE(1017)					bool _hx_tmp2;
HXDLIN(1017)					if (left) {
HXLINE(1017)						_hx_tmp2 = down;
            					}
            					else {
HXLINE(1017)						_hx_tmp2 = false;
            					}
HXDLIN(1017)					if (_hx_tmp2) {
HXLINE(1019)						index = ((currentIndex + this->widthInTiles) - 1);
HXLINE(1021)						bool _hx_tmp;
HXDLIN(1021)						bool _hx_tmp1;
HXDLIN(1021)						bool _hx_tmp2;
HXDLIN(1021)						if (wideDiagonal) {
HXLINE(1021)							_hx_tmp2 = (distances->__get(index) == -1);
            						}
            						else {
HXLINE(1021)							_hx_tmp2 = false;
            						}
HXDLIN(1021)						if (_hx_tmp2) {
HXLINE(1021)							_hx_tmp1 = (distances->__get((currentIndex + this->widthInTiles)) >= -1);
            						}
            						else {
HXLINE(1021)							_hx_tmp1 = false;
            						}
HXDLIN(1021)						if (_hx_tmp1) {
HXLINE(1021)							_hx_tmp = (distances->__get((currentIndex - 1)) >= -1);
            						}
            						else {
HXLINE(1021)							_hx_tmp = false;
            						}
HXDLIN(1021)						if (_hx_tmp) {
HXLINE(1026)							distances[index] = distance;
HXLINE(1027)							neighbors->push(index);
            						}
            						else {
HXLINE(1029)							bool _hx_tmp;
HXDLIN(1029)							if (!(wideDiagonal)) {
HXLINE(1029)								_hx_tmp = (distances->__get(index) == -1);
            							}
            							else {
HXLINE(1029)								_hx_tmp = false;
            							}
HXDLIN(1029)							if (_hx_tmp) {
HXLINE(1031)								distances[index] = distance;
HXLINE(1032)								neighbors->push(index);
            							}
            						}
            					}
HXLINE(1035)					bool _hx_tmp3;
HXDLIN(1035)					if (up) {
HXLINE(1035)						_hx_tmp3 = left;
            					}
            					else {
HXLINE(1035)						_hx_tmp3 = false;
            					}
HXDLIN(1035)					if (_hx_tmp3) {
HXLINE(1037)						index = ((currentIndex - this->widthInTiles) - 1);
HXLINE(1039)						bool _hx_tmp;
HXDLIN(1039)						bool _hx_tmp1;
HXDLIN(1039)						bool _hx_tmp2;
HXDLIN(1039)						if (wideDiagonal) {
HXLINE(1039)							_hx_tmp2 = (distances->__get(index) == -1);
            						}
            						else {
HXLINE(1039)							_hx_tmp2 = false;
            						}
HXDLIN(1039)						if (_hx_tmp2) {
HXLINE(1039)							_hx_tmp1 = (distances->__get((currentIndex - this->widthInTiles)) >= -1);
            						}
            						else {
HXLINE(1039)							_hx_tmp1 = false;
            						}
HXDLIN(1039)						if (_hx_tmp1) {
HXLINE(1039)							_hx_tmp = (distances->__get((currentIndex - 1)) >= -1);
            						}
            						else {
HXLINE(1039)							_hx_tmp = false;
            						}
HXDLIN(1039)						if (_hx_tmp) {
HXLINE(1044)							distances[index] = distance;
HXLINE(1045)							neighbors->push(index);
            						}
            						else {
HXLINE(1047)							bool _hx_tmp;
HXDLIN(1047)							if (!(wideDiagonal)) {
HXLINE(1047)								_hx_tmp = (distances->__get(index) == -1);
            							}
            							else {
HXLINE(1047)								_hx_tmp = false;
            							}
HXDLIN(1047)							if (_hx_tmp) {
HXLINE(1049)								distances[index] = distance;
HXLINE(1050)								neighbors->push(index);
            							}
            						}
            					}
            				}
            			}
            			_hx_goto_50:;
HXLINE(1056)			distance = (distance + 1);
            		}
HXLINE(1058)		if (!(foundEnd)) {
HXLINE(1060)			distances = null();
            		}
HXLINE(1063)		return distances;
            	}


HX_DEFINE_DYNAMIC_FUNC4(FlxBaseTilemap_obj,computePathDistance,return )

void FlxBaseTilemap_obj::walkPath(::Array< int > Data,int Start,::Array< ::Dynamic> Points){
            	HX_STACKFRAME(&_hx_pos_36d94048d9e4941f_1074_walkPath)
HXLINE(1075)		Points->push(this->getTileCoordsByIndex(Start,null()));
HXLINE(1077)		if ((Data->__get(Start) == 0)) {
HXLINE(1079)			return;
            		}
HXLINE(1083)		bool left = (::hx::Mod(Start,this->widthInTiles) > 0);
HXLINE(1084)		bool right = (::hx::Mod(Start,this->widthInTiles) < (this->widthInTiles - 1));
HXLINE(1085)		bool up = ((( (Float)(Start) ) / ( (Float)(this->widthInTiles) )) > 0);
HXLINE(1086)		bool down = ((( (Float)(Start) ) / ( (Float)(this->widthInTiles) )) < (this->heightInTiles - 1));
HXLINE(1088)		int current = Data->__get(Start);
HXLINE(1089)		int i;
HXLINE(1091)		if (up) {
HXLINE(1093)			i = (Start - this->widthInTiles);
HXLINE(1095)			bool _hx_tmp;
HXDLIN(1095)			bool _hx_tmp1;
HXDLIN(1095)			if ((i >= 0)) {
HXLINE(1095)				_hx_tmp1 = (Data->__get(i) >= 0);
            			}
            			else {
HXLINE(1095)				_hx_tmp1 = false;
            			}
HXDLIN(1095)			if (_hx_tmp1) {
HXLINE(1095)				_hx_tmp = (Data->__get(i) < current);
            			}
            			else {
HXLINE(1095)				_hx_tmp = false;
            			}
HXDLIN(1095)			if (_hx_tmp) {
HXLINE(1097)				this->walkPath(Data,i,Points);
HXDLIN(1097)				return;
            			}
            		}
HXLINE(1100)		if (right) {
HXLINE(1102)			i = (Start + 1);
HXLINE(1104)			bool _hx_tmp;
HXDLIN(1104)			bool _hx_tmp1;
HXDLIN(1104)			if ((i >= 0)) {
HXLINE(1104)				_hx_tmp1 = (Data->__get(i) >= 0);
            			}
            			else {
HXLINE(1104)				_hx_tmp1 = false;
            			}
HXDLIN(1104)			if (_hx_tmp1) {
HXLINE(1104)				_hx_tmp = (Data->__get(i) < current);
            			}
            			else {
HXLINE(1104)				_hx_tmp = false;
            			}
HXDLIN(1104)			if (_hx_tmp) {
HXLINE(1106)				this->walkPath(Data,i,Points);
HXDLIN(1106)				return;
            			}
            		}
HXLINE(1109)		if (down) {
HXLINE(1111)			i = (Start + this->widthInTiles);
HXLINE(1113)			bool _hx_tmp;
HXDLIN(1113)			bool _hx_tmp1;
HXDLIN(1113)			if ((i >= 0)) {
HXLINE(1113)				_hx_tmp1 = (Data->__get(i) >= 0);
            			}
            			else {
HXLINE(1113)				_hx_tmp1 = false;
            			}
HXDLIN(1113)			if (_hx_tmp1) {
HXLINE(1113)				_hx_tmp = (Data->__get(i) < current);
            			}
            			else {
HXLINE(1113)				_hx_tmp = false;
            			}
HXDLIN(1113)			if (_hx_tmp) {
HXLINE(1115)				this->walkPath(Data,i,Points);
HXDLIN(1115)				return;
            			}
            		}
HXLINE(1118)		if (left) {
HXLINE(1120)			i = (Start - 1);
HXLINE(1122)			bool _hx_tmp;
HXDLIN(1122)			bool _hx_tmp1;
HXDLIN(1122)			if ((i >= 0)) {
HXLINE(1122)				_hx_tmp1 = (Data->__get(i) >= 0);
            			}
            			else {
HXLINE(1122)				_hx_tmp1 = false;
            			}
HXDLIN(1122)			if (_hx_tmp1) {
HXLINE(1122)				_hx_tmp = (Data->__get(i) < current);
            			}
            			else {
HXLINE(1122)				_hx_tmp = false;
            			}
HXDLIN(1122)			if (_hx_tmp) {
HXLINE(1124)				this->walkPath(Data,i,Points);
HXDLIN(1124)				return;
            			}
            		}
HXLINE(1127)		bool _hx_tmp;
HXDLIN(1127)		if (up) {
HXLINE(1127)			_hx_tmp = right;
            		}
            		else {
HXLINE(1127)			_hx_tmp = false;
            		}
HXDLIN(1127)		if (_hx_tmp) {
HXLINE(1129)			i = ((Start - this->widthInTiles) + 1);
HXLINE(1131)			bool _hx_tmp;
HXDLIN(1131)			bool _hx_tmp1;
HXDLIN(1131)			if ((i >= 0)) {
HXLINE(1131)				_hx_tmp1 = (Data->__get(i) >= 0);
            			}
            			else {
HXLINE(1131)				_hx_tmp1 = false;
            			}
HXDLIN(1131)			if (_hx_tmp1) {
HXLINE(1131)				_hx_tmp = (Data->__get(i) < current);
            			}
            			else {
HXLINE(1131)				_hx_tmp = false;
            			}
HXDLIN(1131)			if (_hx_tmp) {
HXLINE(1133)				this->walkPath(Data,i,Points);
HXDLIN(1133)				return;
            			}
            		}
HXLINE(1136)		bool _hx_tmp1;
HXDLIN(1136)		if (right) {
HXLINE(1136)			_hx_tmp1 = down;
            		}
            		else {
HXLINE(1136)			_hx_tmp1 = false;
            		}
HXDLIN(1136)		if (_hx_tmp1) {
HXLINE(1138)			i = ((Start + this->widthInTiles) + 1);
HXLINE(1140)			bool _hx_tmp;
HXDLIN(1140)			bool _hx_tmp1;
HXDLIN(1140)			if ((i >= 0)) {
HXLINE(1140)				_hx_tmp1 = (Data->__get(i) >= 0);
            			}
            			else {
HXLINE(1140)				_hx_tmp1 = false;
            			}
HXDLIN(1140)			if (_hx_tmp1) {
HXLINE(1140)				_hx_tmp = (Data->__get(i) < current);
            			}
            			else {
HXLINE(1140)				_hx_tmp = false;
            			}
HXDLIN(1140)			if (_hx_tmp) {
HXLINE(1142)				this->walkPath(Data,i,Points);
HXDLIN(1142)				return;
            			}
            		}
HXLINE(1145)		bool _hx_tmp2;
HXDLIN(1145)		if (left) {
HXLINE(1145)			_hx_tmp2 = down;
            		}
            		else {
HXLINE(1145)			_hx_tmp2 = false;
            		}
HXDLIN(1145)		if (_hx_tmp2) {
HXLINE(1147)			i = ((Start + this->widthInTiles) - 1);
HXLINE(1149)			bool _hx_tmp;
HXDLIN(1149)			bool _hx_tmp1;
HXDLIN(1149)			if ((i >= 0)) {
HXLINE(1149)				_hx_tmp1 = (Data->__get(i) >= 0);
            			}
            			else {
HXLINE(1149)				_hx_tmp1 = false;
            			}
HXDLIN(1149)			if (_hx_tmp1) {
HXLINE(1149)				_hx_tmp = (Data->__get(i) < current);
            			}
            			else {
HXLINE(1149)				_hx_tmp = false;
            			}
HXDLIN(1149)			if (_hx_tmp) {
HXLINE(1151)				this->walkPath(Data,i,Points);
HXDLIN(1151)				return;
            			}
            		}
HXLINE(1154)		bool _hx_tmp3;
HXDLIN(1154)		if (up) {
HXLINE(1154)			_hx_tmp3 = left;
            		}
            		else {
HXLINE(1154)			_hx_tmp3 = false;
            		}
HXDLIN(1154)		if (_hx_tmp3) {
HXLINE(1156)			i = ((Start - this->widthInTiles) - 1);
HXLINE(1158)			bool _hx_tmp;
HXDLIN(1158)			bool _hx_tmp1;
HXDLIN(1158)			if ((i >= 0)) {
HXLINE(1158)				_hx_tmp1 = (Data->__get(i) >= 0);
            			}
            			else {
HXLINE(1158)				_hx_tmp1 = false;
            			}
HXDLIN(1158)			if (_hx_tmp1) {
HXLINE(1158)				_hx_tmp = (Data->__get(i) < current);
            			}
            			else {
HXLINE(1158)				_hx_tmp = false;
            			}
HXDLIN(1158)			if (_hx_tmp) {
HXLINE(1160)				this->walkPath(Data,i,Points);
HXDLIN(1160)				return;
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC3(FlxBaseTilemap_obj,walkPath,(void))

void FlxBaseTilemap_obj::simplifyPath(::Array< ::Dynamic> Points){
            	HX_STACKFRAME(&_hx_pos_36d94048d9e4941f_1173_simplifyPath)
HXLINE(1174)		Float deltaPrevious;
HXLINE(1175)		Float deltaNext;
HXLINE(1176)		 ::flixel::math::FlxPoint last = Points->__get(0).StaticCast<  ::flixel::math::FlxPoint >();
HXLINE(1177)		 ::flixel::math::FlxPoint node;
HXLINE(1178)		int i = 1;
HXLINE(1179)		int l = (Points->length - 1);
HXLINE(1181)		while((i < l)){
HXLINE(1183)			node = Points->__get(i).StaticCast<  ::flixel::math::FlxPoint >();
HXLINE(1184)			deltaPrevious = ((node->x - last->x) / (node->y - last->y));
HXLINE(1185)			deltaNext = ((node->x - Points->__get((i + 1)).StaticCast<  ::flixel::math::FlxPoint >()->x) / (node->y - Points->__get((i + 1)).StaticCast<  ::flixel::math::FlxPoint >()->y));
HXLINE(1187)			bool _hx_tmp;
HXDLIN(1187)			bool _hx_tmp1;
HXDLIN(1187)			if ((last->x != Points->__get((i + 1)).StaticCast<  ::flixel::math::FlxPoint >()->x)) {
HXLINE(1187)				_hx_tmp1 = (last->y == Points->__get((i + 1)).StaticCast<  ::flixel::math::FlxPoint >()->y);
            			}
            			else {
HXLINE(1187)				_hx_tmp1 = true;
            			}
HXDLIN(1187)			if (!(_hx_tmp1)) {
HXLINE(1187)				_hx_tmp = (deltaPrevious == deltaNext);
            			}
            			else {
HXLINE(1187)				_hx_tmp = true;
            			}
HXDLIN(1187)			if (_hx_tmp) {
HXLINE(1189)				Points[i] = null();
            			}
            			else {
HXLINE(1193)				last = node;
            			}
HXLINE(1196)			i = (i + 1);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxBaseTilemap_obj,simplifyPath,(void))

void FlxBaseTilemap_obj::raySimplifyPath(::Array< ::Dynamic> Points){
            	HX_STACKFRAME(&_hx_pos_36d94048d9e4941f_1206_raySimplifyPath)
HXLINE(1207)		 ::flixel::math::FlxPoint source = Points->__get(0).StaticCast<  ::flixel::math::FlxPoint >();
HXLINE(1208)		int lastIndex = -1;
HXLINE(1209)		 ::flixel::math::FlxPoint node;
HXLINE(1210)		int i = 1;
HXLINE(1211)		int l = Points->length;
HXLINE(1213)		while((i < l)){
HXLINE(1215)			i = (i + 1);
HXDLIN(1215)			node = Points->__get((i - 1)).StaticCast<  ::flixel::math::FlxPoint >();
HXLINE(1217)			if (::hx::IsNull( node )) {
HXLINE(1219)				continue;
            			}
HXLINE(1222)			if (this->ray(source,node,this->_point,null())) {
HXLINE(1224)				if ((lastIndex >= 0)) {
HXLINE(1226)					Points[lastIndex] = null();
            				}
            			}
            			else {
HXLINE(1231)				source = Points->__get(lastIndex).StaticCast<  ::flixel::math::FlxPoint >();
            			}
HXLINE(1234)			lastIndex = (i - 1);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxBaseTilemap_obj,raySimplifyPath,(void))

bool FlxBaseTilemap_obj::overlaps( ::flixel::FlxBasic ObjectOrGroup,::hx::Null< bool >  __o_InScreenSpace, ::flixel::FlxCamera Camera){
            		bool InScreenSpace = __o_InScreenSpace.Default(false);
            	HX_STACKFRAME(&_hx_pos_36d94048d9e4941f_1250_overlaps)
HXLINE(1251)		 ::flixel::group::FlxTypedGroup group = ::flixel::group::FlxTypedGroup_obj::resolveGroup(ObjectOrGroup);
HXLINE(1252)		if (::hx::IsNotNull( group )) {
HXLINE(1254)			return ::flixel::group::FlxTypedGroup_obj::overlaps(this->tilemapOverlapsCallback_dyn(),group,( (Float)(0) ),( (Float)(0) ),InScreenSpace,Camera);
            		}
            		else {
HXLINE(1256)			 ::flixel::FlxCamera Camera = null();
HXDLIN(1256)			bool _hx_tmp;
HXDLIN(1256)			bool _hx_tmp1;
HXDLIN(1256)			if ((ObjectOrGroup->flixelType != 1)) {
HXLINE(1256)				_hx_tmp1 = (ObjectOrGroup->flixelType == 3);
            			}
            			else {
HXLINE(1256)				_hx_tmp1 = true;
            			}
HXDLIN(1256)			if (_hx_tmp1) {
HXLINE(1256)				_hx_tmp = this->overlapsWithCallback(( ( ::flixel::FlxObject)(ObjectOrGroup) ),null(),null(),null());
            			}
            			else {
HXLINE(1256)				_hx_tmp = this->overlaps(ObjectOrGroup,false,Camera);
            			}
HXDLIN(1256)			if (_hx_tmp) {
HXLINE(1258)				return true;
            			}
            		}
HXLINE(1260)		return false;
            	}


bool FlxBaseTilemap_obj::tilemapOverlapsCallback( ::flixel::FlxBasic ObjectOrGroup,::hx::Null< Float >  __o_X,::hx::Null< Float >  __o_Y,::hx::Null< bool >  __o_InScreenSpace, ::flixel::FlxCamera Camera){
            		Float X = __o_X.Default(0);
            		Float Y = __o_Y.Default(0);
            		bool InScreenSpace = __o_InScreenSpace.Default(false);
            	HX_STACKFRAME(&_hx_pos_36d94048d9e4941f_1265_tilemapOverlapsCallback)
HXDLIN(1265)		bool _hx_tmp;
HXDLIN(1265)		if ((ObjectOrGroup->flixelType != 1)) {
HXDLIN(1265)			_hx_tmp = (ObjectOrGroup->flixelType == 3);
            		}
            		else {
HXDLIN(1265)			_hx_tmp = true;
            		}
HXDLIN(1265)		if (_hx_tmp) {
HXLINE(1267)			return this->overlapsWithCallback(( ( ::flixel::FlxObject)(ObjectOrGroup) ),null(),null(),null());
            		}
            		else {
HXLINE(1271)			return this->overlaps(ObjectOrGroup,InScreenSpace,Camera);
            		}
HXLINE(1265)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC5(FlxBaseTilemap_obj,tilemapOverlapsCallback,return )

bool FlxBaseTilemap_obj::overlapsAt(Float X,Float Y, ::flixel::FlxBasic ObjectOrGroup,::hx::Null< bool >  __o_InScreenSpace, ::flixel::FlxCamera Camera){
            		bool InScreenSpace = __o_InScreenSpace.Default(false);
            	HX_STACKFRAME(&_hx_pos_36d94048d9e4941f_1289_overlapsAt)
HXLINE(1290)		 ::flixel::group::FlxTypedGroup group = ::flixel::group::FlxTypedGroup_obj::resolveGroup(ObjectOrGroup);
HXLINE(1291)		if (::hx::IsNotNull( group )) {
HXLINE(1293)			return ::flixel::group::FlxTypedGroup_obj::overlaps(this->tilemapOverlapsAtCallback_dyn(),group,X,Y,InScreenSpace,Camera);
            		}
            		else {
HXLINE(1295)			bool _hx_tmp;
HXDLIN(1295)			bool _hx_tmp1;
HXDLIN(1295)			if ((ObjectOrGroup->flixelType != 1)) {
HXLINE(1295)				_hx_tmp1 = (ObjectOrGroup->flixelType == 3);
            			}
            			else {
HXLINE(1295)				_hx_tmp1 = true;
            			}
HXDLIN(1295)			if (_hx_tmp1) {
HXLINE(1295)				_hx_tmp = this->overlapsWithCallback(( ( ::flixel::FlxObject)(ObjectOrGroup) ),null(),false,this->_point->set(X,Y));
            			}
            			else {
HXLINE(1295)				_hx_tmp = this->overlapsAt(X,Y,ObjectOrGroup,InScreenSpace,Camera);
            			}
HXDLIN(1295)			if (_hx_tmp) {
HXLINE(1297)				return true;
            			}
            		}
HXLINE(1300)		return false;
            	}


bool FlxBaseTilemap_obj::tilemapOverlapsAtCallback( ::flixel::FlxBasic ObjectOrGroup,Float X,Float Y,bool InScreenSpace, ::flixel::FlxCamera Camera){
            	HX_STACKFRAME(&_hx_pos_36d94048d9e4941f_1305_tilemapOverlapsAtCallback)
HXDLIN(1305)		bool _hx_tmp;
HXDLIN(1305)		if ((ObjectOrGroup->flixelType != 1)) {
HXDLIN(1305)			_hx_tmp = (ObjectOrGroup->flixelType == 3);
            		}
            		else {
HXDLIN(1305)			_hx_tmp = true;
            		}
HXDLIN(1305)		if (_hx_tmp) {
HXLINE(1307)			return this->overlapsWithCallback(( ( ::flixel::FlxObject)(ObjectOrGroup) ),null(),false,this->_point->set(X,Y));
            		}
            		else {
HXLINE(1311)			return this->overlapsAt(X,Y,ObjectOrGroup,InScreenSpace,Camera);
            		}
HXLINE(1305)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC5(FlxBaseTilemap_obj,tilemapOverlapsAtCallback,return )

bool FlxBaseTilemap_obj::overlapsPoint( ::flixel::math::FlxPoint WorldPoint,::hx::Null< bool >  __o_InScreenSpace, ::flixel::FlxCamera Camera){
            		bool InScreenSpace = __o_InScreenSpace.Default(false);
            	HX_STACKFRAME(&_hx_pos_36d94048d9e4941f_1324_overlapsPoint)
HXLINE(1325)		if (InScreenSpace) {
HXLINE(1327)			if (::hx::IsNull( Camera )) {
HXLINE(1328)				Camera = ::flixel::FlxG_obj::camera;
            			}
HXLINE(1330)			WorldPoint->subtractPoint(Camera->scroll);
HXLINE(1331)			if (WorldPoint->_weak) {
HXLINE(1331)				WorldPoint->put();
            			}
            		}
HXLINE(1334)		return this->tileAtPointAllowsCollisions(WorldPoint);
            	}


bool FlxBaseTilemap_obj::tileAtPointAllowsCollisions( ::flixel::math::FlxPoint point){
            	HX_STACKFRAME(&_hx_pos_36d94048d9e4941f_1338_tileAtPointAllowsCollisions)
HXLINE(1339)		int tileIndex = this->getTileIndexByCoords(point);
HXLINE(1340)		bool _hx_tmp;
HXDLIN(1340)		if ((tileIndex >= 0)) {
HXLINE(1340)			_hx_tmp = (tileIndex >= this->_data->length);
            		}
            		else {
HXLINE(1340)			_hx_tmp = true;
            		}
HXDLIN(1340)		if (_hx_tmp) {
HXLINE(1341)			return false;
            		}
HXLINE(1342)		return (( ( ::flixel::FlxObject)(this->_tileObjects->__get(this->_data->__get(tileIndex))) )->allowCollisions > 0);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxBaseTilemap_obj,tileAtPointAllowsCollisions,return )

 ::flixel::math::FlxRect FlxBaseTilemap_obj::getBounds( ::flixel::math::FlxRect Bounds){
            	HX_STACKFRAME(&_hx_pos_36d94048d9e4941f_1352_getBounds)
HXLINE(1353)		if (::hx::IsNull( Bounds )) {
HXLINE(1354)			 ::flixel::math::FlxRect _this = ::flixel::math::FlxRect_obj::_pool->get();
HXDLIN(1354)			_this->x = ( (Float)(0) );
HXDLIN(1354)			_this->y = ( (Float)(0) );
HXDLIN(1354)			_this->width = ( (Float)(0) );
HXDLIN(1354)			_this->height = ( (Float)(0) );
HXDLIN(1354)			 ::flixel::math::FlxRect rect = _this;
HXDLIN(1354)			rect->_inPool = false;
HXDLIN(1354)			Bounds = rect;
            		}
HXLINE(1356)		Float X = this->x;
HXDLIN(1356)		Float Y = this->y;
HXDLIN(1356)		Float Width = this->get_width();
HXDLIN(1356)		Float Height = this->get_height();
HXDLIN(1356)		Bounds->x = X;
HXDLIN(1356)		Bounds->y = Y;
HXDLIN(1356)		Bounds->width = Width;
HXDLIN(1356)		Bounds->height = Height;
HXDLIN(1356)		return Bounds;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxBaseTilemap_obj,getBounds,return )

::Array< int > FlxBaseTilemap_obj::offsetAutoTile;


::hx::ObjectPtr< FlxBaseTilemap_obj > FlxBaseTilemap_obj::__new() {
	::hx::ObjectPtr< FlxBaseTilemap_obj > __this = new FlxBaseTilemap_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< FlxBaseTilemap_obj > FlxBaseTilemap_obj::__alloc(::hx::Ctx *_hx_ctx) {
	FlxBaseTilemap_obj *__this = (FlxBaseTilemap_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FlxBaseTilemap_obj), true, "flixel.tile.FlxBaseTilemap"));
	*(void **)__this = FlxBaseTilemap_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

FlxBaseTilemap_obj::FlxBaseTilemap_obj()
{
}

void FlxBaseTilemap_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxBaseTilemap);
	HX_MARK_MEMBER_NAME(_hx_auto,"auto");
	HX_MARK_MEMBER_NAME(widthInTiles,"widthInTiles");
	HX_MARK_MEMBER_NAME(heightInTiles,"heightInTiles");
	HX_MARK_MEMBER_NAME(totalTiles,"totalTiles");
	HX_MARK_MEMBER_NAME(customTileRemap,"customTileRemap");
	HX_MARK_MEMBER_NAME(_randomIndices,"_randomIndices");
	HX_MARK_MEMBER_NAME(_randomChoices,"_randomChoices");
	HX_MARK_MEMBER_NAME(_randomLambda,"_randomLambda");
	HX_MARK_MEMBER_NAME(_tileObjects,"_tileObjects");
	HX_MARK_MEMBER_NAME(_startingIndex,"_startingIndex");
	HX_MARK_MEMBER_NAME(_data,"_data");
	HX_MARK_MEMBER_NAME(_drawIndex,"_drawIndex");
	HX_MARK_MEMBER_NAME(_collideIndex,"_collideIndex");
	 ::flixel::FlxObject_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxBaseTilemap_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_hx_auto,"auto");
	HX_VISIT_MEMBER_NAME(widthInTiles,"widthInTiles");
	HX_VISIT_MEMBER_NAME(heightInTiles,"heightInTiles");
	HX_VISIT_MEMBER_NAME(totalTiles,"totalTiles");
	HX_VISIT_MEMBER_NAME(customTileRemap,"customTileRemap");
	HX_VISIT_MEMBER_NAME(_randomIndices,"_randomIndices");
	HX_VISIT_MEMBER_NAME(_randomChoices,"_randomChoices");
	HX_VISIT_MEMBER_NAME(_randomLambda,"_randomLambda");
	HX_VISIT_MEMBER_NAME(_tileObjects,"_tileObjects");
	HX_VISIT_MEMBER_NAME(_startingIndex,"_startingIndex");
	HX_VISIT_MEMBER_NAME(_data,"_data");
	HX_VISIT_MEMBER_NAME(_drawIndex,"_drawIndex");
	HX_VISIT_MEMBER_NAME(_collideIndex,"_collideIndex");
	 ::flixel::FlxObject_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val FlxBaseTilemap_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"ray") ) { return ::hx::Val( ray_dyn() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"auto") ) { return ::hx::Val( _hx_auto ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_data") ) { return ::hx::Val( _data ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return ::hx::Val( destroy_dyn() ); }
		if (HX_FIELD_EQ(inName,"getTile") ) { return ::hx::Val( getTile_dyn() ); }
		if (HX_FIELD_EQ(inName,"setTile") ) { return ::hx::Val( setTile_dyn() ); }
		if (HX_FIELD_EQ(inName,"getData") ) { return ::hx::Val( getData_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"setDirty") ) { return ::hx::Val( setDirty_dyn() ); }
		if (HX_FIELD_EQ(inName,"autoTile") ) { return ::hx::Val( autoTile_dyn() ); }
		if (HX_FIELD_EQ(inName,"findPath") ) { return ::hx::Val( findPath_dyn() ); }
		if (HX_FIELD_EQ(inName,"walkPath") ) { return ::hx::Val( walkPath_dyn() ); }
		if (HX_FIELD_EQ(inName,"overlaps") ) { return ::hx::Val( overlaps_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"updateMap") ) { return ::hx::Val( updateMap_dyn() ); }
		if (HX_FIELD_EQ(inName,"getBounds") ) { return ::hx::Val( getBounds_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"totalTiles") ) { return ::hx::Val( totalTiles ); }
		if (HX_FIELD_EQ(inName,"_drawIndex") ) { return ::hx::Val( _drawIndex ); }
		if (HX_FIELD_EQ(inName,"updateTile") ) { return ::hx::Val( updateTile_dyn() ); }
		if (HX_FIELD_EQ(inName,"overlapsAt") ) { return ::hx::Val( overlapsAt_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"widthInTiles") ) { return ::hx::Val( widthInTiles ); }
		if (HX_FIELD_EQ(inName,"_tileObjects") ) { return ::hx::Val( _tileObjects ); }
		if (HX_FIELD_EQ(inName,"autoTileFull") ) { return ::hx::Val( autoTileFull_dyn() ); }
		if (HX_FIELD_EQ(inName,"simplifyPath") ) { return ::hx::Val( simplifyPath_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"heightInTiles") ) { return ::hx::Val( heightInTiles ); }
		if (HX_FIELD_EQ(inName,"_randomLambda") ) { return ::hx::Val( _randomLambda ); }
		if (HX_FIELD_EQ(inName,"_collideIndex") ) { return ::hx::Val( _collideIndex ); }
		if (HX_FIELD_EQ(inName,"cacheGraphics") ) { return ::hx::Val( cacheGraphics_dyn() ); }
		if (HX_FIELD_EQ(inName,"loadMapHelper") ) { return ::hx::Val( loadMapHelper_dyn() ); }
		if (HX_FIELD_EQ(inName,"applyAutoTile") ) { return ::hx::Val( applyAutoTile_dyn() ); }
		if (HX_FIELD_EQ(inName,"overlapsPoint") ) { return ::hx::Val( overlapsPoint_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_randomIndices") ) { return ::hx::Val( _randomIndices ); }
		if (HX_FIELD_EQ(inName,"_randomChoices") ) { return ::hx::Val( _randomChoices ); }
		if (HX_FIELD_EQ(inName,"_startingIndex") ) { return ::hx::Val( _startingIndex ); }
		if (HX_FIELD_EQ(inName,"loadMapFromCSV") ) { return ::hx::Val( loadMapFromCSV_dyn() ); }
		if (HX_FIELD_EQ(inName,"getTileByIndex") ) { return ::hx::Val( getTileByIndex_dyn() ); }
		if (HX_FIELD_EQ(inName,"setTileByIndex") ) { return ::hx::Val( setTileByIndex_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"customTileRemap") ) { return ::hx::Val( customTileRemap ); }
		if (HX_FIELD_EQ(inName,"initTileObjects") ) { return ::hx::Val( initTileObjects_dyn() ); }
		if (HX_FIELD_EQ(inName,"postGraphicLoad") ) { return ::hx::Val( postGraphicLoad_dyn() ); }
		if (HX_FIELD_EQ(inName,"raySimplifyPath") ) { return ::hx::Val( raySimplifyPath_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"loadMapFromArray") ) { return ::hx::Val( loadMapFromArray_dyn() ); }
		if (HX_FIELD_EQ(inName,"applyCustomRemap") ) { return ::hx::Val( applyCustomRemap_dyn() ); }
		if (HX_FIELD_EQ(inName,"randomizeIndices") ) { return ::hx::Val( randomizeIndices_dyn() ); }
		if (HX_FIELD_EQ(inName,"getTileInstances") ) { return ::hx::Val( getTileInstances_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"computeDimensions") ) { return ::hx::Val( computeDimensions_dyn() ); }
		if (HX_FIELD_EQ(inName,"getTileCollisions") ) { return ::hx::Val( getTileCollisions_dyn() ); }
		if (HX_FIELD_EQ(inName,"setTileProperties") ) { return ::hx::Val( setTileProperties_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"loadMapFrom2DArray") ) { return ::hx::Val( loadMapFrom2DArray_dyn() ); }
		if (HX_FIELD_EQ(inName,"loadMapFromGraphic") ) { return ::hx::Val( loadMapFromGraphic_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"computePathDistance") ) { return ::hx::Val( computePathDistance_dyn() ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"getTileIndexByCoords") ) { return ::hx::Val( getTileIndexByCoords_dyn() ); }
		if (HX_FIELD_EQ(inName,"getTileCoordsByIndex") ) { return ::hx::Val( getTileCoordsByIndex_dyn() ); }
		if (HX_FIELD_EQ(inName,"overlapsWithCallback") ) { return ::hx::Val( overlapsWithCallback_dyn() ); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"setCustomTileMappings") ) { return ::hx::Val( setCustomTileMappings_dyn() ); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"tilemapOverlapsCallback") ) { return ::hx::Val( tilemapOverlapsCallback_dyn() ); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"tilemapOverlapsAtCallback") ) { return ::hx::Val( tilemapOverlapsAtCallback_dyn() ); }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"tileAtPointAllowsCollisions") ) { return ::hx::Val( tileAtPointAllowsCollisions_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool FlxBaseTilemap_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 14:
		if (HX_FIELD_EQ(inName,"offsetAutoTile") ) { outValue = ( offsetAutoTile ); return true; }
	}
	return false;
}

::hx::Val FlxBaseTilemap_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"auto") ) { _hx_auto=inValue.Cast<  ::flixel::tile::FlxTilemapAutoTiling >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_data") ) { _data=inValue.Cast< ::Array< int > >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"totalTiles") ) { totalTiles=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_drawIndex") ) { _drawIndex=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"widthInTiles") ) { widthInTiles=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_tileObjects") ) { _tileObjects=inValue.Cast< ::cpp::VirtualArray >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"heightInTiles") ) { heightInTiles=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_randomLambda") ) { _randomLambda=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_collideIndex") ) { _collideIndex=inValue.Cast< int >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_randomIndices") ) { _randomIndices=inValue.Cast< ::Array< int > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_randomChoices") ) { _randomChoices=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_startingIndex") ) { _startingIndex=inValue.Cast< int >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"customTileRemap") ) { customTileRemap=inValue.Cast< ::Array< int > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool FlxBaseTilemap_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 14:
		if (HX_FIELD_EQ(inName,"offsetAutoTile") ) { offsetAutoTile=ioValue.Cast< ::Array< int > >(); return true; }
	}
	return false;
}

void FlxBaseTilemap_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("auto",6f,df,76,40));
	outFields->push(HX_("widthInTiles",fa,b1,71,d4));
	outFields->push(HX_("heightInTiles",39,ce,1a,97));
	outFields->push(HX_("totalTiles",21,f3,d5,16));
	outFields->push(HX_("customTileRemap",ca,70,d3,8a));
	outFields->push(HX_("_randomIndices",a5,d3,07,36));
	outFields->push(HX_("_randomChoices",70,42,cb,2b));
	outFields->push(HX_("_tileObjects",47,55,bd,87));
	outFields->push(HX_("_startingIndex",73,a1,49,3d));
	outFields->push(HX_("_data",09,72,74,f5));
	outFields->push(HX_("_drawIndex",2f,4c,c2,e1));
	outFields->push(HX_("_collideIndex",93,05,8a,b4));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo FlxBaseTilemap_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::flixel::tile::FlxTilemapAutoTiling */ ,(int)offsetof(FlxBaseTilemap_obj,_hx_auto),HX_("auto",6f,df,76,40)},
	{::hx::fsInt,(int)offsetof(FlxBaseTilemap_obj,widthInTiles),HX_("widthInTiles",fa,b1,71,d4)},
	{::hx::fsInt,(int)offsetof(FlxBaseTilemap_obj,heightInTiles),HX_("heightInTiles",39,ce,1a,97)},
	{::hx::fsInt,(int)offsetof(FlxBaseTilemap_obj,totalTiles),HX_("totalTiles",21,f3,d5,16)},
	{::hx::fsObject /* ::Array< int > */ ,(int)offsetof(FlxBaseTilemap_obj,customTileRemap),HX_("customTileRemap",ca,70,d3,8a)},
	{::hx::fsObject /* ::Array< int > */ ,(int)offsetof(FlxBaseTilemap_obj,_randomIndices),HX_("_randomIndices",a5,d3,07,36)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(FlxBaseTilemap_obj,_randomChoices),HX_("_randomChoices",70,42,cb,2b)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(FlxBaseTilemap_obj,_randomLambda),HX_("_randomLambda",49,40,18,0b)},
	{::hx::fsObject /* ::cpp::VirtualArray */ ,(int)offsetof(FlxBaseTilemap_obj,_tileObjects),HX_("_tileObjects",47,55,bd,87)},
	{::hx::fsInt,(int)offsetof(FlxBaseTilemap_obj,_startingIndex),HX_("_startingIndex",73,a1,49,3d)},
	{::hx::fsObject /* ::Array< int > */ ,(int)offsetof(FlxBaseTilemap_obj,_data),HX_("_data",09,72,74,f5)},
	{::hx::fsInt,(int)offsetof(FlxBaseTilemap_obj,_drawIndex),HX_("_drawIndex",2f,4c,c2,e1)},
	{::hx::fsInt,(int)offsetof(FlxBaseTilemap_obj,_collideIndex),HX_("_collideIndex",93,05,8a,b4)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo FlxBaseTilemap_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /* ::Array< int > */ ,(void *) &FlxBaseTilemap_obj::offsetAutoTile,HX_("offsetAutoTile",f0,58,a2,c6)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String FlxBaseTilemap_obj_sMemberFields[] = {
	HX_("auto",6f,df,76,40),
	HX_("widthInTiles",fa,b1,71,d4),
	HX_("heightInTiles",39,ce,1a,97),
	HX_("totalTiles",21,f3,d5,16),
	HX_("customTileRemap",ca,70,d3,8a),
	HX_("_randomIndices",a5,d3,07,36),
	HX_("_randomChoices",70,42,cb,2b),
	HX_("_randomLambda",49,40,18,0b),
	HX_("_tileObjects",47,55,bd,87),
	HX_("_startingIndex",73,a1,49,3d),
	HX_("_data",09,72,74,f5),
	HX_("_drawIndex",2f,4c,c2,e1),
	HX_("_collideIndex",93,05,8a,b4),
	HX_("updateTile",d7,b5,b1,05),
	HX_("cacheGraphics",2d,61,95,fc),
	HX_("initTileObjects",16,be,45,2e),
	HX_("updateMap",13,e8,df,82),
	HX_("computeDimensions",a4,a4,eb,f3),
	HX_("getTileIndexByCoords",03,79,8b,76),
	HX_("getTileCoordsByIndex",b9,63,25,a1),
	HX_("ray",ea,d5,56,00),
	HX_("overlapsWithCallback",17,c3,72,a8),
	HX_("setDirty",10,b9,04,e8),
	HX_("destroy",fa,2c,86,24),
	HX_("loadMapFromCSV",06,2b,38,8f),
	HX_("loadMapFromArray",d9,80,a3,db),
	HX_("loadMapFrom2DArray",c7,d3,90,ac),
	HX_("loadMapFromGraphic",e8,bd,b6,e5),
	HX_("loadMapHelper",24,aa,93,69),
	HX_("postGraphicLoad",6e,44,44,1d),
	HX_("applyAutoTile",cb,19,58,70),
	HX_("applyCustomRemap",8a,6c,0c,b4),
	HX_("randomizeIndices",f6,8d,4c,14),
	HX_("autoTile",3d,ba,22,30),
	HX_("autoTileFull",6c,32,17,bf),
	HX_("setCustomTileMappings",86,00,11,09),
	HX_("getTile",e4,7a,7f,1f),
	HX_("getTileByIndex",37,bb,aa,c4),
	HX_("getTileCollisions",c5,3f,3d,c8),
	HX_("getTileInstances",ba,6b,01,25),
	HX_("setTile",f0,0b,81,12),
	HX_("setTileByIndex",ab,a3,ca,e4),
	HX_("setTileProperties",03,58,a1,54),
	HX_("getData",e0,05,e6,14),
	HX_("findPath",7e,f2,e5,9c),
	HX_("computePathDistance",11,4c,56,20),
	HX_("walkPath",4e,27,ab,57),
	HX_("simplifyPath",4e,21,2f,66),
	HX_("raySimplifyPath",58,7a,f6,41),
	HX_("overlaps",0c,d3,2a,45),
	HX_("tilemapOverlapsCallback",3f,9d,f8,ac),
	HX_("overlapsAt",1f,e7,ce,03),
	HX_("tilemapOverlapsAtCallback",d2,ab,68,db),
	HX_("overlapsPoint",a4,c5,bd,35),
	HX_("tileAtPointAllowsCollisions",1a,5b,2f,f6),
	HX_("getBounds",ab,0f,74,e2),
	::String(null()) };

static void FlxBaseTilemap_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxBaseTilemap_obj::offsetAutoTile,"offsetAutoTile");
};

#ifdef HXCPP_VISIT_ALLOCS
static void FlxBaseTilemap_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxBaseTilemap_obj::offsetAutoTile,"offsetAutoTile");
};

#endif

::hx::Class FlxBaseTilemap_obj::__mClass;

static ::String FlxBaseTilemap_obj_sStaticFields[] = {
	HX_("offsetAutoTile",f0,58,a2,c6),
	::String(null())
};

void FlxBaseTilemap_obj::__register()
{
	FlxBaseTilemap_obj _hx_dummy;
	FlxBaseTilemap_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.tile.FlxBaseTilemap",19,d7,a6,6a);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FlxBaseTilemap_obj::__GetStatic;
	__mClass->mSetStaticField = &FlxBaseTilemap_obj::__SetStatic;
	__mClass->mMarkFunc = FlxBaseTilemap_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(FlxBaseTilemap_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FlxBaseTilemap_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FlxBaseTilemap_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = FlxBaseTilemap_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxBaseTilemap_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxBaseTilemap_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void FlxBaseTilemap_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_36d94048d9e4941f_25_boot)
HXDLIN(  25)		offsetAutoTile = ::Array_obj< int >::fromData( _hx_array_data_6aa6d719_65,256);
            	}
}

} // end namespace flixel
} // end namespace tile
