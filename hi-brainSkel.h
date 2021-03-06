// -*- C++ -*-
/*!
 *
 * THIS FILE IS GENERATED AUTOMATICALLY!! DO NOT EDIT!!
 *
 * @file hi-brainSkel.h 
 * @brief hi-brain server skeleton header wrapper code
 * @date Sat Mar 18 18:08:01 2017 
 *
 */

#ifndef _HI-BRAINSKEL_H
#define _HI-BRAINSKEL_H



#include <rtm/config_rtc.h>
#undef PACKAGE_BUGREPORT
#undef PACKAGE_NAME
#undef PACKAGE_STRING
#undef PACKAGE_TARNAME
#undef PACKAGE_VERSION

#if   defined ORB_IS_TAO
#  include "hi-brainC.h"
#  include "hi-brainS.h"
#elif defined ORB_IS_OMNIORB
#  if defined(WIN32) || defined(_WIN32) || defined(__WIN32__) || defined(__NT__)
#    undef USE_stub_in_nt_dll
#  endif
#  include "hi-brain.hh"
#elif defined ORB_IS_MICO
#  include "hi-brain.h"
#elif defined ORB_IS_ORBIT2
#  include "/hi-brain-cpp-stubs.h"
#  include "/hi-brain-cpp-skels.h"
#elif defined ORB_IS_RTORB
#  include "hi-brain.h"
#else
#  error "NO ORB defined"
#endif

#endif // _HI-BRAINSKEL_H
