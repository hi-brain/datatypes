// This file is generated by omniidl (C++ backend)- omniORB_4_1. Do not edit.
#ifndef __hi_brain_hh__
#define __hi_brain_hh__

#ifndef __CORBA_H_EXTERNAL_GUARD__
#include <omniORB4/CORBA.h>
#endif

#ifndef  USE_stub_in_nt_dll
# define USE_stub_in_nt_dll_NOT_DEFINED_hi_brain
#endif
#ifndef  USE_core_stub_in_nt_dll
# define USE_core_stub_in_nt_dll_NOT_DEFINED_hi_brain
#endif
#ifndef  USE_dyn_stub_in_nt_dll
# define USE_dyn_stub_in_nt_dll_NOT_DEFINED_hi_brain
#endif






#ifdef USE_stub_in_nt_dll
# ifndef USE_core_stub_in_nt_dll
#  define USE_core_stub_in_nt_dll
# endif
# ifndef USE_dyn_stub_in_nt_dll
#  define USE_dyn_stub_in_nt_dll
# endif
#endif

#ifdef _core_attr
# error "A local CPP macro _core_attr has already been defined."
#else
# ifdef  USE_core_stub_in_nt_dll
#  define _core_attr _OMNIORB_NTDLL_IMPORT
# else
#  define _core_attr
# endif
#endif

#ifdef _dyn_attr
# error "A local CPP macro _dyn_attr has already been defined."
#else
# ifdef  USE_dyn_stub_in_nt_dll
#  define _dyn_attr _OMNIORB_NTDLL_IMPORT
# else
#  define _dyn_attr
# endif
#endif





_CORBA_MODULE Vision

_CORBA_MODULE_BEG

  struct Time {
    typedef _CORBA_ConstrType_Fix_Var<Time> _var_type;

    
    ::CORBA::ULong sec;

    ::CORBA::ULong msec;

  

    void operator>>= (cdrStream &) const;
    void operator<<= (cdrStream &);
  };

  typedef Time::_var_type Time_var;

  typedef Time& Time_out;

  _CORBA_MODULE_VAR _dyn_attr const ::CORBA::TypeCode_ptr _tc_Time;

  struct Matrix {
    typedef _CORBA_ConstrType_Variable_Var<Matrix> _var_type;

    
    Time tm;

    ::CORBA::UShort type;

    typedef _CORBA_Unbounded_Sequence_String _name_seq;
    _name_seq name;

    typedef _CORBA_Unbounded_Sequence_w_FixSizeElement< ::CORBA::Long, 4, 4 >  _div_seq;
    _div_seq div;

    typedef _CORBA_Unbounded_Sequence_Octet _pixels_seq;
    _pixels_seq pixels;

  

    void operator>>= (cdrStream &) const;
    void operator<<= (cdrStream &);
  };

  typedef Matrix::_var_type Matrix_var;

  typedef _CORBA_ConstrType_Variable_OUT_arg< Matrix,Matrix_var > Matrix_out;

  _CORBA_MODULE_VAR _dyn_attr const ::CORBA::TypeCode_ptr _tc_Matrix;

  struct Matarr {
    typedef _CORBA_ConstrType_Variable_Var<Matarr> _var_type;

    
    typedef _CORBA_Unbounded_Sequence< Matrix >  _arr_seq;
    _arr_seq arr;

  

    void operator>>= (cdrStream &) const;
    void operator<<= (cdrStream &);
  };

  typedef Matarr::_var_type Matarr_var;

  typedef _CORBA_ConstrType_Variable_OUT_arg< Matarr,Matarr_var > Matarr_out;

  _CORBA_MODULE_VAR _dyn_attr const ::CORBA::TypeCode_ptr _tc_Matarr;

_CORBA_MODULE_END



_CORBA_MODULE POA_Vision
_CORBA_MODULE_BEG

_CORBA_MODULE_END



_CORBA_MODULE OBV_Vision
_CORBA_MODULE_BEG

_CORBA_MODULE_END





#undef _core_attr
#undef _dyn_attr

extern void operator<<=(::CORBA::Any& _a, const Vision::Time& _s);
extern void operator<<=(::CORBA::Any& _a, Vision::Time* _sp);
extern _CORBA_Boolean operator>>=(const ::CORBA::Any& _a, Vision::Time*& _sp);
extern _CORBA_Boolean operator>>=(const ::CORBA::Any& _a, const Vision::Time*& _sp);

extern void operator<<=(::CORBA::Any& _a, const Vision::Matrix& _s);
extern void operator<<=(::CORBA::Any& _a, Vision::Matrix* _sp);
extern _CORBA_Boolean operator>>=(const ::CORBA::Any& _a, Vision::Matrix*& _sp);
extern _CORBA_Boolean operator>>=(const ::CORBA::Any& _a, const Vision::Matrix*& _sp);

extern void operator<<=(::CORBA::Any& _a, const Vision::Matarr& _s);
extern void operator<<=(::CORBA::Any& _a, Vision::Matarr* _sp);
extern _CORBA_Boolean operator>>=(const ::CORBA::Any& _a, Vision::Matarr*& _sp);
extern _CORBA_Boolean operator>>=(const ::CORBA::Any& _a, const Vision::Matarr*& _sp);





#ifdef   USE_stub_in_nt_dll_NOT_DEFINED_hi_brain
# undef  USE_stub_in_nt_dll
# undef  USE_stub_in_nt_dll_NOT_DEFINED_hi_brain
#endif
#ifdef   USE_core_stub_in_nt_dll_NOT_DEFINED_hi_brain
# undef  USE_core_stub_in_nt_dll
# undef  USE_core_stub_in_nt_dll_NOT_DEFINED_hi_brain
#endif
#ifdef   USE_dyn_stub_in_nt_dll_NOT_DEFINED_hi_brain
# undef  USE_dyn_stub_in_nt_dll
# undef  USE_dyn_stub_in_nt_dll_NOT_DEFINED_hi_brain
#endif

#endif  // __hi_brain_hh__

