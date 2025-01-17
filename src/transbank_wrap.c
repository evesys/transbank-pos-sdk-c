/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 3.0.12
 *
 * This file is not intended to be easily readable and contains a number of
 * coding conventions designed to improve portability and efficiency. Do not make
 * changes to this file unless you know what you are doing--modify the SWIG
 * interface file instead.
 * ----------------------------------------------------------------------------- */


#ifndef SWIGJAVA
#define SWIGJAVA
#endif


/* -----------------------------------------------------------------------------
 *  This section contains generic SWIG labels for method/variable
 *  declarations/attributes, and other compiler dependent labels.
 * ----------------------------------------------------------------------------- */

/* template workaround for compilers that cannot correctly implement the C++ standard */
#ifndef SWIGTEMPLATEDISAMBIGUATOR
# if defined(__SUNPRO_CC) && (__SUNPRO_CC <= 0x560)
#  define SWIGTEMPLATEDISAMBIGUATOR template
# elif defined(__HP_aCC)
/* Needed even with `aCC -AA' when `aCC -V' reports HP ANSI C++ B3910B A.03.55 */
/* If we find a maximum version that requires this, the test would be __HP_aCC <= 35500 for A.03.55 */
#  define SWIGTEMPLATEDISAMBIGUATOR template
# else
#  define SWIGTEMPLATEDISAMBIGUATOR
# endif
#endif

/* inline attribute */
#ifndef SWIGINLINE
# if defined(__cplusplus) || (defined(__GNUC__) && !defined(__STRICT_ANSI__))
#   define SWIGINLINE inline
# else
#   define SWIGINLINE
# endif
#endif

/* attribute recognised by some compilers to avoid 'unused' warnings */
#ifndef SWIGUNUSED
# if defined(__GNUC__)
#   if !(defined(__cplusplus)) || (__GNUC__ > 3 || (__GNUC__ == 3 && __GNUC_MINOR__ >= 4))
#     define SWIGUNUSED __attribute__ ((__unused__))
#   else
#     define SWIGUNUSED
#   endif
# elif defined(__ICC)
#   define SWIGUNUSED __attribute__ ((__unused__))
# else
#   define SWIGUNUSED
# endif
#endif

#ifndef SWIG_MSC_UNSUPPRESS_4505
# if defined(_MSC_VER)
#   pragma warning(disable : 4505) /* unreferenced local function has been removed */
# endif
#endif

#ifndef SWIGUNUSEDPARM
# ifdef __cplusplus
#   define SWIGUNUSEDPARM(p)
# else
#   define SWIGUNUSEDPARM(p) p SWIGUNUSED
# endif
#endif

/* internal SWIG method */
#ifndef SWIGINTERN
# define SWIGINTERN static SWIGUNUSED
#endif

/* internal inline SWIG method */
#ifndef SWIGINTERNINLINE
# define SWIGINTERNINLINE SWIGINTERN SWIGINLINE
#endif

/* exporting methods */
#if defined(__GNUC__)
#  if (__GNUC__ >= 4) || (__GNUC__ == 3 && __GNUC_MINOR__ >= 4)
#    ifndef GCC_HASCLASSVISIBILITY
#      define GCC_HASCLASSVISIBILITY
#    endif
#  endif
#endif

#ifndef SWIGEXPORT
# if defined(_WIN32) || defined(__WIN32__) || defined(__CYGWIN__)
#   if defined(STATIC_LINKED)
#     define SWIGEXPORT
#   else
#     define SWIGEXPORT __declspec(dllexport)
#   endif
# else
#   if defined(__GNUC__) && defined(GCC_HASCLASSVISIBILITY)
#     define SWIGEXPORT __attribute__ ((visibility("default")))
#   else
#     define SWIGEXPORT
#   endif
# endif
#endif

/* calling conventions for Windows */
#ifndef SWIGSTDCALL
# if defined(_WIN32) || defined(__WIN32__) || defined(__CYGWIN__)
#   define SWIGSTDCALL __stdcall
# else
#   define SWIGSTDCALL
# endif
#endif

/* Deal with Microsoft's attempt at deprecating C standard runtime functions */
#if !defined(SWIG_NO_CRT_SECURE_NO_DEPRECATE) && defined(_MSC_VER) && !defined(_CRT_SECURE_NO_DEPRECATE)
# define _CRT_SECURE_NO_DEPRECATE
#endif

/* Deal with Microsoft's attempt at deprecating methods in the standard C++ library */
#if !defined(SWIG_NO_SCL_SECURE_NO_DEPRECATE) && defined(_MSC_VER) && !defined(_SCL_SECURE_NO_DEPRECATE)
# define _SCL_SECURE_NO_DEPRECATE
#endif

/* Deal with Apple's deprecated 'AssertMacros.h' from Carbon-framework */
#if defined(__APPLE__) && !defined(__ASSERT_MACROS_DEFINE_VERSIONS_WITHOUT_UNDERSCORES)
# define __ASSERT_MACROS_DEFINE_VERSIONS_WITHOUT_UNDERSCORES 0
#endif

/* Intel's compiler complains if a variable which was never initialised is
 * cast to void, which is a common idiom which we use to indicate that we
 * are aware a variable isn't used.  So we just silence that warning.
 * See: https://github.com/swig/swig/issues/192 for more discussion.
 */
#ifdef __INTEL_COMPILER
# pragma warning disable 592
#endif


/* Fix for jlong on some versions of gcc on Windows */
#if defined(__GNUC__) && !defined(__INTEL_COMPILER)
  typedef long long __int64;
#endif

/* Fix for jlong on 64-bit x86 Solaris */
#if defined(__x86_64)
# ifdef _LP64
#   undef _LP64
# endif
#endif

#include <jni.h>
#include <stdlib.h>
#include <string.h>


/* Support for throwing Java exceptions */
typedef enum {
  SWIG_JavaOutOfMemoryError = 1, 
  SWIG_JavaIOException, 
  SWIG_JavaRuntimeException, 
  SWIG_JavaIndexOutOfBoundsException,
  SWIG_JavaArithmeticException,
  SWIG_JavaIllegalArgumentException,
  SWIG_JavaNullPointerException,
  SWIG_JavaDirectorPureVirtual,
  SWIG_JavaUnknownError
} SWIG_JavaExceptionCodes;

typedef struct {
  SWIG_JavaExceptionCodes code;
  const char *java_exception;
} SWIG_JavaExceptions_t;


static void SWIGUNUSED SWIG_JavaThrowException(JNIEnv *jenv, SWIG_JavaExceptionCodes code, const char *msg) {
  jclass excep;
  static const SWIG_JavaExceptions_t java_exceptions[] = {
    { SWIG_JavaOutOfMemoryError, "java/lang/OutOfMemoryError" },
    { SWIG_JavaIOException, "java/io/IOException" },
    { SWIG_JavaRuntimeException, "java/lang/RuntimeException" },
    { SWIG_JavaIndexOutOfBoundsException, "java/lang/IndexOutOfBoundsException" },
    { SWIG_JavaArithmeticException, "java/lang/ArithmeticException" },
    { SWIG_JavaIllegalArgumentException, "java/lang/IllegalArgumentException" },
    { SWIG_JavaNullPointerException, "java/lang/NullPointerException" },
    { SWIG_JavaDirectorPureVirtual, "java/lang/RuntimeException" },
    { SWIG_JavaUnknownError,  "java/lang/UnknownError" },
    { (SWIG_JavaExceptionCodes)0,  "java/lang/UnknownError" }
  };
  const SWIG_JavaExceptions_t *except_ptr = java_exceptions;

  while (except_ptr->code != code && except_ptr->code)
    except_ptr++;

  (*jenv)->ExceptionClear(jenv);
  excep = (*jenv)->FindClass(jenv, except_ptr->java_exception);
  if (excep)
    (*jenv)->ThrowNew(jenv, excep, msg);
}


/* Contract support */

#define SWIG_contract_assert(nullreturn, expr, msg) if (!(expr)) {SWIG_JavaThrowException(jenv, SWIG_JavaIllegalArgumentException, msg); return nullreturn; } else


#include "hex_codes.h"
#include "tbk_baud_rate.h"
#include "responses.h"
#include "transbank_serial_utils.h"
#include "transbank.h"


#ifdef __cplusplus
extern "C" {
#endif

SWIGEXPORT void JNICALL Java_cl_transbank_pos_utils_TransbankWrapJNI_ParamInfo_1index_1set(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2) {
  ParamInfo *arg1 = (ParamInfo *) 0 ;
  int arg2 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(ParamInfo **)&jarg1; 
  arg2 = (int)jarg2; 
  if (arg1) (arg1)->index = arg2;
}


SWIGEXPORT jint JNICALL Java_cl_transbank_pos_utils_TransbankWrapJNI_ParamInfo_1index_1get(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jint jresult = 0 ;
  ParamInfo *arg1 = (ParamInfo *) 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(ParamInfo **)&jarg1; 
  result = (int) ((arg1)->index);
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_cl_transbank_pos_utils_TransbankWrapJNI_ParamInfo_1length_1set(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2) {
  ParamInfo *arg1 = (ParamInfo *) 0 ;
  int arg2 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(ParamInfo **)&jarg1; 
  arg2 = (int)jarg2; 
  if (arg1) (arg1)->length = arg2;
}


SWIGEXPORT jint JNICALL Java_cl_transbank_pos_utils_TransbankWrapJNI_ParamInfo_1length_1get(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jint jresult = 0 ;
  ParamInfo *arg1 = (ParamInfo *) 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(ParamInfo **)&jarg1; 
  result = (int) ((arg1)->length);
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_cl_transbank_pos_utils_TransbankWrapJNI_new_1ParamInfo(JNIEnv *jenv, jclass jcls) {
  jlong jresult = 0 ;
  ParamInfo *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  result = (ParamInfo *)calloc(1, sizeof(ParamInfo));
  *(ParamInfo **)&jresult = result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_cl_transbank_pos_utils_TransbankWrapJNI_delete_1ParamInfo(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  ParamInfo *arg1 = (ParamInfo *) 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(ParamInfo **)&jarg1; 
  free((char *) arg1);
}


SWIGEXPORT void JNICALL Java_cl_transbank_pos_utils_TransbankWrapJNI_BaseResponse_1function_1set(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2) {
  BaseResponse *arg1 = (BaseResponse *) 0 ;
  int arg2 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(BaseResponse **)&jarg1; 
  arg2 = (int)jarg2; 
  if (arg1) (arg1)->function = arg2;
}


SWIGEXPORT jint JNICALL Java_cl_transbank_pos_utils_TransbankWrapJNI_BaseResponse_1function_1get(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jint jresult = 0 ;
  BaseResponse *arg1 = (BaseResponse *) 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(BaseResponse **)&jarg1; 
  result = (int) ((arg1)->function);
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_cl_transbank_pos_utils_TransbankWrapJNI_BaseResponse_1responseCode_1set(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2) {
  BaseResponse *arg1 = (BaseResponse *) 0 ;
  int arg2 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(BaseResponse **)&jarg1; 
  arg2 = (int)jarg2; 
  if (arg1) (arg1)->responseCode = arg2;
}


SWIGEXPORT jint JNICALL Java_cl_transbank_pos_utils_TransbankWrapJNI_BaseResponse_1responseCode_1get(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jint jresult = 0 ;
  BaseResponse *arg1 = (BaseResponse *) 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(BaseResponse **)&jarg1; 
  result = (int) ((arg1)->responseCode);
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_cl_transbank_pos_utils_TransbankWrapJNI_BaseResponse_1commerceCode_1set(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jlong jarg2) {
  BaseResponse *arg1 = (BaseResponse *) 0 ;
  long long arg2 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(BaseResponse **)&jarg1; 
  arg2 = (long long)jarg2; 
  if (arg1) (arg1)->commerceCode = arg2;
}


SWIGEXPORT jlong JNICALL Java_cl_transbank_pos_utils_TransbankWrapJNI_BaseResponse_1commerceCode_1get(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jlong jresult = 0 ;
  BaseResponse *arg1 = (BaseResponse *) 0 ;
  long long result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(BaseResponse **)&jarg1; 
  result = (long long) ((arg1)->commerceCode);
  jresult = (jlong)result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_cl_transbank_pos_utils_TransbankWrapJNI_BaseResponse_1terminalId_1set(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jstring jarg2) {
  BaseResponse *arg1 = (BaseResponse *) 0 ;
  char *arg2 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(BaseResponse **)&jarg1; 
  arg2 = 0;
  if (jarg2) {
    arg2 = (char *)(*jenv)->GetStringUTFChars(jenv, jarg2, 0);
    if (!arg2) return ;
  }
  {
    if(arg2) {
      strncpy((char*)arg1->terminalId, (const char *)arg2, 9-1);
      arg1->terminalId[9-1] = 0;
    } else {
      arg1->terminalId[0] = 0;
    }
  }
  
  if (arg2) (*jenv)->ReleaseStringUTFChars(jenv, jarg2, (const char *)arg2);
}


SWIGEXPORT jstring JNICALL Java_cl_transbank_pos_utils_TransbankWrapJNI_BaseResponse_1terminalId_1get(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jstring jresult = 0 ;
  BaseResponse *arg1 = (BaseResponse *) 0 ;
  char *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(BaseResponse **)&jarg1; 
  result = (char *)(char *) ((arg1)->terminalId);
  if (result) jresult = (*jenv)->NewStringUTF(jenv, (const char *)result);
  return jresult;
}


SWIGEXPORT void JNICALL Java_cl_transbank_pos_utils_TransbankWrapJNI_BaseResponse_1initilized_1set(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2) {
  BaseResponse *arg1 = (BaseResponse *) 0 ;
  int arg2 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(BaseResponse **)&jarg1; 
  arg2 = (int)jarg2; 
  if (arg1) (arg1)->initilized = arg2;
}


SWIGEXPORT jint JNICALL Java_cl_transbank_pos_utils_TransbankWrapJNI_BaseResponse_1initilized_1get(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jint jresult = 0 ;
  BaseResponse *arg1 = (BaseResponse *) 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(BaseResponse **)&jarg1; 
  result = (int) ((arg1)->initilized);
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_cl_transbank_pos_utils_TransbankWrapJNI_new_1BaseResponse(JNIEnv *jenv, jclass jcls) {
  jlong jresult = 0 ;
  BaseResponse *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  result = (BaseResponse *)calloc(1, sizeof(BaseResponse));
  *(BaseResponse **)&jresult = result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_cl_transbank_pos_utils_TransbankWrapJNI_delete_1BaseResponse(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  BaseResponse *arg1 = (BaseResponse *) 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(BaseResponse **)&jarg1; 
  free((char *) arg1);
}


SWIGEXPORT void JNICALL Java_cl_transbank_pos_utils_TransbankWrapJNI_TotalsCResponse_1function_1set(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2) {
  TotalsCResponse *arg1 = (TotalsCResponse *) 0 ;
  int arg2 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(TotalsCResponse **)&jarg1; 
  arg2 = (int)jarg2; 
  if (arg1) (arg1)->function = arg2;
}


SWIGEXPORT jint JNICALL Java_cl_transbank_pos_utils_TransbankWrapJNI_TotalsCResponse_1function_1get(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jint jresult = 0 ;
  TotalsCResponse *arg1 = (TotalsCResponse *) 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(TotalsCResponse **)&jarg1; 
  result = (int) ((arg1)->function);
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_cl_transbank_pos_utils_TransbankWrapJNI_TotalsCResponse_1responseCode_1set(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2) {
  TotalsCResponse *arg1 = (TotalsCResponse *) 0 ;
  int arg2 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(TotalsCResponse **)&jarg1; 
  arg2 = (int)jarg2; 
  if (arg1) (arg1)->responseCode = arg2;
}


SWIGEXPORT jint JNICALL Java_cl_transbank_pos_utils_TransbankWrapJNI_TotalsCResponse_1responseCode_1get(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jint jresult = 0 ;
  TotalsCResponse *arg1 = (TotalsCResponse *) 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(TotalsCResponse **)&jarg1; 
  result = (int) ((arg1)->responseCode);
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_cl_transbank_pos_utils_TransbankWrapJNI_TotalsCResponse_1txCount_1set(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2) {
  TotalsCResponse *arg1 = (TotalsCResponse *) 0 ;
  int arg2 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(TotalsCResponse **)&jarg1; 
  arg2 = (int)jarg2; 
  if (arg1) (arg1)->txCount = arg2;
}


SWIGEXPORT jint JNICALL Java_cl_transbank_pos_utils_TransbankWrapJNI_TotalsCResponse_1txCount_1get(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jint jresult = 0 ;
  TotalsCResponse *arg1 = (TotalsCResponse *) 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(TotalsCResponse **)&jarg1; 
  result = (int) ((arg1)->txCount);
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_cl_transbank_pos_utils_TransbankWrapJNI_TotalsCResponse_1txTotal_1set(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2) {
  TotalsCResponse *arg1 = (TotalsCResponse *) 0 ;
  int arg2 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(TotalsCResponse **)&jarg1; 
  arg2 = (int)jarg2; 
  if (arg1) (arg1)->txTotal = arg2;
}


SWIGEXPORT jint JNICALL Java_cl_transbank_pos_utils_TransbankWrapJNI_TotalsCResponse_1txTotal_1get(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jint jresult = 0 ;
  TotalsCResponse *arg1 = (TotalsCResponse *) 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(TotalsCResponse **)&jarg1; 
  result = (int) ((arg1)->txTotal);
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_cl_transbank_pos_utils_TransbankWrapJNI_TotalsCResponse_1initilized_1set(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2) {
  TotalsCResponse *arg1 = (TotalsCResponse *) 0 ;
  int arg2 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(TotalsCResponse **)&jarg1; 
  arg2 = (int)jarg2; 
  if (arg1) (arg1)->initilized = arg2;
}


SWIGEXPORT jint JNICALL Java_cl_transbank_pos_utils_TransbankWrapJNI_TotalsCResponse_1initilized_1get(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jint jresult = 0 ;
  TotalsCResponse *arg1 = (TotalsCResponse *) 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(TotalsCResponse **)&jarg1; 
  result = (int) ((arg1)->initilized);
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_cl_transbank_pos_utils_TransbankWrapJNI_new_1TotalsCResponse(JNIEnv *jenv, jclass jcls) {
  jlong jresult = 0 ;
  TotalsCResponse *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  result = (TotalsCResponse *)calloc(1, sizeof(TotalsCResponse));
  *(TotalsCResponse **)&jresult = result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_cl_transbank_pos_utils_TransbankWrapJNI_delete_1TotalsCResponse(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  TotalsCResponse *arg1 = (TotalsCResponse *) 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(TotalsCResponse **)&jarg1; 
  free((char *) arg1);
}


SWIGEXPORT void JNICALL Java_cl_transbank_pos_utils_TransbankWrapJNI_RefundCResponse_1function_1set(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2) {
  RefundCResponse *arg1 = (RefundCResponse *) 0 ;
  int arg2 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(RefundCResponse **)&jarg1; 
  arg2 = (int)jarg2; 
  if (arg1) (arg1)->function = arg2;
}


SWIGEXPORT jint JNICALL Java_cl_transbank_pos_utils_TransbankWrapJNI_RefundCResponse_1function_1get(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jint jresult = 0 ;
  RefundCResponse *arg1 = (RefundCResponse *) 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(RefundCResponse **)&jarg1; 
  result = (int) ((arg1)->function);
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_cl_transbank_pos_utils_TransbankWrapJNI_RefundCResponse_1responseCode_1set(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2) {
  RefundCResponse *arg1 = (RefundCResponse *) 0 ;
  int arg2 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(RefundCResponse **)&jarg1; 
  arg2 = (int)jarg2; 
  if (arg1) (arg1)->responseCode = arg2;
}


SWIGEXPORT jint JNICALL Java_cl_transbank_pos_utils_TransbankWrapJNI_RefundCResponse_1responseCode_1get(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jint jresult = 0 ;
  RefundCResponse *arg1 = (RefundCResponse *) 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(RefundCResponse **)&jarg1; 
  result = (int) ((arg1)->responseCode);
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_cl_transbank_pos_utils_TransbankWrapJNI_RefundCResponse_1commerceCode_1set(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jlong jarg2) {
  RefundCResponse *arg1 = (RefundCResponse *) 0 ;
  long long arg2 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(RefundCResponse **)&jarg1; 
  arg2 = (long long)jarg2; 
  if (arg1) (arg1)->commerceCode = arg2;
}


SWIGEXPORT jlong JNICALL Java_cl_transbank_pos_utils_TransbankWrapJNI_RefundCResponse_1commerceCode_1get(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jlong jresult = 0 ;
  RefundCResponse *arg1 = (RefundCResponse *) 0 ;
  long long result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(RefundCResponse **)&jarg1; 
  result = (long long) ((arg1)->commerceCode);
  jresult = (jlong)result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_cl_transbank_pos_utils_TransbankWrapJNI_RefundCResponse_1terminalId_1set(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jstring jarg2) {
  RefundCResponse *arg1 = (RefundCResponse *) 0 ;
  char *arg2 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(RefundCResponse **)&jarg1; 
  arg2 = 0;
  if (jarg2) {
    arg2 = (char *)(*jenv)->GetStringUTFChars(jenv, jarg2, 0);
    if (!arg2) return ;
  }
  {
    if(arg2) {
      strncpy((char*)arg1->terminalId, (const char *)arg2, 9-1);
      arg1->terminalId[9-1] = 0;
    } else {
      arg1->terminalId[0] = 0;
    }
  }
  
  if (arg2) (*jenv)->ReleaseStringUTFChars(jenv, jarg2, (const char *)arg2);
}


SWIGEXPORT jstring JNICALL Java_cl_transbank_pos_utils_TransbankWrapJNI_RefundCResponse_1terminalId_1get(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jstring jresult = 0 ;
  RefundCResponse *arg1 = (RefundCResponse *) 0 ;
  char *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(RefundCResponse **)&jarg1; 
  result = (char *)(char *) ((arg1)->terminalId);
  if (result) jresult = (*jenv)->NewStringUTF(jenv, (const char *)result);
  return jresult;
}


SWIGEXPORT void JNICALL Java_cl_transbank_pos_utils_TransbankWrapJNI_RefundCResponse_1authorizationCode_1set(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jstring jarg2) {
  RefundCResponse *arg1 = (RefundCResponse *) 0 ;
  char *arg2 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(RefundCResponse **)&jarg1; 
  arg2 = 0;
  if (jarg2) {
    arg2 = (char *)(*jenv)->GetStringUTFChars(jenv, jarg2, 0);
    if (!arg2) return ;
  }
  {
    if(arg2) {
      strncpy((char*)arg1->authorizationCode, (const char *)arg2, 7-1);
      arg1->authorizationCode[7-1] = 0;
    } else {
      arg1->authorizationCode[0] = 0;
    }
  }
  
  if (arg2) (*jenv)->ReleaseStringUTFChars(jenv, jarg2, (const char *)arg2);
}


SWIGEXPORT jstring JNICALL Java_cl_transbank_pos_utils_TransbankWrapJNI_RefundCResponse_1authorizationCode_1get(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jstring jresult = 0 ;
  RefundCResponse *arg1 = (RefundCResponse *) 0 ;
  char *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(RefundCResponse **)&jarg1; 
  result = (char *)(char *) ((arg1)->authorizationCode);
  if (result) jresult = (*jenv)->NewStringUTF(jenv, (const char *)result);
  return jresult;
}


SWIGEXPORT void JNICALL Java_cl_transbank_pos_utils_TransbankWrapJNI_RefundCResponse_1operationID_1set(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2) {
  RefundCResponse *arg1 = (RefundCResponse *) 0 ;
  int arg2 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(RefundCResponse **)&jarg1; 
  arg2 = (int)jarg2; 
  if (arg1) (arg1)->operationID = arg2;
}


SWIGEXPORT jint JNICALL Java_cl_transbank_pos_utils_TransbankWrapJNI_RefundCResponse_1operationID_1get(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jint jresult = 0 ;
  RefundCResponse *arg1 = (RefundCResponse *) 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(RefundCResponse **)&jarg1; 
  result = (int) ((arg1)->operationID);
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_cl_transbank_pos_utils_TransbankWrapJNI_RefundCResponse_1initilized_1set(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2) {
  RefundCResponse *arg1 = (RefundCResponse *) 0 ;
  int arg2 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(RefundCResponse **)&jarg1; 
  arg2 = (int)jarg2; 
  if (arg1) (arg1)->initilized = arg2;
}


SWIGEXPORT jint JNICALL Java_cl_transbank_pos_utils_TransbankWrapJNI_RefundCResponse_1initilized_1get(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jint jresult = 0 ;
  RefundCResponse *arg1 = (RefundCResponse *) 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(RefundCResponse **)&jarg1; 
  result = (int) ((arg1)->initilized);
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_cl_transbank_pos_utils_TransbankWrapJNI_new_1RefundCResponse(JNIEnv *jenv, jclass jcls) {
  jlong jresult = 0 ;
  RefundCResponse *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  result = (RefundCResponse *)calloc(1, sizeof(RefundCResponse));
  *(RefundCResponse **)&jresult = result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_cl_transbank_pos_utils_TransbankWrapJNI_delete_1RefundCResponse(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  RefundCResponse *arg1 = (RefundCResponse *) 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(RefundCResponse **)&jarg1; 
  free((char *) arg1);
}


SWIGEXPORT jstring JNICALL Java_cl_transbank_pos_utils_TransbankWrapJNI_list_1ports(JNIEnv *jenv, jclass jcls) {
  jstring jresult = 0 ;
  char *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  result = (char *)list_ports();
  if (result) jresult = (*jenv)->NewStringUTF(jenv, (const char *)result);
  return jresult;
}


SWIGEXPORT jstring JNICALL Java_cl_transbank_pos_utils_TransbankWrapJNI_get_1port_1name(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  jstring jresult = 0 ;
  struct sp_port *arg1 = (struct sp_port *) 0 ;
  char *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(struct sp_port **)&jarg1; 
  result = (char *)get_port_name(arg1);
  if (result) jresult = (*jenv)->NewStringUTF(jenv, (const char *)result);
  return jresult;
}


SWIGEXPORT jint JNICALL Java_cl_transbank_pos_utils_TransbankWrapJNI_read_1bytes(JNIEnv *jenv, jclass jcls, jlong jarg1, jstring jarg2, jlong jarg3) {
  jint jresult = 0 ;
  struct sp_port *arg1 = (struct sp_port *) 0 ;
  char *arg2 = (char *) 0 ;
  Message arg3 ;
  Message *argp3 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(struct sp_port **)&jarg1; 
  arg2 = 0;
  if (jarg2) {
    arg2 = (char *)(*jenv)->GetStringUTFChars(jenv, jarg2, 0);
    if (!arg2) return 0;
  }
  argp3 = *(Message **)&jarg3; 
  if (!argp3) {
    SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "Attempt to dereference null Message");
    return 0;
  }
  arg3 = *argp3; 
  result = (int)read_bytes(arg1,arg2,arg3);
  jresult = (jint)result; 
  if (arg2) (*jenv)->ReleaseStringUTFChars(jenv, jarg2, (const char *)arg2);
  return jresult;
}


SWIGEXPORT jint JNICALL Java_cl_transbank_pos_utils_TransbankWrapJNI_read_1ack(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  jint jresult = 0 ;
  struct sp_port *arg1 = (struct sp_port *) 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(struct sp_port **)&jarg1; 
  result = (int)read_ack(arg1);
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jshort JNICALL Java_cl_transbank_pos_utils_TransbankWrapJNI_calculate_1lrc(JNIEnv *jenv, jclass jcls, jstring jarg1, jint jarg2) {
  jshort jresult = 0 ;
  char *arg1 = (char *) 0 ;
  int arg2 ;
  unsigned char result;
  
  (void)jenv;
  (void)jcls;
  arg1 = 0;
  if (jarg1) {
    arg1 = (char *)(*jenv)->GetStringUTFChars(jenv, jarg1, 0);
    if (!arg1) return 0;
  }
  arg2 = (int)jarg2; 
  result = (unsigned char)calculate_lrc(arg1,arg2);
  jresult = (jshort)result; 
  if (arg1) (*jenv)->ReleaseStringUTFChars(jenv, jarg1, (const char *)arg1);
  return jresult;
}


SWIGEXPORT jint JNICALL Java_cl_transbank_pos_utils_TransbankWrapJNI_reply_1ack(JNIEnv *jenv, jclass jcls, jlong jarg1, jstring jarg2, jint jarg3) {
  jint jresult = 0 ;
  struct sp_port *arg1 = (struct sp_port *) 0 ;
  char *arg2 = (char *) 0 ;
  int arg3 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(struct sp_port **)&jarg1; 
  arg2 = 0;
  if (jarg2) {
    arg2 = (char *)(*jenv)->GetStringUTFChars(jenv, jarg2, 0);
    if (!arg2) return 0;
  }
  arg3 = (int)jarg3; 
  result = (int)reply_ack(arg1,arg2,arg3);
  jresult = (jint)result; 
  if (arg2) (*jenv)->ReleaseStringUTFChars(jenv, jarg2, (const char *)arg2);
  return jresult;
}


SWIGEXPORT jint JNICALL Java_cl_transbank_pos_utils_TransbankWrapJNI_write_1message(JNIEnv *jenv, jclass jcls, jlong jarg1, jlong jarg2) {
  jint jresult = 0 ;
  struct sp_port *arg1 = (struct sp_port *) 0 ;
  Message arg2 ;
  Message *argp2 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(struct sp_port **)&jarg1; 
  argp2 = *(Message **)&jarg2; 
  if (!argp2) {
    SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "Attempt to dereference null Message");
    return 0;
  }
  arg2 = *argp2; 
  result = (int)write_message(arg1,arg2);
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jint JNICALL Java_cl_transbank_pos_utils_TransbankWrapJNI_open_1port(JNIEnv *jenv, jclass jcls, jstring jarg1, jint jarg2) {
  jint jresult = 0 ;
  char *arg1 = (char *) 0 ;
  int arg2 ;
  enum TbkReturn result;
  
  (void)jenv;
  (void)jcls;
  arg1 = 0;
  if (jarg1) {
    arg1 = (char *)(*jenv)->GetStringUTFChars(jenv, jarg1, 0);
    if (!arg1) return 0;
  }
  arg2 = (int)jarg2; 
  result = (enum TbkReturn)open_port(arg1,arg2);
  jresult = (jint)result; 
  if (arg1) (*jenv)->ReleaseStringUTFChars(jenv, jarg1, (const char *)arg1);
  return jresult;
}


SWIGEXPORT jstring JNICALL Java_cl_transbank_pos_utils_TransbankWrapJNI_sale(JNIEnv *jenv, jclass jcls, jint jarg1, jstring jarg2, jboolean jarg3) {
  jstring jresult = 0 ;
  int arg1 ;
  char *arg2 = (char *) 0 ;
  bool arg3 ;
  char *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = (int)jarg1; 
  arg2 = 0;
  if (jarg2) {
    arg2 = (char *)(*jenv)->GetStringUTFChars(jenv, jarg2, 0);
    if (!arg2) return 0;
  }
  arg3 = jarg3 ? true : false; 
  result = (char *)sale(arg1,arg2,arg3);
  if (result) jresult = (*jenv)->NewStringUTF(jenv, (const char *)result);
  if (arg2) (*jenv)->ReleaseStringUTFChars(jenv, jarg2, (const char *)arg2);
  return jresult;
}


SWIGEXPORT jstring JNICALL Java_cl_transbank_pos_utils_TransbankWrapJNI_last_1sale(JNIEnv *jenv, jclass jcls) {
  jstring jresult = 0 ;
  char *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  result = (char *)last_sale();
  if (result) jresult = (*jenv)->NewStringUTF(jenv, (const char *)result);
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_cl_transbank_pos_utils_TransbankWrapJNI_do_1close(JNIEnv *jenv, jclass jcls) {
  jlong jresult = 0 ;
  BaseResponse result;
  
  (void)jenv;
  (void)jcls;
  result = do_close();
  {
    BaseResponse * resultptr = (BaseResponse *) malloc(sizeof(BaseResponse));
    memmove(resultptr, &result, sizeof(BaseResponse));
    *(BaseResponse **)&jresult = resultptr;
  }
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_cl_transbank_pos_utils_TransbankWrapJNI_load_1keys(JNIEnv *jenv, jclass jcls) {
  jlong jresult = 0 ;
  BaseResponse result;
  
  (void)jenv;
  (void)jcls;
  result = load_keys();
  {
    BaseResponse * resultptr = (BaseResponse *) malloc(sizeof(BaseResponse));
    memmove(resultptr, &result, sizeof(BaseResponse));
    *(BaseResponse **)&jresult = resultptr;
  }
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_cl_transbank_pos_utils_TransbankWrapJNI_get_1totals(JNIEnv *jenv, jclass jcls) {
  jlong jresult = 0 ;
  TotalsCResponse result;
  
  (void)jenv;
  (void)jcls;
  result = get_totals();
  {
    TotalsCResponse * resultptr = (TotalsCResponse *) malloc(sizeof(TotalsCResponse));
    memmove(resultptr, &result, sizeof(TotalsCResponse));
    *(TotalsCResponse **)&jresult = resultptr;
  }
  return jresult;
}


SWIGEXPORT jint JNICALL Java_cl_transbank_pos_utils_TransbankWrapJNI_do_1poll(JNIEnv *jenv, jclass jcls) {
  jint jresult = 0 ;
  enum TbkReturn result;
  
  (void)jenv;
  (void)jcls;
  result = (enum TbkReturn)do_poll();
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jint JNICALL Java_cl_transbank_pos_utils_TransbankWrapJNI_set_1normal_1mode(JNIEnv *jenv, jclass jcls) {
  jint jresult = 0 ;
  enum TbkReturn result;
  
  (void)jenv;
  (void)jcls;
  result = (enum TbkReturn)set_normal_mode();
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jint JNICALL Java_cl_transbank_pos_utils_TransbankWrapJNI_close_1port(JNIEnv *jenv, jclass jcls) {
  jint jresult = 0 ;
  enum TbkReturn result;
  
  (void)jenv;
  (void)jcls;
  result = (enum TbkReturn)close_port();
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_cl_transbank_pos_utils_TransbankWrapJNI_refund(JNIEnv *jenv, jclass jcls, jint jarg1) {
  jlong jresult = 0 ;
  int arg1 ;
  RefundCResponse result;
  
  (void)jenv;
  (void)jcls;
  arg1 = (int)jarg1; 
  result = refund(arg1);
  {
    RefundCResponse * resultptr = (RefundCResponse *) malloc(sizeof(RefundCResponse));
    memmove(resultptr, &result, sizeof(RefundCResponse));
    *(RefundCResponse **)&jresult = resultptr;
  }
  return jresult;
}


SWIGEXPORT jstring JNICALL Java_cl_transbank_pos_utils_TransbankWrapJNI_sales_1detail(JNIEnv *jenv, jclass jcls, jboolean jarg1) {
  jstring jresult = 0 ;
  bool arg1 ;
  char *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = jarg1 ? true : false; 
  result = (char *)sales_detail(arg1);
  if (result) jresult = (*jenv)->NewStringUTF(jenv, (const char *)result);
  return jresult;
}


#ifdef __cplusplus
}
#endif

