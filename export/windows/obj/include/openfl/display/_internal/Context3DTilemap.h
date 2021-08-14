#ifndef INCLUDED_openfl_display__internal_Context3DTilemap
#define INCLUDED_openfl_display__internal_Context3DTilemap

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(lime,utils,ArrayBufferView)
HX_DECLARE_CLASS2(openfl,display,BitmapData)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectRenderer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,ITileContainer)
HX_DECLARE_CLASS2(openfl,display,OpenGLRenderer)
HX_DECLARE_CLASS2(openfl,display,Shader)
HX_DECLARE_CLASS2(openfl,display,Tile)
HX_DECLARE_CLASS2(openfl,display,TileContainer)
HX_DECLARE_CLASS2(openfl,display,Tilemap)
HX_DECLARE_CLASS2(openfl,display,Tileset)
HX_DECLARE_CLASS3(openfl,display,_internal,Context3DTilemap)
HX_DECLARE_CLASS2(openfl,display3D,Context3D)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,geom,ColorTransform)
HX_DECLARE_CLASS2(openfl,geom,Matrix)
HX_DECLARE_CLASS2(openfl,geom,Rectangle)

namespace openfl{
namespace display{
namespace _internal{


class HXCPP_CLASS_ATTRIBUTES Context3DTilemap_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Context3DTilemap_obj OBJ_;
		Context3DTilemap_obj();

	public:
		enum { _hx_ClassId = 0x7d905218 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="openfl.display._internal.Context3DTilemap")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"openfl.display._internal.Context3DTilemap"); }

		inline static ::hx::ObjectPtr< Context3DTilemap_obj > __new() {
			::hx::ObjectPtr< Context3DTilemap_obj > __this = new Context3DTilemap_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< Context3DTilemap_obj > __alloc(::hx::Ctx *_hx_ctx) {
			Context3DTilemap_obj *__this = (Context3DTilemap_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Context3DTilemap_obj), false, "openfl.display._internal.Context3DTilemap"));
			*(void **)__this = Context3DTilemap_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Context3DTilemap_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Context3DTilemap",ce,e3,4c,c1); }

		static void __boot();
		static  ::Dynamic __meta__;
		static  ::openfl::geom::ColorTransform cacheColorTransform;
		static  ::openfl::display3D::Context3D context;
		static int dataPerVertex;
		static  ::openfl::display::BitmapData currentBitmapData;
		static  ::Dynamic currentBlendMode;
		static  ::openfl::display::Shader currentShader;
		static int bufferPosition;
		static int lastFlushedPosition;
		static  ::openfl::display::BitmapData lastUsedBitmapData;
		static  ::openfl::display::Shader lastUsedShader;
		static int numTiles;
		static  ::lime::utils::ArrayBufferView vertexBufferData;
		static int vertexDataPosition;
		static void buildBuffer( ::openfl::display::Tilemap tilemap, ::openfl::display::OpenGLRenderer renderer);
		static ::Dynamic buildBuffer_dyn();

		static void buildBufferTileContainer( ::openfl::display::Tilemap tilemap, ::openfl::display::TileContainer group, ::openfl::display::OpenGLRenderer renderer, ::openfl::geom::Matrix parentTransform, ::openfl::display::Tileset defaultTileset,bool alphaEnabled,Float worldAlpha,bool colorTransformEnabled, ::openfl::geom::ColorTransform defaultColorTransform, ::openfl::display::BitmapData cacheBitmapData, ::openfl::geom::Rectangle rect, ::openfl::geom::Matrix matrix,::hx::Null< bool >  isTopLevel);
		static ::Dynamic buildBufferTileContainer_dyn();

		static void flush( ::openfl::display::Tilemap tilemap, ::openfl::display::OpenGLRenderer renderer, ::Dynamic blendMode);
		static ::Dynamic flush_dyn();

		static void render( ::openfl::display::Tilemap tilemap, ::openfl::display::OpenGLRenderer renderer);
		static ::Dynamic render_dyn();

		static void renderDrawable( ::openfl::display::Tilemap tilemap, ::openfl::display::OpenGLRenderer renderer);
		static ::Dynamic renderDrawable_dyn();

		static void renderDrawableMask( ::openfl::display::Tilemap tilemap, ::openfl::display::OpenGLRenderer renderer);
		static ::Dynamic renderDrawableMask_dyn();

		static void renderTileContainer( ::openfl::display::Tilemap tilemap, ::openfl::display::OpenGLRenderer renderer, ::openfl::display::TileContainer group, ::openfl::display::Shader defaultShader, ::openfl::display::Tileset defaultTileset,Float worldAlpha,bool blendModeEnabled, ::Dynamic defaultBlendMode, ::openfl::display::BitmapData cacheBitmapData);
		static ::Dynamic renderTileContainer_dyn();

		static void renderMask( ::openfl::display::Tilemap tilemap, ::openfl::display::OpenGLRenderer renderer);
		static ::Dynamic renderMask_dyn();

		static void resizeBuffer( ::openfl::display::Tilemap tilemap,int count);
		static ::Dynamic resizeBuffer_dyn();

};

} // end namespace openfl
} // end namespace display
} // end namespace _internal

#endif /* INCLUDED_openfl_display__internal_Context3DTilemap */ 
