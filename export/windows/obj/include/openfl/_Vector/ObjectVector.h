#ifndef INCLUDED_openfl__Vector_ObjectVector
#define INCLUDED_openfl__Vector_ObjectVector

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl__Vector_IVector
#include <openfl/_Vector/IVector.h>
#endif
HX_DECLARE_CLASS2(openfl,_Vector,IVector)
HX_DECLARE_CLASS2(openfl,_Vector,ObjectVector)

namespace openfl{
namespace _Vector{


class HXCPP_CLASS_ATTRIBUTES ObjectVector_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef ObjectVector_obj OBJ_;
		ObjectVector_obj();

	public:
		enum { _hx_ClassId = 0x78882ab4 };

		void __construct(::hx::Null< int >  __o_length,::hx::Null< bool >  __o_fixed,::cpp::VirtualArray array,::hx::Null< bool >  __o_forceCopy);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="openfl._Vector.ObjectVector")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"openfl._Vector.ObjectVector"); }
		static ::hx::ObjectPtr< ObjectVector_obj > __new(::hx::Null< int >  __o_length,::hx::Null< bool >  __o_fixed,::cpp::VirtualArray array,::hx::Null< bool >  __o_forceCopy);
		static ::hx::ObjectPtr< ObjectVector_obj > __alloc(::hx::Ctx *_hx_ctx,::hx::Null< int >  __o_length,::hx::Null< bool >  __o_fixed,::cpp::VirtualArray array,::hx::Null< bool >  __o_forceCopy);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ObjectVector_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_("ObjectVector",02,09,7a,39); }

		static void __boot();
		static  ::Dynamic __meta__;
		bool fixed;
		::cpp::VirtualArray _hx___array;
		::Dynamic concat(::Dynamic a);
		::Dynamic concat_dyn();

		::Dynamic copy();
		::Dynamic copy_dyn();

		::Dynamic filter( ::Dynamic callback);
		::Dynamic filter_dyn();

		 ::Dynamic get(int index);
		::Dynamic get_dyn();

		int indexOf( ::Dynamic x,::hx::Null< int >  from);
		::Dynamic indexOf_dyn();

		void insertAt(int index, ::Dynamic element);
		::Dynamic insertAt_dyn();

		 ::Dynamic iterator();
		::Dynamic iterator_dyn();

		::String join(::String sep);
		::Dynamic join_dyn();

		int lastIndexOf( ::Dynamic x, ::Dynamic from);
		::Dynamic lastIndexOf_dyn();

		 ::Dynamic pop();
		::Dynamic pop_dyn();

		int push( ::Dynamic x);
		::Dynamic push_dyn();

		 ::Dynamic removeAt(int index);
		::Dynamic removeAt_dyn();

		::Dynamic reverse();
		::Dynamic reverse_dyn();

		 ::Dynamic set(int index, ::Dynamic value);
		::Dynamic set_dyn();

		 ::Dynamic shift();
		::Dynamic shift_dyn();

		::Dynamic slice(::hx::Null< int >  startIndex, ::Dynamic endIndex);
		::Dynamic slice_dyn();

		void sort( ::Dynamic f);
		::Dynamic sort_dyn();

		::Dynamic splice(int pos,int len);
		::Dynamic splice_dyn();

		 ::Dynamic toJSON();
		::Dynamic toJSON_dyn();

		virtual ::String toString();
		::Dynamic toString_dyn();

		void unshift( ::Dynamic x);
		::Dynamic unshift_dyn();

		int get_length();
		::Dynamic get_length_dyn();

		int set_length(int value);
		::Dynamic set_length_dyn();

};

} // end namespace openfl
} // end namespace _Vector

#endif /* INCLUDED_openfl__Vector_ObjectVector */ 
