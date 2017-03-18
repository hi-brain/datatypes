// -*- C++ -*-
/*!
 *
 * THIS FILE IS GENERATED AUTOMATICALLY!! DO NOT EDIT!!
 *
 * @file hi-brainSkel.cpp 
 * @brief hi-brain server skeleton wrapper
 * @date Sat Mar 18 18:08:01 2017 
 *
 */

#include "hi-brainSkel.h"

#if defined ORB_IS_TAO
#  include "hi-brainC.cpp"
#  include "hi-brainS.cpp"
#elif defined ORB_IS_OMNIORB
#  include "hi-brainSK.cc"
#  include "hi-brainDynSK.cc"
#elif defined ORB_IS_MICO
#  include "hi-brain.cc"
#  include "hi-brain_skel.cc"
#elif defined ORB_IS_ORBIT2
#  include "hi-brain-cpp-stubs.cc"
#  include "hi-brain-cpp-skels.cc"
#elif defined ORB_IS_RTORB
#  include "OpenRTM-aist-decls.h"
#  include "hi-brain-common.c"
#  include "hi-brain-stubs.c"
#  include "hi-brain-skels.c"
#  include "hi-brain-skelimpl.c"
#else
#  error "NO ORB defined"
#endif

// end of hi-brainSkel.cpp
