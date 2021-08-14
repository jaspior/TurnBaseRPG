#ifndef INCLUDED_lime__internal_backend_native_NativeAudioSource
#define INCLUDED_lime__internal_backend_native_NativeAudioSource

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(haxe,Timer)
HX_DECLARE_CLASS4(lime,_internal,backend,native,NativeAudioSource)
HX_DECLARE_CLASS2(lime,math,Vector4)
HX_DECLARE_CLASS2(lime,media,AudioSource)
HX_DECLARE_CLASS3(lime,media,vorbis,VorbisFile)
HX_DECLARE_CLASS2(lime,utils,ArrayBufferView)

namespace lime{
namespace _internal{
namespace backend{
namespace native{


class HXCPP_CLASS_ATTRIBUTES NativeAudioSource_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef NativeAudioSource_obj OBJ_;
		NativeAudioSource_obj();

	public:
		enum { _hx_ClassId = 0x2c353d12 };

		void __construct( ::lime::media::AudioSource parent);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="lime._internal.backend.native.NativeAudioSource")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"lime._internal.backend.native.NativeAudioSource"); }
		static ::hx::ObjectPtr< NativeAudioSource_obj > __new( ::lime::media::AudioSource parent);
		static ::hx::ObjectPtr< NativeAudioSource_obj > __alloc(::hx::Ctx *_hx_ctx, ::lime::media::AudioSource parent);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~NativeAudioSource_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("NativeAudioSource",da,b9,f9,b6); }

		static void __boot();
		static int STREAM_BUFFER_SIZE;
		static int STREAM_NUM_BUFFERS;
		static int STREAM_TIMER_FREQUENCY;
		::cpp::VirtualArray buffers;
		bool completed;
		int dataLength;
		int format;
		 ::Dynamic handle;
		 ::Dynamic length;
		int loops;
		 ::lime::media::AudioSource parent;
		bool playing;
		 ::lime::math::Vector4 position;
		int samples;
		bool stream;
		 ::haxe::Timer streamTimer;
		 ::haxe::Timer timer;
		void dispose();
		::Dynamic dispose_dyn();

		void init();
		::Dynamic init_dyn();

		void play();
		::Dynamic play_dyn();

		void pause();
		::Dynamic pause_dyn();

		 ::lime::utils::ArrayBufferView readVorbisFileBuffer( ::lime::media::vorbis::VorbisFile vorbisFile,int length);
		::Dynamic readVorbisFileBuffer_dyn();

		void refillBuffers(::cpp::VirtualArray buffers);
		::Dynamic refillBuffers_dyn();

		void stop();
		::Dynamic stop_dyn();

		void streamTimer_onRun();
		::Dynamic streamTimer_onRun_dyn();

		void timer_onRun();
		::Dynamic timer_onRun_dyn();

		int getCurrentTime();
		::Dynamic getCurrentTime_dyn();

		int setCurrentTime(int value);
		::Dynamic setCurrentTime_dyn();

		Float getGain();
		::Dynamic getGain_dyn();

		Float setGain(Float value);
		::Dynamic setGain_dyn();

		int getLength();
		::Dynamic getLength_dyn();

		int setLength(int value);
		::Dynamic setLength_dyn();

		int getLoops();
		::Dynamic getLoops_dyn();

		int setLoops(int value);
		::Dynamic setLoops_dyn();

		 ::lime::math::Vector4 getPosition();
		::Dynamic getPosition_dyn();

		 ::lime::math::Vector4 setPosition( ::lime::math::Vector4 value);
		::Dynamic setPosition_dyn();

};

} // end namespace lime
} // end namespace _internal
} // end namespace backend
} // end namespace native

#endif /* INCLUDED_lime__internal_backend_native_NativeAudioSource */ 
