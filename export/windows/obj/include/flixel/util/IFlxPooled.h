#ifndef INCLUDED_flixel_util_IFlxPooled
#define INCLUDED_flixel_util_IFlxPooled

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,util,IFlxPooled)

namespace flixel{
namespace util{


class HXCPP_CLASS_ATTRIBUTES IFlxPooled_obj {
	public:
		typedef  ::flixel::util::IFlxDestroyable_obj super;
		HX_DO_INTERFACE_RTTI;

		void (::hx::Object :: *_hx_destroy)(); 
		static inline void destroy( ::Dynamic _hx_) {
			(_hx_.mPtr->*( ::hx::interface_cast< ::flixel::util::IFlxPooled_obj *>(_hx_.mPtr->_hx_getInterface(0x9aa322a2)))->_hx_destroy)();
		}
		void (::hx::Object :: *_hx_put)(); 
		static inline void put( ::Dynamic _hx_) {
			(_hx_.mPtr->*( ::hx::interface_cast< ::flixel::util::IFlxPooled_obj *>(_hx_.mPtr->_hx_getInterface(0x9aa322a2)))->_hx_put)();
		}
};

} // end namespace flixel
} // end namespace util

#endif /* INCLUDED_flixel_util_IFlxPooled */ 
