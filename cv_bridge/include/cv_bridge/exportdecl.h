/*
 * Cross platform macros.
 *
 */
#ifndef _CV_BRIDGE_DECL_H_
#define _CV_BRIDGE_DECL_H_

#include <ros/macros.h>

#ifdef ROS_BUILD_SHARED_LIBS  // ros is being built around shared libraries
  #ifdef cv_bridge_EXPORTS // we are building a shared lib/dll
    #define CV_BRIDGE_DECL ROS_HELPER_EXPORT
  #else  // we are using shared lib/dll
    #define CV_BRIDGE_DECL ROS_HELPER_IMPORT
  #endif
#else  // ros is being built around static libraries
  #define CV_BRIDGE_DECL
#endif

#endif