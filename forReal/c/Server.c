#define HUGE_VALF 0.f
#define HUGE_VALL 0.0
#define NAN 0.f
#include <javatypes.h>
#include <gc.h>
#include <gci_common.h>
#include <exception.h>
#include <ljrt_threading.h>
#if ! (defined HOST_AVR || defined HOST_RTAI_KERNEL)
#include <stdio.h>
#endif
#include <class_indices.h>
#include <iface.h>
#include <reflection.h>
#include <java2c_lxrt.h>
#ifdef __RTAI__
#define KEEP_STATIC_INLINE
#include <config.h>
#include <rtai_lxrt_user.h>
#include <rtai_usp_posix.h>
#endif
#ifdef HOST_RTAI_KERNEL
#include <linux/module.h>
#endif
#if HAS_EXCEPTIONS == SETJMP
#define VOLATILE volatile
#else
#define VOLATILE 
#endif

/* Headers Generation */

#include "java_lang_Object.h"
#include "java_lang_String.h"
#include "java_lang_Cloneable.h"
#include "java_io_Serializable.h"
#include "java_lang_Throwable.h"
#include "java_lang_System.h"
#include "java_lang_PhonyWriter.h"
#include "java_io_PrintStream.h"
#include "java_io_FilterOutputStream.h"
#include "java_io_OutputStream.h"
#include "java_lang_Integer.h"
#include "java_lang_Number.h"
#include "java_lang_Comparable.h"
#include "Monitor.h"
#include "CamToMonitor_t.h"
#include "java_lang_Thread.h"
#include "java_lang_Runnable.h"
#include "FromClient_t.h"
#include "java_io_IOException.h"
#include "java_io_InputStream.h"
#include "java_net_ServerSocket.h"
#include "java_net_Socket.h"
#include "HTTP_t.h"
#include "se_lth_cs_eda040_realcamera_AxisM3006V.h"
#include "java_lang_InterruptedException.h"
#include "java_lang_Exception.h"
#include "java_lang_CharSequence.h"
#include "java_lang_StringBuilder.h"
#include "java_lang_StringBuffer.h"
#include "java_lang_StringIndexOutOfBoundsException.h"
#include "java_lang_IndexOutOfBoundsException.h"
#include "java_lang_RuntimeException.h"
#include "java_lang_Character.h"
#include "java_lang_Character_Subset.h"
#include "java_lang_Math.h"
#include "java_lang_Long.h"
#include "java_lang_Float.h"
#include "java_lang_Double.h"
#include "java_lang_StackTraceElement.h"
#include "java_lang_IllegalArgumentException.h"
#include "java_lang_IllegalStateException.h"
#include "java_lang_ErrWriter.h"
#include "java_lang_NullPointerException.h"
#include "java_lang_PhonyReader.h"
#include "java_io_InterruptedIOException.h"
#include "java_lang_ArrayIndexOutOfBoundsException.h"
#include "java_lang_NumberFormatException.h"
#include "java_lang_Error.h"
#include "java_net_SocketAddress.h"
#include "ToClient_t.h"
#include "java_net_UnknownHostException.h"
#include "java_net_InetSocketAddress.h"
#include "java_net_InetAddress.h"
#include "java_io_SimpleTCPInputStream.h"
#include "java_io_SimpleTCPOutputStream.h"

/* Struct Declarations */

struct java_lang_Object_MethodTblStruct java_lang_Object_MethodTbl;
struct java_lang_Object_ClassStruct java_lang_Object_Class;
GC_REF(java_lang_Object_ClassStatic,java_lang_Object_Static);
GC_REF(LayoutHead,java_lang_Object_LayoutStatic);
GC_REF(LayoutHead,java_lang_Object_Layout);

struct java_lang_String_MethodTblStruct java_lang_String_MethodTbl;
struct java_lang_String_ClassStruct java_lang_String_Class;
GC_REF(java_lang_String_ClassStatic,java_lang_String_Static);
GC_REF(LayoutHead,java_lang_String_LayoutStatic);
GC_REF(LayoutHead,java_lang_String_Layout);

struct ifaz_TblStruct java_lang_String_ifazTbl;

struct java_io_Serializable_MethodTblStruct java_lang_String_java_io_Serializable_MethodTblStruct;
struct java_lang_Comparable_MethodTblStruct java_lang_String_java_lang_Comparable_MethodTblStruct;
struct java_lang_CharSequence_MethodTblStruct java_lang_String_java_lang_CharSequence_MethodTblStruct;
struct java_lang_Cloneable_MethodTblStruct java_lang_Cloneable_MethodTbl;
struct java_lang_Cloneable_ClassStruct java_lang_Cloneable_Class;
GC_REF(java_lang_Cloneable_ClassStatic,java_lang_Cloneable_Static);
GC_REF(LayoutHead,java_lang_Cloneable_LayoutStatic);

struct java_io_Serializable_MethodTblStruct java_io_Serializable_MethodTbl;
struct java_io_Serializable_ClassStruct java_io_Serializable_Class;
GC_REF(java_io_Serializable_ClassStatic,java_io_Serializable_Static);
GC_REF(LayoutHead,java_io_Serializable_LayoutStatic);

struct java_lang_Throwable_MethodTblStruct java_lang_Throwable_MethodTbl;
struct java_lang_Throwable_ClassStruct java_lang_Throwable_Class;
GC_REF(java_lang_Throwable_ClassStatic,java_lang_Throwable_Static);
GC_REF(LayoutHead,java_lang_Throwable_LayoutStatic);
GC_REF(LayoutHead,java_lang_Throwable_Layout);

struct ifaz_TblStruct java_lang_Throwable_ifazTbl;

struct java_io_Serializable_MethodTblStruct java_lang_Throwable_java_io_Serializable_MethodTblStruct;
struct java_lang_System_MethodTblStruct java_lang_System_MethodTbl;
struct java_lang_System_ClassStruct java_lang_System_Class;
GC_REF(java_lang_System_ClassStatic,java_lang_System_Static);
GC_REF(LayoutHead,java_lang_System_LayoutStatic);
GC_REF(LayoutHead,java_lang_System_Layout);

struct java_lang_PhonyWriter_MethodTblStruct java_lang_PhonyWriter_MethodTbl;
struct java_lang_PhonyWriter_ClassStruct java_lang_PhonyWriter_Class;
GC_REF(java_lang_PhonyWriter_ClassStatic,java_lang_PhonyWriter_Static);
GC_REF(LayoutHead,java_lang_PhonyWriter_LayoutStatic);
GC_REF(LayoutHead,java_lang_PhonyWriter_Layout);

struct java_io_PrintStream_MethodTblStruct java_io_PrintStream_MethodTbl;
struct java_io_PrintStream_ClassStruct java_io_PrintStream_Class;
GC_REF(java_io_PrintStream_ClassStatic,java_io_PrintStream_Static);
GC_REF(LayoutHead,java_io_PrintStream_LayoutStatic);
GC_REF(LayoutHead,java_io_PrintStream_Layout);

struct java_io_FilterOutputStream_MethodTblStruct java_io_FilterOutputStream_MethodTbl;
struct java_io_FilterOutputStream_ClassStruct java_io_FilterOutputStream_Class;
GC_REF(java_io_FilterOutputStream_ClassStatic,java_io_FilterOutputStream_Static);
GC_REF(LayoutHead,java_io_FilterOutputStream_LayoutStatic);
GC_REF(LayoutHead,java_io_FilterOutputStream_Layout);

struct java_io_OutputStream_MethodTblStruct java_io_OutputStream_MethodTbl;
struct java_io_OutputStream_ClassStruct java_io_OutputStream_Class;
GC_REF(java_io_OutputStream_ClassStatic,java_io_OutputStream_Static);
GC_REF(LayoutHead,java_io_OutputStream_LayoutStatic);
GC_REF(LayoutHead,java_io_OutputStream_Layout);

struct java_lang_Integer_MethodTblStruct java_lang_Integer_MethodTbl;
struct java_lang_Integer_ClassStruct java_lang_Integer_Class;
GC_REF(java_lang_Integer_ClassStatic,java_lang_Integer_Static);
GC_REF(LayoutHead,java_lang_Integer_LayoutStatic);
GC_REF(LayoutHead,java_lang_Integer_Layout);

struct ifaz_TblStruct java_lang_Integer_ifazTbl;

struct java_io_Serializable_MethodTblStruct java_lang_Integer_java_io_Serializable_MethodTblStruct;
struct java_lang_Comparable_MethodTblStruct java_lang_Integer_java_lang_Comparable_MethodTblStruct;
struct java_lang_Number_MethodTblStruct java_lang_Number_MethodTbl;
struct java_lang_Number_ClassStruct java_lang_Number_Class;
GC_REF(java_lang_Number_ClassStatic,java_lang_Number_Static);
GC_REF(LayoutHead,java_lang_Number_LayoutStatic);
GC_REF(LayoutHead,java_lang_Number_Layout);

struct ifaz_TblStruct java_lang_Number_ifazTbl;

struct java_io_Serializable_MethodTblStruct java_lang_Number_java_io_Serializable_MethodTblStruct;
struct java_lang_Comparable_MethodTblStruct java_lang_Comparable_MethodTbl;
struct java_lang_Comparable_ClassStruct java_lang_Comparable_Class;
GC_REF(java_lang_Comparable_ClassStatic,java_lang_Comparable_Static);
GC_REF(LayoutHead,java_lang_Comparable_LayoutStatic);

struct Monitor_MethodTblStruct Monitor_MethodTbl;
struct Monitor_ClassStruct Monitor_Class;
GC_REF(Monitor_ClassStatic,Monitor_Static);
GC_REF(LayoutHead,Monitor_LayoutStatic);
GC_REF(LayoutHead,Monitor_Layout);

struct CamToMonitor_t_MethodTblStruct CamToMonitor_t_MethodTbl;
struct CamToMonitor_t_ClassStruct CamToMonitor_t_Class;
GC_REF(CamToMonitor_t_ClassStatic,CamToMonitor_t_Static);
GC_REF(LayoutHead,CamToMonitor_t_LayoutStatic);
GC_REF(LayoutHead,CamToMonitor_t_Layout);

struct ifaz_TblStruct CamToMonitor_t_ifazTbl;

struct java_lang_Runnable_MethodTblStruct CamToMonitor_t_java_lang_Runnable_MethodTblStruct;
struct java_lang_Thread_MethodTblStruct java_lang_Thread_MethodTbl;
struct java_lang_Thread_ClassStruct java_lang_Thread_Class;
GC_REF(java_lang_Thread_ClassStatic,java_lang_Thread_Static);
GC_REF(LayoutHead,java_lang_Thread_LayoutStatic);
GC_REF(LayoutHead,java_lang_Thread_Layout);

struct ifaz_TblStruct java_lang_Thread_ifazTbl;

struct java_lang_Runnable_MethodTblStruct java_lang_Thread_java_lang_Runnable_MethodTblStruct;
struct java_lang_Runnable_MethodTblStruct java_lang_Runnable_MethodTbl;
struct java_lang_Runnable_ClassStruct java_lang_Runnable_Class;
GC_REF(java_lang_Runnable_ClassStatic,java_lang_Runnable_Static);
GC_REF(LayoutHead,java_lang_Runnable_LayoutStatic);

struct FromClient_t_MethodTblStruct FromClient_t_MethodTbl;
struct FromClient_t_ClassStruct FromClient_t_Class;
GC_REF(FromClient_t_ClassStatic,FromClient_t_Static);
GC_REF(LayoutHead,FromClient_t_LayoutStatic);
GC_REF(LayoutHead,FromClient_t_Layout);

struct ifaz_TblStruct FromClient_t_ifazTbl;

struct java_lang_Runnable_MethodTblStruct FromClient_t_java_lang_Runnable_MethodTblStruct;
struct java_io_IOException_MethodTblStruct java_io_IOException_MethodTbl;
struct java_io_IOException_ClassStruct java_io_IOException_Class;
GC_REF(java_io_IOException_ClassStatic,java_io_IOException_Static);
GC_REF(LayoutHead,java_io_IOException_LayoutStatic);
GC_REF(LayoutHead,java_io_IOException_Layout);

struct ifaz_TblStruct java_io_IOException_ifazTbl;

struct java_io_Serializable_MethodTblStruct java_io_IOException_java_io_Serializable_MethodTblStruct;
struct java_io_InputStream_MethodTblStruct java_io_InputStream_MethodTbl;
struct java_io_InputStream_ClassStruct java_io_InputStream_Class;
GC_REF(java_io_InputStream_ClassStatic,java_io_InputStream_Static);
GC_REF(LayoutHead,java_io_InputStream_LayoutStatic);
GC_REF(LayoutHead,java_io_InputStream_Layout);

struct java_net_ServerSocket_MethodTblStruct java_net_ServerSocket_MethodTbl;
struct java_net_ServerSocket_ClassStruct java_net_ServerSocket_Class;
GC_REF(java_net_ServerSocket_ClassStatic,java_net_ServerSocket_Static);
GC_REF(LayoutHead,java_net_ServerSocket_LayoutStatic);
GC_REF(LayoutHead,java_net_ServerSocket_Layout);

struct java_net_Socket_MethodTblStruct java_net_Socket_MethodTbl;
struct java_net_Socket_ClassStruct java_net_Socket_Class;
GC_REF(java_net_Socket_ClassStatic,java_net_Socket_Static);
GC_REF(LayoutHead,java_net_Socket_LayoutStatic);
GC_REF(LayoutHead,java_net_Socket_Layout);

struct HTTP_t_MethodTblStruct HTTP_t_MethodTbl;
struct HTTP_t_ClassStruct HTTP_t_Class;
GC_REF(HTTP_t_ClassStatic,HTTP_t_Static);
GC_REF(LayoutHead,HTTP_t_LayoutStatic);
GC_REF(LayoutHead,HTTP_t_Layout);

struct ifaz_TblStruct HTTP_t_ifazTbl;

struct java_lang_Runnable_MethodTblStruct HTTP_t_java_lang_Runnable_MethodTblStruct;
struct se_lth_cs_eda040_realcamera_AxisM3006V_MethodTblStruct se_lth_cs_eda040_realcamera_AxisM3006V_MethodTbl;
struct se_lth_cs_eda040_realcamera_AxisM3006V_ClassStruct se_lth_cs_eda040_realcamera_AxisM3006V_Class;
GC_REF(se_lth_cs_eda040_realcamera_AxisM3006V_ClassStatic,se_lth_cs_eda040_realcamera_AxisM3006V_Static);
GC_REF(LayoutHead,se_lth_cs_eda040_realcamera_AxisM3006V_LayoutStatic);
GC_REF(LayoutHead,se_lth_cs_eda040_realcamera_AxisM3006V_Layout);

struct java_lang_InterruptedException_MethodTblStruct java_lang_InterruptedException_MethodTbl;
struct java_lang_InterruptedException_ClassStruct java_lang_InterruptedException_Class;
GC_REF(java_lang_InterruptedException_ClassStatic,java_lang_InterruptedException_Static);
GC_REF(LayoutHead,java_lang_InterruptedException_LayoutStatic);
GC_REF(LayoutHead,java_lang_InterruptedException_Layout);

struct ifaz_TblStruct java_lang_InterruptedException_ifazTbl;

struct java_io_Serializable_MethodTblStruct java_lang_InterruptedException_java_io_Serializable_MethodTblStruct;
struct java_lang_Exception_MethodTblStruct java_lang_Exception_MethodTbl;
struct java_lang_Exception_ClassStruct java_lang_Exception_Class;
GC_REF(java_lang_Exception_ClassStatic,java_lang_Exception_Static);
GC_REF(LayoutHead,java_lang_Exception_LayoutStatic);
GC_REF(LayoutHead,java_lang_Exception_Layout);

struct ifaz_TblStruct java_lang_Exception_ifazTbl;

struct java_io_Serializable_MethodTblStruct java_lang_Exception_java_io_Serializable_MethodTblStruct;
struct java_lang_CharSequence_MethodTblStruct java_lang_CharSequence_MethodTbl;
struct java_lang_CharSequence_ClassStruct java_lang_CharSequence_Class;
GC_REF(java_lang_CharSequence_ClassStatic,java_lang_CharSequence_Static);
GC_REF(LayoutHead,java_lang_CharSequence_LayoutStatic);

struct java_lang_StringBuilder_MethodTblStruct java_lang_StringBuilder_MethodTbl;
struct java_lang_StringBuilder_ClassStruct java_lang_StringBuilder_Class;
GC_REF(java_lang_StringBuilder_ClassStatic,java_lang_StringBuilder_Static);
GC_REF(LayoutHead,java_lang_StringBuilder_LayoutStatic);
GC_REF(LayoutHead,java_lang_StringBuilder_Layout);

struct ifaz_TblStruct java_lang_StringBuilder_ifazTbl;

struct java_io_Serializable_MethodTblStruct java_lang_StringBuilder_java_io_Serializable_MethodTblStruct;
struct java_lang_CharSequence_MethodTblStruct java_lang_StringBuilder_java_lang_CharSequence_MethodTblStruct;
struct java_lang_StringBuffer_MethodTblStruct java_lang_StringBuffer_MethodTbl;
struct java_lang_StringBuffer_ClassStruct java_lang_StringBuffer_Class;
GC_REF(java_lang_StringBuffer_ClassStatic,java_lang_StringBuffer_Static);
GC_REF(LayoutHead,java_lang_StringBuffer_LayoutStatic);
GC_REF(LayoutHead,java_lang_StringBuffer_Layout);

struct ifaz_TblStruct java_lang_StringBuffer_ifazTbl;

struct java_io_Serializable_MethodTblStruct java_lang_StringBuffer_java_io_Serializable_MethodTblStruct;
struct java_lang_CharSequence_MethodTblStruct java_lang_StringBuffer_java_lang_CharSequence_MethodTblStruct;
struct java_lang_StringIndexOutOfBoundsException_MethodTblStruct java_lang_StringIndexOutOfBoundsException_MethodTbl;
struct java_lang_StringIndexOutOfBoundsException_ClassStruct java_lang_StringIndexOutOfBoundsException_Class;
GC_REF(java_lang_StringIndexOutOfBoundsException_ClassStatic,java_lang_StringIndexOutOfBoundsException_Static);
GC_REF(LayoutHead,java_lang_StringIndexOutOfBoundsException_LayoutStatic);
GC_REF(LayoutHead,java_lang_StringIndexOutOfBoundsException_Layout);

struct ifaz_TblStruct java_lang_StringIndexOutOfBoundsException_ifazTbl;

struct java_io_Serializable_MethodTblStruct java_lang_StringIndexOutOfBoundsException_java_io_Serializable_MethodTblStruct;
struct java_lang_IndexOutOfBoundsException_MethodTblStruct java_lang_IndexOutOfBoundsException_MethodTbl;
struct java_lang_IndexOutOfBoundsException_ClassStruct java_lang_IndexOutOfBoundsException_Class;
GC_REF(java_lang_IndexOutOfBoundsException_ClassStatic,java_lang_IndexOutOfBoundsException_Static);
GC_REF(LayoutHead,java_lang_IndexOutOfBoundsException_LayoutStatic);
GC_REF(LayoutHead,java_lang_IndexOutOfBoundsException_Layout);

struct ifaz_TblStruct java_lang_IndexOutOfBoundsException_ifazTbl;

struct java_io_Serializable_MethodTblStruct java_lang_IndexOutOfBoundsException_java_io_Serializable_MethodTblStruct;
struct java_lang_RuntimeException_MethodTblStruct java_lang_RuntimeException_MethodTbl;
struct java_lang_RuntimeException_ClassStruct java_lang_RuntimeException_Class;
GC_REF(java_lang_RuntimeException_ClassStatic,java_lang_RuntimeException_Static);
GC_REF(LayoutHead,java_lang_RuntimeException_LayoutStatic);
GC_REF(LayoutHead,java_lang_RuntimeException_Layout);

struct ifaz_TblStruct java_lang_RuntimeException_ifazTbl;

struct java_io_Serializable_MethodTblStruct java_lang_RuntimeException_java_io_Serializable_MethodTblStruct;
struct java_lang_Character_MethodTblStruct java_lang_Character_MethodTbl;
struct java_lang_Character_ClassStruct java_lang_Character_Class;
GC_REF(java_lang_Character_ClassStatic,java_lang_Character_Static);
GC_REF(LayoutHead,java_lang_Character_LayoutStatic);
GC_REF(LayoutHead,java_lang_Character_Layout);

struct ifaz_TblStruct java_lang_Character_ifazTbl;

struct java_io_Serializable_MethodTblStruct java_lang_Character_java_io_Serializable_MethodTblStruct;
struct java_lang_Comparable_MethodTblStruct java_lang_Character_java_lang_Comparable_MethodTblStruct;
struct java_lang_Character_Subset_MethodTblStruct java_lang_Character_Subset_MethodTbl;
struct java_lang_Character_Subset_ClassStruct java_lang_Character_Subset_Class;
GC_REF(java_lang_Character_Subset_ClassStatic,java_lang_Character_Subset_Static);
GC_REF(LayoutHead,java_lang_Character_Subset_LayoutStatic);
GC_REF(LayoutHead,java_lang_Character_Subset_Layout);

struct java_lang_Math_MethodTblStruct java_lang_Math_MethodTbl;
struct java_lang_Math_ClassStruct java_lang_Math_Class;
GC_REF(java_lang_Math_ClassStatic,java_lang_Math_Static);
GC_REF(LayoutHead,java_lang_Math_LayoutStatic);
GC_REF(LayoutHead,java_lang_Math_Layout);

struct java_lang_Long_MethodTblStruct java_lang_Long_MethodTbl;
struct java_lang_Long_ClassStruct java_lang_Long_Class;
GC_REF(java_lang_Long_ClassStatic,java_lang_Long_Static);
GC_REF(LayoutHead,java_lang_Long_LayoutStatic);
GC_REF(LayoutHead,java_lang_Long_Layout);

struct ifaz_TblStruct java_lang_Long_ifazTbl;

struct java_io_Serializable_MethodTblStruct java_lang_Long_java_io_Serializable_MethodTblStruct;
struct java_lang_Comparable_MethodTblStruct java_lang_Long_java_lang_Comparable_MethodTblStruct;
struct java_lang_Float_MethodTblStruct java_lang_Float_MethodTbl;
struct java_lang_Float_ClassStruct java_lang_Float_Class;
GC_REF(java_lang_Float_ClassStatic,java_lang_Float_Static);
GC_REF(LayoutHead,java_lang_Float_LayoutStatic);
GC_REF(LayoutHead,java_lang_Float_Layout);

struct ifaz_TblStruct java_lang_Float_ifazTbl;

struct java_io_Serializable_MethodTblStruct java_lang_Float_java_io_Serializable_MethodTblStruct;
struct java_lang_Comparable_MethodTblStruct java_lang_Float_java_lang_Comparable_MethodTblStruct;
struct java_lang_Double_MethodTblStruct java_lang_Double_MethodTbl;
struct java_lang_Double_ClassStruct java_lang_Double_Class;
GC_REF(java_lang_Double_ClassStatic,java_lang_Double_Static);
GC_REF(LayoutHead,java_lang_Double_LayoutStatic);
GC_REF(LayoutHead,java_lang_Double_Layout);

struct ifaz_TblStruct java_lang_Double_ifazTbl;

struct java_io_Serializable_MethodTblStruct java_lang_Double_java_io_Serializable_MethodTblStruct;
struct java_lang_Comparable_MethodTblStruct java_lang_Double_java_lang_Comparable_MethodTblStruct;
struct java_lang_StackTraceElement_MethodTblStruct java_lang_StackTraceElement_MethodTbl;
struct java_lang_StackTraceElement_ClassStruct java_lang_StackTraceElement_Class;
GC_REF(java_lang_StackTraceElement_ClassStatic,java_lang_StackTraceElement_Static);
GC_REF(LayoutHead,java_lang_StackTraceElement_LayoutStatic);
GC_REF(LayoutHead,java_lang_StackTraceElement_Layout);

struct ifaz_TblStruct java_lang_StackTraceElement_ifazTbl;

struct java_io_Serializable_MethodTblStruct java_lang_StackTraceElement_java_io_Serializable_MethodTblStruct;
struct java_lang_IllegalArgumentException_MethodTblStruct java_lang_IllegalArgumentException_MethodTbl;
struct java_lang_IllegalArgumentException_ClassStruct java_lang_IllegalArgumentException_Class;
GC_REF(java_lang_IllegalArgumentException_ClassStatic,java_lang_IllegalArgumentException_Static);
GC_REF(LayoutHead,java_lang_IllegalArgumentException_LayoutStatic);
GC_REF(LayoutHead,java_lang_IllegalArgumentException_Layout);

struct ifaz_TblStruct java_lang_IllegalArgumentException_ifazTbl;

struct java_io_Serializable_MethodTblStruct java_lang_IllegalArgumentException_java_io_Serializable_MethodTblStruct;
struct java_lang_IllegalStateException_MethodTblStruct java_lang_IllegalStateException_MethodTbl;
struct java_lang_IllegalStateException_ClassStruct java_lang_IllegalStateException_Class;
GC_REF(java_lang_IllegalStateException_ClassStatic,java_lang_IllegalStateException_Static);
GC_REF(LayoutHead,java_lang_IllegalStateException_LayoutStatic);
GC_REF(LayoutHead,java_lang_IllegalStateException_Layout);

struct ifaz_TblStruct java_lang_IllegalStateException_ifazTbl;

struct java_io_Serializable_MethodTblStruct java_lang_IllegalStateException_java_io_Serializable_MethodTblStruct;
struct java_lang_ErrWriter_MethodTblStruct java_lang_ErrWriter_MethodTbl;
struct java_lang_ErrWriter_ClassStruct java_lang_ErrWriter_Class;
GC_REF(java_lang_ErrWriter_ClassStatic,java_lang_ErrWriter_Static);
GC_REF(LayoutHead,java_lang_ErrWriter_LayoutStatic);
GC_REF(LayoutHead,java_lang_ErrWriter_Layout);

struct java_lang_NullPointerException_MethodTblStruct java_lang_NullPointerException_MethodTbl;
struct java_lang_NullPointerException_ClassStruct java_lang_NullPointerException_Class;
GC_REF(java_lang_NullPointerException_ClassStatic,java_lang_NullPointerException_Static);
GC_REF(LayoutHead,java_lang_NullPointerException_LayoutStatic);
GC_REF(LayoutHead,java_lang_NullPointerException_Layout);

struct ifaz_TblStruct java_lang_NullPointerException_ifazTbl;

struct java_io_Serializable_MethodTblStruct java_lang_NullPointerException_java_io_Serializable_MethodTblStruct;
struct java_lang_PhonyReader_MethodTblStruct java_lang_PhonyReader_MethodTbl;
struct java_lang_PhonyReader_ClassStruct java_lang_PhonyReader_Class;
GC_REF(java_lang_PhonyReader_ClassStatic,java_lang_PhonyReader_Static);
GC_REF(LayoutHead,java_lang_PhonyReader_LayoutStatic);
GC_REF(LayoutHead,java_lang_PhonyReader_Layout);

struct java_io_InterruptedIOException_MethodTblStruct java_io_InterruptedIOException_MethodTbl;
struct java_io_InterruptedIOException_ClassStruct java_io_InterruptedIOException_Class;
GC_REF(java_io_InterruptedIOException_ClassStatic,java_io_InterruptedIOException_Static);
GC_REF(LayoutHead,java_io_InterruptedIOException_LayoutStatic);
GC_REF(LayoutHead,java_io_InterruptedIOException_Layout);

struct ifaz_TblStruct java_io_InterruptedIOException_ifazTbl;

struct java_io_Serializable_MethodTblStruct java_io_InterruptedIOException_java_io_Serializable_MethodTblStruct;
struct java_lang_ArrayIndexOutOfBoundsException_MethodTblStruct java_lang_ArrayIndexOutOfBoundsException_MethodTbl;
struct java_lang_ArrayIndexOutOfBoundsException_ClassStruct java_lang_ArrayIndexOutOfBoundsException_Class;
GC_REF(java_lang_ArrayIndexOutOfBoundsException_ClassStatic,java_lang_ArrayIndexOutOfBoundsException_Static);
GC_REF(LayoutHead,java_lang_ArrayIndexOutOfBoundsException_LayoutStatic);
GC_REF(LayoutHead,java_lang_ArrayIndexOutOfBoundsException_Layout);

struct ifaz_TblStruct java_lang_ArrayIndexOutOfBoundsException_ifazTbl;

struct java_io_Serializable_MethodTblStruct java_lang_ArrayIndexOutOfBoundsException_java_io_Serializable_MethodTblStruct;
struct java_lang_NumberFormatException_MethodTblStruct java_lang_NumberFormatException_MethodTbl;
struct java_lang_NumberFormatException_ClassStruct java_lang_NumberFormatException_Class;
GC_REF(java_lang_NumberFormatException_ClassStatic,java_lang_NumberFormatException_Static);
GC_REF(LayoutHead,java_lang_NumberFormatException_LayoutStatic);
GC_REF(LayoutHead,java_lang_NumberFormatException_Layout);

struct ifaz_TblStruct java_lang_NumberFormatException_ifazTbl;

struct java_io_Serializable_MethodTblStruct java_lang_NumberFormatException_java_io_Serializable_MethodTblStruct;
struct java_lang_Error_MethodTblStruct java_lang_Error_MethodTbl;
struct java_lang_Error_ClassStruct java_lang_Error_Class;
GC_REF(java_lang_Error_ClassStatic,java_lang_Error_Static);
GC_REF(LayoutHead,java_lang_Error_LayoutStatic);
GC_REF(LayoutHead,java_lang_Error_Layout);

struct ifaz_TblStruct java_lang_Error_ifazTbl;

struct java_io_Serializable_MethodTblStruct java_lang_Error_java_io_Serializable_MethodTblStruct;
struct java_net_SocketAddress_MethodTblStruct java_net_SocketAddress_MethodTbl;
struct java_net_SocketAddress_ClassStruct java_net_SocketAddress_Class;
GC_REF(java_net_SocketAddress_ClassStatic,java_net_SocketAddress_Static);
GC_REF(LayoutHead,java_net_SocketAddress_LayoutStatic);
GC_REF(LayoutHead,java_net_SocketAddress_Layout);

struct ToClient_t_MethodTblStruct ToClient_t_MethodTbl;
struct ToClient_t_ClassStruct ToClient_t_Class;
GC_REF(ToClient_t_ClassStatic,ToClient_t_Static);
GC_REF(LayoutHead,ToClient_t_LayoutStatic);
GC_REF(LayoutHead,ToClient_t_Layout);

struct ifaz_TblStruct ToClient_t_ifazTbl;

struct java_lang_Runnable_MethodTblStruct ToClient_t_java_lang_Runnable_MethodTblStruct;
struct java_net_UnknownHostException_MethodTblStruct java_net_UnknownHostException_MethodTbl;
struct java_net_UnknownHostException_ClassStruct java_net_UnknownHostException_Class;
GC_REF(java_net_UnknownHostException_ClassStatic,java_net_UnknownHostException_Static);
GC_REF(LayoutHead,java_net_UnknownHostException_LayoutStatic);
GC_REF(LayoutHead,java_net_UnknownHostException_Layout);

struct ifaz_TblStruct java_net_UnknownHostException_ifazTbl;

struct java_io_Serializable_MethodTblStruct java_net_UnknownHostException_java_io_Serializable_MethodTblStruct;
struct java_net_InetSocketAddress_MethodTblStruct java_net_InetSocketAddress_MethodTbl;
struct java_net_InetSocketAddress_ClassStruct java_net_InetSocketAddress_Class;
GC_REF(java_net_InetSocketAddress_ClassStatic,java_net_InetSocketAddress_Static);
GC_REF(LayoutHead,java_net_InetSocketAddress_LayoutStatic);
GC_REF(LayoutHead,java_net_InetSocketAddress_Layout);

struct java_net_InetAddress_MethodTblStruct java_net_InetAddress_MethodTbl;
struct java_net_InetAddress_ClassStruct java_net_InetAddress_Class;
GC_REF(java_net_InetAddress_ClassStatic,java_net_InetAddress_Static);
GC_REF(LayoutHead,java_net_InetAddress_LayoutStatic);
GC_REF(LayoutHead,java_net_InetAddress_Layout);

struct java_io_SimpleTCPInputStream_MethodTblStruct java_io_SimpleTCPInputStream_MethodTbl;
struct java_io_SimpleTCPInputStream_ClassStruct java_io_SimpleTCPInputStream_Class;
GC_REF(java_io_SimpleTCPInputStream_ClassStatic,java_io_SimpleTCPInputStream_Static);
GC_REF(LayoutHead,java_io_SimpleTCPInputStream_LayoutStatic);
GC_REF(LayoutHead,java_io_SimpleTCPInputStream_Layout);

struct java_io_SimpleTCPOutputStream_MethodTblStruct java_io_SimpleTCPOutputStream_MethodTbl;
struct java_io_SimpleTCPOutputStream_ClassStruct java_io_SimpleTCPOutputStream_Class;
GC_REF(java_io_SimpleTCPOutputStream_ClassStatic,java_io_SimpleTCPOutputStream_Static);
GC_REF(LayoutHead,java_io_SimpleTCPOutputStream_LayoutStatic);
GC_REF(LayoutHead,java_io_SimpleTCPOutputStream_Layout);


/* Generated Prototypes */

void javaClasses_Init(void **__eFlag__);

double remainder_double(double op1,double op2) {
while (op1 > op2) op1-=op2;
return op1;
}
float remainder_float(float op1,float op2) {
while ((float)op1 > (float)op2) op1-=(float)op2;
return (float)op1;
}
void Server_main_java_lang_StringA(void **__eFlag__ , GC_PARAM(RefArray, args));
void java_lang_Object_initializer(void **__eFlag__, GC_PARAM(java_lang_Object,this));

void java_lang_Object_notifyAll(void **__eFlag__ ,GC_PARAM(java_lang_Object,this));
void java_lang_Object_wait_long_int(void **__eFlag__ ,GC_PARAM(java_lang_Object,this),    JLong timeout,
    JInt nanos);
GC___REF(struct java_lang_Object) java_lang_Object_Object(void **__eFlag__, void* class, GC_PARAM(LayoutHead,layout));
void java_lang_Object_Object_init(void **__eFlag__, GC_PARAM(java_lang_Object,this));
GC___REF(struct java_lang_String) java_lang_Object_toString(void **__eFlag__ ,GC_PARAM(java_lang_Object,this));
void java_lang_Object_wait(void **__eFlag__ ,GC_PARAM(java_lang_Object,this));
GC___REF(struct java_lang_Object) java_lang_Object_clone(void **__eFlag__ ,GC_PARAM(java_lang_Object,this));
void java_lang_String_initializer(void **__eFlag__, GC_PARAM(java_lang_String,this));

GC___REF(struct java_lang_String) java_lang_String_String(void **__eFlag__, void* class, GC_PARAM(LayoutHead,layout));
void java_lang_String_String_init(void **__eFlag__, GC_PARAM(java_lang_String,this));
GC___REF(struct java_lang_String) java_lang_String_String_java_lang_String(void **__eFlag__, void* class, GC_PARAM(LayoutHead,layout),GC_PARAM(java_lang_String,str));
void java_lang_String_String_java_lang_String_init(void **__eFlag__, GC_PARAM(java_lang_String,this),GC_PARAM(java_lang_String,str));
GC___REF(struct java_lang_String) java_lang_String_String_JCharA(void **__eFlag__, void* class, GC_PARAM(LayoutHead,layout),GC_PARAM(JCharArray,data));
void java_lang_String_String_JCharA_init(void **__eFlag__, GC_PARAM(java_lang_String,this),GC_PARAM(JCharArray,data));
GC___REF(struct java_lang_String) java_lang_String_String_JCharA_int_int(void **__eFlag__, void* class, GC_PARAM(LayoutHead,layout),GC_PARAM(JCharArray,data),JInt offset,JInt count);
void java_lang_String_String_JCharA_int_int_init(void **__eFlag__, GC_PARAM(java_lang_String,this),GC_PARAM(JCharArray,data),JInt offset,JInt count);
GC___REF(struct java_lang_String) java_lang_String_String_JByteA_int_int_int(void **__eFlag__, void* class, GC_PARAM(LayoutHead,layout),GC_PARAM(JByteArray,ascii),JInt hibyte,JInt offset,JInt count);
void java_lang_String_String_JByteA_int_int_int_init(void **__eFlag__, GC_PARAM(java_lang_String,this),GC_PARAM(JByteArray,ascii),JInt hibyte,JInt offset,JInt count);
GC___REF(struct java_lang_String) java_lang_String_String_JByteA_int_int(void **__eFlag__, void* class, GC_PARAM(LayoutHead,layout),GC_PARAM(JByteArray,data),JInt offset,JInt count);
void java_lang_String_String_JByteA_int_int_init(void **__eFlag__, GC_PARAM(java_lang_String,this),GC_PARAM(JByteArray,data),JInt offset,JInt count);
GC___REF(struct java_lang_String) java_lang_String_String_java_lang_StringBuffer(void **__eFlag__, void* class, GC_PARAM(LayoutHead,layout),GC_PARAM(java_lang_StringBuffer,buffer));
void java_lang_String_String_java_lang_StringBuffer_init(void **__eFlag__, GC_PARAM(java_lang_String,this),GC_PARAM(java_lang_StringBuffer,buffer));
GC___REF(struct java_lang_String) java_lang_String_String_java_lang_StringBuilder(void **__eFlag__, void* class, GC_PARAM(LayoutHead,layout),GC_PARAM(java_lang_StringBuilder,buffer));
void java_lang_String_String_java_lang_StringBuilder_init(void **__eFlag__, GC_PARAM(java_lang_String,this),GC_PARAM(java_lang_StringBuilder,buffer));
GC___REF(struct java_lang_String) java_lang_String_String_JCharA_int_int_boolean(void **__eFlag__, void* class, GC_PARAM(LayoutHead,layout),GC_PARAM(JCharArray,data),JInt offset,JInt count,JBoolean dont_copy);
void java_lang_String_String_JCharA_int_int_boolean_init(void **__eFlag__, GC_PARAM(java_lang_String,this),GC_PARAM(JCharArray,data),JInt offset,JInt count,JBoolean dont_copy);
JInt java_lang_String_length(void **__eFlag__ ,GC_PARAM(java_lang_String,this));
JChar java_lang_String_charAt_int(void **__eFlag__ ,GC_PARAM(java_lang_String,this),    JInt index);
void java_lang_String_getChars_int_int_charA_int(void **__eFlag__ ,GC_PARAM(java_lang_String,this),    JInt srcBegin,
    JInt srcEnd,
    GC_PARAM(JCharArray,dst),
    JInt dstBegin);
GC___REF(struct JByteArray) java_lang_String_getBytes_java_lang_String(void **__eFlag__ ,GC_PARAM(java_lang_String,this),    GC_PARAM(java_lang_String,enc));
GC___REF(struct JByteArray) java_lang_String_getBytes(void **__eFlag__ ,GC_PARAM(java_lang_String,this));
JBoolean java_lang_String_equals_java_lang_Object(void **__eFlag__ ,GC_PARAM(java_lang_String,this),    GC_PARAM(java_lang_Object,anObject));
JInt java_lang_String_compareTo_java_lang_String(void **__eFlag__ ,GC_PARAM(java_lang_String,this),    GC_PARAM(java_lang_String,anotherString));
JBoolean java_lang_String_regionMatches_int_java_lang_String_int_int(void **__eFlag__ ,GC_PARAM(java_lang_String,this),    JInt toffset,
    GC_PARAM(java_lang_String,other),
    JInt ooffset,
    JInt len);
JBoolean java_lang_String_regionMatches_boolean_int_java_lang_String_int_int(void **__eFlag__ ,GC_PARAM(java_lang_String,this),    JBoolean ignoreCase,
    JInt toffset,
    GC_PARAM(java_lang_String,other),
    JInt ooffset,
    JInt len);
JInt java_lang_String_indexOf_int_int(void **__eFlag__ ,GC_PARAM(java_lang_String,this),    JInt ch,
    JInt fromIndex);
JInt java_lang_String_lastIndexOf_int_int(void **__eFlag__ ,GC_PARAM(java_lang_String,this),    JInt ch,
    JInt fromIndex);
JInt java_lang_String_indexOf_java_lang_String_int(void **__eFlag__ ,GC_PARAM(java_lang_String,this),    GC_PARAM(java_lang_String,str),
    JInt fromIndex);
JInt java_lang_String_lastIndexOf_java_lang_String_int(void **__eFlag__ ,GC_PARAM(java_lang_String,this),    GC_PARAM(java_lang_String,str),
    JInt fromIndex);
GC___REF(struct java_lang_String) java_lang_String_substring_int_int(void **__eFlag__ ,GC_PARAM(java_lang_String,this),    JInt beginIndex,
    JInt endIndex);
GC___REF(struct java_lang_String) java_lang_String_toString(void **__eFlag__ ,GC_PARAM(java_lang_String,this));
GC___REF(struct java_lang_String) java_lang_String_valueOf_charA_int_int(void **__eFlag__ ,    GC_PARAM(JCharArray,data),
    JInt offset,
    JInt count);
GC___REF(struct java_lang_String) java_lang_String_copyValueOf_charA_int_int(void **__eFlag__ ,    GC_PARAM(JCharArray,data),
    JInt offset,
    JInt count);
GC___REF(struct java_lang_String) java_lang_String_valueOf_boolean(void **__eFlag__ ,    JBoolean b);
GC___REF(struct java_lang_String) java_lang_String_valueOf_int(void **__eFlag__ ,    JInt i);
GC___REF(struct java_lang_String) java_lang_String_valueOf_long(void **__eFlag__ ,    JLong l);
GC___REF(struct java_lang_String) java_lang_String_valueOf_float(void **__eFlag__ ,    JFloat f);
GC___REF(struct java_lang_String) java_lang_String_valueOf_double(void **__eFlag__ ,    JDouble d);


void java_lang_Throwable_initializer(void **__eFlag__, GC_PARAM(java_lang_Throwable,this));

GC___REF(struct java_lang_Throwable) java_lang_Throwable_Throwable(void **__eFlag__, void* class, GC_PARAM(LayoutHead,layout));
void java_lang_Throwable_Throwable_init(void **__eFlag__, GC_PARAM(java_lang_Throwable,this));
GC___REF(struct java_lang_Throwable) java_lang_Throwable_Throwable_java_lang_String(void **__eFlag__, void* class, GC_PARAM(LayoutHead,layout),GC_PARAM(java_lang_String,message));
void java_lang_Throwable_Throwable_java_lang_String_init(void **__eFlag__, GC_PARAM(java_lang_Throwable,this),GC_PARAM(java_lang_String,message));
GC___REF(struct java_lang_Throwable) java_lang_Throwable_Throwable_java_lang_String_java_lang_Throwable(void **__eFlag__, void* class, GC_PARAM(LayoutHead,layout),GC_PARAM(java_lang_String,message),GC_PARAM(java_lang_Throwable,cause));
void java_lang_Throwable_Throwable_java_lang_String_java_lang_Throwable_init(void **__eFlag__, GC_PARAM(java_lang_Throwable,this),GC_PARAM(java_lang_String,message),GC_PARAM(java_lang_Throwable,cause));
GC___REF(struct java_lang_Throwable) java_lang_Throwable_Throwable_java_lang_Throwable(void **__eFlag__, void* class, GC_PARAM(LayoutHead,layout),GC_PARAM(java_lang_Throwable,cause));
void java_lang_Throwable_Throwable_java_lang_Throwable_init(void **__eFlag__, GC_PARAM(java_lang_Throwable,this),GC_PARAM(java_lang_Throwable,cause));
GC___REF(struct java_lang_String) java_lang_Throwable_getMessage(void **__eFlag__ ,GC_PARAM(java_lang_Throwable,this));
GC___REF(struct java_lang_String) java_lang_Throwable_toString(void **__eFlag__ ,GC_PARAM(java_lang_Throwable,this));
void java_lang_Throwable_printStackTrace_java_io_PrintStream(void **__eFlag__ ,GC_PARAM(java_lang_Throwable,this),    GC_PARAM(java_io_PrintStream,s));
GC___REF(struct java_lang_String) java_lang_Throwable_stackTraceString(void **__eFlag__ ,GC_PARAM(java_lang_Throwable,this));
GC___REF(struct java_lang_Throwable) java_lang_Throwable_fillInStackTrace(void **__eFlag__ ,GC_PARAM(java_lang_Throwable,this));
void java_lang_System_initializer(void **__eFlag__, GC_PARAM(java_lang_System,this));

void java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(void **__eFlag__ ,    GC_PARAM(java_lang_Object,src),
    JInt srcOffset,
    GC_PARAM(java_lang_Object,dst),
    JInt dstOffset,
    JInt count);
void java_lang_PhonyWriter_initializer(void **__eFlag__, GC_PARAM(java_lang_PhonyWriter,this));

GC___REF(struct java_lang_PhonyWriter) java_lang_PhonyWriter_PhonyWriter(void **__eFlag__, void* class, GC_PARAM(LayoutHead,layout));
void java_lang_PhonyWriter_PhonyWriter_init(void **__eFlag__, GC_PARAM(java_lang_PhonyWriter,this));
void java_lang_PhonyWriter_print_java_lang_String(void **__eFlag__ ,GC_PARAM(java_lang_PhonyWriter,this),    GC_PARAM(java_lang_String,s));
void java_lang_PhonyWriter_println_java_lang_String(void **__eFlag__ ,GC_PARAM(java_lang_PhonyWriter,this),    GC_PARAM(java_lang_String,s));
void java_lang_PhonyWriter_flush(void **__eFlag__ ,GC_PARAM(java_lang_PhonyWriter,this));
void java_io_PrintStream_initializer(void **__eFlag__, GC_PARAM(java_io_PrintStream,this));

GC___REF(struct java_io_PrintStream) java_io_PrintStream_PrintStream_java_io_OutputStream(void **__eFlag__, void* class, GC_PARAM(LayoutHead,layout),GC_PARAM(java_io_OutputStream,out));
void java_io_PrintStream_PrintStream_java_io_OutputStream_init(void **__eFlag__, GC_PARAM(java_io_PrintStream,this),GC_PARAM(java_io_OutputStream,out));
GC___REF(struct java_io_PrintStream) java_io_PrintStream_PrintStream_java_io_OutputStream_boolean(void **__eFlag__, void* class, GC_PARAM(LayoutHead,layout),GC_PARAM(java_io_OutputStream,out),JBoolean auto_flush);
void java_io_PrintStream_PrintStream_java_io_OutputStream_boolean_init(void **__eFlag__, GC_PARAM(java_io_PrintStream,this),GC_PARAM(java_io_OutputStream,out),JBoolean auto_flush);
void java_io_PrintStream_setError(void **__eFlag__ ,GC_PARAM(java_io_PrintStream,this));
void java_io_PrintStream_flush(void **__eFlag__ ,GC_PARAM(java_io_PrintStream,this));
void java_io_PrintStream_print_java_lang_String_boolean(void **__eFlag__ ,GC_PARAM(java_io_PrintStream,this),    GC_PARAM(java_lang_String,str),
    JBoolean println);
void java_io_PrintStream_print_charA_int_int_boolean(void **__eFlag__ ,GC_PARAM(java_io_PrintStream,this),    GC_PARAM(JCharArray,chars),
    JInt pos,
    JInt len,
    JBoolean println);
void java_io_PrintStream_writeChars_charA_int_int(void **__eFlag__ ,GC_PARAM(java_io_PrintStream,this),    GC_PARAM(JCharArray,buf),
    JInt offset,
    JInt count);
void java_io_PrintStream_writeChars_java_lang_String_int_int(void **__eFlag__ ,GC_PARAM(java_io_PrintStream,this),    GC_PARAM(java_lang_String,str),
    JInt offset,
    JInt count);
void java_io_PrintStream_print_java_lang_String(void **__eFlag__ ,GC_PARAM(java_io_PrintStream,this),    GC_PARAM(java_lang_String,str));
void java_io_PrintStream_write_int(void **__eFlag__ ,GC_PARAM(java_io_PrintStream,this),    JInt oneByte);
void java_io_PrintStream_write_byteA_int_int(void **__eFlag__ ,GC_PARAM(java_io_PrintStream,this),    GC_PARAM(JByteArray,buffer),
    JInt offset,
    JInt len);
void java_io_FilterOutputStream_initializer(void **__eFlag__, GC_PARAM(java_io_FilterOutputStream,this));

GC___REF(struct java_io_FilterOutputStream) java_io_FilterOutputStream_FilterOutputStream_java_io_OutputStream(void **__eFlag__, void* class, GC_PARAM(LayoutHead,layout),GC_PARAM(java_io_OutputStream,out));
void java_io_FilterOutputStream_FilterOutputStream_java_io_OutputStream_init(void **__eFlag__, GC_PARAM(java_io_FilterOutputStream,this),GC_PARAM(java_io_OutputStream,out));
void java_io_FilterOutputStream_close(void **__eFlag__ ,GC_PARAM(java_io_FilterOutputStream,this));
void java_io_FilterOutputStream_flush(void **__eFlag__ ,GC_PARAM(java_io_FilterOutputStream,this));
void java_io_FilterOutputStream_write_int(void **__eFlag__ ,GC_PARAM(java_io_FilterOutputStream,this),    JInt b);
void java_io_FilterOutputStream_write_byteA(void **__eFlag__ ,GC_PARAM(java_io_FilterOutputStream,this),    GC_PARAM(JByteArray,buf));
void java_io_FilterOutputStream_write_byteA_int_int(void **__eFlag__ ,GC_PARAM(java_io_FilterOutputStream,this),    GC_PARAM(JByteArray,buf),
    JInt offset,
    JInt len);
void java_io_OutputStream_initializer(void **__eFlag__, GC_PARAM(java_io_OutputStream,this));

GC___REF(struct java_io_OutputStream) java_io_OutputStream_OutputStream(void **__eFlag__, void* class, GC_PARAM(LayoutHead,layout));
void java_io_OutputStream_OutputStream_init(void **__eFlag__, GC_PARAM(java_io_OutputStream,this));
void java_io_OutputStream_write_int(void **__eFlag__ ,GC_PARAM(java_io_OutputStream,this),    JInt b);
void java_io_OutputStream_write_byteA(void **__eFlag__ ,GC_PARAM(java_io_OutputStream,this),    GC_PARAM(JByteArray,b));
void java_io_OutputStream_write_byteA_int_int(void **__eFlag__ ,GC_PARAM(java_io_OutputStream,this),    GC_PARAM(JByteArray,b),
    JInt off,
    JInt len);
void java_io_OutputStream_flush(void **__eFlag__ ,GC_PARAM(java_io_OutputStream,this));
void java_io_OutputStream_close(void **__eFlag__ ,GC_PARAM(java_io_OutputStream,this));
void java_lang_Integer_initializer(void **__eFlag__, GC_PARAM(java_lang_Integer,this));

GC___REF(struct java_lang_String) java_lang_Integer_toString_int_int(void **__eFlag__ ,    JInt num,
    JInt radix);
JInt java_lang_Integer_parseInt_java_lang_String(void **__eFlag__ ,    GC_PARAM(java_lang_String,s));
GC___REF(struct java_lang_String) java_lang_Integer_toString(void **__eFlag__ ,GC_PARAM(java_lang_Integer,this));
JInt java_lang_Integer_parseInt_java_lang_String_int_boolean(void **__eFlag__ ,    GC_PARAM(java_lang_String,str),
    JInt radix,
    JBoolean decode);
void java_lang_Number_initializer(void **__eFlag__, GC_PARAM(java_lang_Number,this));


void Monitor_initializer(void **__eFlag__, GC_PARAM(Monitor,this));

GC___REF(struct JByteArray) Monitor_getJpeg_long(void **__eFlag__ ,GC_PARAM(Monitor,this),    JLong old);
void Monitor_setJpeg_byteA(void **__eFlag__ ,GC_PARAM(Monitor,this),    GC_PARAM(JByteArray,newJpeg));
JByte Monitor_getMode(void **__eFlag__ ,GC_PARAM(Monitor,this));
void Monitor_setMode_byte(void **__eFlag__ ,GC_PARAM(Monitor,this),    JByte newMode);
void Monitor_testSetMode(void **__eFlag__ ,GC_PARAM(Monitor,this));
JLong Monitor_timeMillisFromArray_byteA(void **__eFlag__ ,    GC_PARAM(JByteArray,array));
GC___REF(struct Monitor) Monitor_Monitor(void **__eFlag__, void* class, GC_PARAM(LayoutHead,layout));
void Monitor_Monitor_init(void **__eFlag__, GC_PARAM(Monitor,this));
void CamToMonitor_t_initializer(void **__eFlag__, GC_PARAM(CamToMonitor_t,this));

GC___REF(struct CamToMonitor_t) CamToMonitor_t_CamToMonitor_t_Monitor(void **__eFlag__, void* class, GC_PARAM(LayoutHead,layout),GC_PARAM(Monitor,mon));
void CamToMonitor_t_CamToMonitor_t_Monitor_init(void **__eFlag__, GC_PARAM(CamToMonitor_t,this),GC_PARAM(Monitor,mon));
void CamToMonitor_t_run(void **__eFlag__ ,GC_PARAM(CamToMonitor_t,this));
void java_lang_Thread_initializer(void **__eFlag__, GC_PARAM(java_lang_Thread,this));

GC___REF(struct java_lang_Thread) java_lang_Thread_Thread(void **__eFlag__, void* class, GC_PARAM(LayoutHead,layout));
void java_lang_Thread_Thread_init(void **__eFlag__, GC_PARAM(java_lang_Thread,this));
void java_lang_Thread_inheritPriority(void **__eFlag__ ,GC_PARAM(java_lang_Thread,this));
JLong java_lang_Thread_createThread(void **__eFlag__ ,GC_PARAM(java_lang_Thread,this));
void java_lang_Thread_start(void **__eFlag__ ,GC_PARAM(java_lang_Thread,this));
void java_lang_Thread_run(void **__eFlag__ ,GC_PARAM(java_lang_Thread,this));
JBoolean java_lang_Thread_isInterrupted(void **__eFlag__ ,GC_PARAM(java_lang_Thread,this));
void java_lang_Thread_interrupt(void **__eFlag__ ,GC_PARAM(java_lang_Thread,this));
GC___REF(struct java_lang_Thread) java_lang_Thread_currentThread(void **__eFlag__ );
void java_lang_Runnable_run(void **__eFlag__ ,GC_PARAM(java_lang_Runnable,this));

void FromClient_t_initializer(void **__eFlag__, GC_PARAM(FromClient_t,this));

GC___REF(struct FromClient_t) FromClient_t_FromClient_t_Monitor_int(void **__eFlag__, void* class, GC_PARAM(LayoutHead,layout),GC_PARAM(Monitor,mon),JInt port);
void FromClient_t_FromClient_t_Monitor_int_init(void **__eFlag__, GC_PARAM(FromClient_t,this),GC_PARAM(Monitor,mon),JInt port);
void FromClient_t_run(void **__eFlag__ ,GC_PARAM(FromClient_t,this));
void java_io_IOException_initializer(void **__eFlag__, GC_PARAM(java_io_IOException,this));

GC___REF(struct java_io_IOException) java_io_IOException_IOException(void **__eFlag__, void* class, GC_PARAM(LayoutHead,layout));
void java_io_IOException_IOException_init(void **__eFlag__, GC_PARAM(java_io_IOException,this));
GC___REF(struct java_io_IOException) java_io_IOException_IOException_java_lang_String(void **__eFlag__, void* class, GC_PARAM(LayoutHead,layout),GC_PARAM(java_lang_String,message));
void java_io_IOException_IOException_java_lang_String_init(void **__eFlag__, GC_PARAM(java_io_IOException,this),GC_PARAM(java_lang_String,message));
void java_io_InputStream_initializer(void **__eFlag__, GC_PARAM(java_io_InputStream,this));

GC___REF(struct java_io_InputStream) java_io_InputStream_InputStream(void **__eFlag__, void* class, GC_PARAM(LayoutHead,layout));
void java_io_InputStream_InputStream_init(void **__eFlag__, GC_PARAM(java_io_InputStream,this));
JInt java_io_InputStream_read(void **__eFlag__ ,GC_PARAM(java_io_InputStream,this));
JInt java_io_InputStream_read_byteA_int_int(void **__eFlag__ ,GC_PARAM(java_io_InputStream,this),    GC_PARAM(JByteArray,b),
    JInt off,
    JInt len);
void java_net_ServerSocket_initializer(void **__eFlag__, GC_PARAM(java_net_ServerSocket,this));

JInt java_net_ServerSocket_createServerSocket_int(void **__eFlag__ ,    JInt port);
JInt java_net_ServerSocket_accept_int(void **__eFlag__ ,    JInt sockfd);
void java_net_ServerSocket_close_int(void **__eFlag__ ,    JInt sockfd);
GC___REF(struct java_net_ServerSocket) java_net_ServerSocket_ServerSocket_int(void **__eFlag__, void* class, GC_PARAM(LayoutHead,layout),JInt port);
void java_net_ServerSocket_ServerSocket_int_init(void **__eFlag__, GC_PARAM(java_net_ServerSocket,this),JInt port);
void java_net_ServerSocket_bind_java_net_SocketAddress_int(void **__eFlag__ ,GC_PARAM(java_net_ServerSocket,this),    GC_PARAM(java_net_SocketAddress,endpoint),
    JInt backlog);
GC___REF(struct java_net_Socket) java_net_ServerSocket_accept(void **__eFlag__ ,GC_PARAM(java_net_ServerSocket,this));
GC___REF(struct java_lang_String) java_net_ServerSocket_toString(void **__eFlag__ ,GC_PARAM(java_net_ServerSocket,this));
void java_net_Socket_initializer(void **__eFlag__, GC_PARAM(java_net_Socket,this));

JInt java_net_Socket_createSocket(void **__eFlag__ );
void java_net_Socket_connect_int_int_int_int(void **__eFlag__ ,    JInt sockfd,
    JInt adr,
    JInt port,
    JInt timeout);
void java_net_Socket_close_int(void **__eFlag__ ,    JInt sockfd);
void java_net_Socket_setFd_int(void **__eFlag__ ,GC_PARAM(java_net_Socket,this),    JInt fd);
GC___REF(struct java_net_Socket) java_net_Socket_Socket(void **__eFlag__, void* class, GC_PARAM(LayoutHead,layout));
void java_net_Socket_Socket_init(void **__eFlag__, GC_PARAM(java_net_Socket,this));
void java_net_Socket_connect_java_net_SocketAddress(void **__eFlag__ ,GC_PARAM(java_net_Socket,this),    GC_PARAM(java_net_SocketAddress,endpoint));
void java_net_Socket_connect_java_net_SocketAddress_int(void **__eFlag__ ,GC_PARAM(java_net_Socket,this),    GC_PARAM(java_net_SocketAddress,endpoint),
    JInt timeout);
GC___REF(struct java_io_InputStream) java_net_Socket_getInputStream(void **__eFlag__ ,GC_PARAM(java_net_Socket,this));
GC___REF(struct java_io_OutputStream) java_net_Socket_getOutputStream(void **__eFlag__ ,GC_PARAM(java_net_Socket,this));
void java_net_Socket_close(void **__eFlag__ ,GC_PARAM(java_net_Socket,this));
GC___REF(struct java_lang_String) java_net_Socket_toString(void **__eFlag__ ,GC_PARAM(java_net_Socket,this));
void HTTP_t_initializer(void **__eFlag__, GC_PARAM(HTTP_t,this));

GC___REF(struct HTTP_t) HTTP_t_HTTP_t_Monitor_int(void **__eFlag__, void* class, GC_PARAM(LayoutHead,layout),GC_PARAM(Monitor,mon),JInt port);
void HTTP_t_HTTP_t_Monitor_int_init(void **__eFlag__, GC_PARAM(HTTP_t,this),GC_PARAM(Monitor,mon),JInt port);
void HTTP_t_run(void **__eFlag__ ,GC_PARAM(HTTP_t,this));
GC___REF(struct java_lang_String) HTTP_t_getLine_java_io_InputStream(void **__eFlag__ ,    GC_PARAM(java_io_InputStream,s));
void HTTP_t_putLine_java_io_OutputStream_java_lang_String(void **__eFlag__ ,    GC_PARAM(java_io_OutputStream,s),
    GC_PARAM(java_lang_String,str));
void se_lth_cs_eda040_realcamera_AxisM3006V_initializer(void **__eFlag__, GC_PARAM(se_lth_cs_eda040_realcamera_AxisM3006V,this));

JBoolean se_lth_cs_eda040_realcamera_AxisM3006V_nativeConnect(void **__eFlag__ ,GC_PARAM(se_lth_cs_eda040_realcamera_AxisM3006V,this));
JInt se_lth_cs_eda040_realcamera_AxisM3006V_nativeGetJPEG_byteA_int(void **__eFlag__ ,GC_PARAM(se_lth_cs_eda040_realcamera_AxisM3006V,this),    GC_PARAM(JByteArray,target),
    JInt offset);
void se_lth_cs_eda040_realcamera_AxisM3006V_nativeClose(void **__eFlag__ ,GC_PARAM(se_lth_cs_eda040_realcamera_AxisM3006V,this));
void se_lth_cs_eda040_realcamera_AxisM3006V_nativeGetTime_byteA_int(void **__eFlag__ ,GC_PARAM(se_lth_cs_eda040_realcamera_AxisM3006V,this),    GC_PARAM(JByteArray,target),
    JInt offset);
void se_lth_cs_eda040_realcamera_AxisM3006V_init(void **__eFlag__ ,GC_PARAM(se_lth_cs_eda040_realcamera_AxisM3006V,this));
JBoolean se_lth_cs_eda040_realcamera_AxisM3006V_connect(void **__eFlag__ ,GC_PARAM(se_lth_cs_eda040_realcamera_AxisM3006V,this));
JInt se_lth_cs_eda040_realcamera_AxisM3006V_getJPEG_byteA_int(void **__eFlag__ ,GC_PARAM(se_lth_cs_eda040_realcamera_AxisM3006V,this),    GC_PARAM(JByteArray,target),
    JInt offset);
void se_lth_cs_eda040_realcamera_AxisM3006V_getTime_byteA_int(void **__eFlag__ ,GC_PARAM(se_lth_cs_eda040_realcamera_AxisM3006V,this),    GC_PARAM(JByteArray,target),
    JInt offset);
JBoolean se_lth_cs_eda040_realcamera_AxisM3006V_motionDetected(void **__eFlag__ ,GC_PARAM(se_lth_cs_eda040_realcamera_AxisM3006V,this));
GC___REF(struct se_lth_cs_eda040_realcamera_AxisM3006V) se_lth_cs_eda040_realcamera_AxisM3006V_AxisM3006V(void **__eFlag__, void* class, GC_PARAM(LayoutHead,layout));
void se_lth_cs_eda040_realcamera_AxisM3006V_AxisM3006V_init(void **__eFlag__, GC_PARAM(se_lth_cs_eda040_realcamera_AxisM3006V,this));
void java_lang_InterruptedException_initializer(void **__eFlag__, GC_PARAM(java_lang_InterruptedException,this));

GC___REF(struct java_lang_InterruptedException) java_lang_InterruptedException_InterruptedException(void **__eFlag__, void* class, GC_PARAM(LayoutHead,layout));
void java_lang_InterruptedException_InterruptedException_init(void **__eFlag__, GC_PARAM(java_lang_InterruptedException,this));
void java_lang_Exception_initializer(void **__eFlag__, GC_PARAM(java_lang_Exception,this));

GC___REF(struct java_lang_Exception) java_lang_Exception_Exception(void **__eFlag__, void* class, GC_PARAM(LayoutHead,layout));
void java_lang_Exception_Exception_init(void **__eFlag__, GC_PARAM(java_lang_Exception,this));
GC___REF(struct java_lang_Exception) java_lang_Exception_Exception_java_lang_String(void **__eFlag__, void* class, GC_PARAM(LayoutHead,layout),GC_PARAM(java_lang_String,s));
void java_lang_Exception_Exception_java_lang_String_init(void **__eFlag__, GC_PARAM(java_lang_Exception,this),GC_PARAM(java_lang_String,s));
GC___REF(struct java_lang_Exception) java_lang_Exception_Exception_java_lang_String_java_lang_Throwable(void **__eFlag__, void* class, GC_PARAM(LayoutHead,layout),GC_PARAM(java_lang_String,s),GC_PARAM(java_lang_Throwable,cause));
void java_lang_Exception_Exception_java_lang_String_java_lang_Throwable_init(void **__eFlag__, GC_PARAM(java_lang_Exception,this),GC_PARAM(java_lang_String,s),GC_PARAM(java_lang_Throwable,cause));
GC___REF(struct java_lang_Exception) java_lang_Exception_Exception_java_lang_Throwable(void **__eFlag__, void* class, GC_PARAM(LayoutHead,layout),GC_PARAM(java_lang_Throwable,cause));
void java_lang_Exception_Exception_java_lang_Throwable_init(void **__eFlag__, GC_PARAM(java_lang_Exception,this),GC_PARAM(java_lang_Throwable,cause));

GC___REF(struct java_lang_String) java_lang_CharSequence_toString(void **__eFlag__ ,GC_PARAM(java_lang_CharSequence,this));

void java_lang_StringBuilder_initializer(void **__eFlag__, GC_PARAM(java_lang_StringBuilder,this));

GC___REF(struct java_lang_String) java_lang_StringBuilder_toString(void **__eFlag__ ,GC_PARAM(java_lang_StringBuilder,this));
void java_lang_StringBuffer_initializer(void **__eFlag__, GC_PARAM(java_lang_StringBuffer,this));

GC___REF(struct java_lang_StringBuffer) java_lang_StringBuffer_StringBuffer(void **__eFlag__, void* class, GC_PARAM(LayoutHead,layout));
void java_lang_StringBuffer_StringBuffer_init(void **__eFlag__, GC_PARAM(java_lang_StringBuffer,this));
GC___REF(struct java_lang_StringBuffer) java_lang_StringBuffer_StringBuffer_int(void **__eFlag__, void* class, GC_PARAM(LayoutHead,layout),JInt capacity);
void java_lang_StringBuffer_StringBuffer_int_init(void **__eFlag__, GC_PARAM(java_lang_StringBuffer,this),JInt capacity);
GC___REF(struct java_lang_StringBuffer) java_lang_StringBuffer_append_java_lang_Object(void **__eFlag__ ,GC_PARAM(java_lang_StringBuffer,this),    GC_PARAM(java_lang_Object,obj));
GC___REF(struct java_lang_StringBuffer) java_lang_StringBuffer_append_java_lang_String(void **__eFlag__ ,GC_PARAM(java_lang_StringBuffer,this),    GC_PARAM(java_lang_String,str));
GC___REF(struct java_lang_StringBuffer) java_lang_StringBuffer_append_java_lang_StringBuffer(void **__eFlag__ ,GC_PARAM(java_lang_StringBuffer,this),    GC_PARAM(java_lang_StringBuffer,stringBuffer));
GC___REF(struct java_lang_StringBuffer) java_lang_StringBuffer_append_charA(void **__eFlag__ ,GC_PARAM(java_lang_StringBuffer,this),    GC_PARAM(JCharArray,data));
GC___REF(struct java_lang_StringBuffer) java_lang_StringBuffer_append_charA_int_int(void **__eFlag__ ,GC_PARAM(java_lang_StringBuffer,this),    GC_PARAM(JCharArray,data),
    JInt offset,
    JInt count);
GC___REF(struct java_lang_StringBuffer) java_lang_StringBuffer_append_boolean(void **__eFlag__ ,GC_PARAM(java_lang_StringBuffer,this),    JBoolean bool);
GC___REF(struct java_lang_StringBuffer) java_lang_StringBuffer_append_char(void **__eFlag__ ,GC_PARAM(java_lang_StringBuffer,this),    JChar ch);
GC___REF(struct java_lang_StringBuffer) java_lang_StringBuffer_append_int(void **__eFlag__ ,GC_PARAM(java_lang_StringBuffer,this),    JInt inum);
GC___REF(struct java_lang_StringBuffer) java_lang_StringBuffer_append_long(void **__eFlag__ ,GC_PARAM(java_lang_StringBuffer,this),    JLong lnum);
GC___REF(struct java_lang_StringBuffer) java_lang_StringBuffer_append_float(void **__eFlag__ ,GC_PARAM(java_lang_StringBuffer,this),    JFloat fnum);
GC___REF(struct java_lang_StringBuffer) java_lang_StringBuffer_append_double(void **__eFlag__ ,GC_PARAM(java_lang_StringBuffer,this),    JDouble dnum);
GC___REF(struct java_lang_StringBuffer) java_lang_StringBuffer_delete_int_int(void **__eFlag__ ,GC_PARAM(java_lang_StringBuffer,this),    JInt start,
    JInt end);
GC___REF(struct java_lang_String) java_lang_StringBuffer_substring_int_int(void **__eFlag__ ,GC_PARAM(java_lang_StringBuffer,this),    JInt beginIndex,
    JInt endIndex);
GC___REF(struct java_lang_StringBuffer) java_lang_StringBuffer_insert_int_charA_int_int(void **__eFlag__ ,GC_PARAM(java_lang_StringBuffer,this),    JInt offset,
    GC_PARAM(JCharArray,str),
    JInt str_offset,
    JInt len);
GC___REF(struct java_lang_StringBuffer) java_lang_StringBuffer_insert_int_java_lang_String(void **__eFlag__ ,GC_PARAM(java_lang_StringBuffer,this),    JInt offset,
    GC_PARAM(java_lang_String,str));
JInt java_lang_StringBuffer_indexOf_java_lang_String_int(void **__eFlag__ ,GC_PARAM(java_lang_StringBuffer,this),    GC_PARAM(java_lang_String,str),
    JInt fromIndex);
JInt java_lang_StringBuffer_lastIndexOf_java_lang_String_int(void **__eFlag__ ,GC_PARAM(java_lang_StringBuffer,this),    GC_PARAM(java_lang_String,str),
    JInt fromIndex);
GC___REF(struct java_lang_String) java_lang_StringBuffer_toString(void **__eFlag__ ,GC_PARAM(java_lang_StringBuffer,this));
void java_lang_StringBuffer_ensureCapacity_unsynchronized_int(void **__eFlag__ ,GC_PARAM(java_lang_StringBuffer,this),    JInt minimumCapacity);
JBoolean java_lang_StringBuffer_regionMatches_int_java_lang_String(void **__eFlag__ ,GC_PARAM(java_lang_StringBuffer,this),    JInt toffset,
    GC_PARAM(java_lang_String,other));
void java_lang_StringIndexOutOfBoundsException_initializer(void **__eFlag__, GC_PARAM(java_lang_StringIndexOutOfBoundsException,this));

GC___REF(struct java_lang_StringIndexOutOfBoundsException) java_lang_StringIndexOutOfBoundsException_StringIndexOutOfBoundsException(void **__eFlag__, void* class, GC_PARAM(LayoutHead,layout));
void java_lang_StringIndexOutOfBoundsException_StringIndexOutOfBoundsException_init(void **__eFlag__, GC_PARAM(java_lang_StringIndexOutOfBoundsException,this));
GC___REF(struct java_lang_StringIndexOutOfBoundsException) java_lang_StringIndexOutOfBoundsException_StringIndexOutOfBoundsException_int(void **__eFlag__, void* class, GC_PARAM(LayoutHead,layout),JInt index);
void java_lang_StringIndexOutOfBoundsException_StringIndexOutOfBoundsException_int_init(void **__eFlag__, GC_PARAM(java_lang_StringIndexOutOfBoundsException,this),JInt index);
void java_lang_IndexOutOfBoundsException_initializer(void **__eFlag__, GC_PARAM(java_lang_IndexOutOfBoundsException,this));

GC___REF(struct java_lang_IndexOutOfBoundsException) java_lang_IndexOutOfBoundsException_IndexOutOfBoundsException(void **__eFlag__, void* class, GC_PARAM(LayoutHead,layout));
void java_lang_IndexOutOfBoundsException_IndexOutOfBoundsException_init(void **__eFlag__, GC_PARAM(java_lang_IndexOutOfBoundsException,this));
GC___REF(struct java_lang_IndexOutOfBoundsException) java_lang_IndexOutOfBoundsException_IndexOutOfBoundsException_java_lang_String(void **__eFlag__, void* class, GC_PARAM(LayoutHead,layout),GC_PARAM(java_lang_String,s));
void java_lang_IndexOutOfBoundsException_IndexOutOfBoundsException_java_lang_String_init(void **__eFlag__, GC_PARAM(java_lang_IndexOutOfBoundsException,this),GC_PARAM(java_lang_String,s));
void java_lang_RuntimeException_initializer(void **__eFlag__, GC_PARAM(java_lang_RuntimeException,this));

GC___REF(struct java_lang_RuntimeException) java_lang_RuntimeException_RuntimeException(void **__eFlag__, void* class, GC_PARAM(LayoutHead,layout));
void java_lang_RuntimeException_RuntimeException_init(void **__eFlag__, GC_PARAM(java_lang_RuntimeException,this));
GC___REF(struct java_lang_RuntimeException) java_lang_RuntimeException_RuntimeException_java_lang_String(void **__eFlag__, void* class, GC_PARAM(LayoutHead,layout),GC_PARAM(java_lang_String,s));
void java_lang_RuntimeException_RuntimeException_java_lang_String_init(void **__eFlag__, GC_PARAM(java_lang_RuntimeException,this),GC_PARAM(java_lang_String,s));
void java_lang_Character_initializer(void **__eFlag__, GC_PARAM(java_lang_Character,this));

void java_lang_Character_Subset_initializer(void **__eFlag__, GC_PARAM(java_lang_Character_Subset,this));

GC___REF(struct java_lang_String) java_lang_Character_Subset_toString(void **__eFlag__ ,GC_PARAM(java_lang_Character_Subset,this));
JChar java_lang_Character_readChar_char(void **__eFlag__ ,    JChar ch);
GC___REF(struct java_lang_String) java_lang_Character_toString(void **__eFlag__ ,GC_PARAM(java_lang_Character,this));
JChar java_lang_Character_toLowerCase_char(void **__eFlag__ ,    JChar ch);
JChar java_lang_Character_toUpperCase_char(void **__eFlag__ ,    JChar ch);
JInt java_lang_Character_digit_char_int(void **__eFlag__ ,    JChar ch,
    JInt radix);

void java_lang_Math_initializer(void **__eFlag__, GC_PARAM(java_lang_Math,this));

JInt java_lang_Math_min_int_int(void **__eFlag__ ,    JInt a,
    JInt b);
void java_lang_Long_initializer(void **__eFlag__, GC_PARAM(java_lang_Long,this));

GC___REF(struct java_lang_String) java_lang_Long_toString_long_int(void **__eFlag__ ,    JLong num,
    JInt radix);
GC___REF(struct java_lang_String) java_lang_Long_toString_long(void **__eFlag__ ,    JLong num);
GC___REF(struct java_lang_String) java_lang_Long_toString(void **__eFlag__ ,GC_PARAM(java_lang_Long,this));
void java_lang_Float_initializer(void **__eFlag__, GC_PARAM(java_lang_Float,this));

GC___REF(struct java_lang_String) java_lang_Float_toString_float(void **__eFlag__ ,    JFloat f);
GC___REF(struct java_lang_String) java_lang_Float_toString(void **__eFlag__ ,GC_PARAM(java_lang_Float,this));
void java_lang_Double_initializer(void **__eFlag__, GC_PARAM(java_lang_Double,this));

GC___REF(struct java_lang_String) java_lang_Double_toString_double(void **__eFlag__ ,    JDouble d);
GC___REF(struct java_lang_String) java_lang_Double_toString(void **__eFlag__ ,GC_PARAM(java_lang_Double,this));
void java_lang_StackTraceElement_initializer(void **__eFlag__, GC_PARAM(java_lang_StackTraceElement,this));

GC___REF(struct java_lang_String) java_lang_StackTraceElement_toString(void **__eFlag__ ,GC_PARAM(java_lang_StackTraceElement,this));
void java_lang_IllegalArgumentException_initializer(void **__eFlag__, GC_PARAM(java_lang_IllegalArgumentException,this));

GC___REF(struct java_lang_IllegalArgumentException) java_lang_IllegalArgumentException_IllegalArgumentException(void **__eFlag__, void* class, GC_PARAM(LayoutHead,layout));
void java_lang_IllegalArgumentException_IllegalArgumentException_init(void **__eFlag__, GC_PARAM(java_lang_IllegalArgumentException,this));
GC___REF(struct java_lang_IllegalArgumentException) java_lang_IllegalArgumentException_IllegalArgumentException_java_lang_String(void **__eFlag__, void* class, GC_PARAM(LayoutHead,layout),GC_PARAM(java_lang_String,s));
void java_lang_IllegalArgumentException_IllegalArgumentException_java_lang_String_init(void **__eFlag__, GC_PARAM(java_lang_IllegalArgumentException,this),GC_PARAM(java_lang_String,s));
void java_lang_IllegalStateException_initializer(void **__eFlag__, GC_PARAM(java_lang_IllegalStateException,this));

GC___REF(struct java_lang_IllegalStateException) java_lang_IllegalStateException_IllegalStateException(void **__eFlag__, void* class, GC_PARAM(LayoutHead,layout));
void java_lang_IllegalStateException_IllegalStateException_init(void **__eFlag__, GC_PARAM(java_lang_IllegalStateException,this));
void java_lang_ErrWriter_initializer(void **__eFlag__, GC_PARAM(java_lang_ErrWriter,this));

GC___REF(struct java_lang_ErrWriter) java_lang_ErrWriter_ErrWriter(void **__eFlag__, void* class, GC_PARAM(LayoutHead,layout));
void java_lang_ErrWriter_ErrWriter_init(void **__eFlag__, GC_PARAM(java_lang_ErrWriter,this));
void java_lang_ErrWriter_print_java_lang_String(void **__eFlag__ ,GC_PARAM(java_lang_ErrWriter,this),    GC_PARAM(java_lang_String,s));
void java_lang_ErrWriter_flush(void **__eFlag__ ,GC_PARAM(java_lang_ErrWriter,this));
void java_lang_NullPointerException_initializer(void **__eFlag__, GC_PARAM(java_lang_NullPointerException,this));

GC___REF(struct java_lang_NullPointerException) java_lang_NullPointerException_NullPointerException_java_lang_String(void **__eFlag__, void* class, GC_PARAM(LayoutHead,layout),GC_PARAM(java_lang_String,s));
void java_lang_NullPointerException_NullPointerException_java_lang_String_init(void **__eFlag__, GC_PARAM(java_lang_NullPointerException,this),GC_PARAM(java_lang_String,s));
void java_lang_PhonyReader_initializer(void **__eFlag__, GC_PARAM(java_lang_PhonyReader,this));

JInt java_lang_PhonyReader_read(void **__eFlag__ ,GC_PARAM(java_lang_PhonyReader,this));
GC___REF(struct java_lang_PhonyReader) java_lang_PhonyReader_PhonyReader(void **__eFlag__, void* class, GC_PARAM(LayoutHead,layout));
void java_lang_PhonyReader_PhonyReader_init(void **__eFlag__, GC_PARAM(java_lang_PhonyReader,this));
void java_io_InterruptedIOException_initializer(void **__eFlag__, GC_PARAM(java_io_InterruptedIOException,this));

void java_lang_ArrayIndexOutOfBoundsException_initializer(void **__eFlag__, GC_PARAM(java_lang_ArrayIndexOutOfBoundsException,this));

GC___REF(struct java_lang_ArrayIndexOutOfBoundsException) java_lang_ArrayIndexOutOfBoundsException_ArrayIndexOutOfBoundsException(void **__eFlag__, void* class, GC_PARAM(LayoutHead,layout));
void java_lang_ArrayIndexOutOfBoundsException_ArrayIndexOutOfBoundsException_init(void **__eFlag__, GC_PARAM(java_lang_ArrayIndexOutOfBoundsException,this));
void java_lang_NumberFormatException_initializer(void **__eFlag__, GC_PARAM(java_lang_NumberFormatException,this));

GC___REF(struct java_lang_NumberFormatException) java_lang_NumberFormatException_NumberFormatException(void **__eFlag__, void* class, GC_PARAM(LayoutHead,layout));
void java_lang_NumberFormatException_NumberFormatException_init(void **__eFlag__, GC_PARAM(java_lang_NumberFormatException,this));
void java_lang_Error_initializer(void **__eFlag__, GC_PARAM(java_lang_Error,this));

void java_net_SocketAddress_initializer(void **__eFlag__, GC_PARAM(java_net_SocketAddress,this));

GC___REF(struct java_net_SocketAddress) java_net_SocketAddress_SocketAddress(void **__eFlag__, void* class, GC_PARAM(LayoutHead,layout));
void java_net_SocketAddress_SocketAddress_init(void **__eFlag__, GC_PARAM(java_net_SocketAddress,this));
void ToClient_t_initializer(void **__eFlag__, GC_PARAM(ToClient_t,this));

GC___REF(struct ToClient_t) ToClient_t_ToClient_t_Monitor_java_io_OutputStream(void **__eFlag__, void* class, GC_PARAM(LayoutHead,layout),GC_PARAM(Monitor,mon),GC_PARAM(java_io_OutputStream,os));
void ToClient_t_ToClient_t_Monitor_java_io_OutputStream_init(void **__eFlag__, GC_PARAM(ToClient_t,this),GC_PARAM(Monitor,mon),GC_PARAM(java_io_OutputStream,os));
void ToClient_t_run(void **__eFlag__ ,GC_PARAM(ToClient_t,this));
JLong ToClient_t_timeMillisFromArray_byteA(void **__eFlag__ ,    GC_PARAM(JByteArray,array));
void java_net_UnknownHostException_initializer(void **__eFlag__, GC_PARAM(java_net_UnknownHostException,this));

GC___REF(struct java_net_UnknownHostException) java_net_UnknownHostException_UnknownHostException_java_lang_String(void **__eFlag__, void* class, GC_PARAM(LayoutHead,layout),GC_PARAM(java_lang_String,message));
void java_net_UnknownHostException_UnknownHostException_java_lang_String_init(void **__eFlag__, GC_PARAM(java_net_UnknownHostException,this),GC_PARAM(java_lang_String,message));
void java_net_InetSocketAddress_initializer(void **__eFlag__, GC_PARAM(java_net_InetSocketAddress,this));

GC___REF(struct java_net_InetSocketAddress) java_net_InetSocketAddress_InetSocketAddress_java_net_InetAddress_int(void **__eFlag__, void* class, GC_PARAM(LayoutHead,layout),GC_PARAM(java_net_InetAddress,addr),JInt port);
void java_net_InetSocketAddress_InetSocketAddress_java_net_InetAddress_int_init(void **__eFlag__, GC_PARAM(java_net_InetSocketAddress,this),GC_PARAM(java_net_InetAddress,addr),JInt port);
GC___REF(struct java_net_InetAddress) java_net_InetSocketAddress_getAddress(void **__eFlag__ ,GC_PARAM(java_net_InetSocketAddress,this));
JInt java_net_InetSocketAddress_getPort(void **__eFlag__ ,GC_PARAM(java_net_InetSocketAddress,this));
GC___REF(struct java_lang_String) java_net_InetSocketAddress_toString(void **__eFlag__ ,GC_PARAM(java_net_InetSocketAddress,this));
void java_net_InetAddress_initializer(void **__eFlag__, GC_PARAM(java_net_InetAddress,this));

GC___REF(struct java_net_InetAddress) java_net_InetAddress_InetAddress_JByteA_java_lang_String(void **__eFlag__, void* class, GC_PARAM(LayoutHead,layout),GC_PARAM(JByteArray,ipaddr),GC_PARAM(java_lang_String,hostname));
void java_net_InetAddress_InetAddress_JByteA_java_lang_String_init(void **__eFlag__, GC_PARAM(java_net_InetAddress,this),GC_PARAM(JByteArray,ipaddr),GC_PARAM(java_lang_String,hostname));
JBoolean java_net_InetAddress_isMulticastAddress(void **__eFlag__ ,GC_PARAM(java_net_InetAddress,this));
GC___REF(struct java_lang_String) java_net_InetAddress_getHostName(void **__eFlag__ ,GC_PARAM(java_net_InetAddress,this));
GC___REF(struct JByteArray) java_net_InetAddress_getAddress(void **__eFlag__ ,GC_PARAM(java_net_InetAddress,this));
GC___REF(struct java_lang_String) java_net_InetAddress_getHostAddress(void **__eFlag__ ,GC_PARAM(java_net_InetAddress,this));
GC___REF(struct java_lang_String) java_net_InetAddress_toString(void **__eFlag__ ,GC_PARAM(java_net_InetAddress,this));
GC___REF(struct java_net_InetAddress) java_net_InetAddress_getByAddress_java_lang_String_byteA(void **__eFlag__ ,    GC_PARAM(java_lang_String,host),
    GC_PARAM(JByteArray,addr));
GC___REF(struct java_net_InetAddress) java_net_InetAddress_getByName_java_lang_String(void **__eFlag__ ,    GC_PARAM(java_lang_String,hostname));
JInt java_net_InetAddress_getLocalHostAddr(void **__eFlag__ );
JInt java_net_InetAddress_getHostByName_java_lang_String(void **__eFlag__ ,    GC_PARAM(java_lang_String,name));
void java_io_SimpleTCPInputStream_initializer(void **__eFlag__, GC_PARAM(java_io_SimpleTCPInputStream,this));

JInt java_io_SimpleTCPInputStream_readByte_int(void **__eFlag__ ,    JInt sockfd);
JInt java_io_SimpleTCPInputStream_read_int_byteA_int_int(void **__eFlag__ ,    JInt sockfd,
    GC_PARAM(JByteArray,data),
    JInt offset,
    JInt length);
GC___REF(struct java_io_SimpleTCPInputStream) java_io_SimpleTCPInputStream_SimpleTCPInputStream_int(void **__eFlag__, void* class, GC_PARAM(LayoutHead,layout),JInt fd);
void java_io_SimpleTCPInputStream_SimpleTCPInputStream_int_init(void **__eFlag__, GC_PARAM(java_io_SimpleTCPInputStream,this),JInt fd);
JInt java_io_SimpleTCPInputStream_read(void **__eFlag__ ,GC_PARAM(java_io_SimpleTCPInputStream,this));
JInt java_io_SimpleTCPInputStream_read_byteA_int_int(void **__eFlag__ ,GC_PARAM(java_io_SimpleTCPInputStream,this),    GC_PARAM(JByteArray,b),
    JInt off,
    JInt len);
void java_io_SimpleTCPOutputStream_initializer(void **__eFlag__, GC_PARAM(java_io_SimpleTCPOutputStream,this));

JInt java_io_SimpleTCPOutputStream_writeByte_int_int(void **__eFlag__ ,    JInt sockfd,
    JInt data);
JInt java_io_SimpleTCPOutputStream_writeByteA_int_byteA_int_int(void **__eFlag__ ,    JInt sockfd,
    GC_PARAM(JByteArray,data),
    JInt off,
    JInt len);
void java_io_SimpleTCPOutputStream_close_int(void **__eFlag__ ,    JInt sockfd);
GC___REF(struct java_io_SimpleTCPOutputStream) java_io_SimpleTCPOutputStream_SimpleTCPOutputStream_int(void **__eFlag__, void* class, GC_PARAM(LayoutHead,layout),JInt fd);
void java_io_SimpleTCPOutputStream_SimpleTCPOutputStream_int_init(void **__eFlag__, GC_PARAM(java_io_SimpleTCPOutputStream,this),JInt fd);
void java_io_SimpleTCPOutputStream_write_int(void **__eFlag__ ,GC_PARAM(java_io_SimpleTCPOutputStream,this),    JInt b);
void java_io_SimpleTCPOutputStream_write_byteA(void **__eFlag__ ,GC_PARAM(java_io_SimpleTCPOutputStream,this),    GC_PARAM(JByteArray,b));
void java_io_SimpleTCPOutputStream_write_byteA_int_int(void **__eFlag__ ,GC_PARAM(java_io_SimpleTCPOutputStream,this),    GC_PARAM(JByteArray,b),
    JInt off,
    JInt len);
void java_io_SimpleTCPOutputStream_flush(void **__eFlag__ ,GC_PARAM(java_io_SimpleTCPOutputStream,this));
void java_io_SimpleTCPOutputStream_close(void **__eFlag__ ,GC_PARAM(java_io_SimpleTCPOutputStream,this));

GC_GLOBALS

/* Declare phony Object ref to be used when */
/* return value is not used by the application */
GC_REF(java_lang_Object, ___phonyObj___);


/* method: Server.main(java.lang.String[]) */
GC_PROC_BEGIN(
    Server_main_java_lang_StringA,
    GC_PARAM(RefArray,args))
  GC_PARAM_REF(RefArray, args);
  GC_FUNC_ENTER;
{
  GC_REF(Monitor,mon);
  GC_REF(java_lang_Thread,camToMonitor);
  GC_REF(java_lang_Thread,fromClient);
  GC_REF(HTTP_t,http);
  GC_REF(java_lang_PhonyWriter,_tmp_0);
  GC_PUSH_ROOT(_tmp_0);
  GC_GET_REF(_tmp_0, java_lang_System_Static, _java_lang_System_out);
  GC_REF(java_lang_String,_tmp_1);
  GC_PUSH_ROOT(_tmp_1);
  GC_REF(java_lang_StringBuffer,_tmp_2);
  GC_PUSH_ROOT(_tmp_2);
  GC_REF_FUNC_CALL(_tmp_2, java_lang_StringBuffer_StringBuffer, &java_lang_StringBuffer_Class, GC_PASS(java_lang_StringBuffer_Layout));
  GC_REF(java_lang_String,_tmp_3);
  GC_PUSH_ROOT(_tmp_3);
  GC_REF_FUNC_CALL(_tmp_3, java_lang_String_String_CCharArray, &java_lang_String_Class, GC_PASS(java_lang_String_Layout), "main ");
  GC_REF_FUNC_CALL(_tmp_2, java_lang_StringBuffer_append_java_lang_Object, GC_PASS(_tmp_2), GC_PASS(_tmp_3));
  JInt _tmp_4;
  GC_REF(java_lang_String,_tmp_5);
  GC_PUSH_ROOT(_tmp_5);
  GC_GET_REF_ARRAY(_tmp_5, args, 0);
  GC_VAR_FUNC_CALL(_tmp_4, java_lang_Integer_parseInt_java_lang_String, GC_PASS(_tmp_5));CHECK(0);
  GC_REF_FUNC_CALL(_tmp_2, java_lang_StringBuffer_append_int, GC_PASS(_tmp_2), _tmp_4);
  GC_REF_FUNC_CALL(_tmp_1, java_lang_StringBuffer_toString, GC_PASS(_tmp_2));
  {
    struct java_lang_PhonyWriter_ClassStruct *_tmp_method;
    GC_GET(_tmp_method, _tmp_0, class);
    GC_PROC_CALL(_tmp_method->methodTbl->println_java_lang_String, GC_PASS(_tmp_0), GC_PASS(_tmp_1));
  }CHECK(0);
  GC_PUSH_ROOT(mon);
  GC_REF_FUNC_CALL(mon, Monitor_Monitor, &Monitor_Class, GC_PASS(Monitor_Layout));CHECK(0);
  GC_PUSH_ROOT(camToMonitor);
  GC_REF_FUNC_CALL(camToMonitor, CamToMonitor_t_CamToMonitor_t_Monitor, &CamToMonitor_t_Class, GC_PASS(CamToMonitor_t_Layout), GC_PASS(mon));CHECK(0);
  GC_PUSH_ROOT(fromClient);
  JInt _tmp_6;
  GC_REF(java_lang_String,_tmp_7);
  GC_PUSH_ROOT(_tmp_7);
  GC_GET_REF_ARRAY(_tmp_7, args, 0);
  GC_VAR_FUNC_CALL(_tmp_6, java_lang_Integer_parseInt_java_lang_String, GC_PASS(_tmp_7));CHECK(0);
  GC_REF_FUNC_CALL(fromClient, FromClient_t_FromClient_t_Monitor_int, &FromClient_t_Class, GC_PASS(FromClient_t_Layout), GC_PASS(mon), _tmp_6);CHECK(0);
  {
    struct java_lang_Thread_ClassStruct *_tmp_method;
    GC_GET(_tmp_method, camToMonitor, class);
    GC_PROC_CALL(_tmp_method->methodTbl->start, GC_PASS(camToMonitor));
  }CHECK(0);
  {
    struct java_lang_Thread_ClassStruct *_tmp_method;
    GC_GET(_tmp_method, fromClient, class);
    GC_PROC_CALL(_tmp_method->methodTbl->start, GC_PASS(fromClient));
  }CHECK(0);
  GC_PUSH_ROOT(http);
  JInt _tmp_8;
  GC_REF(java_lang_String,_tmp_9);
  GC_PUSH_ROOT(_tmp_9);
  GC_GET_REF_ARRAY(_tmp_9, args, 1);
  GC_VAR_FUNC_CALL(_tmp_8, java_lang_Integer_parseInt_java_lang_String, GC_PASS(_tmp_9));CHECK(0);
  GC_REF_FUNC_CALL(http, HTTP_t_HTTP_t_Monitor_int, &HTTP_t_Class, GC_PASS(HTTP_t_Layout), GC_PASS(mon), _tmp_8);CHECK(0);
  {
    struct java_lang_Thread_ClassStruct *_tmp_method;
    GC_GET(_tmp_method, http, class);
    GC_PROC_CALL(_tmp_method->methodTbl->start, GC_PASS(http));
  }CHECK(0);
  GC_POP_ROOT(_tmp_9);
  GC_POP_ROOT(http);
  GC_POP_ROOT(_tmp_7);
  GC_POP_ROOT(fromClient);
  GC_POP_ROOT(camToMonitor);
  GC_POP_ROOT(mon);
  GC_POP_ROOT(_tmp_5);
  GC_POP_ROOT(_tmp_3);
  GC_POP_ROOT(_tmp_2);
  GC_POP_ROOT(_tmp_1);
  GC_POP_ROOT(_tmp_0);
}
__branch_1:;
  GC_FUNC_LEAVE;
GC_PROC_END(Server_main_java_lang_StringA)


GC_PROC_BEGIN(java_lang_Object_initializer,GC_PARAM(java_lang_Object,this))
  GC_PARAM_REF(java_lang_Object,this);
  GC_FUNC_ENTER;
  GC_FUNC_LEAVE;
GC_PROC_END(java_lang_Object_initializer)


/* constructor: Object() */
GC_REF_FUNC_BEGIN(java_lang_Object,
    java_lang_Object_Object,
    void* class,
    GC_PARAM(LayoutHead, layout))
  GC_PARAM_REF(LayoutHead, layout);
  GC_REF(java_lang_Object,this);
  GC_PUSH_PARAM(layout);
  GC_FUNC_ENTER;
  GC_PUSH_ROOT(this);
  {
    GC_NEW(this,layout);
    GC_SET(this,class,class);
    GC_PROC_CALL(java_lang_Object_initializer,GC_PASS(this));
    GC_PROC_CALL(java_lang_Object_Object_init, GC_PASS(this));
    GC_ASSIGN(gc_result, this);
  }
  GC_POP_ROOT(this);
  GC_FUNC_LEAVE;
  GC_POP_PARAM(layout);
GC_REF_FUNC_END(java_lang_Object, java_lang_Object_Object)


/* init func: Object() */
GC_PROC_BEGIN(
    java_lang_Object_Object_init,
    GC_PARAM(java_lang_Object,this))
  GC_PARAM_REF(java_lang_Object,this);
  GC_PUSH_PARAM(this);
  GC_FUNC_ENTER;
  {
  }
  __branch_1:;
  GC_FUNC_LEAVE;
  GC_POP_PARAM(this);
GC_PROC_END(java_lang_Object_Object_init)


/* method: Object.toString() */
GC_REF_FUNC_BEGIN(java_lang_String,
    java_lang_Object_toString,
    GC_PARAM(java_lang_Object,this))
  GC_PARAM_REF(java_lang_Object,this);
  GC_PUSH_PARAM(this);
  GC_REF(java_lang_String, __result);
  GC_PUSH_ROOT(__result);
  GC_FUNC_ENTER;
{
  GC_REF(java_lang_String,_tmp_10);
  GC_PUSH_ROOT(_tmp_10);
  GC_REF(java_lang_String,_tmp_11);
  GC_PUSH_ROOT(_tmp_11);
  GC_REF_FUNC_CALL(_tmp_11, java_lang_String_String_CCharArray, &java_lang_String_Class, GC_PASS(java_lang_String_Layout), "Object");
  GC_REF_FUNC_CALL(_tmp_10, java_lang_String_String_java_lang_String, &java_lang_String_Class, GC_PASS(java_lang_String_Layout), GC_PASS(_tmp_11));CHECK(0);
GC_ASSIGN(__result, _tmp_10);
  GC_POP_ROOT(_tmp_10);
  GC_POP_ROOT(_tmp_11);
  goto __branch_1;
}
__branch_1:;
  GC_ASSIGN(gc_result, __result);
  GC_POP_ROOT(__result);
  GC_FUNC_LEAVE;
GC_REF_FUNC_END(java_lang_String, java_lang_Object_toString)


/* method: Object.wait() */
GC_PROC_BEGIN(
    java_lang_Object_wait,
    GC_PARAM(java_lang_Object,this))
  EXCEPTION_THROWS
  GC_PARAM_REF(java_lang_Object,this);
  GC_PUSH_PARAM(this);
  GC_FUNC_ENTER;
{
  {
    struct java_lang_Object_ClassStruct *_tmp_method;
    GC_GET(_tmp_method, this, class);
    GC_PROC_CALL(_tmp_method->methodTbl->wait_long_int, GC_PASS(this), 0, 0);
  }CHECK(0);
}
__branch_1:;
  GC_FUNC_LEAVE;
GC_PROC_END(java_lang_Object_wait)


GC_PROC_BEGIN(java_lang_String_initializer,GC_PARAM(java_lang_String,this))
  GC_PARAM_REF(java_lang_String,this);
  GC_FUNC_ENTER;
  GC_PROC_CALL(java_lang_Object_initializer,GC_PASS(this));
  GC_FUNC_LEAVE;
GC_PROC_END(java_lang_String_initializer)


/* constructor: String() */
GC_REF_FUNC_BEGIN(java_lang_String,
    java_lang_String_String,
    void* class,
    GC_PARAM(LayoutHead, layout))
  GC_PARAM_REF(LayoutHead, layout);
  GC_REF(java_lang_String,this);
  GC_PUSH_PARAM(layout);
  GC_FUNC_ENTER;
  GC_PUSH_ROOT(this);
  {
    GC_NEW(this,layout);
    GC_SET(this,class,class);
    GC_PROC_CALL(java_lang_String_initializer,GC_PASS(this));
    GC_PROC_CALL(java_lang_String_String_init, GC_PASS(this));
    GC_ASSIGN(gc_result, this);
  }
  GC_POP_ROOT(this);
  GC_FUNC_LEAVE;
  GC_POP_PARAM(layout);
GC_REF_FUNC_END(java_lang_String, java_lang_String_String)


/* init func: String() */
GC_PROC_BEGIN(
    java_lang_String_String_init,
    GC_PARAM(java_lang_String,this))
  GC_PARAM_REF(java_lang_String,this);
  GC_PUSH_PARAM(this);
  GC_FUNC_ENTER;
  {
    GC_PROC_CALL(java_lang_Object_Object_init, GC_PASS(this));CHECK(0);
    {
      GC_SET_REF(this, _java_lang_String_value, JAVA_NULL);
      GC_SET(this, _java_lang_String_offset, 0);
      GC_SET(this, _java_lang_String_count, 0);
    }
  }
  __branch_1:;
  GC_FUNC_LEAVE;
  GC_POP_PARAM(this);
GC_PROC_END(java_lang_String_String_init)


/* constructor: String(String str) */
GC_REF_FUNC_BEGIN(java_lang_String,
    java_lang_String_String_java_lang_String,
    void* class,
    GC_PARAM(LayoutHead, layout),
    GC_PARAM(java_lang_String,str))
  GC_PARAM_REF(LayoutHead, layout);
  GC_PARAM_REF(java_lang_String, str);
  GC_REF(java_lang_String,this);
  GC_PUSH_PARAM(layout);
  GC_FUNC_ENTER;
  GC_PUSH_ROOT(this);
  {
    GC_NEW(this,layout);
    GC_SET(this,class,class);
    GC_PROC_CALL(java_lang_String_initializer,GC_PASS(this));
    GC_PROC_CALL(java_lang_String_String_java_lang_String_init, GC_PASS(this), GC_PASS(str));
    GC_ASSIGN(gc_result, this);
  }
  GC_POP_ROOT(this);
  GC_FUNC_LEAVE;
  GC_POP_PARAM(layout);
GC_REF_FUNC_END(java_lang_String, java_lang_String_String_java_lang_String)


/* init func: String(String str) */
GC_PROC_BEGIN(
    java_lang_String_String_java_lang_String_init,
    GC_PARAM(java_lang_String,this),
    GC_PARAM(java_lang_String,str))
  GC_PARAM_REF(java_lang_String,this);
  GC_PARAM_REF(java_lang_String, str);
  GC_PUSH_PARAM(this);
  GC_FUNC_ENTER;
  {
    GC_PROC_CALL(java_lang_Object_Object_init, GC_PASS(this));CHECK(0);
    {
      GC_REF(JCharArray,_tmp_12);
      GC_PUSH_ROOT(_tmp_12);
      GC_GET_REF(_tmp_12, str, _java_lang_String_value);
      GC_SET_REF(this, _java_lang_String_value, _tmp_12);
      JInt _tmp_13;
      GC_GET(_tmp_13, str, _java_lang_String_offset);
      GC_SET(this, _java_lang_String_offset, _tmp_13);
      JInt _tmp_14;
      GC_GET(_tmp_14, str, _java_lang_String_count);
      GC_SET(this, _java_lang_String_count, _tmp_14);
      JInt _tmp_15;
      GC_GET(_tmp_15, str, _java_lang_String_cachedHashCode);
      GC_SET(this, _java_lang_String_cachedHashCode, _tmp_15);
      GC_POP_ROOT(_tmp_12);
    }
  }
  __branch_1:;
  GC_FUNC_LEAVE;
  GC_POP_PARAM(this);
GC_PROC_END(java_lang_String_String_java_lang_String_init)


/* constructor: String(char[] data) */
GC_REF_FUNC_BEGIN(java_lang_String,
    java_lang_String_String_JCharA,
    void* class,
    GC_PARAM(LayoutHead, layout),
    GC_PARAM(JCharArray,data))
  GC_PARAM_REF(LayoutHead, layout);
  GC_PARAM_REF(JCharArray, data);
  GC_REF(java_lang_String,this);
  GC_PUSH_PARAM(layout);
  GC_FUNC_ENTER;
  GC_PUSH_ROOT(this);
  {
    GC_NEW(this,layout);
    GC_SET(this,class,class);
    GC_PROC_CALL(java_lang_String_initializer,GC_PASS(this));
    GC_PROC_CALL(java_lang_String_String_JCharA_init, GC_PASS(this), GC_PASS(data));
    GC_ASSIGN(gc_result, this);
  }
  GC_POP_ROOT(this);
  GC_FUNC_LEAVE;
  GC_POP_PARAM(layout);
GC_REF_FUNC_END(java_lang_String, java_lang_String_String_JCharA)


/* init func: String(char[] data) */
GC_PROC_BEGIN(
    java_lang_String_String_JCharA_init,
    GC_PARAM(java_lang_String,this),
    GC_PARAM(JCharArray,data))
  GC_PARAM_REF(java_lang_String,this);
  GC_PARAM_REF(JCharArray, data);
  GC_PUSH_PARAM(this);
  GC_FUNC_ENTER;
  {
    JInt _tmp_16;
    GC_GET(_tmp_16, data, _JCharA_length);
    GC_PROC_CALL(java_lang_String_String_JCharA_int_int_boolean_init, GC_PASS(this),GC_PASS(data),0,_tmp_16,false);CHECK(0);
    {
    }
  }
  __branch_1:;
  GC_FUNC_LEAVE;
  GC_POP_PARAM(this);
GC_PROC_END(java_lang_String_String_JCharA_init)


/* constructor: String(char[] data, int offset, int count) */
GC_REF_FUNC_BEGIN(java_lang_String,
    java_lang_String_String_JCharA_int_int,
    void* class,
    GC_PARAM(LayoutHead, layout),
    GC_PARAM(JCharArray,data),
    JInt offset,
    JInt count)
  GC_PARAM_REF(LayoutHead, layout);
  GC_PARAM_REF(JCharArray, data);
  GC_REF(java_lang_String,this);
  GC_PUSH_PARAM(layout);
  GC_FUNC_ENTER;
  GC_PUSH_ROOT(this);
  {
    GC_NEW(this,layout);
    GC_SET(this,class,class);
    GC_PROC_CALL(java_lang_String_initializer,GC_PASS(this));
    GC_PROC_CALL(java_lang_String_String_JCharA_int_int_init, GC_PASS(this), GC_PASS(data), offset, count);
    GC_ASSIGN(gc_result, this);
  }
  GC_POP_ROOT(this);
  GC_FUNC_LEAVE;
  GC_POP_PARAM(layout);
GC_REF_FUNC_END(java_lang_String, java_lang_String_String_JCharA_int_int)


/* init func: String(char[] data, int offset, int count) */
GC_PROC_BEGIN(
    java_lang_String_String_JCharA_int_int_init,
    GC_PARAM(java_lang_String,this),
    GC_PARAM(JCharArray,data),
    JInt offset,
    JInt count)
  GC_PARAM_REF(java_lang_String,this);
  GC_PARAM_REF(JCharArray, data);
  GC_PUSH_PARAM(this);
  GC_FUNC_ENTER;
  {
    GC_PROC_CALL(java_lang_String_String_JCharA_int_int_boolean_init, GC_PASS(this),GC_PASS(data),offset,count,false);CHECK(0);
    {
    }
  }
  __branch_1:;
  GC_FUNC_LEAVE;
  GC_POP_PARAM(this);
GC_PROC_END(java_lang_String_String_JCharA_int_int_init)


/* constructor: String(byte[] ascii, int hibyte, int offset, int count) */
GC_REF_FUNC_BEGIN(java_lang_String,
    java_lang_String_String_JByteA_int_int_int,
    void* class,
    GC_PARAM(LayoutHead, layout),
    GC_PARAM(JByteArray,ascii),
    JInt hibyte,
    JInt offset,
    JInt count)
  GC_PARAM_REF(LayoutHead, layout);
  GC_PARAM_REF(JByteArray, ascii);
  GC_REF(java_lang_String,this);
  GC_PUSH_PARAM(layout);
  GC_FUNC_ENTER;
  GC_PUSH_ROOT(this);
  {
    GC_NEW(this,layout);
    GC_SET(this,class,class);
    GC_PROC_CALL(java_lang_String_initializer,GC_PASS(this));
    GC_PROC_CALL(java_lang_String_String_JByteA_int_int_int_init, GC_PASS(this), GC_PASS(ascii), hibyte, offset, count);
    GC_ASSIGN(gc_result, this);
  }
  GC_POP_ROOT(this);
  GC_FUNC_LEAVE;
  GC_POP_PARAM(layout);
GC_REF_FUNC_END(java_lang_String, java_lang_String_String_JByteA_int_int_int)


/* init func: String(byte[] ascii, int hibyte, int offset, int count) */
GC_PROC_BEGIN(
    java_lang_String_String_JByteA_int_int_int_init,
    GC_PARAM(java_lang_String,this),
    GC_PARAM(JByteArray,ascii),
    JInt hibyte,
    JInt offset,
    JInt count)
  GC_PARAM_REF(java_lang_String,this);
  GC_PARAM_REF(JByteArray, ascii);
  GC_PUSH_PARAM(this);
  GC_FUNC_ENTER;
  {
    GC_PROC_CALL(java_lang_Object_Object_init, GC_PASS(this));CHECK(0);
    {
      JBoolean _tmp_17;
      JBoolean _tmp_18;
      if (offset < 0) {
        _tmp_18 = true;
      } else {
        if (count < 0) {
          _tmp_18 = true;
        } else {
          _tmp_18 = false;
        }
      }
      if (_tmp_18) {
        _tmp_17 = true;
      } else {
        JInt _tmp_19;
        GC_GET(_tmp_19, ascii, _JByteA_length);
        if (offset + count > _tmp_19) {
          _tmp_17 = true;
        } else {
          _tmp_17 = false;
        }
      }
      if (_tmp_17)
      {
        GC_REF(java_lang_PhonyWriter,_tmp_20);
        GC_PUSH_ROOT(_tmp_20);
        GC_GET_REF(_tmp_20, java_lang_System_Static, _java_lang_System_out);
        GC_REF(java_lang_String,_tmp_21);
        GC_PUSH_ROOT(_tmp_21);
        GC_REF_FUNC_CALL(_tmp_21, java_lang_String_String_CCharArray, &java_lang_String_Class, GC_PASS(java_lang_String_Layout), "String(byte[],int,int,int) should throw StringIndexOutOfBoundsException here!!");
        {
          struct java_lang_PhonyWriter_ClassStruct *_tmp_method;
          GC_GET(_tmp_method, _tmp_20, class);
          GC_PROC_CALL(_tmp_method->methodTbl->println_java_lang_String, GC_PASS(_tmp_20), GC_PASS(_tmp_21));
        }CHECK(0);
        GC_POP_ROOT(_tmp_21);
        GC_POP_ROOT(_tmp_20);
      }
      GC_REF(JCharArray,_tmp_22);
      GC_PUSH_ROOT(_tmp_22);
      GC_REF_FUNC_CALL(_tmp_22, newJCharArray, count);CHECK(0);
      GC_SET_REF(this, _java_lang_String_value, _tmp_22);
      GC_SET(this, _java_lang_String_offset, 0);
      GC_SET(this, _java_lang_String_count, count);
      hibyte = hibyte << 8;
      offset = offset + count;
      {
        goto __cond_1;
__loop_1:;
        GC_REF(JCharArray,_tmp_23);
        GC_PUSH_ROOT(_tmp_23);
        GC_GET_REF(_tmp_23, this, _java_lang_String_value);
        JChar _tmp_24;
        JByte _tmp_25;
        offset = offset - 1;
        GC_GET_VAR_ARRAY(_tmp_25, ascii, offset);
        _tmp_24 = (JChar) ((hibyte | (_tmp_25 & 0xff)));        GC_SET_VAR_ARRAY(_tmp_23, count, _tmp_24);
        GC_POP_ROOT(_tmp_23);
__cond_1:;
        JBoolean _tmp_26;
        count = count - 1;
        _tmp_26 = count >= 0;
        if (_tmp_26) {
          goto __loop_1;
        }
      }
      GC_POP_ROOT(_tmp_22);
    }
  }
  __branch_1:;
  GC_FUNC_LEAVE;
  GC_POP_PARAM(this);
GC_PROC_END(java_lang_String_String_JByteA_int_int_int_init)


/* constructor: String(byte[] data, int offset, int count) */
GC_REF_FUNC_BEGIN(java_lang_String,
    java_lang_String_String_JByteA_int_int,
    void* class,
    GC_PARAM(LayoutHead, layout),
    GC_PARAM(JByteArray,data),
    JInt offset,
    JInt count)
  GC_PARAM_REF(LayoutHead, layout);
  GC_PARAM_REF(JByteArray, data);
  GC_REF(java_lang_String,this);
  GC_PUSH_PARAM(layout);
  GC_FUNC_ENTER;
  GC_PUSH_ROOT(this);
  {
    GC_NEW(this,layout);
    GC_SET(this,class,class);
    GC_PROC_CALL(java_lang_String_initializer,GC_PASS(this));
    GC_PROC_CALL(java_lang_String_String_JByteA_int_int_init, GC_PASS(this), GC_PASS(data), offset, count);
    GC_ASSIGN(gc_result, this);
  }
  GC_POP_ROOT(this);
  GC_FUNC_LEAVE;
  GC_POP_PARAM(layout);
GC_REF_FUNC_END(java_lang_String, java_lang_String_String_JByteA_int_int)


/* init func: String(byte[] data, int offset, int count) */
GC_PROC_BEGIN(
    java_lang_String_String_JByteA_int_int_init,
    GC_PARAM(java_lang_String,this),
    GC_PARAM(JByteArray,data),
    JInt offset,
    JInt count)
  GC_PARAM_REF(java_lang_String,this);
  GC_PARAM_REF(JByteArray, data);
  GC_PUSH_PARAM(this);
  GC_FUNC_ENTER;
  {
    GC_PROC_CALL(java_lang_Object_Object_init, GC_PASS(this));CHECK(0);
    {
      JInt o;
      JInt c;
      GC_REF(JCharArray,v);
      GC_REF(java_lang_String,encoding);
      JBoolean _tmp_27;
      JBoolean _tmp_28;
      if (offset < 0) {
        _tmp_28 = true;
      } else {
        if (count < 0) {
          _tmp_28 = true;
        } else {
          _tmp_28 = false;
        }
      }
      if (_tmp_28) {
        _tmp_27 = true;
      } else {
        JInt _tmp_29;
        GC_GET(_tmp_29, data, _JByteA_length);
        if (offset + count > _tmp_29) {
          _tmp_27 = true;
        } else {
          _tmp_27 = false;
        }
      }
      if (_tmp_27)
      {
        GC_REF(java_lang_PhonyWriter,_tmp_30);
        GC_PUSH_ROOT(_tmp_30);
        GC_GET_REF(_tmp_30, java_lang_System_Static, _java_lang_System_out);
        GC_REF(java_lang_String,_tmp_31);
        GC_PUSH_ROOT(_tmp_31);
        GC_REF_FUNC_CALL(_tmp_31, java_lang_String_String_CCharArray, &java_lang_String_Class, GC_PASS(java_lang_String_Layout), "String(byte[],int,int) should throw StringIndexOutOfBoundsException here!!");
        {
          struct java_lang_PhonyWriter_ClassStruct *_tmp_method;
          GC_GET(_tmp_method, _tmp_30, class);
          GC_PROC_CALL(_tmp_method->methodTbl->println_java_lang_String, GC_PASS(_tmp_30), GC_PASS(_tmp_31));
        }CHECK(0);
        GC_POP_ROOT(_tmp_31);
        GC_POP_ROOT(_tmp_30);
      }
      GC_PUSH_ROOT(v);
      GC_PUSH_ROOT(encoding);
      GC_REF_FUNC_CALL(v, newJCharArray, count);CHECK(0);
      o = 0;
      c = count;
      {
        JInt i;
        i = 0;
        {
          goto __cond_2;
__loop_2:;
          JChar _tmp_32;
          JByte _tmp_33;
          GC_GET_VAR_ARRAY(_tmp_33, data, offset + i);
          _tmp_32 = (JChar) (_tmp_33);          GC_SET_VAR_ARRAY(v, i, _tmp_32);
          i = i + 1;
__cond_2:;
          JBoolean _tmp_34;
          _tmp_34 = i < count;
          if (_tmp_34) {
            goto __loop_2;
          }
        }
      }
      GC_SET_REF(this, _java_lang_String_value, v);
      GC_SET(this, _java_lang_String_offset, o);
      GC_SET(this, _java_lang_String_count, c);
      GC_POP_ROOT(encoding);
      GC_POP_ROOT(v);
    }
  }
  __branch_1:;
  GC_FUNC_LEAVE;
  GC_POP_PARAM(this);
GC_PROC_END(java_lang_String_String_JByteA_int_int_init)


/* constructor: String(StringBuffer buffer) */
GC_REF_FUNC_BEGIN(java_lang_String,
    java_lang_String_String_java_lang_StringBuffer,
    void* class,
    GC_PARAM(LayoutHead, layout),
    GC_PARAM(java_lang_StringBuffer,buffer))
  GC_PARAM_REF(LayoutHead, layout);
  GC_PARAM_REF(java_lang_StringBuffer, buffer);
  GC_REF(java_lang_String,this);
  GC_PUSH_PARAM(layout);
  GC_FUNC_ENTER;
  GC_PUSH_ROOT(this);
  {
    GC_NEW(this,layout);
    GC_SET(this,class,class);
    GC_PROC_CALL(java_lang_String_initializer,GC_PASS(this));
    GC_PROC_CALL(java_lang_String_String_java_lang_StringBuffer_init, GC_PASS(this), GC_PASS(buffer));
    GC_ASSIGN(gc_result, this);
  }
  GC_POP_ROOT(this);
  GC_FUNC_LEAVE;
  GC_POP_PARAM(layout);
GC_REF_FUNC_END(java_lang_String, java_lang_String_String_java_lang_StringBuffer)


/* init func: String(StringBuffer buffer) */
GC_PROC_BEGIN(
    java_lang_String_String_java_lang_StringBuffer_init,
    GC_PARAM(java_lang_String,this),
    GC_PARAM(java_lang_StringBuffer,buffer))
  GC_PARAM_REF(java_lang_String,this);
  GC_PARAM_REF(java_lang_StringBuffer, buffer);
  GC_PUSH_PARAM(this);
  GC_FUNC_ENTER;
  {
    GC_PROC_CALL(java_lang_Object_Object_init, GC_PASS(this));CHECK(0);
    {
      EXCEPTION_TRY
      {
        GC_PROC_CALL(ljrt_monitor_enter, GC_PASS(buffer));
        {
          JInt len;
          JBoolean cond;
          GC_SET(this, _java_lang_String_offset, 0);
          JInt _tmp_35;
          GC_GET(_tmp_35, buffer, _java_lang_StringBuffer_count);
          GC_SET(this, _java_lang_String_count, _tmp_35);
          GC_REF(JCharArray,_tmp_36);
          GC_PUSH_ROOT(_tmp_36);
          GC_GET_REF(_tmp_36, buffer, _java_lang_StringBuffer_value);
          GC_GET(len, _tmp_36, _JCharA_length);
          JInt _tmp_37;
          GC_GET(_tmp_37, this, _java_lang_String_count);
          cond = (_tmp_37 << 2) < len;
          if (cond)
          {
            GC_REF(JCharArray,_tmp_38);
            GC_PUSH_ROOT(_tmp_38);
            JInt _tmp_39;
            GC_GET(_tmp_39, this, _java_lang_String_count);
            GC_REF_FUNC_CALL(_tmp_38, newJCharArray, _tmp_39);CHECK(1);
            GC_SET_REF(this, _java_lang_String_value, _tmp_38);
            GC_REF(JCharArray,_tmp_40);
            GC_PUSH_ROOT(_tmp_40);
            GC_GET_REF(_tmp_40, buffer, _java_lang_StringBuffer_value);
            GC_REF(JCharArray,_tmp_41);
            GC_PUSH_ROOT(_tmp_41);
            GC_GET_REF(_tmp_41, this, _java_lang_String_value);
            JInt _tmp_42;
            GC_GET(_tmp_42, this, _java_lang_String_count);
            GC_PROC_CALL(java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int, GC_PASS(_tmp_40), 0, GC_PASS(_tmp_41), 0, _tmp_42);CHECK(1);
            GC_POP_ROOT(_tmp_41);
            GC_POP_ROOT(_tmp_40);
            GC_POP_ROOT(_tmp_38);
          }
          else
          {
            GC_SET(buffer, _java_lang_StringBuffer_shared, true);
            GC_REF(JCharArray,_tmp_43);
            GC_PUSH_ROOT(_tmp_43);
            GC_GET_REF(_tmp_43, buffer, _java_lang_StringBuffer_value);
            GC_SET_REF(this, _java_lang_String_value, _tmp_43);
            GC_POP_ROOT(_tmp_43);
          }
          GC_POP_ROOT(_tmp_36);
        }
      }
      EXCEPTION_NO_CATCH(1)
      EXCEPTION_FINALLY
__branch_1:;
      {
        GC_PROC_CALL(ljrt_monitor_leave, GC_PASS(buffer));
      }
      EXCEPTION_END(0)
    }
  }
  __branch_2:;
  GC_FUNC_LEAVE;
  GC_POP_PARAM(this);
GC_PROC_END(java_lang_String_String_java_lang_StringBuffer_init)


/* constructor: String(StringBuilder buffer) */
GC_REF_FUNC_BEGIN(java_lang_String,
    java_lang_String_String_java_lang_StringBuilder,
    void* class,
    GC_PARAM(LayoutHead, layout),
    GC_PARAM(java_lang_StringBuilder,buffer))
  GC_PARAM_REF(LayoutHead, layout);
  GC_PARAM_REF(java_lang_StringBuilder, buffer);
  GC_REF(java_lang_String,this);
  GC_PUSH_PARAM(layout);
  GC_FUNC_ENTER;
  GC_PUSH_ROOT(this);
  {
    GC_NEW(this,layout);
    GC_SET(this,class,class);
    GC_PROC_CALL(java_lang_String_initializer,GC_PASS(this));
    GC_PROC_CALL(java_lang_String_String_java_lang_StringBuilder_init, GC_PASS(this), GC_PASS(buffer));
    GC_ASSIGN(gc_result, this);
  }
  GC_POP_ROOT(this);
  GC_FUNC_LEAVE;
  GC_POP_PARAM(layout);
GC_REF_FUNC_END(java_lang_String, java_lang_String_String_java_lang_StringBuilder)


/* init func: String(StringBuilder buffer) */
GC_PROC_BEGIN(
    java_lang_String_String_java_lang_StringBuilder_init,
    GC_PARAM(java_lang_String,this),
    GC_PARAM(java_lang_StringBuilder,buffer))
  GC_PARAM_REF(java_lang_String,this);
  GC_PARAM_REF(java_lang_StringBuilder, buffer);
  GC_PUSH_PARAM(this);
  GC_FUNC_ENTER;
  {
    GC_REF(JCharArray,_tmp_44);
    GC_PUSH_ROOT(_tmp_44);
    GC_GET_REF(_tmp_44, buffer, _java_lang_StringBuilder_value);
    JInt _tmp_45;
    GC_GET(_tmp_45, buffer, _java_lang_StringBuilder_count);
    GC_PROC_CALL(java_lang_String_String_JCharA_int_int_init, GC_PASS(this),GC_PASS(_tmp_44),0,_tmp_45);CHECK(0);
    {
    }
    GC_POP_ROOT(_tmp_44);
  }
  __branch_1:;
  GC_FUNC_LEAVE;
  GC_POP_PARAM(this);
GC_PROC_END(java_lang_String_String_java_lang_StringBuilder_init)


/* constructor: String(char[] data, int offset, int count, boolean dont_copy) */
GC_REF_FUNC_BEGIN(java_lang_String,
    java_lang_String_String_JCharA_int_int_boolean,
    void* class,
    GC_PARAM(LayoutHead, layout),
    GC_PARAM(JCharArray,data),
    JInt offset,
    JInt count,
    JBoolean dont_copy)
  GC_PARAM_REF(LayoutHead, layout);
  GC_PARAM_REF(JCharArray, data);
  GC_REF(java_lang_String,this);
  GC_PUSH_PARAM(layout);
  GC_FUNC_ENTER;
  GC_PUSH_ROOT(this);
  {
    GC_NEW(this,layout);
    GC_SET(this,class,class);
    GC_PROC_CALL(java_lang_String_initializer,GC_PASS(this));
    GC_PROC_CALL(java_lang_String_String_JCharA_int_int_boolean_init, GC_PASS(this), GC_PASS(data), offset, count, dont_copy);
    GC_ASSIGN(gc_result, this);
  }
  GC_POP_ROOT(this);
  GC_FUNC_LEAVE;
  GC_POP_PARAM(layout);
GC_REF_FUNC_END(java_lang_String, java_lang_String_String_JCharA_int_int_boolean)


/* init func: String(char[] data, int offset, int count, boolean dont_copy) */
GC_PROC_BEGIN(
    java_lang_String_String_JCharA_int_int_boolean_init,
    GC_PARAM(java_lang_String,this),
    GC_PARAM(JCharArray,data),
    JInt offset,
    JInt count,
    JBoolean dont_copy)
  GC_PARAM_REF(java_lang_String,this);
  GC_PARAM_REF(JCharArray, data);
  GC_PUSH_PARAM(this);
  GC_FUNC_ENTER;
  {
    GC_PROC_CALL(java_lang_Object_Object_init, GC_PASS(this));CHECK(0);
    {
      JBoolean _tmp_46;
      JBoolean _tmp_47;
      if (offset < 0) {
        _tmp_47 = true;
      } else {
        if (count < 0) {
          _tmp_47 = true;
        } else {
          _tmp_47 = false;
        }
      }
      if (_tmp_47) {
        _tmp_46 = true;
      } else {
        JInt _tmp_48;
        GC_GET(_tmp_48, data, _JCharA_length);
        if (offset + count > _tmp_48) {
          _tmp_46 = true;
        } else {
          _tmp_46 = false;
        }
      }
      if (_tmp_46)
      {
        GC_REF(java_lang_PhonyWriter,_tmp_49);
        GC_PUSH_ROOT(_tmp_49);
        GC_GET_REF(_tmp_49, java_lang_System_Static, _java_lang_System_out);
        GC_REF(java_lang_String,_tmp_50);
        GC_PUSH_ROOT(_tmp_50);
        GC_REF_FUNC_CALL(_tmp_50, java_lang_String_String_CCharArray, &java_lang_String_Class, GC_PASS(java_lang_String_Layout), "String(char[],int,int,boolean) should throw StringIndexOutOfBoundsException here!!");
        {
          struct java_lang_PhonyWriter_ClassStruct *_tmp_method;
          GC_GET(_tmp_method, _tmp_49, class);
          GC_PROC_CALL(_tmp_method->methodTbl->println_java_lang_String, GC_PASS(_tmp_49), GC_PASS(_tmp_50));
        }CHECK(0);
        GC_POP_ROOT(_tmp_50);
        GC_POP_ROOT(_tmp_49);
      }
      if (dont_copy)
      {
        GC_SET_REF(this, _java_lang_String_value, data);
        GC_SET(this, _java_lang_String_offset, offset);
      }
      else
      {
        GC_REF(JCharArray,_tmp_51);
        GC_PUSH_ROOT(_tmp_51);
        GC_REF_FUNC_CALL(_tmp_51, newJCharArray, count);CHECK(0);
        GC_SET_REF(this, _java_lang_String_value, _tmp_51);
        GC_REF(JCharArray,_tmp_52);
        GC_PUSH_ROOT(_tmp_52);
        GC_GET_REF(_tmp_52, this, _java_lang_String_value);
        GC_PROC_CALL(java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int, GC_PASS(data), offset, GC_PASS(_tmp_52), 0, count);CHECK(0);
        GC_SET(this, _java_lang_String_offset, 0);
        GC_POP_ROOT(_tmp_52);
        GC_POP_ROOT(_tmp_51);
      }
      GC_SET(this, _java_lang_String_count, count);
    }
  }
  __branch_1:;
  GC_FUNC_LEAVE;
  GC_POP_PARAM(this);
GC_PROC_END(java_lang_String_String_JCharA_int_int_boolean_init)


/* method: String.length() */
GC_VAR_FUNC_BEGIN(JInt,
    java_lang_String_length,
    GC_PARAM(java_lang_String,this))
  GC_PARAM_REF(java_lang_String,this);
  GC_PUSH_PARAM(this);
  JInt __result;
  GC_FUNC_ENTER;
{
  JInt _tmp_53;
  GC_GET(_tmp_53, this, _java_lang_String_count);
  __result = _tmp_53;
  goto __branch_1;
}
__branch_1:;
  gc_result = __result;
  GC_FUNC_LEAVE;
GC_VAR_FUNC_END(JInt, java_lang_String_length)


/* method: String.charAt(int) */
GC_VAR_FUNC_BEGIN(JChar,
    java_lang_String_charAt_int,
    GC_PARAM(java_lang_String,this),
    JInt index)
  GC_PARAM_REF(java_lang_String,this);
  GC_PUSH_PARAM(this);
  JChar __result;
  GC_FUNC_ENTER;
{
  JChar _tmp_54;
  GC_REF(JCharArray,_tmp_55);
  GC_PUSH_ROOT(_tmp_55);
  GC_GET_REF(_tmp_55, this, _java_lang_String_value);
  JInt _tmp_56;
  GC_GET(_tmp_56, this, _java_lang_String_offset);
  GC_GET_VAR_ARRAY(_tmp_54, _tmp_55, _tmp_56 + index);
  __result = _tmp_54;
  GC_POP_ROOT(_tmp_55);
  goto __branch_1;
}
__branch_1:;
  gc_result = __result;
  GC_FUNC_LEAVE;
GC_VAR_FUNC_END(JChar, java_lang_String_charAt_int)


/* method: String.getChars(int, int, char[], int) */
GC_PROC_BEGIN(
    java_lang_String_getChars_int_int_charA_int,
    GC_PARAM(java_lang_String,this),
    JInt srcBegin,
    JInt srcEnd,
    GC_PARAM(JCharArray,dst),
    JInt dstBegin)
  GC_PARAM_REF(java_lang_String,this);
  GC_PARAM_REF(JCharArray, dst);
  GC_PUSH_PARAM(this);
  GC_FUNC_ENTER;
{
  JBoolean _tmp_57;
  JBoolean _tmp_58;
  if (srcBegin < 0) {
    _tmp_58 = true;
  } else {
    if (srcBegin > srcEnd) {
      _tmp_58 = true;
    } else {
      _tmp_58 = false;
    }
  }
  if (_tmp_58) {
    _tmp_57 = true;
  } else {
    JInt _tmp_59;
    GC_GET(_tmp_59, this, _java_lang_String_count);
    if (srcEnd > _tmp_59) {
      _tmp_57 = true;
    } else {
      _tmp_57 = false;
    }
  }
  if (_tmp_57)
  {
    GC_REF(java_lang_StringIndexOutOfBoundsException,_tmp_60);
    GC_PUSH_ROOT(_tmp_60);
    GC_REF_FUNC_CALL(_tmp_60, java_lang_StringIndexOutOfBoundsException_StringIndexOutOfBoundsException, &java_lang_StringIndexOutOfBoundsException_Class, GC_PASS(java_lang_StringIndexOutOfBoundsException_Layout));CHECK(0);
    EXCEPTION_STORE_OBJ(_tmp_60);
    GC_POP_ROOT(_tmp_60);
    EXCEPTION_THROW(0,&java_lang_StringIndexOutOfBoundsException_Class)
    GC_POP_ROOT(_tmp_60);
  }
  GC_REF(JCharArray,_tmp_61);
  GC_PUSH_ROOT(_tmp_61);
  GC_GET_REF(_tmp_61, this, _java_lang_String_value);
  JInt _tmp_62;
  GC_GET(_tmp_62, this, _java_lang_String_offset);
  GC_PROC_CALL(java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int, GC_PASS(_tmp_61), srcBegin + _tmp_62, GC_PASS(dst), dstBegin, srcEnd - srcBegin);CHECK(0);
  GC_POP_ROOT(_tmp_61);
}
__branch_1:;
  GC_FUNC_LEAVE;
GC_PROC_END(java_lang_String_getChars_int_int_charA_int)


/* method: String.getBytes(java.lang.String) */
GC_REF_FUNC_BEGIN(JByteArray,
    java_lang_String_getBytes_java_lang_String,
    GC_PARAM(java_lang_String,this),
    GC_PARAM(java_lang_String,enc))
  EXCEPTION_THROWS
  GC_PARAM_REF(java_lang_String,this);
  GC_PARAM_REF(java_lang_String, enc);
  GC_PUSH_PARAM(this);
  GC_REF(JByteArray, __result);
  GC_PUSH_ROOT(__result);
  GC_FUNC_ENTER;
{
  GC_REF(JByteArray,_tmp_63);
  GC_PUSH_ROOT(_tmp_63);
  {
    struct java_lang_String_ClassStruct *_tmp_method;
    GC_GET(_tmp_method, this, class);
    GC_REF_FUNC_CALL(_tmp_63, _tmp_method->methodTbl->getBytes, GC_PASS(this));
  }CHECK(0);
GC_ASSIGN(__result, _tmp_63);
  GC_POP_ROOT(_tmp_63);
  goto __branch_1;
}
__branch_1:;
  GC_ASSIGN(gc_result, __result);
  GC_POP_ROOT(__result);
  GC_FUNC_LEAVE;
GC_REF_FUNC_END(JByteArray, java_lang_String_getBytes_java_lang_String)


/* method: String.getBytes() */
GC_REF_FUNC_BEGIN(JByteArray,
    java_lang_String_getBytes,
    GC_PARAM(java_lang_String,this))
  GC_PARAM_REF(java_lang_String,this);
  GC_PUSH_PARAM(this);
  GC_REF(JByteArray, __result);
  GC_PUSH_ROOT(__result);
  GC_FUNC_ENTER;
{
  GC_REF(JByteArray,bytes);
  GC_PUSH_ROOT(bytes);
  JInt _tmp_64;
  GC_GET(_tmp_64, this, _java_lang_String_count);
  GC_REF_FUNC_CALL(bytes, newJByteArray, _tmp_64);CHECK(0);
  {
    JInt i;
    i = 0;
    {
      goto __cond_3;
__loop_3:;
      {
        JByte _tmp_65;
        JChar _tmp_66;
        GC_REF(JCharArray,_tmp_67);
        GC_PUSH_ROOT(_tmp_67);
        GC_GET_REF(_tmp_67, this, _java_lang_String_value);
        JInt _tmp_68;
        GC_GET(_tmp_68, this, _java_lang_String_offset);
        GC_GET_VAR_ARRAY(_tmp_66, _tmp_67, _tmp_68 + i);
        _tmp_65 = (JByte) (_tmp_66);        GC_SET_VAR_ARRAY(bytes, i, _tmp_65);
        GC_POP_ROOT(_tmp_67);
      }
      i = i + 1;
__cond_3:;
      JBoolean _tmp_69;
      JInt _tmp_70;
      GC_GET(_tmp_70, this, _java_lang_String_count);
      _tmp_69 = i < _tmp_70;
      if (_tmp_69) {
        goto __loop_3;
      }
    }
  }
GC_ASSIGN(__result, bytes);
  GC_POP_ROOT(bytes);
  goto __branch_1;
}
__branch_1:;
  GC_ASSIGN(gc_result, __result);
  GC_POP_ROOT(__result);
  GC_FUNC_LEAVE;
GC_REF_FUNC_END(JByteArray, java_lang_String_getBytes)


/* method: String.equals(java.lang.Object) */
GC_VAR_FUNC_BEGIN(JBoolean,
    java_lang_String_equals_java_lang_Object,
    GC_PARAM(java_lang_String,this),
    GC_PARAM(java_lang_Object,anObject))
  GC_PARAM_REF(java_lang_String,this);
  GC_PARAM_REF(java_lang_Object, anObject);
  GC_PUSH_PARAM(this);
  JBoolean __result;
  GC_FUNC_ENTER;
{
  GC_REF(java_lang_String,str2);
  JInt i;
  JInt x;
  JInt y;
  GC_PUSH_ROOT(str2);
  GC_ASSIGN(str2, anObject);
  JInt _tmp_71;
  GC_GET(_tmp_71, this, _java_lang_String_count);
  JInt _tmp_72;
  GC_GET(_tmp_72, str2, _java_lang_String_count);
  if (_tmp_71 != _tmp_72)
  {
    __result = false;
    GC_POP_ROOT(str2);
    goto __branch_1;
  }
  JBoolean _tmp_73;
  GC_REF(JCharArray,_tmp_74);
  GC_PUSH_ROOT(_tmp_74);
  GC_GET_REF(_tmp_74, this, _java_lang_String_value);
  GC_REF(JCharArray,_tmp_75);
  GC_PUSH_ROOT(_tmp_75);
  GC_GET_REF(_tmp_75, str2, _java_lang_String_value);
  if (GC_EQUAL(_tmp_74, _tmp_75)) {
    JInt _tmp_76;
    GC_GET(_tmp_76, this, _java_lang_String_offset);
    JInt _tmp_77;
    GC_GET(_tmp_77, str2, _java_lang_String_offset);
    if (_tmp_76 == _tmp_77) {
      _tmp_73 = true;
    } else {
      _tmp_73 = false;
    }
  } else {
  _tmp_73 = false;
  }
  if (_tmp_73)
  {
    __result = true;
    GC_POP_ROOT(str2);
    GC_POP_ROOT(_tmp_74);
    GC_POP_ROOT(_tmp_75);
    goto __branch_1;
  }
  GC_GET(i, this, _java_lang_String_count);
  GC_GET(x, this, _java_lang_String_offset);
  GC_GET(y, str2, _java_lang_String_offset);
  {
    goto __cond_4;
__loop_4:;
    JChar _tmp_78;
    GC_REF(JCharArray,_tmp_79);
    GC_PUSH_ROOT(_tmp_79);
    GC_GET_REF(_tmp_79, this, _java_lang_String_value);
    JInt _tmp_80;
    _tmp_80 = x;
    x = _tmp_80 + 1;
    GC_GET_VAR_ARRAY(_tmp_78, _tmp_79, _tmp_80);
    JChar _tmp_81;
    GC_REF(JCharArray,_tmp_82);
    GC_PUSH_ROOT(_tmp_82);
    GC_GET_REF(_tmp_82, str2, _java_lang_String_value);
    JInt _tmp_83;
    _tmp_83 = y;
    y = _tmp_83 + 1;
    GC_GET_VAR_ARRAY(_tmp_81, _tmp_82, _tmp_83);
    if (_tmp_78 != _tmp_81)
    {
      __result = false;
      GC_POP_ROOT(str2);
      GC_POP_ROOT(_tmp_74);
      GC_POP_ROOT(_tmp_75);
      GC_POP_ROOT(_tmp_79);
      GC_POP_ROOT(_tmp_82);
      goto __branch_1;
    }
    GC_POP_ROOT(_tmp_82);
    GC_POP_ROOT(_tmp_79);
__cond_4:;
    JBoolean _tmp_84;
    i = i - 1;
    _tmp_84 = i >= 0;
    if (_tmp_84) {
      goto __loop_4;
    }
  }
  __result = true;
  GC_POP_ROOT(str2);
  GC_POP_ROOT(_tmp_74);
  GC_POP_ROOT(_tmp_75);
  goto __branch_1;
}
__branch_1:;
  gc_result = __result;
  GC_FUNC_LEAVE;
GC_VAR_FUNC_END(JBoolean, java_lang_String_equals_java_lang_Object)


/* method: String.compareTo(java.lang.String) */
GC_VAR_FUNC_BEGIN(JInt,
    java_lang_String_compareTo_java_lang_String,
    GC_PARAM(java_lang_String,this),
    GC_PARAM(java_lang_String,anotherString))
  GC_PARAM_REF(java_lang_String,this);
  GC_PARAM_REF(java_lang_String, anotherString);
  GC_PUSH_PARAM(this);
  JInt __result;
  GC_FUNC_ENTER;
{
  JInt _tmp_85;
  GC_GET(_tmp_85, this, _java_lang_String_count);
  JInt _tmp_86;
  GC_GET(_tmp_86, anotherString, _java_lang_String_count);
  __result = _tmp_85 - _tmp_86;
  goto __branch_1;
}
__branch_1:;
  gc_result = __result;
  GC_FUNC_LEAVE;
GC_VAR_FUNC_END(JInt, java_lang_String_compareTo_java_lang_String)


/* method: String.regionMatches(int, java.lang.String, int, int) */
GC_VAR_FUNC_BEGIN(JBoolean,
    java_lang_String_regionMatches_int_java_lang_String_int_int,
    GC_PARAM(java_lang_String,this),
    JInt toffset,
    GC_PARAM(java_lang_String,other),
    JInt ooffset,
    JInt len)
  GC_PARAM_REF(java_lang_String,this);
  GC_PARAM_REF(java_lang_String, other);
  GC_PUSH_PARAM(this);
  JBoolean __result;
  GC_FUNC_ENTER;
{
  JBoolean _tmp_87;
  {
    struct java_lang_String_ClassStruct *_tmp_method;
    GC_GET(_tmp_method, this, class);
    GC_VAR_FUNC_CALL(_tmp_87, _tmp_method->methodTbl->regionMatches_boolean_int_java_lang_String_int_int, GC_PASS(this), false, toffset, GC_PASS(other), ooffset, len);
  }CHECK(0);
  __result = _tmp_87;
  goto __branch_1;
}
__branch_1:;
  gc_result = __result;
  GC_FUNC_LEAVE;
GC_VAR_FUNC_END(JBoolean, java_lang_String_regionMatches_int_java_lang_String_int_int)


/* method: String.regionMatches(boolean, int, java.lang.String, int, int) */
GC_VAR_FUNC_BEGIN(JBoolean,
    java_lang_String_regionMatches_boolean_int_java_lang_String_int_int,
    GC_PARAM(java_lang_String,this),
    JBoolean ignoreCase,
    JInt toffset,
    GC_PARAM(java_lang_String,other),
    JInt ooffset,
    JInt len)
  GC_PARAM_REF(java_lang_String,this);
  GC_PARAM_REF(java_lang_String, other);
  GC_PUSH_PARAM(this);
  JBoolean __result;
  GC_FUNC_ENTER;
{
  JBoolean _tmp_88;
  JBoolean _tmp_89;
  JBoolean _tmp_90;
  if (toffset < 0) {
    _tmp_90 = true;
  } else {
    if (ooffset < 0) {
      _tmp_90 = true;
    } else {
      _tmp_90 = false;
    }
  }
  if (_tmp_90) {
    _tmp_89 = true;
  } else {
    JInt _tmp_91;
    GC_GET(_tmp_91, this, _java_lang_String_count);
    if (toffset + len > _tmp_91) {
      _tmp_89 = true;
    } else {
      _tmp_89 = false;
    }
  }
  if (_tmp_89) {
    _tmp_88 = true;
  } else {
    JInt _tmp_92;
    GC_GET(_tmp_92, other, _java_lang_String_count);
    if (ooffset + len > _tmp_92) {
      _tmp_88 = true;
    } else {
      _tmp_88 = false;
    }
  }
  if (_tmp_88)
  {
    __result = false;
    goto __branch_1;
  }
  JInt _tmp_93;
  GC_GET(_tmp_93, this, _java_lang_String_offset);
  toffset = toffset + _tmp_93;
  JInt _tmp_94;
  GC_GET(_tmp_94, other, _java_lang_String_offset);
  ooffset = ooffset + _tmp_94;
  {
    goto __cond_5;
__loop_5:;
    {
      JChar c1;
      JChar c2;
      JChar _tmp_95;
      GC_REF(JCharArray,_tmp_96);
      GC_PUSH_ROOT(_tmp_96);
      GC_GET_REF(_tmp_96, this, _java_lang_String_value);
      JInt _tmp_97;
      _tmp_97 = toffset;
      toffset = _tmp_97 + 1;
      GC_GET_VAR_ARRAY(_tmp_95, _tmp_96, _tmp_97);
      c1 = _tmp_95;
      JChar _tmp_98;
      GC_REF(JCharArray,_tmp_99);
      GC_PUSH_ROOT(_tmp_99);
      GC_GET_REF(_tmp_99, other, _java_lang_String_value);
      JInt _tmp_100;
      _tmp_100 = ooffset;
      ooffset = _tmp_100 + 1;
      GC_GET_VAR_ARRAY(_tmp_98, _tmp_99, _tmp_100);
      c2 = _tmp_98;
      JBoolean _tmp_101;
      if (c1 != c2) {
        JBoolean _tmp_102;
        if (!ignoreCase) {
          _tmp_102 = true;
        } else {
          JBoolean _tmp_103;
          JChar _tmp_104;
          GC_VAR_FUNC_CALL(_tmp_104, java_lang_Character_toLowerCase_char, c1);CHECK(0);
          JChar _tmp_105;
          GC_VAR_FUNC_CALL(_tmp_105, java_lang_Character_toLowerCase_char, c2);CHECK(0);
          if (_tmp_104 != _tmp_105) {
            JChar _tmp_106;
            GC_VAR_FUNC_CALL(_tmp_106, java_lang_Character_toUpperCase_char, c1);CHECK(0);
            JChar _tmp_107;
            GC_VAR_FUNC_CALL(_tmp_107, java_lang_Character_toUpperCase_char, c2);CHECK(0);
            if ((_tmp_106 != _tmp_107)) {
              _tmp_103 = true;
            } else {
              _tmp_103 = false;
            }
          } else {
          _tmp_103 = false;
          }
          if ((_tmp_103)) {
            _tmp_102 = true;
          } else {
            _tmp_102 = false;
          }
        }
        if ((_tmp_102)) {
          _tmp_101 = true;
        } else {
          _tmp_101 = false;
        }
      } else {
      _tmp_101 = false;
      }
      if (_tmp_101)
      {
        __result = false;
        GC_POP_ROOT(_tmp_96);
        GC_POP_ROOT(_tmp_99);
        goto __branch_1;
      }
      GC_POP_ROOT(_tmp_99);
      GC_POP_ROOT(_tmp_96);
    }
__cond_5:;
    JBoolean _tmp_108;
    len = len - 1;
    _tmp_108 = len >= 0;
    if (_tmp_108) {
      goto __loop_5;
    }
  }
  __result = true;
  goto __branch_1;
}
__branch_1:;
  gc_result = __result;
  GC_FUNC_LEAVE;
GC_VAR_FUNC_END(JBoolean, java_lang_String_regionMatches_boolean_int_java_lang_String_int_int)


/* method: String.indexOf(int, int) */
GC_VAR_FUNC_BEGIN(JInt,
    java_lang_String_indexOf_int_int,
    GC_PARAM(java_lang_String,this),
    JInt ch,
    JInt fromIndex)
  GC_PARAM_REF(java_lang_String,this);
  GC_PUSH_PARAM(this);
  JInt __result;
  GC_FUNC_ENTER;
{
  JInt i;
  JChar _tmp_109;
  _tmp_109 = (JChar) (ch);  if (_tmp_109 != ch)
  {
    __result = -1;
    goto __branch_1;
  }
  if (fromIndex < 0)
  {
    fromIndex = 0;
  }
  JInt _tmp_110;
  GC_GET(_tmp_110, this, _java_lang_String_offset);
  i = fromIndex + _tmp_110;
  {
    {
      goto __cond_6;
__loop_6:;
      JChar _tmp_111;
      GC_REF(JCharArray,_tmp_112);
      GC_PUSH_ROOT(_tmp_112);
      GC_GET_REF(_tmp_112, this, _java_lang_String_value);
      JInt _tmp_113;
      _tmp_113 = i;
      i = _tmp_113 + 1;
      GC_GET_VAR_ARRAY(_tmp_111, _tmp_112, _tmp_113);
      if (_tmp_111 == ch)
      {
        __result = fromIndex;
        GC_POP_ROOT(_tmp_112);
        goto __branch_1;
      }
      GC_POP_ROOT(_tmp_112);
      fromIndex = fromIndex + 1;
__cond_6:;
      JBoolean _tmp_114;
      JInt _tmp_115;
      GC_GET(_tmp_115, this, _java_lang_String_count);
      _tmp_114 = fromIndex < _tmp_115;
      if (_tmp_114) {
        goto __loop_6;
      }
    }
  }
  __result = -1;
  goto __branch_1;
}
__branch_1:;
  gc_result = __result;
  GC_FUNC_LEAVE;
GC_VAR_FUNC_END(JInt, java_lang_String_indexOf_int_int)


/* method: String.lastIndexOf(int, int) */
GC_VAR_FUNC_BEGIN(JInt,
    java_lang_String_lastIndexOf_int_int,
    GC_PARAM(java_lang_String,this),
    JInt ch,
    JInt fromIndex)
  GC_PARAM_REF(java_lang_String,this);
  GC_PUSH_PARAM(this);
  JInt __result;
  GC_FUNC_ENTER;
{
  JInt i;
  JChar _tmp_116;
  _tmp_116 = (JChar) (ch);  if (_tmp_116 != ch)
  {
    __result = -1;
    goto __branch_1;
  }
  JInt _tmp_117;
  GC_GET(_tmp_117, this, _java_lang_String_count);
  if (fromIndex >= _tmp_117)
  {
    JInt _tmp_118;
    GC_GET(_tmp_118, this, _java_lang_String_count);
    fromIndex = _tmp_118 - 1;
  }
  JInt _tmp_119;
  GC_GET(_tmp_119, this, _java_lang_String_offset);
  i = fromIndex + _tmp_119;
  {
    {
      goto __cond_7;
__loop_7:;
      JChar _tmp_120;
      GC_REF(JCharArray,_tmp_121);
      GC_PUSH_ROOT(_tmp_121);
      GC_GET_REF(_tmp_121, this, _java_lang_String_value);
      JInt _tmp_122;
      _tmp_122 = i;
      i = _tmp_122 - 1;
      GC_GET_VAR_ARRAY(_tmp_120, _tmp_121, _tmp_122);
      if (_tmp_120 == ch)
      {
        __result = fromIndex;
        GC_POP_ROOT(_tmp_121);
        goto __branch_1;
      }
      GC_POP_ROOT(_tmp_121);
      fromIndex = fromIndex - 1;
__cond_7:;
      JBoolean _tmp_123;
      _tmp_123 = fromIndex >= 0;
      if (_tmp_123) {
        goto __loop_7;
      }
    }
  }
  __result = -1;
  goto __branch_1;
}
__branch_1:;
  gc_result = __result;
  GC_FUNC_LEAVE;
GC_VAR_FUNC_END(JInt, java_lang_String_lastIndexOf_int_int)


/* method: String.indexOf(java.lang.String, int) */
GC_VAR_FUNC_BEGIN(JInt,
    java_lang_String_indexOf_java_lang_String_int,
    GC_PARAM(java_lang_String,this),
    GC_PARAM(java_lang_String,str),
    JInt fromIndex)
  GC_PARAM_REF(java_lang_String,this);
  GC_PARAM_REF(java_lang_String, str);
  GC_PUSH_PARAM(this);
  JInt __result;
  GC_FUNC_ENTER;
{
  JInt limit;
  if (fromIndex < 0)
  {
    fromIndex = 0;
  }
  JInt _tmp_124;
  GC_GET(_tmp_124, this, _java_lang_String_count);
  JInt _tmp_125;
  GC_GET(_tmp_125, str, _java_lang_String_count);
  limit = _tmp_124 - _tmp_125;
  {
    {
      goto __cond_8;
__loop_8:;
      JBoolean _tmp_126;
      JInt _tmp_127;
      GC_GET(_tmp_127, str, _java_lang_String_count);
      {
        struct java_lang_String_ClassStruct *_tmp_method;
        GC_GET(_tmp_method, this, class);
        GC_VAR_FUNC_CALL(_tmp_126, _tmp_method->methodTbl->regionMatches_int_java_lang_String_int_int, GC_PASS(this), fromIndex, GC_PASS(str), 0, _tmp_127);
      }CHECK(0);
      if (_tmp_126)
      {
        __result = fromIndex;
        goto __branch_1;
      }
      fromIndex = fromIndex + 1;
__cond_8:;
      JBoolean _tmp_128;
      _tmp_128 = fromIndex <= limit;
      if (_tmp_128) {
        goto __loop_8;
      }
    }
  }
  __result = -1;
  goto __branch_1;
}
__branch_1:;
  gc_result = __result;
  GC_FUNC_LEAVE;
GC_VAR_FUNC_END(JInt, java_lang_String_indexOf_java_lang_String_int)


/* method: String.lastIndexOf(java.lang.String, int) */
GC_VAR_FUNC_BEGIN(JInt,
    java_lang_String_lastIndexOf_java_lang_String_int,
    GC_PARAM(java_lang_String,this),
    GC_PARAM(java_lang_String,str),
    JInt fromIndex)
  GC_PARAM_REF(java_lang_String,this);
  GC_PARAM_REF(java_lang_String, str);
  GC_PUSH_PARAM(this);
  JInt __result;
  GC_FUNC_ENTER;
{
  JInt _tmp_129;
  GC_GET(_tmp_129, this, _java_lang_String_count);
  JInt _tmp_130;
  GC_GET(_tmp_130, str, _java_lang_String_count);
  GC_VAR_FUNC_CALL(fromIndex, java_lang_Math_min_int_int, fromIndex, _tmp_129 - _tmp_130);CHECK(0);
  {
    {
      goto __cond_9;
__loop_9:;
      JBoolean _tmp_131;
      JInt _tmp_132;
      GC_GET(_tmp_132, str, _java_lang_String_count);
      {
        struct java_lang_String_ClassStruct *_tmp_method;
        GC_GET(_tmp_method, this, class);
        GC_VAR_FUNC_CALL(_tmp_131, _tmp_method->methodTbl->regionMatches_int_java_lang_String_int_int, GC_PASS(this), fromIndex, GC_PASS(str), 0, _tmp_132);
      }CHECK(0);
      if (_tmp_131)
      {
        __result = fromIndex;
        goto __branch_1;
      }
      fromIndex = fromIndex - 1;
__cond_9:;
      JBoolean _tmp_133;
      _tmp_133 = fromIndex >= 0;
      if (_tmp_133) {
        goto __loop_9;
      }
    }
  }
  __result = -1;
  goto __branch_1;
}
__branch_1:;
  gc_result = __result;
  GC_FUNC_LEAVE;
GC_VAR_FUNC_END(JInt, java_lang_String_lastIndexOf_java_lang_String_int)


/* method: String.substring(int, int) */
GC_REF_FUNC_BEGIN(java_lang_String,
    java_lang_String_substring_int_int,
    GC_PARAM(java_lang_String,this),
    JInt beginIndex,
    JInt endIndex)
  GC_PARAM_REF(java_lang_String,this);
  GC_PUSH_PARAM(this);
  GC_REF(java_lang_String, __result);
  GC_PUSH_ROOT(__result);
  GC_FUNC_ENTER;
{
  JInt len;
  JBoolean _tmp_134;
  JBoolean _tmp_135;
  if (beginIndex < 0) {
    _tmp_135 = true;
  } else {
    JInt _tmp_136;
    GC_GET(_tmp_136, this, _java_lang_String_count);
    if (endIndex > _tmp_136) {
      _tmp_135 = true;
    } else {
      _tmp_135 = false;
    }
  }
  if (_tmp_135) {
    _tmp_134 = true;
  } else {
    if (beginIndex > endIndex) {
      _tmp_134 = true;
    } else {
      _tmp_134 = false;
    }
  }
  if (_tmp_134)
  {
    GC_REF(java_lang_StringIndexOutOfBoundsException,_tmp_137);
    GC_PUSH_ROOT(_tmp_137);
    GC_REF_FUNC_CALL(_tmp_137, java_lang_StringIndexOutOfBoundsException_StringIndexOutOfBoundsException, &java_lang_StringIndexOutOfBoundsException_Class, GC_PASS(java_lang_StringIndexOutOfBoundsException_Layout));CHECK(0);
    EXCEPTION_STORE_OBJ(_tmp_137);
    GC_POP_ROOT(_tmp_137);
    EXCEPTION_THROW(0,&java_lang_StringIndexOutOfBoundsException_Class)
    GC_POP_ROOT(_tmp_137);
  }
  JBoolean _tmp_138;
  if (beginIndex == 0) {
    JInt _tmp_139;
    GC_GET(_tmp_139, this, _java_lang_String_count);
    if (endIndex == _tmp_139) {
      _tmp_138 = true;
    } else {
      _tmp_138 = false;
    }
  } else {
  _tmp_138 = false;
  }
  if (_tmp_138)
  {
GC_ASSIGN(__result, this);
    goto __branch_1;
  }
  len = endIndex - beginIndex;
  GC_REF(java_lang_String,_tmp_140);
  GC_PUSH_ROOT(_tmp_140);
  GC_REF(JCharArray,_tmp_141);
  GC_PUSH_ROOT(_tmp_141);
  GC_GET_REF(_tmp_141, this, _java_lang_String_value);
  JInt _tmp_142;
  GC_GET(_tmp_142, this, _java_lang_String_offset);
  JInt _tmp_143;
  GC_REF(JCharArray,_tmp_144);
  GC_PUSH_ROOT(_tmp_144);
  GC_GET_REF(_tmp_144, this, _java_lang_String_value);
  GC_GET(_tmp_143, _tmp_144, _JCharA_length);
  GC_REF_FUNC_CALL(_tmp_140, java_lang_String_String_JCharA_int_int_boolean, &java_lang_String_Class, GC_PASS(java_lang_String_Layout), GC_PASS(_tmp_141), beginIndex + _tmp_142, len, (len << 2) >= _tmp_143);CHECK(0);
GC_ASSIGN(__result, _tmp_140);
  GC_POP_ROOT(_tmp_140);
  GC_POP_ROOT(_tmp_141);
  GC_POP_ROOT(_tmp_144);
  goto __branch_1;
}
__branch_1:;
  GC_ASSIGN(gc_result, __result);
  GC_POP_ROOT(__result);
  GC_FUNC_LEAVE;
GC_REF_FUNC_END(java_lang_String, java_lang_String_substring_int_int)


/* method: String.toString() */
GC_REF_FUNC_BEGIN(java_lang_String,
    java_lang_String_toString,
    GC_PARAM(java_lang_String,this))
  GC_PARAM_REF(java_lang_String,this);
  GC_PUSH_PARAM(this);
  GC_REF(java_lang_String, __result);
  GC_PUSH_ROOT(__result);
  GC_FUNC_ENTER;
{
GC_ASSIGN(__result, this);
  goto __branch_1;
}
__branch_1:;
  GC_ASSIGN(gc_result, __result);
  GC_POP_ROOT(__result);
  GC_FUNC_LEAVE;
GC_REF_FUNC_END(java_lang_String, java_lang_String_toString)


/* method: String.valueOf(char[], int, int) */
GC_REF_FUNC_BEGIN(java_lang_String,
    java_lang_String_valueOf_charA_int_int,
    GC_PARAM(JCharArray,data),
    JInt offset,
    JInt count)
  GC_PARAM_REF(JCharArray, data);
  GC_REF(java_lang_String, __result);
  GC_PUSH_ROOT(__result);
  GC_FUNC_ENTER;
{
  GC_REF(java_lang_String,_tmp_145);
  GC_PUSH_ROOT(_tmp_145);
  GC_REF_FUNC_CALL(_tmp_145, java_lang_String_String_JCharA_int_int_boolean, &java_lang_String_Class, GC_PASS(java_lang_String_Layout), GC_PASS(data), offset, count, false);CHECK(0);
GC_ASSIGN(__result, _tmp_145);
  GC_POP_ROOT(_tmp_145);
  goto __branch_1;
}
__branch_1:;
  GC_ASSIGN(gc_result, __result);
  GC_POP_ROOT(__result);
  GC_FUNC_LEAVE;
GC_REF_FUNC_END(java_lang_String, java_lang_String_valueOf_charA_int_int)


/* method: String.copyValueOf(char[], int, int) */
GC_REF_FUNC_BEGIN(java_lang_String,
    java_lang_String_copyValueOf_charA_int_int,
    GC_PARAM(JCharArray,data),
    JInt offset,
    JInt count)
  GC_PARAM_REF(JCharArray, data);
  GC_REF(java_lang_String, __result);
  GC_PUSH_ROOT(__result);
  GC_FUNC_ENTER;
{
  GC_REF(java_lang_String,_tmp_146);
  GC_PUSH_ROOT(_tmp_146);
  GC_REF_FUNC_CALL(_tmp_146, java_lang_String_String_JCharA_int_int_boolean, &java_lang_String_Class, GC_PASS(java_lang_String_Layout), GC_PASS(data), offset, count, false);CHECK(0);
GC_ASSIGN(__result, _tmp_146);
  GC_POP_ROOT(_tmp_146);
  goto __branch_1;
}
__branch_1:;
  GC_ASSIGN(gc_result, __result);
  GC_POP_ROOT(__result);
  GC_FUNC_LEAVE;
GC_REF_FUNC_END(java_lang_String, java_lang_String_copyValueOf_charA_int_int)


/* method: String.valueOf(boolean) */
GC_REF_FUNC_BEGIN(java_lang_String,
    java_lang_String_valueOf_boolean,
    JBoolean b)
  GC_REF(java_lang_String, __result);
  GC_PUSH_ROOT(__result);
  GC_FUNC_ENTER;
{
  GC_REF(java_lang_String,s);
  GC_PUSH_ROOT(s);
  if (b)
  {
    GC_REF(java_lang_String,_tmp_147);
    GC_PUSH_ROOT(_tmp_147);
    GC_REF_FUNC_CALL(_tmp_147, java_lang_String_String_CCharArray, &java_lang_String_Class, GC_PASS(java_lang_String_Layout), "true");
GC_ASSIGN(__result, _tmp_147);
    GC_POP_ROOT(_tmp_147);
    GC_POP_ROOT(s);
    goto __branch_1;
  }
  else
  {
    GC_REF(java_lang_String,_tmp_148);
    GC_PUSH_ROOT(_tmp_148);
    GC_REF_FUNC_CALL(_tmp_148, java_lang_String_String_CCharArray, &java_lang_String_Class, GC_PASS(java_lang_String_Layout), "false");
GC_ASSIGN(__result, _tmp_148);
    GC_POP_ROOT(_tmp_148);
    GC_POP_ROOT(s);
    goto __branch_1;
  }
  GC_POP_ROOT(s);
}
__branch_1:;
  GC_ASSIGN(gc_result, __result);
  GC_POP_ROOT(__result);
  GC_FUNC_LEAVE;
GC_REF_FUNC_END(java_lang_String, java_lang_String_valueOf_boolean)


/* method: String.valueOf(int) */
GC_REF_FUNC_BEGIN(java_lang_String,
    java_lang_String_valueOf_int,
    JInt i)
  GC_REF(java_lang_String, __result);
  GC_PUSH_ROOT(__result);
  GC_FUNC_ENTER;
{
  GC_REF(java_lang_String,_tmp_149);
  GC_PUSH_ROOT(_tmp_149);
  GC_REF_FUNC_CALL(_tmp_149, java_lang_Integer_toString_int_int, i, 10);CHECK(0);
GC_ASSIGN(__result, _tmp_149);
  GC_POP_ROOT(_tmp_149);
  goto __branch_1;
}
__branch_1:;
  GC_ASSIGN(gc_result, __result);
  GC_POP_ROOT(__result);
  GC_FUNC_LEAVE;
GC_REF_FUNC_END(java_lang_String, java_lang_String_valueOf_int)


/* method: String.valueOf(long) */
GC_REF_FUNC_BEGIN(java_lang_String,
    java_lang_String_valueOf_long,
    JLong l)
  GC_REF(java_lang_String, __result);
  GC_PUSH_ROOT(__result);
  GC_FUNC_ENTER;
{
  GC_REF(java_lang_String,_tmp_150);
  GC_PUSH_ROOT(_tmp_150);
  GC_REF_FUNC_CALL(_tmp_150, java_lang_Long_toString_long, l);CHECK(0);
GC_ASSIGN(__result, _tmp_150);
  GC_POP_ROOT(_tmp_150);
  goto __branch_1;
}
__branch_1:;
  GC_ASSIGN(gc_result, __result);
  GC_POP_ROOT(__result);
  GC_FUNC_LEAVE;
GC_REF_FUNC_END(java_lang_String, java_lang_String_valueOf_long)


/* method: String.valueOf(float) */
GC_REF_FUNC_BEGIN(java_lang_String,
    java_lang_String_valueOf_float,
    JFloat f)
  GC_REF(java_lang_String, __result);
  GC_PUSH_ROOT(__result);
  GC_FUNC_ENTER;
{
  GC_REF(java_lang_String,_tmp_151);
  GC_PUSH_ROOT(_tmp_151);
  GC_REF_FUNC_CALL(_tmp_151, java_lang_Float_toString_float, f);CHECK(0);
GC_ASSIGN(__result, _tmp_151);
  GC_POP_ROOT(_tmp_151);
  goto __branch_1;
}
__branch_1:;
  GC_ASSIGN(gc_result, __result);
  GC_POP_ROOT(__result);
  GC_FUNC_LEAVE;
GC_REF_FUNC_END(java_lang_String, java_lang_String_valueOf_float)


/* method: String.valueOf(double) */
GC_REF_FUNC_BEGIN(java_lang_String,
    java_lang_String_valueOf_double,
    JDouble d)
  GC_REF(java_lang_String, __result);
  GC_PUSH_ROOT(__result);
  GC_FUNC_ENTER;
{
  GC_REF(java_lang_String,_tmp_152);
  GC_PUSH_ROOT(_tmp_152);
  GC_REF_FUNC_CALL(_tmp_152, java_lang_Double_toString_double, d);CHECK(0);
GC_ASSIGN(__result, _tmp_152);
  GC_POP_ROOT(_tmp_152);
  goto __branch_1;
}
__branch_1:;
  GC_ASSIGN(gc_result, __result);
  GC_POP_ROOT(__result);
  GC_FUNC_LEAVE;
GC_REF_FUNC_END(java_lang_String, java_lang_String_valueOf_double)


GC_PROC_BEGIN(java_lang_Throwable_initializer,GC_PARAM(java_lang_Throwable,this))
  GC_PARAM_REF(java_lang_Throwable,this);
  GC_FUNC_ENTER;
  GC_PROC_CALL(java_lang_Object_initializer,GC_PASS(this));
    GC_SET_REF(this, _java_lang_Throwable_cause, this);
  GC_FUNC_LEAVE;
GC_PROC_END(java_lang_Throwable_initializer)


/* constructor: Throwable() */
GC_REF_FUNC_BEGIN(java_lang_Throwable,
    java_lang_Throwable_Throwable,
    void* class,
    GC_PARAM(LayoutHead, layout))
  GC_PARAM_REF(LayoutHead, layout);
  GC_REF(java_lang_Throwable,this);
  GC_PUSH_PARAM(layout);
  GC_FUNC_ENTER;
  GC_PUSH_ROOT(this);
  {
    GC_NEW(this,layout);
    GC_SET(this,class,class);
    GC_PROC_CALL(java_lang_Throwable_initializer,GC_PASS(this));
    GC_PROC_CALL(java_lang_Throwable_Throwable_init, GC_PASS(this));
    GC_ASSIGN(gc_result, this);
  }
  GC_POP_ROOT(this);
  GC_FUNC_LEAVE;
  GC_POP_PARAM(layout);
GC_REF_FUNC_END(java_lang_Throwable, java_lang_Throwable_Throwable)


/* init func: Throwable() */
GC_PROC_BEGIN(
    java_lang_Throwable_Throwable_init,
    GC_PARAM(java_lang_Throwable,this))
  GC_PARAM_REF(java_lang_Throwable,this);
  GC_PUSH_PARAM(this);
  GC_FUNC_ENTER;
  {
    GC_REF(java_lang_String,_tmp_153);
    GC_PUSH_ROOT(_tmp_153);
    GC_ASSIGN(_tmp_153, JAVA_NULL);
    GC_PROC_CALL(java_lang_Throwable_Throwable_java_lang_String_init, GC_PASS(this),GC_PASS(_tmp_153));CHECK(0);
    {
    }
    GC_POP_ROOT(_tmp_153);
  }
  __branch_1:;
  GC_FUNC_LEAVE;
  GC_POP_PARAM(this);
GC_PROC_END(java_lang_Throwable_Throwable_init)


/* constructor: Throwable(String message) */
GC_REF_FUNC_BEGIN(java_lang_Throwable,
    java_lang_Throwable_Throwable_java_lang_String,
    void* class,
    GC_PARAM(LayoutHead, layout),
    GC_PARAM(java_lang_String,message))
  GC_PARAM_REF(LayoutHead, layout);
  GC_PARAM_REF(java_lang_String, message);
  GC_REF(java_lang_Throwable,this);
  GC_PUSH_PARAM(layout);
  GC_FUNC_ENTER;
  GC_PUSH_ROOT(this);
  {
    GC_NEW(this,layout);
    GC_SET(this,class,class);
    GC_PROC_CALL(java_lang_Throwable_initializer,GC_PASS(this));
    GC_PROC_CALL(java_lang_Throwable_Throwable_java_lang_String_init, GC_PASS(this), GC_PASS(message));
    GC_ASSIGN(gc_result, this);
  }
  GC_POP_ROOT(this);
  GC_FUNC_LEAVE;
  GC_POP_PARAM(layout);
GC_REF_FUNC_END(java_lang_Throwable, java_lang_Throwable_Throwable_java_lang_String)


/* init func: Throwable(String message) */
GC_PROC_BEGIN(
    java_lang_Throwable_Throwable_java_lang_String_init,
    GC_PARAM(java_lang_Throwable,this),
    GC_PARAM(java_lang_String,message))
  GC_PARAM_REF(java_lang_Throwable,this);
  GC_PARAM_REF(java_lang_String, message);
  GC_PUSH_PARAM(this);
  GC_FUNC_ENTER;
  {
    GC_PROC_CALL(java_lang_Object_Object_init, GC_PASS(this));CHECK(0);
    {
      {
        struct java_lang_Throwable_ClassStruct *_tmp_method;
        GC_GET(_tmp_method, this, class);
        GC_REF_FUNC_CALL(___phonyObj___, _tmp_method->methodTbl->fillInStackTrace, GC_PASS(this));
      }CHECK(0);
      GC_SET_REF(this, _java_lang_Throwable_detailMessage, message);
    }
  }
  __branch_1:;
  GC_FUNC_LEAVE;
  GC_POP_PARAM(this);
GC_PROC_END(java_lang_Throwable_Throwable_java_lang_String_init)


/* constructor: Throwable(String message, Throwable cause) */
GC_REF_FUNC_BEGIN(java_lang_Throwable,
    java_lang_Throwable_Throwable_java_lang_String_java_lang_Throwable,
    void* class,
    GC_PARAM(LayoutHead, layout),
    GC_PARAM(java_lang_String,message),
    GC_PARAM(java_lang_Throwable,cause))
  GC_PARAM_REF(LayoutHead, layout);
  GC_PARAM_REF(java_lang_String, message);
  GC_PARAM_REF(java_lang_Throwable, cause);
  GC_REF(java_lang_Throwable,this);
  GC_PUSH_PARAM(layout);
  GC_FUNC_ENTER;
  GC_PUSH_ROOT(this);
  {
    GC_NEW(this,layout);
    GC_SET(this,class,class);
    GC_PROC_CALL(java_lang_Throwable_initializer,GC_PASS(this));
    GC_PROC_CALL(java_lang_Throwable_Throwable_java_lang_String_java_lang_Throwable_init, GC_PASS(this), GC_PASS(message), GC_PASS(cause));
    GC_ASSIGN(gc_result, this);
  }
  GC_POP_ROOT(this);
  GC_FUNC_LEAVE;
  GC_POP_PARAM(layout);
GC_REF_FUNC_END(java_lang_Throwable, java_lang_Throwable_Throwable_java_lang_String_java_lang_Throwable)


/* init func: Throwable(String message, Throwable cause) */
GC_PROC_BEGIN(
    java_lang_Throwable_Throwable_java_lang_String_java_lang_Throwable_init,
    GC_PARAM(java_lang_Throwable,this),
    GC_PARAM(java_lang_String,message),
    GC_PARAM(java_lang_Throwable,cause))
  GC_PARAM_REF(java_lang_Throwable,this);
  GC_PARAM_REF(java_lang_String, message);
  GC_PARAM_REF(java_lang_Throwable, cause);
  GC_PUSH_PARAM(this);
  GC_FUNC_ENTER;
  {
    GC_PROC_CALL(java_lang_Throwable_Throwable_java_lang_String_init, GC_PASS(this),GC_PASS(message));CHECK(0);
    {
      GC_SET_REF(this, _java_lang_Throwable_cause, cause);
    }
  }
  __branch_1:;
  GC_FUNC_LEAVE;
  GC_POP_PARAM(this);
GC_PROC_END(java_lang_Throwable_Throwable_java_lang_String_java_lang_Throwable_init)


/* constructor: Throwable(Throwable cause) */
GC_REF_FUNC_BEGIN(java_lang_Throwable,
    java_lang_Throwable_Throwable_java_lang_Throwable,
    void* class,
    GC_PARAM(LayoutHead, layout),
    GC_PARAM(java_lang_Throwable,cause))
  GC_PARAM_REF(LayoutHead, layout);
  GC_PARAM_REF(java_lang_Throwable, cause);
  GC_REF(java_lang_Throwable,this);
  GC_PUSH_PARAM(layout);
  GC_FUNC_ENTER;
  GC_PUSH_ROOT(this);
  {
    GC_NEW(this,layout);
    GC_SET(this,class,class);
    GC_PROC_CALL(java_lang_Throwable_initializer,GC_PASS(this));
    GC_PROC_CALL(java_lang_Throwable_Throwable_java_lang_Throwable_init, GC_PASS(this), GC_PASS(cause));
    GC_ASSIGN(gc_result, this);
  }
  GC_POP_ROOT(this);
  GC_FUNC_LEAVE;
  GC_POP_PARAM(layout);
GC_REF_FUNC_END(java_lang_Throwable, java_lang_Throwable_Throwable_java_lang_Throwable)


/* init func: Throwable(Throwable cause) */
GC_PROC_BEGIN(
    java_lang_Throwable_Throwable_java_lang_Throwable_init,
    GC_PARAM(java_lang_Throwable,this),
    GC_PARAM(java_lang_Throwable,cause))
  GC_PARAM_REF(java_lang_Throwable,this);
  GC_PARAM_REF(java_lang_Throwable, cause);
  GC_PUSH_PARAM(this);
  GC_FUNC_ENTER;
  {
    GC_REF(java_lang_String,_tmp_154);
    GC_PUSH_ROOT(_tmp_154);
    if (GC_IS_NULL(cause)) {
      GC_ASSIGN(_tmp_154, JAVA_NULL);
    } else {
      {
        struct java_lang_Throwable_ClassStruct *_tmp_method;
        GC_GET(_tmp_method, cause, class);
        GC_REF_FUNC_CALL(_tmp_154, _tmp_method->methodTbl->toString, GC_PASS(cause));
      }CHECK(0);
    }
    GC_PROC_CALL(java_lang_Throwable_Throwable_java_lang_String_java_lang_Throwable_init, GC_PASS(this),GC_PASS(_tmp_154),GC_PASS(cause));CHECK(0);
    {
    }
    GC_POP_ROOT(_tmp_154);
  }
  __branch_1:;
  GC_FUNC_LEAVE;
  GC_POP_PARAM(this);
GC_PROC_END(java_lang_Throwable_Throwable_java_lang_Throwable_init)


/* method: Throwable.getMessage() */
GC_REF_FUNC_BEGIN(java_lang_String,
    java_lang_Throwable_getMessage,
    GC_PARAM(java_lang_Throwable,this))
  GC_PARAM_REF(java_lang_Throwable,this);
  GC_PUSH_PARAM(this);
  GC_REF(java_lang_String, __result);
  GC_PUSH_ROOT(__result);
  GC_FUNC_ENTER;
{
  GC_REF(java_lang_String,_tmp_155);
  GC_PUSH_ROOT(_tmp_155);
  GC_GET_REF(_tmp_155, this, _java_lang_Throwable_detailMessage);
GC_ASSIGN(__result, _tmp_155);
  GC_POP_ROOT(_tmp_155);
  goto __branch_1;
}
__branch_1:;
  GC_ASSIGN(gc_result, __result);
  GC_POP_ROOT(__result);
  GC_FUNC_LEAVE;
GC_REF_FUNC_END(java_lang_String, java_lang_Throwable_getMessage)


/* method: Throwable.toString() */
GC_REF_FUNC_BEGIN(java_lang_String,
    java_lang_Throwable_toString,
    GC_PARAM(java_lang_Throwable,this))
  GC_PARAM_REF(java_lang_Throwable,this);
  GC_PUSH_PARAM(this);
  GC_REF(java_lang_String, __result);
  GC_PUSH_ROOT(__result);
  GC_FUNC_ENTER;
{
  GC_REF(java_lang_String,msg);
  GC_PUSH_ROOT(msg);
  {
    struct java_lang_Throwable_ClassStruct *_tmp_method;
    GC_GET(_tmp_method, this, class);
    GC_REF_FUNC_CALL(msg, _tmp_method->methodTbl->getMessage, GC_PASS(this));
  }CHECK(0);
  if (GC_IS_NULL(msg))
  {
    GC_REF(java_lang_String,_tmp_156);
    GC_PUSH_ROOT(_tmp_156);
    GC_REF_FUNC_CALL(_tmp_156, java_lang_String_String_CCharArray, &java_lang_String_Class, GC_PASS(java_lang_String_Layout), "");
GC_ASSIGN(__result, _tmp_156);
    GC_POP_ROOT(_tmp_156);
    GC_POP_ROOT(msg);
    goto __branch_1;
  }
  else
  {
GC_ASSIGN(__result, msg);
    GC_POP_ROOT(msg);
    goto __branch_1;
  }
  GC_POP_ROOT(msg);
}
__branch_1:;
  GC_ASSIGN(gc_result, __result);
  GC_POP_ROOT(__result);
  GC_FUNC_LEAVE;
GC_REF_FUNC_END(java_lang_String, java_lang_Throwable_toString)


/* method: Throwable.printStackTrace(java.io.PrintStream) */
GC_PROC_BEGIN(
    java_lang_Throwable_printStackTrace_java_io_PrintStream,
    GC_PARAM(java_lang_Throwable,this),
    GC_PARAM(java_io_PrintStream,s))
  GC_PARAM_REF(java_lang_Throwable,this);
  GC_PARAM_REF(java_io_PrintStream, s);
  GC_PUSH_PARAM(this);
  GC_FUNC_ENTER;
{
  GC_REF(java_lang_String,_tmp_157);
  GC_PUSH_ROOT(_tmp_157);
  {
    struct java_lang_Throwable_ClassStruct *_tmp_method;
    GC_GET(_tmp_method, this, class);
    GC_REF_FUNC_CALL(_tmp_157, _tmp_method->methodTbl->stackTraceString, GC_PASS(this));
  }CHECK(0);
  {
    struct java_io_PrintStream_ClassStruct *_tmp_method;
    GC_GET(_tmp_method, s, class);
    GC_PROC_CALL(_tmp_method->methodTbl->print_java_lang_String, GC_PASS(s), GC_PASS(_tmp_157));
  }CHECK(0);
  GC_POP_ROOT(_tmp_157);
}
__branch_1:;
  GC_FUNC_LEAVE;
GC_PROC_END(java_lang_Throwable_printStackTrace_java_io_PrintStream)


/* method: Throwable.stackTraceString() */
GC_REF_FUNC_BEGIN(java_lang_String,
    java_lang_Throwable_stackTraceString,
    GC_PARAM(java_lang_Throwable,this))
  GC_PARAM_REF(java_lang_Throwable,this);
  GC_PUSH_PARAM(this);
  GC_REF(java_lang_String, __result);
  GC_PUSH_ROOT(__result);
  GC_FUNC_ENTER;
{
  GC_REF(java_lang_StringBuffer,sb);
  GC_PUSH_ROOT(sb);
  GC_REF_FUNC_CALL(sb, java_lang_StringBuffer_StringBuffer, &java_lang_StringBuffer_Class, GC_PASS(java_lang_StringBuffer_Layout));CHECK(0);
  GC_REF(java_lang_String,_tmp_158);
  GC_PUSH_ROOT(_tmp_158);
  {
    struct java_lang_StringBuffer_ClassStruct *_tmp_method;
    GC_GET(_tmp_method, sb, class);
    GC_REF_FUNC_CALL(_tmp_158, _tmp_method->methodTbl->toString, GC_PASS(sb));
  }CHECK(0);
GC_ASSIGN(__result, _tmp_158);
  GC_POP_ROOT(sb);
  GC_POP_ROOT(_tmp_158);
  goto __branch_1;
}
__branch_1:;
  GC_ASSIGN(gc_result, __result);
  GC_POP_ROOT(__result);
  GC_FUNC_LEAVE;
GC_REF_FUNC_END(java_lang_String, java_lang_Throwable_stackTraceString)


/* method: Throwable.fillInStackTrace() */
GC_REF_FUNC_BEGIN(java_lang_Throwable,
    java_lang_Throwable_fillInStackTrace,
    GC_PARAM(java_lang_Throwable,this))
  GC_PARAM_REF(java_lang_Throwable,this);
  GC_PUSH_PARAM(this);
  GC_REF(java_lang_Throwable, __result);
  GC_PUSH_ROOT(__result);
  GC_FUNC_ENTER;
{
GC_ASSIGN(__result, this);
  goto __branch_1;
}
__branch_1:;
  GC_ASSIGN(gc_result, __result);
  GC_POP_ROOT(__result);
  GC_FUNC_LEAVE;
GC_REF_FUNC_END(java_lang_Throwable, java_lang_Throwable_fillInStackTrace)


GC_PROC_BEGIN(java_lang_System_initializer,GC_PARAM(java_lang_System,this))
  GC_PARAM_REF(java_lang_System,this);
  GC_FUNC_ENTER;
  GC_PROC_CALL(java_lang_Object_initializer,GC_PASS(this));
  GC_FUNC_LEAVE;
GC_PROC_END(java_lang_System_initializer)


GC_PROC_BEGIN(java_lang_PhonyWriter_initializer,GC_PARAM(java_lang_PhonyWriter,this))
  GC_PARAM_REF(java_lang_PhonyWriter,this);
  GC_FUNC_ENTER;
  GC_PROC_CALL(java_io_PrintStream_initializer,GC_PASS(this));
  GC_FUNC_LEAVE;
GC_PROC_END(java_lang_PhonyWriter_initializer)


/* constructor: PhonyWriter() */
GC_REF_FUNC_BEGIN(java_lang_PhonyWriter,
    java_lang_PhonyWriter_PhonyWriter,
    void* class,
    GC_PARAM(LayoutHead, layout))
  GC_PARAM_REF(LayoutHead, layout);
  GC_REF(java_lang_PhonyWriter,this);
  GC_PUSH_PARAM(layout);
  GC_FUNC_ENTER;
  GC_PUSH_ROOT(this);
  {
    GC_NEW(this,layout);
    GC_SET(this,class,class);
    GC_PROC_CALL(java_lang_PhonyWriter_initializer,GC_PASS(this));
    GC_PROC_CALL(java_lang_PhonyWriter_PhonyWriter_init, GC_PASS(this));
    GC_ASSIGN(gc_result, this);
  }
  GC_POP_ROOT(this);
  GC_FUNC_LEAVE;
  GC_POP_PARAM(layout);
GC_REF_FUNC_END(java_lang_PhonyWriter, java_lang_PhonyWriter_PhonyWriter)


/* init func: PhonyWriter() */
GC_PROC_BEGIN(
    java_lang_PhonyWriter_PhonyWriter_init,
    GC_PARAM(java_lang_PhonyWriter,this))
  GC_PARAM_REF(java_lang_PhonyWriter,this);
  GC_PUSH_PARAM(this);
  GC_FUNC_ENTER;
  {
    GC_PROC_CALL(java_io_PrintStream_PrintStream_java_io_OutputStream_init, GC_PASS(this),GC_PASS(JAVA_NULL));CHECK(0);
    {
    }
  }
  __branch_1:;
  GC_FUNC_LEAVE;
  GC_POP_PARAM(this);
GC_PROC_END(java_lang_PhonyWriter_PhonyWriter_init)


/* method: PhonyWriter.flush() */
GC_PROC_BEGIN(
    java_lang_PhonyWriter_flush,
    GC_PARAM(java_lang_PhonyWriter,this))
  GC_PARAM_REF(java_lang_PhonyWriter,this);
  GC_PUSH_PARAM(this);
  GC_FUNC_ENTER;
{
}
__branch_1:;
  GC_FUNC_LEAVE;
GC_PROC_END(java_lang_PhonyWriter_flush)


GC_PROC_BEGIN(java_io_PrintStream_initializer,GC_PARAM(java_io_PrintStream,this))
  GC_PARAM_REF(java_io_PrintStream,this);
  GC_FUNC_ENTER;
  GC_PROC_CALL(java_io_FilterOutputStream_initializer,GC_PASS(this));
    GC_SET(this, _java_io_PrintStream_error_occurred, false);
  GC_FUNC_LEAVE;
GC_PROC_END(java_io_PrintStream_initializer)


/* constructor: PrintStream(OutputStream out) */
GC_REF_FUNC_BEGIN(java_io_PrintStream,
    java_io_PrintStream_PrintStream_java_io_OutputStream,
    void* class,
    GC_PARAM(LayoutHead, layout),
    GC_PARAM(java_io_OutputStream,out))
  GC_PARAM_REF(LayoutHead, layout);
  GC_PARAM_REF(java_io_OutputStream, out);
  GC_REF(java_io_PrintStream,this);
  GC_PUSH_PARAM(layout);
  GC_FUNC_ENTER;
  GC_PUSH_ROOT(this);
  {
    GC_NEW(this,layout);
    GC_SET(this,class,class);
    GC_PROC_CALL(java_io_PrintStream_initializer,GC_PASS(this));
    GC_PROC_CALL(java_io_PrintStream_PrintStream_java_io_OutputStream_init, GC_PASS(this), GC_PASS(out));
    GC_ASSIGN(gc_result, this);
  }
  GC_POP_ROOT(this);
  GC_FUNC_LEAVE;
  GC_POP_PARAM(layout);
GC_REF_FUNC_END(java_io_PrintStream, java_io_PrintStream_PrintStream_java_io_OutputStream)


/* init func: PrintStream(OutputStream out) */
GC_PROC_BEGIN(
    java_io_PrintStream_PrintStream_java_io_OutputStream_init,
    GC_PARAM(java_io_PrintStream,this),
    GC_PARAM(java_io_OutputStream,out))
  GC_PARAM_REF(java_io_PrintStream,this);
  GC_PARAM_REF(java_io_OutputStream, out);
  GC_PUSH_PARAM(this);
  GC_FUNC_ENTER;
  {
    GC_PROC_CALL(java_io_PrintStream_PrintStream_java_io_OutputStream_boolean_init, GC_PASS(this),GC_PASS(out),false);CHECK(0);
    {
    }
  }
  __branch_1:;
  GC_FUNC_LEAVE;
  GC_POP_PARAM(this);
GC_PROC_END(java_io_PrintStream_PrintStream_java_io_OutputStream_init)


/* constructor: PrintStream(OutputStream out, boolean auto_flush) */
GC_REF_FUNC_BEGIN(java_io_PrintStream,
    java_io_PrintStream_PrintStream_java_io_OutputStream_boolean,
    void* class,
    GC_PARAM(LayoutHead, layout),
    GC_PARAM(java_io_OutputStream,out),
    JBoolean auto_flush)
  GC_PARAM_REF(LayoutHead, layout);
  GC_PARAM_REF(java_io_OutputStream, out);
  GC_REF(java_io_PrintStream,this);
  GC_PUSH_PARAM(layout);
  GC_FUNC_ENTER;
  GC_PUSH_ROOT(this);
  {
    GC_NEW(this,layout);
    GC_SET(this,class,class);
    GC_PROC_CALL(java_io_PrintStream_initializer,GC_PASS(this));
    GC_PROC_CALL(java_io_PrintStream_PrintStream_java_io_OutputStream_boolean_init, GC_PASS(this), GC_PASS(out), auto_flush);
    GC_ASSIGN(gc_result, this);
  }
  GC_POP_ROOT(this);
  GC_FUNC_LEAVE;
  GC_POP_PARAM(layout);
GC_REF_FUNC_END(java_io_PrintStream, java_io_PrintStream_PrintStream_java_io_OutputStream_boolean)


/* init func: PrintStream(OutputStream out, boolean auto_flush) */
GC_PROC_BEGIN(
    java_io_PrintStream_PrintStream_java_io_OutputStream_boolean_init,
    GC_PARAM(java_io_PrintStream,this),
    GC_PARAM(java_io_OutputStream,out),
    JBoolean auto_flush)
  GC_PARAM_REF(java_io_PrintStream,this);
  GC_PARAM_REF(java_io_OutputStream, out);
  GC_PUSH_PARAM(this);
  GC_FUNC_ENTER;
  {
    GC_PROC_CALL(java_io_FilterOutputStream_FilterOutputStream_java_io_OutputStream_init, GC_PASS(this),GC_PASS(out));CHECK(0);
    {
      GC_SET(this, _java_io_PrintStream_auto_flush, auto_flush);
    }
  }
  __branch_1:;
  GC_FUNC_LEAVE;
  GC_POP_PARAM(this);
GC_PROC_END(java_io_PrintStream_PrintStream_java_io_OutputStream_boolean_init)


/* method: PrintStream.setError() */
GC_PROC_BEGIN(
    java_io_PrintStream_setError,
    GC_PARAM(java_io_PrintStream,this))
  GC_PARAM_REF(java_io_PrintStream,this);
  GC_PUSH_PARAM(this);
  GC_FUNC_ENTER;
{
  GC_SET(this, _java_io_PrintStream_error_occurred, true);
}
__branch_1:;
  GC_FUNC_LEAVE;
GC_PROC_END(java_io_PrintStream_setError)


/* method: PrintStream.flush() */
GC_PROC_BEGIN(
    java_io_PrintStream_flush,
    GC_PARAM(java_io_PrintStream,this))
  GC_PARAM_REF(java_io_PrintStream,this);
  GC_PUSH_PARAM(this);
  GC_FUNC_ENTER;
{
  EXCEPTION_TRY
  {
    GC_REF(java_io_OutputStream,_tmp_159);
    GC_PUSH_ROOT(_tmp_159);
    GC_GET_REF(_tmp_159, this, _java_io_FilterOutputStream_out);
    {
      struct java_io_OutputStream_ClassStruct *_tmp_method;
      GC_GET(_tmp_method, _tmp_159, class);
      GC_PROC_CALL(_tmp_method->methodTbl->flush, GC_PASS(_tmp_159));
    }CHECK(1);
    GC_POP_ROOT(_tmp_159);
  }
  EXCEPTION_CATCH(1,&java_io_InterruptedIOException_Class)
    GC_REF(java_io_InterruptedIOException,iioe);
    GC_PUSH_ROOT(iioe);
    EXCEPTION_GET_OBJ(iioe);
    {
      GC_REF(java_lang_Thread,_tmp_160);
      GC_PUSH_ROOT(_tmp_160);
      GC_REF_FUNC_CALL(_tmp_160, java_lang_Thread_currentThread);CHECK(0);
      {
        struct java_lang_Thread_ClassStruct *_tmp_method;
        GC_GET(_tmp_method, _tmp_160, class);
        GC_PROC_CALL(_tmp_method->methodTbl->interrupt, GC_PASS(_tmp_160));
      }CHECK(0);
      GC_POP_ROOT(_tmp_160);
    }
    GC_POP_ROOT(iioe);
  EXCEPTION_CATCH_MORE(&java_io_IOException_Class)
__branch_1:;
    GC_REF(java_io_IOException,e);
    GC_PUSH_ROOT(e);
    EXCEPTION_GET_OBJ(e);
    {
      {
        struct java_io_PrintStream_ClassStruct *_tmp_method;
        GC_GET(_tmp_method, this, class);
        GC_PROC_CALL(_tmp_method->methodTbl->setError, GC_PASS(this));
      }CHECK(0);
    }
    GC_POP_ROOT(e);
  EXCEPTION_FINALLY
  EXCEPTION_END(0)
}
__branch_2:;
  GC_FUNC_LEAVE;
GC_PROC_END(java_io_PrintStream_flush)


/* method: PrintStream.print(java.lang.String, boolean) */
GC_PROC_BEGIN(
    java_io_PrintStream_print_java_lang_String_boolean,
    GC_PARAM(java_io_PrintStream,this),
    GC_PARAM(java_lang_String,str),
    JBoolean println)
  GC_PARAM_REF(java_io_PrintStream,this);
  GC_PARAM_REF(java_lang_String, str);
  GC_PUSH_PARAM(this);
  GC_FUNC_ENTER;
  MONITOR_ENTER(this);
{
  EXCEPTION_TRY
  {
    JInt _tmp_161;
    {
      struct java_lang_String_ClassStruct *_tmp_method;
      GC_GET(_tmp_method, str, class);
      GC_VAR_FUNC_CALL(_tmp_161, _tmp_method->methodTbl->length, GC_PASS(str));
    }CHECK(1);
    {
      struct java_io_PrintStream_ClassStruct *_tmp_method;
      GC_GET(_tmp_method, this, class);
      GC_PROC_CALL(_tmp_method->methodTbl->writeChars_java_lang_String_int_int, GC_PASS(this), GC_PASS(str), 0, _tmp_161);
    }CHECK(1);
    if (println)
    {
      GC_REF(JCharArray,_tmp_162);
      GC_PUSH_ROOT(_tmp_162);
      GC_GET_REF(_tmp_162, java_io_PrintStream_Static, _java_io_PrintStream_line_separator);
      JInt _tmp_163;
      GC_REF(JCharArray,_tmp_164);
      GC_PUSH_ROOT(_tmp_164);
      GC_GET_REF(_tmp_164, java_io_PrintStream_Static, _java_io_PrintStream_line_separator);
      GC_GET(_tmp_163, _tmp_164, _JCharA_length);
      {
        struct java_io_PrintStream_ClassStruct *_tmp_method;
        GC_GET(_tmp_method, this, class);
        GC_PROC_CALL(_tmp_method->methodTbl->writeChars_charA_int_int, GC_PASS(this), GC_PASS(_tmp_162), 0, _tmp_163);
      }CHECK(1);
      GC_POP_ROOT(_tmp_164);
      GC_POP_ROOT(_tmp_162);
    }
    JBoolean _tmp_165;
    GC_GET(_tmp_165, this, _java_io_PrintStream_auto_flush);
    if (_tmp_165)
    {
      {
        struct java_io_PrintStream_ClassStruct *_tmp_method;
        GC_GET(_tmp_method, this, class);
        GC_PROC_CALL(_tmp_method->methodTbl->flush, GC_PASS(this));
      }CHECK(1);
    }
  }
  EXCEPTION_CATCH(1,&java_io_InterruptedIOException_Class)
    GC_REF(java_io_InterruptedIOException,iioe);
    GC_PUSH_ROOT(iioe);
    EXCEPTION_GET_OBJ(iioe);
    {
      GC_REF(java_lang_Thread,_tmp_166);
      GC_PUSH_ROOT(_tmp_166);
      GC_REF_FUNC_CALL(_tmp_166, java_lang_Thread_currentThread);CHECK(0);
      {
        struct java_lang_Thread_ClassStruct *_tmp_method;
        GC_GET(_tmp_method, _tmp_166, class);
        GC_PROC_CALL(_tmp_method->methodTbl->interrupt, GC_PASS(_tmp_166));
      }CHECK(0);
      GC_POP_ROOT(_tmp_166);
    }
    GC_POP_ROOT(iioe);
  EXCEPTION_CATCH_MORE(&java_io_IOException_Class)
__branch_1:;
    GC_REF(java_io_IOException,e);
    GC_PUSH_ROOT(e);
    EXCEPTION_GET_OBJ(e);
    {
      {
        struct java_io_PrintStream_ClassStruct *_tmp_method;
        GC_GET(_tmp_method, this, class);
        GC_PROC_CALL(_tmp_method->methodTbl->setError, GC_PASS(this));
      }CHECK(0);
    }
    GC_POP_ROOT(e);
  EXCEPTION_FINALLY
  EXCEPTION_END(0)
}
__branch_2:;
  MONITOR_LEAVE(this);
  GC_FUNC_LEAVE;
GC_PROC_END(java_io_PrintStream_print_java_lang_String_boolean)


/* method: PrintStream.print(char[], int, int, boolean) */
GC_PROC_BEGIN(
    java_io_PrintStream_print_charA_int_int_boolean,
    GC_PARAM(java_io_PrintStream,this),
    GC_PARAM(JCharArray,chars),
    JInt pos,
    JInt len,
    JBoolean println)
  GC_PARAM_REF(java_io_PrintStream,this);
  GC_PARAM_REF(JCharArray, chars);
  GC_PUSH_PARAM(this);
  GC_FUNC_ENTER;
  MONITOR_ENTER(this);
{
  EXCEPTION_TRY
  {
    {
      struct java_io_PrintStream_ClassStruct *_tmp_method;
      GC_GET(_tmp_method, this, class);
      GC_PROC_CALL(_tmp_method->methodTbl->writeChars_charA_int_int, GC_PASS(this), GC_PASS(chars), pos, len);
    }CHECK(1);
    if (println)
    {
      GC_REF(JCharArray,_tmp_167);
      GC_PUSH_ROOT(_tmp_167);
      GC_GET_REF(_tmp_167, java_io_PrintStream_Static, _java_io_PrintStream_line_separator);
      JInt _tmp_168;
      GC_REF(JCharArray,_tmp_169);
      GC_PUSH_ROOT(_tmp_169);
      GC_GET_REF(_tmp_169, java_io_PrintStream_Static, _java_io_PrintStream_line_separator);
      GC_GET(_tmp_168, _tmp_169, _JCharA_length);
      {
        struct java_io_PrintStream_ClassStruct *_tmp_method;
        GC_GET(_tmp_method, this, class);
        GC_PROC_CALL(_tmp_method->methodTbl->writeChars_charA_int_int, GC_PASS(this), GC_PASS(_tmp_167), 0, _tmp_168);
      }CHECK(1);
      GC_POP_ROOT(_tmp_169);
      GC_POP_ROOT(_tmp_167);
    }
    JBoolean _tmp_170;
    GC_GET(_tmp_170, this, _java_io_PrintStream_auto_flush);
    if (_tmp_170)
    {
      {
        struct java_io_PrintStream_ClassStruct *_tmp_method;
        GC_GET(_tmp_method, this, class);
        GC_PROC_CALL(_tmp_method->methodTbl->flush, GC_PASS(this));
      }CHECK(1);
    }
  }
  EXCEPTION_CATCH(1,&java_io_InterruptedIOException_Class)
    GC_REF(java_io_InterruptedIOException,iioe);
    GC_PUSH_ROOT(iioe);
    EXCEPTION_GET_OBJ(iioe);
    {
      GC_REF(java_lang_Thread,_tmp_171);
      GC_PUSH_ROOT(_tmp_171);
      GC_REF_FUNC_CALL(_tmp_171, java_lang_Thread_currentThread);CHECK(0);
      {
        struct java_lang_Thread_ClassStruct *_tmp_method;
        GC_GET(_tmp_method, _tmp_171, class);
        GC_PROC_CALL(_tmp_method->methodTbl->interrupt, GC_PASS(_tmp_171));
      }CHECK(0);
      GC_POP_ROOT(_tmp_171);
    }
    GC_POP_ROOT(iioe);
  EXCEPTION_CATCH_MORE(&java_io_IOException_Class)
__branch_1:;
    GC_REF(java_io_IOException,e);
    GC_PUSH_ROOT(e);
    EXCEPTION_GET_OBJ(e);
    {
      {
        struct java_io_PrintStream_ClassStruct *_tmp_method;
        GC_GET(_tmp_method, this, class);
        GC_PROC_CALL(_tmp_method->methodTbl->setError, GC_PASS(this));
      }CHECK(0);
    }
    GC_POP_ROOT(e);
  EXCEPTION_FINALLY
  EXCEPTION_END(0)
}
__branch_2:;
  MONITOR_LEAVE(this);
  GC_FUNC_LEAVE;
GC_PROC_END(java_io_PrintStream_print_charA_int_int_boolean)


/* method: PrintStream.writeChars(char[], int, int) */
GC_PROC_BEGIN(
    java_io_PrintStream_writeChars_charA_int_int,
    GC_PARAM(java_io_PrintStream,this),
    GC_PARAM(JCharArray,buf),
    JInt offset,
    JInt count)
  EXCEPTION_THROWS
  GC_PARAM_REF(java_io_PrintStream,this);
  GC_PARAM_REF(JCharArray, buf);
  GC_PUSH_PARAM(this);
  GC_FUNC_ENTER;
{
  GC_REF(JByteArray,bytes);
  GC_PUSH_ROOT(bytes);
  GC_REF(java_lang_String,_tmp_172);
  GC_PUSH_ROOT(_tmp_172);
  GC_REF_FUNC_CALL(_tmp_172, java_lang_String_String_JCharA_int_int, &java_lang_String_Class, GC_PASS(java_lang_String_Layout), GC_PASS(buf), offset, count);CHECK(0);
  GC_REF(java_lang_String,_tmp_173);
  GC_PUSH_ROOT(_tmp_173);
  GC_GET_REF(_tmp_173, this, _java_io_PrintStream_encoding);
  {
    struct java_lang_String_ClassStruct *_tmp_method;
    GC_GET(_tmp_method, _tmp_172, class);
    GC_REF_FUNC_CALL(bytes, _tmp_method->methodTbl->getBytes_java_lang_String, GC_PASS(_tmp_172), GC_PASS(_tmp_173));
  }CHECK(0);
  GC_REF(java_io_OutputStream,_tmp_174);
  GC_PUSH_ROOT(_tmp_174);
  GC_GET_REF(_tmp_174, this, _java_io_FilterOutputStream_out);
  JInt _tmp_175;
  GC_GET(_tmp_175, bytes, _JByteA_length);
  {
    struct java_io_OutputStream_ClassStruct *_tmp_method;
    GC_GET(_tmp_method, _tmp_174, class);
    GC_PROC_CALL(_tmp_method->methodTbl->write_byteA_int_int, GC_PASS(_tmp_174), GC_PASS(bytes), 0, _tmp_175);
  }CHECK(0);
  GC_POP_ROOT(_tmp_174);
  GC_POP_ROOT(_tmp_173);
  GC_POP_ROOT(_tmp_172);
  GC_POP_ROOT(bytes);
}
__branch_1:;
  GC_FUNC_LEAVE;
GC_PROC_END(java_io_PrintStream_writeChars_charA_int_int)


/* method: PrintStream.writeChars(java.lang.String, int, int) */
GC_PROC_BEGIN(
    java_io_PrintStream_writeChars_java_lang_String_int_int,
    GC_PARAM(java_io_PrintStream,this),
    GC_PARAM(java_lang_String,str),
    JInt offset,
    JInt count)
  EXCEPTION_THROWS
  GC_PARAM_REF(java_io_PrintStream,this);
  GC_PARAM_REF(java_lang_String, str);
  GC_PUSH_PARAM(this);
  GC_FUNC_ENTER;
{
}
__branch_1:;
  GC_FUNC_LEAVE;
GC_PROC_END(java_io_PrintStream_writeChars_java_lang_String_int_int)


/* method: PrintStream.print(java.lang.String) */
GC_PROC_BEGIN(
    java_io_PrintStream_print_java_lang_String,
    GC_PARAM(java_io_PrintStream,this),
    GC_PARAM(java_lang_String,str))
  GC_PARAM_REF(java_io_PrintStream,this);
  GC_PARAM_REF(java_lang_String, str);
  GC_PUSH_PARAM(this);
  GC_FUNC_ENTER;
{
  if (GC_IS_NULL(str))
  {
    GC_REF(java_lang_String,_tmp_176);
    GC_PUSH_ROOT(_tmp_176);
    GC_REF_FUNC_CALL(_tmp_176, java_lang_String_String_CCharArray, &java_lang_String_Class, GC_PASS(java_lang_String_Layout), "null");
    {
      struct java_io_PrintStream_ClassStruct *_tmp_method;
      GC_GET(_tmp_method, this, class);
      GC_PROC_CALL(_tmp_method->methodTbl->print_java_lang_String_boolean, GC_PASS(this), GC_PASS(_tmp_176), false);
    }CHECK(0);
    GC_POP_ROOT(_tmp_176);
  }
  else
  {
    {
      struct java_io_PrintStream_ClassStruct *_tmp_method;
      GC_GET(_tmp_method, this, class);
      GC_PROC_CALL(_tmp_method->methodTbl->print_java_lang_String_boolean, GC_PASS(this), GC_PASS(str), false);
    }CHECK(0);
  }
}
__branch_1:;
  GC_FUNC_LEAVE;
GC_PROC_END(java_io_PrintStream_print_java_lang_String)


/* method: PrintStream.write(int) */
GC_PROC_BEGIN(
    java_io_PrintStream_write_int,
    GC_PARAM(java_io_PrintStream,this),
    JInt oneByte)
  GC_PARAM_REF(java_io_PrintStream,this);
  GC_PUSH_PARAM(this);
  GC_FUNC_ENTER;
{
  EXCEPTION_TRY
  {
    GC_REF(java_io_OutputStream,_tmp_177);
    GC_PUSH_ROOT(_tmp_177);
    GC_GET_REF(_tmp_177, this, _java_io_FilterOutputStream_out);
    {
      struct java_io_OutputStream_ClassStruct *_tmp_method;
      GC_GET(_tmp_method, _tmp_177, class);
      GC_PROC_CALL(_tmp_method->methodTbl->write_int, GC_PASS(_tmp_177), oneByte & 0xff);
    }CHECK(1);
    JBoolean _tmp_178;
    JBoolean _tmp_179;
    GC_GET(_tmp_179, this, _java_io_PrintStream_auto_flush);
    if (_tmp_179) {
      if ((oneByte == '\n')) {
        _tmp_178 = true;
      } else {
        _tmp_178 = false;
      }
    } else {
    _tmp_178 = false;
    }
    if (_tmp_178)
    {
      {
        struct java_io_PrintStream_ClassStruct *_tmp_method;
        GC_GET(_tmp_method, this, class);
        GC_PROC_CALL(_tmp_method->methodTbl->flush, GC_PASS(this));
      }CHECK(1);
    }
    GC_POP_ROOT(_tmp_177);
  }
  EXCEPTION_CATCH(1,&java_io_InterruptedIOException_Class)
    GC_REF(java_io_InterruptedIOException,iioe);
    GC_PUSH_ROOT(iioe);
    EXCEPTION_GET_OBJ(iioe);
    {
      GC_REF(java_lang_Thread,_tmp_180);
      GC_PUSH_ROOT(_tmp_180);
      GC_REF_FUNC_CALL(_tmp_180, java_lang_Thread_currentThread);CHECK(0);
      {
        struct java_lang_Thread_ClassStruct *_tmp_method;
        GC_GET(_tmp_method, _tmp_180, class);
        GC_PROC_CALL(_tmp_method->methodTbl->interrupt, GC_PASS(_tmp_180));
      }CHECK(0);
      GC_POP_ROOT(_tmp_180);
    }
    GC_POP_ROOT(iioe);
  EXCEPTION_CATCH_MORE(&java_io_IOException_Class)
__branch_1:;
    GC_REF(java_io_IOException,e);
    GC_PUSH_ROOT(e);
    EXCEPTION_GET_OBJ(e);
    {
      {
        struct java_io_PrintStream_ClassStruct *_tmp_method;
        GC_GET(_tmp_method, this, class);
        GC_PROC_CALL(_tmp_method->methodTbl->setError, GC_PASS(this));
      }CHECK(0);
    }
    GC_POP_ROOT(e);
  EXCEPTION_FINALLY
  EXCEPTION_END(0)
}
__branch_2:;
  GC_FUNC_LEAVE;
GC_PROC_END(java_io_PrintStream_write_int)


/* method: PrintStream.write(byte[], int, int) */
GC_PROC_BEGIN(
    java_io_PrintStream_write_byteA_int_int,
    GC_PARAM(java_io_PrintStream,this),
    GC_PARAM(JByteArray,buffer),
    JInt offset,
    JInt len)
  GC_PARAM_REF(java_io_PrintStream,this);
  GC_PARAM_REF(JByteArray, buffer);
  GC_PUSH_PARAM(this);
  GC_FUNC_ENTER;
{
  EXCEPTION_TRY
  {
    GC_REF(java_io_OutputStream,_tmp_181);
    GC_PUSH_ROOT(_tmp_181);
    GC_GET_REF(_tmp_181, this, _java_io_FilterOutputStream_out);
    {
      struct java_io_OutputStream_ClassStruct *_tmp_method;
      GC_GET(_tmp_method, _tmp_181, class);
      GC_PROC_CALL(_tmp_method->methodTbl->write_byteA_int_int, GC_PASS(_tmp_181), GC_PASS(buffer), offset, len);
    }CHECK(1);
    JBoolean _tmp_182;
    GC_GET(_tmp_182, this, _java_io_PrintStream_auto_flush);
    if (_tmp_182)
    {
      {
        struct java_io_PrintStream_ClassStruct *_tmp_method;
        GC_GET(_tmp_method, this, class);
        GC_PROC_CALL(_tmp_method->methodTbl->flush, GC_PASS(this));
      }CHECK(1);
    }
    GC_POP_ROOT(_tmp_181);
  }
  EXCEPTION_CATCH(1,&java_io_InterruptedIOException_Class)
    GC_REF(java_io_InterruptedIOException,iioe);
    GC_PUSH_ROOT(iioe);
    EXCEPTION_GET_OBJ(iioe);
    {
      GC_REF(java_lang_Thread,_tmp_183);
      GC_PUSH_ROOT(_tmp_183);
      GC_REF_FUNC_CALL(_tmp_183, java_lang_Thread_currentThread);CHECK(0);
      {
        struct java_lang_Thread_ClassStruct *_tmp_method;
        GC_GET(_tmp_method, _tmp_183, class);
        GC_PROC_CALL(_tmp_method->methodTbl->interrupt, GC_PASS(_tmp_183));
      }CHECK(0);
      GC_POP_ROOT(_tmp_183);
    }
    GC_POP_ROOT(iioe);
  EXCEPTION_CATCH_MORE(&java_io_IOException_Class)
__branch_1:;
    GC_REF(java_io_IOException,e);
    GC_PUSH_ROOT(e);
    EXCEPTION_GET_OBJ(e);
    {
      {
        struct java_io_PrintStream_ClassStruct *_tmp_method;
        GC_GET(_tmp_method, this, class);
        GC_PROC_CALL(_tmp_method->methodTbl->setError, GC_PASS(this));
      }CHECK(0);
    }
    GC_POP_ROOT(e);
  EXCEPTION_FINALLY
  EXCEPTION_END(0)
}
__branch_2:;
  GC_FUNC_LEAVE;
GC_PROC_END(java_io_PrintStream_write_byteA_int_int)


GC_PROC_BEGIN(java_io_FilterOutputStream_initializer,GC_PARAM(java_io_FilterOutputStream,this))
  GC_PARAM_REF(java_io_FilterOutputStream,this);
  GC_FUNC_ENTER;
  GC_PROC_CALL(java_io_OutputStream_initializer,GC_PASS(this));
  GC_FUNC_LEAVE;
GC_PROC_END(java_io_FilterOutputStream_initializer)


/* constructor: FilterOutputStream(OutputStream out) */
GC_REF_FUNC_BEGIN(java_io_FilterOutputStream,
    java_io_FilterOutputStream_FilterOutputStream_java_io_OutputStream,
    void* class,
    GC_PARAM(LayoutHead, layout),
    GC_PARAM(java_io_OutputStream,out))
  GC_PARAM_REF(LayoutHead, layout);
  GC_PARAM_REF(java_io_OutputStream, out);
  GC_REF(java_io_FilterOutputStream,this);
  GC_PUSH_PARAM(layout);
  GC_FUNC_ENTER;
  GC_PUSH_ROOT(this);
  {
    GC_NEW(this,layout);
    GC_SET(this,class,class);
    GC_PROC_CALL(java_io_FilterOutputStream_initializer,GC_PASS(this));
    GC_PROC_CALL(java_io_FilterOutputStream_FilterOutputStream_java_io_OutputStream_init, GC_PASS(this), GC_PASS(out));
    GC_ASSIGN(gc_result, this);
  }
  GC_POP_ROOT(this);
  GC_FUNC_LEAVE;
  GC_POP_PARAM(layout);
GC_REF_FUNC_END(java_io_FilterOutputStream, java_io_FilterOutputStream_FilterOutputStream_java_io_OutputStream)


/* init func: FilterOutputStream(OutputStream out) */
GC_PROC_BEGIN(
    java_io_FilterOutputStream_FilterOutputStream_java_io_OutputStream_init,
    GC_PARAM(java_io_FilterOutputStream,this),
    GC_PARAM(java_io_OutputStream,out))
  GC_PARAM_REF(java_io_FilterOutputStream,this);
  GC_PARAM_REF(java_io_OutputStream, out);
  GC_PUSH_PARAM(this);
  GC_FUNC_ENTER;
  {
    GC_PROC_CALL(java_io_OutputStream_OutputStream_init, GC_PASS(this));CHECK(0);
    {
      GC_SET_REF(this, _java_io_FilterOutputStream_out, out);
    }
  }
  __branch_1:;
  GC_FUNC_LEAVE;
  GC_POP_PARAM(this);
GC_PROC_END(java_io_FilterOutputStream_FilterOutputStream_java_io_OutputStream_init)


/* method: FilterOutputStream.close() */
GC_PROC_BEGIN(
    java_io_FilterOutputStream_close,
    GC_PARAM(java_io_FilterOutputStream,this))
  EXCEPTION_THROWS
  GC_PARAM_REF(java_io_FilterOutputStream,this);
  GC_PUSH_PARAM(this);
  GC_FUNC_ENTER;
{
  {
    struct java_io_FilterOutputStream_ClassStruct *_tmp_method;
    GC_GET(_tmp_method, this, class);
    GC_PROC_CALL(_tmp_method->methodTbl->flush, GC_PASS(this));
  }CHECK(0);
  GC_REF(java_io_OutputStream,_tmp_184);
  GC_PUSH_ROOT(_tmp_184);
  GC_GET_REF(_tmp_184, this, _java_io_FilterOutputStream_out);
  {
    struct java_io_OutputStream_ClassStruct *_tmp_method;
    GC_GET(_tmp_method, _tmp_184, class);
    GC_PROC_CALL(_tmp_method->methodTbl->close, GC_PASS(_tmp_184));
  }CHECK(0);
  GC_POP_ROOT(_tmp_184);
}
__branch_1:;
  GC_FUNC_LEAVE;
GC_PROC_END(java_io_FilterOutputStream_close)


/* method: FilterOutputStream.flush() */
GC_PROC_BEGIN(
    java_io_FilterOutputStream_flush,
    GC_PARAM(java_io_FilterOutputStream,this))
  EXCEPTION_THROWS
  GC_PARAM_REF(java_io_FilterOutputStream,this);
  GC_PUSH_PARAM(this);
  GC_FUNC_ENTER;
{
  GC_REF(java_io_OutputStream,_tmp_185);
  GC_PUSH_ROOT(_tmp_185);
  GC_GET_REF(_tmp_185, this, _java_io_FilterOutputStream_out);
  {
    struct java_io_OutputStream_ClassStruct *_tmp_method;
    GC_GET(_tmp_method, _tmp_185, class);
    GC_PROC_CALL(_tmp_method->methodTbl->flush, GC_PASS(_tmp_185));
  }CHECK(0);
  GC_POP_ROOT(_tmp_185);
}
__branch_1:;
  GC_FUNC_LEAVE;
GC_PROC_END(java_io_FilterOutputStream_flush)


/* method: FilterOutputStream.write(int) */
GC_PROC_BEGIN(
    java_io_FilterOutputStream_write_int,
    GC_PARAM(java_io_FilterOutputStream,this),
    JInt b)
  EXCEPTION_THROWS
  GC_PARAM_REF(java_io_FilterOutputStream,this);
  GC_PUSH_PARAM(this);
  GC_FUNC_ENTER;
{
  GC_REF(java_io_OutputStream,_tmp_186);
  GC_PUSH_ROOT(_tmp_186);
  GC_GET_REF(_tmp_186, this, _java_io_FilterOutputStream_out);
  {
    struct java_io_OutputStream_ClassStruct *_tmp_method;
    GC_GET(_tmp_method, _tmp_186, class);
    GC_PROC_CALL(_tmp_method->methodTbl->write_int, GC_PASS(_tmp_186), b);
  }CHECK(0);
  GC_POP_ROOT(_tmp_186);
}
__branch_1:;
  GC_FUNC_LEAVE;
GC_PROC_END(java_io_FilterOutputStream_write_int)


/* method: FilterOutputStream.write(byte[]) */
GC_PROC_BEGIN(
    java_io_FilterOutputStream_write_byteA,
    GC_PARAM(java_io_FilterOutputStream,this),
    GC_PARAM(JByteArray,buf))
  EXCEPTION_THROWS
  GC_PARAM_REF(java_io_FilterOutputStream,this);
  GC_PARAM_REF(JByteArray, buf);
  GC_PUSH_PARAM(this);
  GC_FUNC_ENTER;
{
  JInt _tmp_187;
  GC_GET(_tmp_187, buf, _JByteA_length);
  {
    struct java_io_FilterOutputStream_ClassStruct *_tmp_method;
    GC_GET(_tmp_method, this, class);
    GC_PROC_CALL(_tmp_method->methodTbl->write_byteA_int_int, GC_PASS(this), GC_PASS(buf), 0, _tmp_187);
  }CHECK(0);
}
__branch_1:;
  GC_FUNC_LEAVE;
GC_PROC_END(java_io_FilterOutputStream_write_byteA)


/* method: FilterOutputStream.write(byte[], int, int) */
GC_PROC_BEGIN(
    java_io_FilterOutputStream_write_byteA_int_int,
    GC_PARAM(java_io_FilterOutputStream,this),
    GC_PARAM(JByteArray,buf),
    JInt offset,
    JInt len)
  EXCEPTION_THROWS
  GC_PARAM_REF(java_io_FilterOutputStream,this);
  GC_PARAM_REF(JByteArray, buf);
  GC_PUSH_PARAM(this);
  GC_FUNC_ENTER;
{
  {
    JInt i;
    i = 0;
    {
      goto __cond_10;
__loop_10:;
      JByte _tmp_188;
      GC_GET_VAR_ARRAY(_tmp_188, buf, offset + i);
      {
        struct java_io_FilterOutputStream_ClassStruct *_tmp_method;
        GC_GET(_tmp_method, this, class);
        GC_PROC_CALL(_tmp_method->methodTbl->write_int, GC_PASS(this), _tmp_188);
      }CHECK(0);
      i = i + 1;
__cond_10:;
      JBoolean _tmp_189;
      _tmp_189 = i < len;
      if (_tmp_189) {
        goto __loop_10;
      }
    }
  }
}
__branch_1:;
  GC_FUNC_LEAVE;
GC_PROC_END(java_io_FilterOutputStream_write_byteA_int_int)


GC_PROC_BEGIN(java_io_OutputStream_initializer,GC_PARAM(java_io_OutputStream,this))
  GC_PARAM_REF(java_io_OutputStream,this);
  GC_FUNC_ENTER;
  GC_PROC_CALL(java_lang_Object_initializer,GC_PASS(this));
  GC_FUNC_LEAVE;
GC_PROC_END(java_io_OutputStream_initializer)


/* constructor: OutputStream() */
GC_REF_FUNC_BEGIN(java_io_OutputStream,
    java_io_OutputStream_OutputStream,
    void* class,
    GC_PARAM(LayoutHead, layout))
  GC_PARAM_REF(LayoutHead, layout);
  GC_REF(java_io_OutputStream,this);
  GC_PUSH_PARAM(layout);
  GC_FUNC_ENTER;
  GC_PUSH_ROOT(this);
  {
    GC_NEW(this,layout);
    GC_SET(this,class,class);
    GC_PROC_CALL(java_io_OutputStream_initializer,GC_PASS(this));
    GC_PROC_CALL(java_io_OutputStream_OutputStream_init, GC_PASS(this));
    GC_ASSIGN(gc_result, this);
  }
  GC_POP_ROOT(this);
  GC_FUNC_LEAVE;
  GC_POP_PARAM(layout);
GC_REF_FUNC_END(java_io_OutputStream, java_io_OutputStream_OutputStream)


/* init func: OutputStream() */
GC_PROC_BEGIN(
    java_io_OutputStream_OutputStream_init,
    GC_PARAM(java_io_OutputStream,this))
  GC_PARAM_REF(java_io_OutputStream,this);
  GC_PUSH_PARAM(this);
  GC_FUNC_ENTER;
  {
    GC_PROC_CALL(java_lang_Object_Object_init, GC_PASS(this));CHECK(0);
    {
    }
  }
  __branch_1:;
  GC_FUNC_LEAVE;
  GC_POP_PARAM(this);
GC_PROC_END(java_io_OutputStream_OutputStream_init)


/* method: OutputStream.write(byte[]) */
GC_PROC_BEGIN(
    java_io_OutputStream_write_byteA,
    GC_PARAM(java_io_OutputStream,this),
    GC_PARAM(JByteArray,b))
  EXCEPTION_THROWS
  GC_PARAM_REF(java_io_OutputStream,this);
  GC_PARAM_REF(JByteArray, b);
  GC_PUSH_PARAM(this);
  GC_FUNC_ENTER;
{
  JInt _tmp_190;
  GC_GET(_tmp_190, b, _JByteA_length);
  {
    struct java_io_OutputStream_ClassStruct *_tmp_method;
    GC_GET(_tmp_method, this, class);
    GC_PROC_CALL(_tmp_method->methodTbl->write_byteA_int_int, GC_PASS(this), GC_PASS(b), 0, _tmp_190);
  }CHECK(0);
}
__branch_1:;
  GC_FUNC_LEAVE;
GC_PROC_END(java_io_OutputStream_write_byteA)


/* method: OutputStream.write(byte[], int, int) */
GC_PROC_BEGIN(
    java_io_OutputStream_write_byteA_int_int,
    GC_PARAM(java_io_OutputStream,this),
    GC_PARAM(JByteArray,b),
    JInt off,
    JInt len)
  EXCEPTION_THROWS
  GC_PARAM_REF(java_io_OutputStream,this);
  GC_PARAM_REF(JByteArray, b);
  GC_PUSH_PARAM(this);
  GC_FUNC_ENTER;
{
  JBoolean _tmp_191;
  JBoolean _tmp_192;
  if (off < 0) {
    _tmp_192 = true;
  } else {
    if (len < 0) {
      _tmp_192 = true;
    } else {
      _tmp_192 = false;
    }
  }
  if (_tmp_192) {
    _tmp_191 = true;
  } else {
    JInt _tmp_193;
    GC_GET(_tmp_193, b, _JByteA_length);
    if (off + len > _tmp_193) {
      _tmp_191 = true;
    } else {
      _tmp_191 = false;
    }
  }
  if (_tmp_191)
  {
    GC_REF(java_lang_ArrayIndexOutOfBoundsException,_tmp_194);
    GC_PUSH_ROOT(_tmp_194);
    GC_REF_FUNC_CALL(_tmp_194, java_lang_ArrayIndexOutOfBoundsException_ArrayIndexOutOfBoundsException, &java_lang_ArrayIndexOutOfBoundsException_Class, GC_PASS(java_lang_ArrayIndexOutOfBoundsException_Layout));CHECK(0);
    EXCEPTION_STORE_OBJ(_tmp_194);
    GC_POP_ROOT(_tmp_194);
    EXCEPTION_THROW(0,&java_lang_ArrayIndexOutOfBoundsException_Class)
    GC_POP_ROOT(_tmp_194);
  }
  {
    JInt i;
    i = 0;
    {
      goto __cond_11;
__loop_11:;
      JByte _tmp_195;
      GC_GET_VAR_ARRAY(_tmp_195, b, off + i);
      {
        struct java_io_OutputStream_ClassStruct *_tmp_method;
        GC_GET(_tmp_method, this, class);
        GC_PROC_CALL(_tmp_method->methodTbl->write_int, GC_PASS(this), _tmp_195);
      }CHECK(0);
      i = i + 1;
__cond_11:;
      JBoolean _tmp_196;
      _tmp_196 = i < len;
      if (_tmp_196) {
        goto __loop_11;
      }
    }
  }
}
__branch_1:;
  GC_FUNC_LEAVE;
GC_PROC_END(java_io_OutputStream_write_byteA_int_int)


/* method: OutputStream.flush() */
GC_PROC_BEGIN(
    java_io_OutputStream_flush,
    GC_PARAM(java_io_OutputStream,this))
  EXCEPTION_THROWS
  GC_PARAM_REF(java_io_OutputStream,this);
  GC_PUSH_PARAM(this);
  GC_FUNC_ENTER;
{
}
__branch_1:;
  GC_FUNC_LEAVE;
GC_PROC_END(java_io_OutputStream_flush)


/* method: OutputStream.close() */
GC_PROC_BEGIN(
    java_io_OutputStream_close,
    GC_PARAM(java_io_OutputStream,this))
  EXCEPTION_THROWS
  GC_PARAM_REF(java_io_OutputStream,this);
  GC_PUSH_PARAM(this);
  GC_FUNC_ENTER;
{
}
__branch_1:;
  GC_FUNC_LEAVE;
GC_PROC_END(java_io_OutputStream_close)


GC_PROC_BEGIN(java_lang_Integer_initializer,GC_PARAM(java_lang_Integer,this))
  GC_PARAM_REF(java_lang_Integer,this);
  GC_FUNC_ENTER;
  GC_PROC_CALL(java_lang_Number_initializer,GC_PASS(this));
  GC_FUNC_LEAVE;
GC_PROC_END(java_lang_Integer_initializer)


/* method: Integer.toString(int, int) */
GC_REF_FUNC_BEGIN(java_lang_String,
    java_lang_Integer_toString_int_int,
    JInt num,
    JInt radix)
  GC_REF(java_lang_String, __result);
  GC_PUSH_ROOT(__result);
  GC_FUNC_ENTER;
{
  GC_REF(JCharArray,buffer);
  JInt i;
  JBoolean isNeg;
  JBoolean _tmp_197;
  JInt _tmp_198;
  GC_GET(_tmp_198, java_lang_Character_Static, _java_lang_Character_MIN_RADIX);
  if (radix < _tmp_198) {
    _tmp_197 = true;
  } else {
    JInt _tmp_199;
    GC_GET(_tmp_199, java_lang_Character_Static, _java_lang_Character_MAX_RADIX);
    if (radix > _tmp_199) {
      _tmp_197 = true;
    } else {
      _tmp_197 = false;
    }
  }
  if (_tmp_197)
  {
    radix = 10;
  }
  GC_PUSH_ROOT(buffer);
  GC_REF_FUNC_CALL(buffer, newJCharArray, 33);CHECK(0);
  i = 33;
  isNeg = false;
  if (num < 0)
  {
    isNeg = true;
    num = -num;
    if (num < 0)
    {
      i = i - 1;
      JChar _tmp_200;
      GC_REF(JCharArray,_tmp_201);
      GC_PUSH_ROOT(_tmp_201);
      GC_GET_REF(_tmp_201, java_lang_Number_Static, _java_lang_Number_digits);
      JInt _tmp_202;
      _tmp_202 = (JInt) ((-(num + radix) % radix));      GC_GET_VAR_ARRAY(_tmp_200, _tmp_201, _tmp_202);
      GC_SET_VAR_ARRAY(buffer, i, _tmp_200);
      num = -(num / radix);
      GC_POP_ROOT(_tmp_201);
    }
  }
  {
__loop_12:;
    {
      JInt x;
      x = num % radix;
      i = i - 1;
      JChar _tmp_203;
      GC_REF(JCharArray,_tmp_204);
      GC_PUSH_ROOT(_tmp_204);
      GC_GET_REF(_tmp_204, java_lang_Number_Static, _java_lang_Number_digits);
      GC_GET_VAR_ARRAY(_tmp_203, _tmp_204, x);
      GC_SET_VAR_ARRAY(buffer, i, _tmp_203);
      num = num / radix;
      GC_POP_ROOT(_tmp_204);
    }
    JBoolean _tmp_205;
    _tmp_205 = num > 0;
    if (_tmp_205) {
      goto __loop_12;
    }
  }
  if (isNeg)
  {
    i = i - 1;
    GC_SET_VAR_ARRAY(buffer, i, '-');
  }
  GC_REF(java_lang_String,_tmp_206);
  GC_PUSH_ROOT(_tmp_206);
  GC_REF_FUNC_CALL(_tmp_206, java_lang_String_String_JCharA_int_int_boolean, &java_lang_String_Class, GC_PASS(java_lang_String_Layout), GC_PASS(buffer), i, 33 - i, true);CHECK(0);
GC_ASSIGN(__result, _tmp_206);
  GC_POP_ROOT(buffer);
  GC_POP_ROOT(_tmp_206);
  goto __branch_1;
}
__branch_1:;
  GC_ASSIGN(gc_result, __result);
  GC_POP_ROOT(__result);
  GC_FUNC_LEAVE;
GC_REF_FUNC_END(java_lang_String, java_lang_Integer_toString_int_int)


/* method: Integer.parseInt(java.lang.String) */
GC_VAR_FUNC_BEGIN(JInt,
    java_lang_Integer_parseInt_java_lang_String,
    GC_PARAM(java_lang_String,s))
  GC_PARAM_REF(java_lang_String, s);
  JInt __result;
  GC_FUNC_ENTER;
{
  JInt _tmp_207;
  GC_VAR_FUNC_CALL(_tmp_207, java_lang_Integer_parseInt_java_lang_String_int_boolean, GC_PASS(s), 10, false);CHECK(0);
  __result = _tmp_207;
  goto __branch_1;
}
__branch_1:;
  gc_result = __result;
  GC_FUNC_LEAVE;
GC_VAR_FUNC_END(JInt, java_lang_Integer_parseInt_java_lang_String)


/* method: Integer.toString() */
GC_REF_FUNC_BEGIN(java_lang_String,
    java_lang_Integer_toString,
    GC_PARAM(java_lang_Integer,this))
  GC_PARAM_REF(java_lang_Integer,this);
  GC_PUSH_PARAM(this);
  GC_REF(java_lang_String, __result);
  GC_PUSH_ROOT(__result);
  GC_FUNC_ENTER;
{
  GC_REF(java_lang_String,_tmp_208);
  GC_PUSH_ROOT(_tmp_208);
  JInt _tmp_209;
  GC_GET(_tmp_209, this, _java_lang_Integer_value);
  GC_REF_FUNC_CALL(_tmp_208, java_lang_String_valueOf_int, _tmp_209);CHECK(0);
GC_ASSIGN(__result, _tmp_208);
  GC_POP_ROOT(_tmp_208);
  goto __branch_1;
}
__branch_1:;
  GC_ASSIGN(gc_result, __result);
  GC_POP_ROOT(__result);
  GC_FUNC_LEAVE;
GC_REF_FUNC_END(java_lang_String, java_lang_Integer_toString)


/* method: Integer.parseInt(java.lang.String, int, boolean) */
GC_VAR_FUNC_BEGIN(JInt,
    java_lang_Integer_parseInt_java_lang_String_int_boolean,
    GC_PARAM(java_lang_String,str),
    JInt radix,
    JBoolean decode)
  GC_PARAM_REF(java_lang_String, str);
  JInt __result;
  GC_FUNC_ENTER;
{
  JInt index;
  JInt len;
  JBoolean isNeg;
  JInt ch;
  JInt max;
  JInt val;
  JBoolean _tmp_210;
  if (!decode) {
    if (GC_IS_NULL(str)) {
      _tmp_210 = true;
    } else {
      _tmp_210 = false;
    }
  } else {
  _tmp_210 = false;
  }
  if (_tmp_210)
  {
    GC_REF(java_lang_NumberFormatException,_tmp_211);
    GC_PUSH_ROOT(_tmp_211);
    GC_REF_FUNC_CALL(_tmp_211, java_lang_NumberFormatException_NumberFormatException, &java_lang_NumberFormatException_Class, GC_PASS(java_lang_NumberFormatException_Layout));CHECK(0);
    EXCEPTION_STORE_OBJ(_tmp_211);
    GC_POP_ROOT(_tmp_211);
    EXCEPTION_THROW(0,&java_lang_NumberFormatException_Class)
    GC_POP_ROOT(_tmp_211);
  }
  index = 0;
  {
    struct java_lang_String_ClassStruct *_tmp_method;
    GC_GET(_tmp_method, str, class);
    GC_VAR_FUNC_CALL(len, _tmp_method->methodTbl->length, GC_PASS(str));
  }CHECK(0);
  isNeg = false;
  if (len == 0)
  {
    GC_REF(java_lang_NumberFormatException,_tmp_212);
    GC_PUSH_ROOT(_tmp_212);
    GC_REF_FUNC_CALL(_tmp_212, java_lang_NumberFormatException_NumberFormatException, &java_lang_NumberFormatException_Class, GC_PASS(java_lang_NumberFormatException_Layout));CHECK(0);
    EXCEPTION_STORE_OBJ(_tmp_212);
    GC_POP_ROOT(_tmp_212);
    EXCEPTION_THROW(0,&java_lang_NumberFormatException_Class)
    GC_POP_ROOT(_tmp_212);
  }
  {
    struct java_lang_String_ClassStruct *_tmp_method;
    GC_GET(_tmp_method, str, class);
    GC_VAR_FUNC_CALL(ch, _tmp_method->methodTbl->charAt_int, GC_PASS(str), index);
  }CHECK(0);
  if (ch == '-')
  {
    if (len == 1)
    {
      GC_REF(java_lang_NumberFormatException,_tmp_213);
      GC_PUSH_ROOT(_tmp_213);
      GC_REF_FUNC_CALL(_tmp_213, java_lang_NumberFormatException_NumberFormatException, &java_lang_NumberFormatException_Class, GC_PASS(java_lang_NumberFormatException_Layout));CHECK(0);
      EXCEPTION_STORE_OBJ(_tmp_213);
      GC_POP_ROOT(_tmp_213);
      EXCEPTION_THROW(0,&java_lang_NumberFormatException_Class)
      GC_POP_ROOT(_tmp_213);
    }
    isNeg = true;
    index = index + 1;
    {
      struct java_lang_String_ClassStruct *_tmp_method;
      GC_GET(_tmp_method, str, class);
      GC_VAR_FUNC_CALL(ch, _tmp_method->methodTbl->charAt_int, GC_PASS(str), index);
    }CHECK(0);
  }
  if (decode)
  {
    if (ch == '0')
    {
      index = index + 1;
      if (index == len)
      {
        __result = 0;
        goto __branch_1;
      }
      JChar _tmp_214;
      {
        struct java_lang_String_ClassStruct *_tmp_method;
        GC_GET(_tmp_method, str, class);
        GC_VAR_FUNC_CALL(_tmp_214, _tmp_method->methodTbl->charAt_int, GC_PASS(str), index);
      }CHECK(0);
      if ((_tmp_214 & -33) == 'X')
      {
        radix = 16;
        index = index + 1;
      }
      else
      {
        radix = 8;
      }
    }
    else
    {
      if (ch == '#')
      {
        radix = 16;
        index = index + 1;
      }
    }
  }
  if (index == len)
  {
    GC_REF(java_lang_NumberFormatException,_tmp_215);
    GC_PUSH_ROOT(_tmp_215);
    GC_REF_FUNC_CALL(_tmp_215, java_lang_NumberFormatException_NumberFormatException, &java_lang_NumberFormatException_Class, GC_PASS(java_lang_NumberFormatException_Layout));CHECK(0);
    EXCEPTION_STORE_OBJ(_tmp_215);
    GC_POP_ROOT(_tmp_215);
    EXCEPTION_THROW(0,&java_lang_NumberFormatException_Class)
    GC_POP_ROOT(_tmp_215);
  }
  JInt _tmp_216;
  GC_GET(_tmp_216, java_lang_Integer_Static, _java_lang_Integer_MAX_VALUE);
  max = _tmp_216 / radix;
  JBoolean _tmp_217;
  if (isNeg) {
    JInt _tmp_218;
    GC_GET(_tmp_218, java_lang_Integer_Static, _java_lang_Integer_MAX_VALUE);
    if (_tmp_218 % radix == radix - 1) {
      _tmp_217 = true;
    } else {
      _tmp_217 = false;
    }
  } else {
  _tmp_217 = false;
  }
  if (_tmp_217)
  {
    max = max + 1;
  }
  val = 0;
  {
    goto __cond_13;
__loop_13:;
    {
      JBoolean _tmp_219;
      if (val < 0) {
        _tmp_219 = true;
      } else {
        if (val > max) {
          _tmp_219 = true;
        } else {
          _tmp_219 = false;
        }
      }
      if (_tmp_219)
      {
        GC_REF(java_lang_NumberFormatException,_tmp_220);
        GC_PUSH_ROOT(_tmp_220);
        GC_REF_FUNC_CALL(_tmp_220, java_lang_NumberFormatException_NumberFormatException, &java_lang_NumberFormatException_Class, GC_PASS(java_lang_NumberFormatException_Layout));CHECK(0);
        EXCEPTION_STORE_OBJ(_tmp_220);
        GC_POP_ROOT(_tmp_220);
        EXCEPTION_THROW(0,&java_lang_NumberFormatException_Class)
        GC_POP_ROOT(_tmp_220);
      }
      JChar _tmp_221;
      JInt _tmp_222;
      _tmp_222 = index;
      index = _tmp_222 + 1;
      {
        struct java_lang_String_ClassStruct *_tmp_method;
        GC_GET(_tmp_method, str, class);
        GC_VAR_FUNC_CALL(_tmp_221, _tmp_method->methodTbl->charAt_int, GC_PASS(str), _tmp_222);
      }CHECK(0);
      GC_VAR_FUNC_CALL(ch, java_lang_Character_digit_char_int, _tmp_221, radix);CHECK(0);
      val = val * radix + ch;
      JBoolean _tmp_223;
      if (ch < 0) {
        _tmp_223 = true;
      } else {
        JBoolean _tmp_224;
        if (val < 0) {
          JBoolean _tmp_225;
          if (!isNeg) {
            _tmp_225 = true;
          } else {
            JInt _tmp_226;
            GC_GET(_tmp_226, java_lang_Integer_Static, _java_lang_Integer_MIN_VALUE);
            if (val != _tmp_226) {
              _tmp_225 = true;
            } else {
              _tmp_225 = false;
            }
          }
          if ((_tmp_225)) {
            _tmp_224 = true;
          } else {
            _tmp_224 = false;
          }
        } else {
        _tmp_224 = false;
        }
        if ((_tmp_224)) {
          _tmp_223 = true;
        } else {
          _tmp_223 = false;
        }
      }
      if (_tmp_223)
      {
        GC_REF(java_lang_NumberFormatException,_tmp_227);
        GC_PUSH_ROOT(_tmp_227);
        GC_REF_FUNC_CALL(_tmp_227, java_lang_NumberFormatException_NumberFormatException, &java_lang_NumberFormatException_Class, GC_PASS(java_lang_NumberFormatException_Layout));CHECK(0);
        EXCEPTION_STORE_OBJ(_tmp_227);
        GC_POP_ROOT(_tmp_227);
        EXCEPTION_THROW(0,&java_lang_NumberFormatException_Class)
        GC_POP_ROOT(_tmp_227);
      }
    }
__cond_13:;
    JBoolean _tmp_228;
    _tmp_228 = index < len;
    if (_tmp_228) {
      goto __loop_13;
    }
  }
  JInt _tmp_229;
  if (isNeg) {
    _tmp_229 = -val;
  } else {
    _tmp_229 = val;
  }
  __result = _tmp_229;
  goto __branch_1;
}
__branch_1:;
  gc_result = __result;
  GC_FUNC_LEAVE;
GC_VAR_FUNC_END(JInt, java_lang_Integer_parseInt_java_lang_String_int_boolean)


GC_PROC_BEGIN(java_lang_Number_initializer,GC_PARAM(java_lang_Number,this))
  GC_PARAM_REF(java_lang_Number,this);
  GC_FUNC_ENTER;
  GC_PROC_CALL(java_lang_Object_initializer,GC_PASS(this));
  GC_FUNC_LEAVE;
GC_PROC_END(java_lang_Number_initializer)


GC_PROC_BEGIN(Monitor_initializer,GC_PARAM(Monitor,this))
  GC_PARAM_REF(Monitor,this);
  GC_FUNC_ENTER;
  GC_PROC_CALL(java_lang_Object_initializer,GC_PASS(this));
    GC_REF(JByteArray,_tmp_230);
    GC_PUSH_ROOT(_tmp_230);
    GC_REF_FUNC_CALL(_tmp_230, newJByteArray, 131083);CHECK(0);
    GC_SET_REF(this, _Monitor_jpeg, _tmp_230);
  GC_POP_ROOT(_tmp_230);
    GC_SET(this, _Monitor_mode, 1);
    GC_SET(this, _Monitor_now, 0);
  GC_FUNC_LEAVE;
GC_PROC_END(Monitor_initializer)


/* method: Monitor.getJpeg(long) */
GC_REF_FUNC_BEGIN(JByteArray,
    Monitor_getJpeg_long,
    GC_PARAM(Monitor,this),
    JLong old)
  EXCEPTION_THROWS
  GC_PARAM_REF(Monitor,this);
  GC_PUSH_PARAM(this);
  GC_REF(JByteArray, __result);
  GC_PUSH_ROOT(__result);
  GC_FUNC_ENTER;
  MONITOR_ENTER(this);
{
  GC_REF(JByteArray,re);
  {
    goto __cond_14;
__loop_14:;
    {
      {
        struct java_lang_Object_ClassStruct *_tmp_method;
        GC_GET(_tmp_method, this, class);
        GC_PROC_CALL(_tmp_method->methodTbl->wait, GC_PASS(this));
      }CHECK(0);
    }
__cond_14:;
    JBoolean _tmp_231;
    JLong _tmp_232;
    GC_GET(_tmp_232, this, _Monitor_now);
    _tmp_231 = old == _tmp_232;
    if (_tmp_231) {
      goto __loop_14;
    }
  }
  GC_PUSH_ROOT(re);
  JInt _tmp_233;
  GC_REF(JByteArray,_tmp_234);
  GC_PUSH_ROOT(_tmp_234);
  GC_GET_REF(_tmp_234, this, _Monitor_jpeg);
  GC_GET(_tmp_233, _tmp_234, _JByteA_length);
  GC_REF_FUNC_CALL(re, newJByteArray, _tmp_233);CHECK(0);
  GC_REF(JByteArray,_tmp_235);
  GC_PUSH_ROOT(_tmp_235);
  GC_GET_REF(_tmp_235, this, _Monitor_jpeg);
  JInt _tmp_236;
  GC_REF(JByteArray,_tmp_237);
  GC_PUSH_ROOT(_tmp_237);
  GC_GET_REF(_tmp_237, this, _Monitor_jpeg);
  GC_GET(_tmp_236, _tmp_237, _JByteA_length);
  GC_PROC_CALL(java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int, GC_PASS(_tmp_235), 0, GC_PASS(re), 0, _tmp_236);CHECK(0);
GC_ASSIGN(__result, re);
  GC_POP_ROOT(re);
  GC_POP_ROOT(_tmp_234);
  GC_POP_ROOT(_tmp_235);
  GC_POP_ROOT(_tmp_237);
  goto __branch_1;
}
__branch_1:;
  GC_ASSIGN(gc_result, __result);
  GC_POP_ROOT(__result);
  MONITOR_LEAVE(this);
  GC_FUNC_LEAVE;
GC_REF_FUNC_END(JByteArray, Monitor_getJpeg_long)


/* method: Monitor.setJpeg(byte[]) */
GC_PROC_BEGIN(
    Monitor_setJpeg_byteA,
    GC_PARAM(Monitor,this),
    GC_PARAM(JByteArray,newJpeg))
  GC_PARAM_REF(Monitor,this);
  GC_PARAM_REF(JByteArray, newJpeg);
  GC_PUSH_PARAM(this);
  GC_FUNC_ENTER;
  MONITOR_ENTER(this);
{
  GC_REF(JByteArray,_tmp_238);
  GC_PUSH_ROOT(_tmp_238);
  JInt _tmp_239;
  GC_REF(JByteArray,_tmp_240);
  GC_PUSH_ROOT(_tmp_240);
  GC_GET_REF(_tmp_240, this, _Monitor_jpeg);
  GC_GET(_tmp_239, _tmp_240, _JByteA_length);
  GC_REF_FUNC_CALL(_tmp_238, newJByteArray, _tmp_239);CHECK(0);
  GC_SET_REF(this, _Monitor_jpeg, _tmp_238);
  GC_REF(JByteArray,_tmp_241);
  GC_PUSH_ROOT(_tmp_241);
  GC_GET_REF(_tmp_241, this, _Monitor_jpeg);
  JInt _tmp_242;
  GC_GET(_tmp_242, newJpeg, _JByteA_length);
  GC_PROC_CALL(java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int, GC_PASS(newJpeg), 0, GC_PASS(_tmp_241), 0, _tmp_242);CHECK(0);
  JLong _tmp_243;
  GC_REF(JByteArray,_tmp_244);
  GC_PUSH_ROOT(_tmp_244);
  GC_GET_REF(_tmp_244, this, _Monitor_jpeg);
  GC_VAR_FUNC_CALL(_tmp_243, Monitor_timeMillisFromArray_byteA, GC_PASS(_tmp_244));CHECK(0);
  GC_SET(this, _Monitor_now, _tmp_243);
  {
    struct java_lang_Object_ClassStruct *_tmp_method;
    GC_GET(_tmp_method, this, class);
    GC_PROC_CALL(_tmp_method->methodTbl->notifyAll, GC_PASS(this));
  }CHECK(0);
  GC_POP_ROOT(_tmp_244);
  GC_POP_ROOT(_tmp_241);
  GC_POP_ROOT(_tmp_240);
  GC_POP_ROOT(_tmp_238);
}
__branch_1:;
  MONITOR_LEAVE(this);
  GC_FUNC_LEAVE;
GC_PROC_END(Monitor_setJpeg_byteA)


/* method: Monitor.getMode() */
GC_VAR_FUNC_BEGIN(JByte,
    Monitor_getMode,
    GC_PARAM(Monitor,this))
  GC_PARAM_REF(Monitor,this);
  GC_PUSH_PARAM(this);
  JByte __result;
  GC_FUNC_ENTER;
  MONITOR_ENTER(this);
{
  JByte _tmp_245;
  GC_GET(_tmp_245, this, _Monitor_mode);
  __result = _tmp_245;
  goto __branch_1;
}
__branch_1:;
  gc_result = __result;
  MONITOR_LEAVE(this);
  GC_FUNC_LEAVE;
GC_VAR_FUNC_END(JByte, Monitor_getMode)


/* method: Monitor.setMode(byte) */
GC_PROC_BEGIN(
    Monitor_setMode_byte,
    GC_PARAM(Monitor,this),
    JByte newMode)
  GC_PARAM_REF(Monitor,this);
  GC_PUSH_PARAM(this);
  GC_FUNC_ENTER;
  MONITOR_ENTER(this);
{
  GC_SET(this, _Monitor_mode, newMode);
}
__branch_1:;
  MONITOR_LEAVE(this);
  GC_FUNC_LEAVE;
GC_PROC_END(Monitor_setMode_byte)


/* method: Monitor.testSetMode() */
GC_PROC_BEGIN(
    Monitor_testSetMode,
    GC_PARAM(Monitor,this))
  GC_PARAM_REF(Monitor,this);
  GC_PUSH_PARAM(this);
  GC_FUNC_ENTER;
  MONITOR_ENTER(this);
{
  JByte _tmp_246;
  GC_GET(_tmp_246, this, _Monitor_mode);
  JByte _tmp_247;
  GC_GET(_tmp_247, Monitor_Static, _Monitor_AUTO);
  if (_tmp_246 == _tmp_247)
  {
    JByte _tmp_248;
    GC_GET(_tmp_248, Monitor_Static, _Monitor_MOVIE);
    GC_SET(this, _Monitor_mode, _tmp_248);
  }
}
__branch_1:;
  MONITOR_LEAVE(this);
  GC_FUNC_LEAVE;
GC_PROC_END(Monitor_testSetMode)


/* method: Monitor.timeMillisFromArray(byte[]) */
GC_VAR_FUNC_BEGIN(JLong,
    Monitor_timeMillisFromArray_byteA,
    GC_PARAM(JByteArray,array))
  GC_PARAM_REF(JByteArray, array);
  JLong __result;
  GC_FUNC_ENTER;
{
  JLong time;
  time = 0;
  {
    JInt i;
    i = 0;
    {
      goto __cond_15;
__loop_15:;
      JByte _tmp_249;
      GC_GET_VAR_ARRAY(_tmp_249, array, i);
      time = (time << 8) | (_tmp_249 & 0xFF);
      i = i + 1;
__cond_15:;
      JBoolean _tmp_250;
      _tmp_250 = i < 8;
      if (_tmp_250) {
        goto __loop_15;
      }
    }
  }
  __result = time;
  goto __branch_1;
}
__branch_1:;
  gc_result = __result;
  GC_FUNC_LEAVE;
GC_VAR_FUNC_END(JLong, Monitor_timeMillisFromArray_byteA)


/* constructor: Monitor() */
GC_REF_FUNC_BEGIN(Monitor,
    Monitor_Monitor,
    void* class,
    GC_PARAM(LayoutHead, layout))
  GC_PARAM_REF(LayoutHead, layout);
  GC_REF(Monitor,this);
  GC_PUSH_PARAM(layout);
  GC_FUNC_ENTER;
  GC_PUSH_ROOT(this);
  {
    GC_NEW(this,layout);
    GC_SET(this,class,class);
    GC_PROC_CALL(Monitor_initializer,GC_PASS(this));
    GC_PROC_CALL(Monitor_Monitor_init, GC_PASS(this));
    GC_ASSIGN(gc_result, this);
  }
  GC_POP_ROOT(this);
  GC_FUNC_LEAVE;
  GC_POP_PARAM(layout);
GC_REF_FUNC_END(Monitor, Monitor_Monitor)


/* init func: Monitor() */
GC_PROC_BEGIN(
    Monitor_Monitor_init,
    GC_PARAM(Monitor,this))
  GC_PARAM_REF(Monitor,this);
  GC_PUSH_PARAM(this);
  GC_FUNC_ENTER;
  {
    GC_PROC_CALL(java_lang_Object_Object_init, GC_PASS(this));CHECK(0);
    {
    }
  }
  __branch_1:;
  GC_FUNC_LEAVE;
  GC_POP_PARAM(this);
GC_PROC_END(Monitor_Monitor_init)


GC_PROC_BEGIN(CamToMonitor_t_initializer,GC_PARAM(CamToMonitor_t,this))
  GC_PARAM_REF(CamToMonitor_t,this);
  GC_FUNC_ENTER;
  GC_PROC_CALL(java_lang_Thread_initializer,GC_PASS(this));
  GC_FUNC_LEAVE;
GC_PROC_END(CamToMonitor_t_initializer)


/* constructor: CamToMonitor_t(Monitor mon) */
GC_REF_FUNC_BEGIN(CamToMonitor_t,
    CamToMonitor_t_CamToMonitor_t_Monitor,
    void* class,
    GC_PARAM(LayoutHead, layout),
    GC_PARAM(Monitor,mon))
  GC_PARAM_REF(LayoutHead, layout);
  GC_PARAM_REF(Monitor, mon);
  GC_REF(CamToMonitor_t,this);
  GC_PUSH_PARAM(layout);
  GC_FUNC_ENTER;
  GC_PUSH_ROOT(this);
  {
    GC_NEW(this,layout);
    GC_SET(this,class,class);
    GC_PROC_CALL(CamToMonitor_t_initializer,GC_PASS(this));
    GC_PROC_CALL(CamToMonitor_t_CamToMonitor_t_Monitor_init, GC_PASS(this), GC_PASS(mon));
    GC_ASSIGN(gc_result, this);
  }
  GC_POP_ROOT(this);
  GC_FUNC_LEAVE;
  GC_POP_PARAM(layout);
GC_REF_FUNC_END(CamToMonitor_t, CamToMonitor_t_CamToMonitor_t_Monitor)


/* init func: CamToMonitor_t(Monitor mon) */
GC_PROC_BEGIN(
    CamToMonitor_t_CamToMonitor_t_Monitor_init,
    GC_PARAM(CamToMonitor_t,this),
    GC_PARAM(Monitor,mon))
  GC_PARAM_REF(CamToMonitor_t,this);
  GC_PARAM_REF(Monitor, mon);
  GC_PUSH_PARAM(this);
  GC_FUNC_ENTER;
  {
    GC_PROC_CALL(java_lang_Thread_Thread_init, GC_PASS(this));CHECK(0);
    {
      GC_SET_REF(this, _CamToMonitor_t_mon, mon);
    }
  }
  __branch_1:;
  GC_FUNC_LEAVE;
  GC_POP_PARAM(this);
GC_PROC_END(CamToMonitor_t_CamToMonitor_t_Monitor_init)


/* method: CamToMonitor_t.run() */
GC_PROC_BEGIN(
    CamToMonitor_t_run,
    GC_PARAM(CamToMonitor_t,this))
  GC_PARAM_REF(CamToMonitor_t,this);
  GC_PUSH_PARAM(this);
  GC_FUNC_ENTER;
{
  GC_REF(se_lth_cs_eda040_realcamera_AxisM3006V,cam);
  GC_REF(JByteArray,jpeg);
  JInt len;
  JByte mode;
  GC_PUSH_ROOT(cam);
  GC_REF_FUNC_CALL(cam, se_lth_cs_eda040_realcamera_AxisM3006V_AxisM3006V, &se_lth_cs_eda040_realcamera_AxisM3006V_Class, GC_PASS(se_lth_cs_eda040_realcamera_AxisM3006V_Layout));CHECK(0);
  {
    struct se_lth_cs_eda040_realcamera_AxisM3006V_ClassStruct *_tmp_method;
    GC_GET(_tmp_method, cam, class);
    GC_PROC_CALL(_tmp_method->methodTbl->init, GC_PASS(cam));
  }CHECK(0);
  {
    struct se_lth_cs_eda040_realcamera_AxisM3006V_ClassStruct *_tmp_method;
    GC_GET(_tmp_method, cam, class);
    GC_PROC_CALL(_tmp_method->methodTbl->connect, GC_PASS(cam));
  }CHECK(0);
  GC_PUSH_ROOT(jpeg);
  GC_REF_FUNC_CALL(jpeg, newJByteArray, 131083);CHECK(0);
  mode = 0;
  {
    goto __cond_16;
__loop_16:;
    {
      JByte hi;
      JByte lo;
      GC_REF(Monitor,_tmp_251);
      GC_PUSH_ROOT(_tmp_251);
      GC_GET_REF(_tmp_251, this, _CamToMonitor_t_mon);
      {
        struct Monitor_ClassStruct *_tmp_method;
        GC_GET(_tmp_method, _tmp_251, class);
        GC_VAR_FUNC_CALL(mode, _tmp_method->methodTbl->getMode, GC_PASS(_tmp_251));
      }CHECK(0);
      {
        struct se_lth_cs_eda040_realcamera_AxisM3006V_ClassStruct *_tmp_method;
        GC_GET(_tmp_method, cam, class);
        GC_VAR_FUNC_CALL(len, _tmp_method->methodTbl->getJPEG_byteA_int, GC_PASS(cam), GC_PASS(jpeg), 11);
      }CHECK(0);
      {
        struct se_lth_cs_eda040_realcamera_AxisM3006V_ClassStruct *_tmp_method;
        GC_GET(_tmp_method, cam, class);
        GC_PROC_CALL(_tmp_method->methodTbl->getTime_byteA_int, GC_PASS(cam), GC_PASS(jpeg), 0);
      }CHECK(0);
      hi = (JByte) ((len / 255));      lo = (JByte) ((len % 255));      GC_SET_VAR_ARRAY(jpeg, 8, mode);
      GC_SET_VAR_ARRAY(jpeg, 9, hi);
      GC_SET_VAR_ARRAY(jpeg, 10, lo);
      GC_REF(Monitor,_tmp_252);
      GC_PUSH_ROOT(_tmp_252);
      GC_GET_REF(_tmp_252, this, _CamToMonitor_t_mon);
      {
        struct Monitor_ClassStruct *_tmp_method;
        GC_GET(_tmp_method, _tmp_252, class);
        GC_PROC_CALL(_tmp_method->methodTbl->setJpeg_byteA, GC_PASS(_tmp_252), GC_PASS(jpeg));
      }CHECK(0);
      JBoolean _tmp_253;
      JByte _tmp_254;
      GC_GET(_tmp_254, Monitor_Static, _Monitor_AUTO);
      if (mode == _tmp_254) {
        _tmp_253 = true;
      } else {
        JByte _tmp_255;
        GC_GET(_tmp_255, Monitor_Static, _Monitor_IDLE);
        if (mode == _tmp_255) {
          _tmp_253 = true;
        } else {
          _tmp_253 = false;
        }
      }
      if (_tmp_253)
      {
        {
          JInt i;
          i = 0;
          {
            goto __cond_17;
__loop_17:;
            {
              {
                struct se_lth_cs_eda040_realcamera_AxisM3006V_ClassStruct *_tmp_method;
                GC_GET(_tmp_method, cam, class);
                GC_VAR_FUNC_CALL(len, _tmp_method->methodTbl->getJPEG_byteA_int, GC_PASS(cam), GC_PASS(jpeg), 11);
              }CHECK(0);
              JBoolean _tmp_256;
              JBoolean _tmp_257;
              {
                struct se_lth_cs_eda040_realcamera_AxisM3006V_ClassStruct *_tmp_method;
                GC_GET(_tmp_method, cam, class);
                GC_VAR_FUNC_CALL(_tmp_257, _tmp_method->methodTbl->motionDetected, GC_PASS(cam));
              }CHECK(0);
              if (_tmp_257) {
                JByte _tmp_258;
                GC_GET(_tmp_258, Monitor_Static, _Monitor_AUTO);
                if (mode == _tmp_258) {
                  _tmp_256 = true;
                } else {
                  _tmp_256 = false;
                }
              } else {
              _tmp_256 = false;
              }
              if (_tmp_256)
              {
                GC_REF(Monitor,_tmp_259);
                GC_PUSH_ROOT(_tmp_259);
                GC_GET_REF(_tmp_259, this, _CamToMonitor_t_mon);
                {
                  struct Monitor_ClassStruct *_tmp_method;
                  GC_GET(_tmp_method, _tmp_259, class);
                  GC_PROC_CALL(_tmp_method->methodTbl->testSetMode, GC_PASS(_tmp_259));
                }CHECK(0);
                GC_POP_ROOT(_tmp_259);
                GC_POP_ROOT(_tmp_251);
                GC_POP_ROOT(_tmp_252);
                goto __branch_1;
                GC_POP_ROOT(_tmp_259);
              }
            }
            i = i + 1;
__cond_17:;
            JBoolean _tmp_260;
            _tmp_260 = i < 24;
            if (_tmp_260) {
              goto __loop_17;
            }
          }
        }
      }
      GC_POP_ROOT(_tmp_252);
      GC_POP_ROOT(_tmp_251);
    }
__cond_16:;
__branch_1:;
    JBoolean _tmp_261;
    JBoolean _tmp_262;
    {
      struct java_lang_Thread_ClassStruct *_tmp_method;
      GC_GET(_tmp_method, this, class);
      GC_VAR_FUNC_CALL(_tmp_262, _tmp_method->methodTbl->isInterrupted, GC_PASS(this));
    }CHECK(0);
    _tmp_261 = !_tmp_262;
    if (_tmp_261) {
      goto __loop_16;
    }
  }
  GC_POP_ROOT(jpeg);
  GC_POP_ROOT(cam);
}
__branch_2:;
  GC_FUNC_LEAVE;
GC_PROC_END(CamToMonitor_t_run)


GC_PROC_BEGIN(java_lang_Thread_initializer,GC_PARAM(java_lang_Thread,this))
  GC_PARAM_REF(java_lang_Thread,this);
  GC_FUNC_ENTER;
  GC_PROC_CALL(java_lang_Object_initializer,GC_PASS(this));
  GC_FUNC_LEAVE;
GC_PROC_END(java_lang_Thread_initializer)


/* constructor: Thread() */
GC_REF_FUNC_BEGIN(java_lang_Thread,
    java_lang_Thread_Thread,
    void* class,
    GC_PARAM(LayoutHead, layout))
  GC_PARAM_REF(LayoutHead, layout);
  GC_REF(java_lang_Thread,this);
  GC_PUSH_PARAM(layout);
  GC_FUNC_ENTER;
  GC_PUSH_ROOT(this);
  {
    GC_NEW(this,layout);
    GC_SET(this,class,class);
    GC_PROC_CALL(java_lang_Thread_initializer,GC_PASS(this));
    GC_PROC_CALL(java_lang_Thread_Thread_init, GC_PASS(this));
    GC_ASSIGN(gc_result, this);
  }
  GC_POP_ROOT(this);
  GC_FUNC_LEAVE;
  GC_POP_PARAM(layout);
GC_REF_FUNC_END(java_lang_Thread, java_lang_Thread_Thread)


/* init func: Thread() */
GC_PROC_BEGIN(
    java_lang_Thread_Thread_init,
    GC_PARAM(java_lang_Thread,this))
  GC_PARAM_REF(java_lang_Thread,this);
  GC_PUSH_PARAM(this);
  GC_FUNC_ENTER;
  {
    GC_PROC_CALL(java_lang_Object_Object_init, GC_PASS(this));CHECK(0);
    {
      JLong auxLong;
      JInt auxInt;
      if (false)
      {
        GC_REF(java_lang_InterruptedException,e);
        GC_PUSH_ROOT(e);
        GC_REF_FUNC_CALL(e, java_lang_InterruptedException_InterruptedException, &java_lang_InterruptedException_Class, GC_PASS(java_lang_InterruptedException_Layout));CHECK(0);
        GC_POP_ROOT(e);
      }
      GC_SET(this, _java_lang_Object_interruptedFlag, false);
      {
        struct java_lang_Thread_ClassStruct *_tmp_method;
        GC_GET(_tmp_method, this, class);
        GC_VAR_FUNC_CALL(auxLong, _tmp_method->methodTbl->createThread, GC_PASS(this));
      }CHECK(0);
      GC_SET(this, _java_lang_Thread_target, auxLong);
      GC_SET_REF(this, _java_lang_Thread_targetRun, this);
      {
        struct java_lang_Thread_ClassStruct *_tmp_method;
        GC_GET(_tmp_method, this, class);
        GC_PROC_CALL(_tmp_method->methodTbl->inheritPriority, GC_PASS(this));
      }CHECK(0);
    }
  }
  __branch_1:;
  GC_FUNC_LEAVE;
  GC_POP_PARAM(this);
GC_PROC_END(java_lang_Thread_Thread_init)


/* method: Thread.run() */
GC_PROC_BEGIN(
    java_lang_Thread_run,
    GC_PARAM(java_lang_Thread,this))
  GC_PARAM_REF(java_lang_Thread,this);
  GC_PUSH_PARAM(this);
  GC_FUNC_ENTER;
{
}
__branch_1:;
  GC_FUNC_LEAVE;
GC_PROC_END(java_lang_Thread_run)


/* method: Thread.isInterrupted() */
GC_VAR_FUNC_BEGIN(JBoolean,
    java_lang_Thread_isInterrupted,
    GC_PARAM(java_lang_Thread,this))
  GC_PARAM_REF(java_lang_Thread,this);
  GC_PUSH_PARAM(this);
  JBoolean __result;
  GC_FUNC_ENTER;
{
  JBoolean tmp;
  GC_GET(tmp, this, _java_lang_Object_interruptedFlag);
  __result = tmp;
  goto __branch_1;
}
__branch_1:;
  gc_result = __result;
  GC_FUNC_LEAVE;
GC_VAR_FUNC_END(JBoolean, java_lang_Thread_isInterrupted)


GC_PROC_BEGIN(FromClient_t_initializer,GC_PARAM(FromClient_t,this))
  GC_PARAM_REF(FromClient_t,this);
  GC_FUNC_ENTER;
  GC_PROC_CALL(java_lang_Thread_initializer,GC_PASS(this));
  GC_FUNC_LEAVE;
GC_PROC_END(FromClient_t_initializer)


/* constructor: FromClient_t(Monitor mon, int port) */
GC_REF_FUNC_BEGIN(FromClient_t,
    FromClient_t_FromClient_t_Monitor_int,
    void* class,
    GC_PARAM(LayoutHead, layout),
    GC_PARAM(Monitor,mon),
    JInt port)
  GC_PARAM_REF(LayoutHead, layout);
  GC_PARAM_REF(Monitor, mon);
  GC_REF(FromClient_t,this);
  GC_PUSH_PARAM(layout);
  GC_FUNC_ENTER;
  GC_PUSH_ROOT(this);
  {
    GC_NEW(this,layout);
    GC_SET(this,class,class);
    GC_PROC_CALL(FromClient_t_initializer,GC_PASS(this));
    GC_PROC_CALL(FromClient_t_FromClient_t_Monitor_int_init, GC_PASS(this), GC_PASS(mon), port);
    GC_ASSIGN(gc_result, this);
  }
  GC_POP_ROOT(this);
  GC_FUNC_LEAVE;
  GC_POP_PARAM(layout);
GC_REF_FUNC_END(FromClient_t, FromClient_t_FromClient_t_Monitor_int)


/* init func: FromClient_t(Monitor mon, int port) */
GC_PROC_BEGIN(
    FromClient_t_FromClient_t_Monitor_int_init,
    GC_PARAM(FromClient_t,this),
    GC_PARAM(Monitor,mon),
    JInt port)
  GC_PARAM_REF(FromClient_t,this);
  GC_PARAM_REF(Monitor, mon);
  GC_PUSH_PARAM(this);
  GC_FUNC_ENTER;
  {
    GC_PROC_CALL(java_lang_Thread_Thread_init, GC_PASS(this));CHECK(0);
    {
      GC_SET_REF(this, _FromClient_t_mon, mon);
      GC_SET(this, _FromClient_t_port, port);
    }
  }
  __branch_1:;
  GC_FUNC_LEAVE;
  GC_POP_PARAM(this);
GC_PROC_END(FromClient_t_FromClient_t_Monitor_int_init)


/* method: FromClient_t.run() */
GC_PROC_BEGIN(
    FromClient_t_run,
    GC_PARAM(FromClient_t,this))
  GC_PARAM_REF(FromClient_t,this);
  GC_PUSH_PARAM(this);
  GC_FUNC_ENTER;
{
  VOLATILE GC_REF(java_net_ServerSocket,serverSocket);
  GC_PUSH_ROOT(serverSocket);
  EXCEPTION_TRY
  {
    JInt _tmp_263;
    GC_GET(_tmp_263, this, _FromClient_t_port);
    GC_REF_FUNC_CALL(serverSocket, java_net_ServerSocket_ServerSocket_int, &java_net_ServerSocket_Class, GC_PASS(java_net_ServerSocket_Layout), _tmp_263);CHECK(1);
    {
      goto __cond_18;
__loop_18:;
      {
        GC_REF(java_net_Socket,clientSocket);
        GC_REF(java_io_InputStream,is);
        GC_REF(java_io_OutputStream,os);
        GC_REF(java_lang_Thread,toClient);
        GC_PUSH_ROOT(clientSocket);
        {
          struct java_net_ServerSocket_ClassStruct *_tmp_method;
          GC_GET(_tmp_method, serverSocket, class);
          GC_REF_FUNC_CALL(clientSocket, _tmp_method->methodTbl->accept, GC_PASS(serverSocket));
        }CHECK(1);
        GC_PUSH_ROOT(is);
        {
          struct java_net_Socket_ClassStruct *_tmp_method;
          GC_GET(_tmp_method, clientSocket, class);
          GC_REF_FUNC_CALL(is, _tmp_method->methodTbl->getInputStream, GC_PASS(clientSocket));
        }CHECK(1);
        GC_PUSH_ROOT(os);
        {
          struct java_net_Socket_ClassStruct *_tmp_method;
          GC_GET(_tmp_method, clientSocket, class);
          GC_REF_FUNC_CALL(os, _tmp_method->methodTbl->getOutputStream, GC_PASS(clientSocket));
        }CHECK(1);
        GC_PUSH_ROOT(toClient);
        GC_REF(Monitor,_tmp_264);
        GC_PUSH_ROOT(_tmp_264);
        GC_GET_REF(_tmp_264, this, _FromClient_t_mon);
        GC_REF_FUNC_CALL(toClient, ToClient_t_ToClient_t_Monitor_java_io_OutputStream, &ToClient_t_Class, GC_PASS(ToClient_t_Layout), GC_PASS(_tmp_264), GC_PASS(os));CHECK(1);
        {
          struct java_lang_Thread_ClassStruct *_tmp_method;
          GC_GET(_tmp_method, toClient, class);
          GC_PROC_CALL(_tmp_method->methodTbl->start, GC_PASS(toClient));
        }CHECK(1);
        {
          goto __cond_19;
__loop_19:;
          {
            EXCEPTION_TRY
            {
              JByte i;
              JInt _tmp_265;
              {
                struct java_io_InputStream_ClassStruct *_tmp_method;
                GC_GET(_tmp_method, is, class);
                GC_VAR_FUNC_CALL(_tmp_265, _tmp_method->methodTbl->read, GC_PASS(is));
              }CHECK(2);
              i = (JByte) (_tmp_265);              GC_REF(java_lang_PhonyWriter,_tmp_266);
              GC_PUSH_ROOT(_tmp_266);
              GC_GET_REF(_tmp_266, java_lang_System_Static, _java_lang_System_out);
              GC_REF(java_lang_String,_tmp_267);
              GC_PUSH_ROOT(_tmp_267);
              GC_REF(java_lang_StringBuffer,_tmp_268);
              GC_PUSH_ROOT(_tmp_268);
              GC_REF_FUNC_CALL(_tmp_268, java_lang_StringBuffer_StringBuffer, &java_lang_StringBuffer_Class, GC_PASS(java_lang_StringBuffer_Layout));
              GC_REF(java_lang_String,_tmp_269);
              GC_PUSH_ROOT(_tmp_269);
              GC_REF_FUNC_CALL(_tmp_269, java_lang_String_String_CCharArray, &java_lang_String_Class, GC_PASS(java_lang_String_Layout), "Recieved from client: ");
              GC_REF_FUNC_CALL(_tmp_268, java_lang_StringBuffer_append_java_lang_Object, GC_PASS(_tmp_268), GC_PASS(_tmp_269));
              GC_REF_FUNC_CALL(_tmp_268, java_lang_StringBuffer_append_int, GC_PASS(_tmp_268), i);
              GC_REF_FUNC_CALL(_tmp_267, java_lang_StringBuffer_toString, GC_PASS(_tmp_268));
              {
                struct java_lang_PhonyWriter_ClassStruct *_tmp_method;
                GC_GET(_tmp_method, _tmp_266, class);
                GC_PROC_CALL(_tmp_method->methodTbl->println_java_lang_String, GC_PASS(_tmp_266), GC_PASS(_tmp_267));
              }CHECK(2);
              GC_REF(Monitor,_tmp_270);
              GC_PUSH_ROOT(_tmp_270);
              GC_GET_REF(_tmp_270, this, _FromClient_t_mon);
              {
                struct Monitor_ClassStruct *_tmp_method;
                GC_GET(_tmp_method, _tmp_270, class);
                GC_PROC_CALL(_tmp_method->methodTbl->setMode_byte, GC_PASS(_tmp_270), i);
              }CHECK(2);
              GC_POP_ROOT(_tmp_270);
              GC_POP_ROOT(_tmp_269);
              GC_POP_ROOT(_tmp_268);
              GC_POP_ROOT(_tmp_267);
              GC_POP_ROOT(_tmp_266);
            }
            EXCEPTION_CATCH(2,&java_io_IOException_Class)
__branch_3:;
              GC_REF(java_io_IOException,e);
              GC_PUSH_ROOT(e);
              EXCEPTION_GET_OBJ(e);
              {
                GC_POP_ROOT(e);
                GC_POP_ROOT(clientSocket);
                GC_POP_ROOT(is);
                GC_POP_ROOT(os);
                GC_POP_ROOT(toClient);
                GC_POP_ROOT(_tmp_264);
                goto __branch_1;
              }
              GC_POP_ROOT(e);
            EXCEPTION_FINALLY
            EXCEPTION_END(1)
          }
__cond_19:;
__branch_2:;
          JBoolean _tmp_271;
          JBoolean _tmp_272;
          {
            struct java_lang_Thread_ClassStruct *_tmp_method;
            GC_GET(_tmp_method, this, class);
            GC_VAR_FUNC_CALL(_tmp_272, _tmp_method->methodTbl->isInterrupted, GC_PASS(this));
          }CHECK(1);
          _tmp_271 = !_tmp_272;
          if (_tmp_271) {
            goto __loop_19;
          }
        }
        GC_POP_ROOT(_tmp_264);
        GC_POP_ROOT(toClient);
        GC_POP_ROOT(os);
        GC_POP_ROOT(is);
        GC_POP_ROOT(clientSocket);
      }
__cond_18:;
__branch_1:;
      JBoolean _tmp_273;
      JBoolean _tmp_274;
      {
        struct java_lang_Thread_ClassStruct *_tmp_method;
        GC_GET(_tmp_method, this, class);
        GC_VAR_FUNC_CALL(_tmp_274, _tmp_method->methodTbl->isInterrupted, GC_PASS(this));
      }CHECK(1);
      _tmp_273 = !_tmp_274;
      if (_tmp_273) {
        goto __loop_18;
      }
    }
  }
  EXCEPTION_CATCH(1,&java_io_IOException_Class)
__branch_4:;
    GC_REF(java_io_IOException,e);
    GC_PUSH_ROOT(e);
    EXCEPTION_GET_OBJ(e);
    {
    }
    GC_POP_ROOT(e);
  EXCEPTION_FINALLY
  EXCEPTION_END(0)
  GC_POP_ROOT(serverSocket);
}
__branch_5:;
  GC_FUNC_LEAVE;
GC_PROC_END(FromClient_t_run)


GC_PROC_BEGIN(java_io_IOException_initializer,GC_PARAM(java_io_IOException,this))
  GC_PARAM_REF(java_io_IOException,this);
  GC_FUNC_ENTER;
  GC_PROC_CALL(java_lang_Exception_initializer,GC_PASS(this));
  GC_FUNC_LEAVE;
GC_PROC_END(java_io_IOException_initializer)


/* constructor: IOException() */
GC_REF_FUNC_BEGIN(java_io_IOException,
    java_io_IOException_IOException,
    void* class,
    GC_PARAM(LayoutHead, layout))
  GC_PARAM_REF(LayoutHead, layout);
  GC_REF(java_io_IOException,this);
  GC_PUSH_PARAM(layout);
  GC_FUNC_ENTER;
  GC_PUSH_ROOT(this);
  {
    GC_NEW(this,layout);
    GC_SET(this,class,class);
    GC_PROC_CALL(java_io_IOException_initializer,GC_PASS(this));
    GC_PROC_CALL(java_io_IOException_IOException_init, GC_PASS(this));
    GC_ASSIGN(gc_result, this);
  }
  GC_POP_ROOT(this);
  GC_FUNC_LEAVE;
  GC_POP_PARAM(layout);
GC_REF_FUNC_END(java_io_IOException, java_io_IOException_IOException)


/* init func: IOException() */
GC_PROC_BEGIN(
    java_io_IOException_IOException_init,
    GC_PARAM(java_io_IOException,this))
  GC_PARAM_REF(java_io_IOException,this);
  GC_PUSH_PARAM(this);
  GC_FUNC_ENTER;
  {
    GC_PROC_CALL(java_lang_Exception_Exception_init, GC_PASS(this));CHECK(0);
    {
    }
  }
  __branch_1:;
  GC_FUNC_LEAVE;
  GC_POP_PARAM(this);
GC_PROC_END(java_io_IOException_IOException_init)


/* constructor: IOException(String message) */
GC_REF_FUNC_BEGIN(java_io_IOException,
    java_io_IOException_IOException_java_lang_String,
    void* class,
    GC_PARAM(LayoutHead, layout),
    GC_PARAM(java_lang_String,message))
  GC_PARAM_REF(LayoutHead, layout);
  GC_PARAM_REF(java_lang_String, message);
  GC_REF(java_io_IOException,this);
  GC_PUSH_PARAM(layout);
  GC_FUNC_ENTER;
  GC_PUSH_ROOT(this);
  {
    GC_NEW(this,layout);
    GC_SET(this,class,class);
    GC_PROC_CALL(java_io_IOException_initializer,GC_PASS(this));
    GC_PROC_CALL(java_io_IOException_IOException_java_lang_String_init, GC_PASS(this), GC_PASS(message));
    GC_ASSIGN(gc_result, this);
  }
  GC_POP_ROOT(this);
  GC_FUNC_LEAVE;
  GC_POP_PARAM(layout);
GC_REF_FUNC_END(java_io_IOException, java_io_IOException_IOException_java_lang_String)


/* init func: IOException(String message) */
GC_PROC_BEGIN(
    java_io_IOException_IOException_java_lang_String_init,
    GC_PARAM(java_io_IOException,this),
    GC_PARAM(java_lang_String,message))
  GC_PARAM_REF(java_io_IOException,this);
  GC_PARAM_REF(java_lang_String, message);
  GC_PUSH_PARAM(this);
  GC_FUNC_ENTER;
  {
    GC_PROC_CALL(java_lang_Exception_Exception_java_lang_String_init, GC_PASS(this),GC_PASS(message));CHECK(0);
    {
    }
  }
  __branch_1:;
  GC_FUNC_LEAVE;
  GC_POP_PARAM(this);
GC_PROC_END(java_io_IOException_IOException_java_lang_String_init)


GC_PROC_BEGIN(java_io_InputStream_initializer,GC_PARAM(java_io_InputStream,this))
  GC_PARAM_REF(java_io_InputStream,this);
  GC_FUNC_ENTER;
  GC_PROC_CALL(java_lang_Object_initializer,GC_PASS(this));
  GC_FUNC_LEAVE;
GC_PROC_END(java_io_InputStream_initializer)


/* constructor: InputStream() */
GC_REF_FUNC_BEGIN(java_io_InputStream,
    java_io_InputStream_InputStream,
    void* class,
    GC_PARAM(LayoutHead, layout))
  GC_PARAM_REF(LayoutHead, layout);
  GC_REF(java_io_InputStream,this);
  GC_PUSH_PARAM(layout);
  GC_FUNC_ENTER;
  GC_PUSH_ROOT(this);
  {
    GC_NEW(this,layout);
    GC_SET(this,class,class);
    GC_PROC_CALL(java_io_InputStream_initializer,GC_PASS(this));
    GC_PROC_CALL(java_io_InputStream_InputStream_init, GC_PASS(this));
    GC_ASSIGN(gc_result, this);
  }
  GC_POP_ROOT(this);
  GC_FUNC_LEAVE;
  GC_POP_PARAM(layout);
GC_REF_FUNC_END(java_io_InputStream, java_io_InputStream_InputStream)


/* init func: InputStream() */
GC_PROC_BEGIN(
    java_io_InputStream_InputStream_init,
    GC_PARAM(java_io_InputStream,this))
  GC_PARAM_REF(java_io_InputStream,this);
  GC_PUSH_PARAM(this);
  GC_FUNC_ENTER;
  {
    GC_PROC_CALL(java_lang_Object_Object_init, GC_PASS(this));CHECK(0);
    {
    }
  }
  __branch_1:;
  GC_FUNC_LEAVE;
  GC_POP_PARAM(this);
GC_PROC_END(java_io_InputStream_InputStream_init)


/* method: InputStream.read(byte[], int, int) */
GC_VAR_FUNC_BEGIN(JInt,
    java_io_InputStream_read_byteA_int_int,
    GC_PARAM(java_io_InputStream,this),
    GC_PARAM(JByteArray,b),
    JInt off,
    JInt len)
  EXCEPTION_THROWS
  GC_PARAM_REF(java_io_InputStream,this);
  GC_PARAM_REF(JByteArray, b);
  GC_PUSH_PARAM(this);
  JInt __result;
  GC_FUNC_ENTER;
{
  JInt i;
  JInt ch;
  JBoolean _tmp_275;
  JBoolean _tmp_276;
  if (off < 0) {
    _tmp_276 = true;
  } else {
    if (len < 0) {
      _tmp_276 = true;
    } else {
      _tmp_276 = false;
    }
  }
  if (_tmp_276) {
    _tmp_275 = true;
  } else {
    JInt _tmp_277;
    GC_GET(_tmp_277, b, _JByteA_length);
    if (off + len > _tmp_277) {
      _tmp_275 = true;
    } else {
      _tmp_275 = false;
    }
  }
  if (_tmp_275)
  {
    GC_REF(java_lang_IndexOutOfBoundsException,_tmp_278);
    GC_PUSH_ROOT(_tmp_278);
    GC_REF_FUNC_CALL(_tmp_278, java_lang_IndexOutOfBoundsException_IndexOutOfBoundsException, &java_lang_IndexOutOfBoundsException_Class, GC_PASS(java_lang_IndexOutOfBoundsException_Layout));CHECK(0);
    EXCEPTION_STORE_OBJ(_tmp_278);
    GC_POP_ROOT(_tmp_278);
    EXCEPTION_THROW(0,&java_lang_IndexOutOfBoundsException_Class)
    GC_POP_ROOT(_tmp_278);
  }
  JInt _tmp_279;
  GC_GET(_tmp_279, b, _JByteA_length);
  if (_tmp_279 == 0)
  {
    __result = 0;
    goto __branch_2;
  }
  {
    i = 0;
    {
      goto __cond_20;
__loop_20:;
      EXCEPTION_TRY
      {
        {
          struct java_io_InputStream_ClassStruct *_tmp_method;
          GC_GET(_tmp_method, this, class);
          GC_VAR_FUNC_CALL(ch, _tmp_method->methodTbl->read, GC_PASS(this));
        }CHECK(1);
        if ((ch) < 0)
        {
          JInt _tmp_280;
          if (i == 0) {
            _tmp_280 = -1;
          } else {
            _tmp_280 = i;
          }
          __result = _tmp_280;
          goto __branch_2;
        }
        JByte _tmp_281;
        _tmp_281 = (JByte) (ch);        GC_SET_VAR_ARRAY(b, off + i, _tmp_281);
      }
      EXCEPTION_CATCH(1,&java_io_IOException_Class)
        GC_REF(java_io_IOException,ex);
        GC_PUSH_ROOT(ex);
        EXCEPTION_GET_OBJ(ex);
        {
          if (i == 0)
          {
            EXCEPTION_STORE_OBJ(ex);
            GC_POP_ROOT(ex);
            EXCEPTION_THROW(0,&java_io_IOException_Class)
          }
          __result = i;
          GC_POP_ROOT(ex);
          goto __branch_2;
        }
        GC_POP_ROOT(ex);
      EXCEPTION_FINALLY
      EXCEPTION_END(0)
__branch_1:;
      i = i + 1;
__cond_20:;
      JBoolean _tmp_282;
      _tmp_282 = i < len;
      if (_tmp_282) {
        goto __loop_20;
      }
    }
  }
  __result = i;
  goto __branch_2;
}
__branch_2:;
  gc_result = __result;
  GC_FUNC_LEAVE;
GC_VAR_FUNC_END(JInt, java_io_InputStream_read_byteA_int_int)


GC_PROC_BEGIN(java_net_ServerSocket_initializer,GC_PARAM(java_net_ServerSocket,this))
  GC_PARAM_REF(java_net_ServerSocket,this);
  GC_FUNC_ENTER;
  GC_PROC_CALL(java_lang_Object_initializer,GC_PASS(this));
  GC_FUNC_LEAVE;
GC_PROC_END(java_net_ServerSocket_initializer)


/* constructor: ServerSocket(int port) */
GC_REF_FUNC_BEGIN(java_net_ServerSocket,
    java_net_ServerSocket_ServerSocket_int,
    void* class,
    GC_PARAM(LayoutHead, layout),
    JInt port)
  GC_PARAM_REF(LayoutHead, layout);
  GC_REF(java_net_ServerSocket,this);
  GC_PUSH_PARAM(layout);
  GC_FUNC_ENTER;
  GC_PUSH_ROOT(this);
  {
    GC_NEW(this,layout);
    GC_SET(this,class,class);
    GC_PROC_CALL(java_net_ServerSocket_initializer,GC_PASS(this));
    GC_PROC_CALL(java_net_ServerSocket_ServerSocket_int_init, GC_PASS(this), port);
    GC_ASSIGN(gc_result, this);
  }
  GC_POP_ROOT(this);
  GC_FUNC_LEAVE;
  GC_POP_PARAM(layout);
GC_REF_FUNC_END(java_net_ServerSocket, java_net_ServerSocket_ServerSocket_int)


/* init func: ServerSocket(int port) */
GC_PROC_BEGIN(
    java_net_ServerSocket_ServerSocket_int_init,
    GC_PARAM(java_net_ServerSocket,this),
    JInt port)
  EXCEPTION_THROWS
  GC_PARAM_REF(java_net_ServerSocket,this);
  GC_PUSH_PARAM(this);
  GC_FUNC_ENTER;
  {
    GC_PROC_CALL(java_lang_Object_Object_init, GC_PASS(this));CHECK(0);
    {
      JInt _tmp_283;
      GC_VAR_FUNC_CALL(_tmp_283, java_net_ServerSocket_createServerSocket_int, port);CHECK(0);
      GC_SET(this, _java_net_ServerSocket_myfd, _tmp_283);
    }
  }
  __branch_1:;
  GC_FUNC_LEAVE;
  GC_POP_PARAM(this);
GC_PROC_END(java_net_ServerSocket_ServerSocket_int_init)


/* method: ServerSocket.bind(java.net.SocketAddress, int) */
GC_PROC_BEGIN(
    java_net_ServerSocket_bind_java_net_SocketAddress_int,
    GC_PARAM(java_net_ServerSocket,this),
    GC_PARAM(java_net_SocketAddress,endpoint),
    JInt backlog)
  EXCEPTION_THROWS
  GC_PARAM_REF(java_net_ServerSocket,this);
  GC_PARAM_REF(java_net_SocketAddress, endpoint);
  GC_PUSH_PARAM(this);
  GC_FUNC_ENTER;
{
  GC_REF(java_lang_PhonyWriter,_tmp_284);
  GC_PUSH_ROOT(_tmp_284);
  GC_GET_REF(_tmp_284, java_lang_System_Static, _java_lang_System_out);
  GC_REF(java_lang_String,_tmp_285);
  GC_PUSH_ROOT(_tmp_285);
  GC_REF_FUNC_CALL(_tmp_285, java_lang_String_String_CCharArray, &java_lang_String_Class, GC_PASS(java_lang_String_Layout), "ServerSocket.bind() not implemented");
  {
    struct java_lang_PhonyWriter_ClassStruct *_tmp_method;
    GC_GET(_tmp_method, _tmp_284, class);
    GC_PROC_CALL(_tmp_method->methodTbl->println_java_lang_String, GC_PASS(_tmp_284), GC_PASS(_tmp_285));
  }CHECK(0);
  GC_POP_ROOT(_tmp_285);
  GC_POP_ROOT(_tmp_284);
}
__branch_1:;
  GC_FUNC_LEAVE;
GC_PROC_END(java_net_ServerSocket_bind_java_net_SocketAddress_int)


/* method: ServerSocket.accept() */
GC_REF_FUNC_BEGIN(java_net_Socket,
    java_net_ServerSocket_accept,
    GC_PARAM(java_net_ServerSocket,this))
  EXCEPTION_THROWS
  GC_PARAM_REF(java_net_ServerSocket,this);
  GC_PUSH_PARAM(this);
  GC_REF(java_net_Socket, __result);
  GC_PUSH_ROOT(__result);
  GC_FUNC_ENTER;
{
  GC_REF(java_net_Socket,socket);
  GC_PUSH_ROOT(socket);
  GC_REF_FUNC_CALL(socket, java_net_Socket_Socket, &java_net_Socket_Class, GC_PASS(java_net_Socket_Layout));CHECK(0);
  if (false)
  {
    GC_REF(java_io_IOException,e);
    GC_PUSH_ROOT(e);
    GC_REF_FUNC_CALL(e, java_io_IOException_IOException, &java_io_IOException_Class, GC_PASS(java_io_IOException_Layout));CHECK(0);
    GC_POP_ROOT(e);
  }
  EXCEPTION_TRY
  {
    JInt trafficfd;
    JInt _tmp_286;
    GC_GET(_tmp_286, this, _java_net_ServerSocket_myfd);
    GC_VAR_FUNC_CALL(trafficfd, java_net_ServerSocket_accept_int, _tmp_286);CHECK(1);
    {
      struct java_net_Socket_ClassStruct *_tmp_method;
      GC_GET(_tmp_method, socket, class);
      GC_PROC_CALL(_tmp_method->methodTbl->setFd_int, GC_PASS(socket), trafficfd);
    }CHECK(1);
  }
  EXCEPTION_CATCH(1,&java_io_IOException_Class)
__branch_1:;
    GC_REF(java_io_IOException,e);
    GC_PUSH_ROOT(e);
    EXCEPTION_GET_OBJ(e);
    {
      {
        struct java_net_Socket_ClassStruct *_tmp_method;
        GC_GET(_tmp_method, socket, class);
        GC_PROC_CALL(_tmp_method->methodTbl->close, GC_PASS(socket));
      }CHECK(0);
      EXCEPTION_STORE_OBJ(e);
      GC_POP_ROOT(e);
      GC_POP_ROOT(socket);
      EXCEPTION_THROW(0,&java_io_IOException_Class)
    }
    GC_POP_ROOT(e);
  EXCEPTION_FINALLY
  EXCEPTION_END(0)
__branch_2:;
GC_ASSIGN(__result, socket);
  GC_POP_ROOT(socket);
  goto __branch_3;
}
__branch_3:;
  GC_ASSIGN(gc_result, __result);
  GC_POP_ROOT(__result);
  GC_FUNC_LEAVE;
GC_REF_FUNC_END(java_net_Socket, java_net_ServerSocket_accept)


/* method: ServerSocket.toString() */
GC_REF_FUNC_BEGIN(java_lang_String,
    java_net_ServerSocket_toString,
    GC_PARAM(java_net_ServerSocket,this))
  GC_PARAM_REF(java_net_ServerSocket,this);
  GC_PUSH_PARAM(this);
  GC_REF(java_lang_String, __result);
  GC_PUSH_ROOT(__result);
  GC_FUNC_ENTER;
{
  GC_REF(java_lang_String,_tmp_287);
  GC_PUSH_ROOT(_tmp_287);
  GC_REF_FUNC_CALL(_tmp_287, java_lang_String_String_CCharArray, &java_lang_String_Class, GC_PASS(java_lang_String_Layout), "ServerSocket[toString todo]");
GC_ASSIGN(__result, _tmp_287);
  GC_POP_ROOT(_tmp_287);
  goto __branch_1;
}
__branch_1:;
  GC_ASSIGN(gc_result, __result);
  GC_POP_ROOT(__result);
  GC_FUNC_LEAVE;
GC_REF_FUNC_END(java_lang_String, java_net_ServerSocket_toString)


GC_PROC_BEGIN(java_net_Socket_initializer,GC_PARAM(java_net_Socket,this))
  GC_PARAM_REF(java_net_Socket,this);
  GC_FUNC_ENTER;
  GC_PROC_CALL(java_lang_Object_initializer,GC_PASS(this));
  GC_FUNC_LEAVE;
GC_PROC_END(java_net_Socket_initializer)


/* method: Socket.setFd(int) */
GC_PROC_BEGIN(
    java_net_Socket_setFd_int,
    GC_PARAM(java_net_Socket,this),
    JInt fd)
  GC_PARAM_REF(java_net_Socket,this);
  GC_PUSH_PARAM(this);
  GC_FUNC_ENTER;
{
  GC_SET(this, _java_net_Socket_myfd, fd);
}
__branch_1:;
  GC_FUNC_LEAVE;
GC_PROC_END(java_net_Socket_setFd_int)


/* constructor: Socket() */
GC_REF_FUNC_BEGIN(java_net_Socket,
    java_net_Socket_Socket,
    void* class,
    GC_PARAM(LayoutHead, layout))
  GC_PARAM_REF(LayoutHead, layout);
  GC_REF(java_net_Socket,this);
  GC_PUSH_PARAM(layout);
  GC_FUNC_ENTER;
  GC_PUSH_ROOT(this);
  {
    GC_NEW(this,layout);
    GC_SET(this,class,class);
    GC_PROC_CALL(java_net_Socket_initializer,GC_PASS(this));
    GC_PROC_CALL(java_net_Socket_Socket_init, GC_PASS(this));
    GC_ASSIGN(gc_result, this);
  }
  GC_POP_ROOT(this);
  GC_FUNC_LEAVE;
  GC_POP_PARAM(layout);
GC_REF_FUNC_END(java_net_Socket, java_net_Socket_Socket)


/* init func: Socket() */
GC_PROC_BEGIN(
    java_net_Socket_Socket_init,
    GC_PARAM(java_net_Socket,this))
  GC_PARAM_REF(java_net_Socket,this);
  GC_PUSH_PARAM(this);
  GC_FUNC_ENTER;
  {
    GC_PROC_CALL(java_lang_Object_Object_init, GC_PASS(this));CHECK(0);
    {
      JInt _tmp_288;
      GC_VAR_FUNC_CALL(_tmp_288, java_net_Socket_createSocket);CHECK(0);
      GC_SET(this, _java_net_Socket_myfd, _tmp_288);
    }
  }
  __branch_1:;
  GC_FUNC_LEAVE;
  GC_POP_PARAM(this);
GC_PROC_END(java_net_Socket_Socket_init)


/* method: Socket.connect(java.net.SocketAddress) */
GC_PROC_BEGIN(
    java_net_Socket_connect_java_net_SocketAddress,
    GC_PARAM(java_net_Socket,this),
    GC_PARAM(java_net_SocketAddress,endpoint))
  EXCEPTION_THROWS
  GC_PARAM_REF(java_net_Socket,this);
  GC_PARAM_REF(java_net_SocketAddress, endpoint);
  GC_PUSH_PARAM(this);
  GC_FUNC_ENTER;
{
  {
    struct java_net_Socket_ClassStruct *_tmp_method;
    GC_GET(_tmp_method, this, class);
    GC_PROC_CALL(_tmp_method->methodTbl->connect_java_net_SocketAddress_int, GC_PASS(this), GC_PASS(endpoint), 0);
  }CHECK(0);
}
__branch_1:;
  GC_FUNC_LEAVE;
GC_PROC_END(java_net_Socket_connect_java_net_SocketAddress)


/* method: Socket.connect(java.net.SocketAddress, int) */
GC_PROC_BEGIN(
    java_net_Socket_connect_java_net_SocketAddress_int,
    GC_PARAM(java_net_Socket,this),
    GC_PARAM(java_net_SocketAddress,endpoint),
    JInt timeout)
  EXCEPTION_THROWS
  GC_PARAM_REF(java_net_Socket,this);
  GC_PARAM_REF(java_net_SocketAddress, endpoint);
  GC_PUSH_PARAM(this);
  GC_FUNC_ENTER;
{
  EXCEPTION_TRY
  {
    GC_REF(JByteArray,a);
    JInt port;
    JInt adr;
    GC_PUSH_ROOT(a);
    GC_REF(java_net_InetAddress,_tmp_289);
    GC_PUSH_ROOT(_tmp_289);
    GC_REF(java_net_InetSocketAddress,_tmp_290);
    GC_PUSH_ROOT(_tmp_290);
    GC_ASSIGN(_tmp_290, endpoint);
    {
      struct java_net_InetSocketAddress_ClassStruct *_tmp_method;
      GC_GET(_tmp_method, _tmp_290, class);
      GC_REF_FUNC_CALL(_tmp_289, _tmp_method->methodTbl->getAddress, GC_PASS(_tmp_290));
    }CHECK(1);
    {
      struct java_net_InetAddress_ClassStruct *_tmp_method;
      GC_GET(_tmp_method, _tmp_289, class);
      GC_REF_FUNC_CALL(a, _tmp_method->methodTbl->getAddress, GC_PASS(_tmp_289));
    }CHECK(1);
    GC_REF(java_net_InetSocketAddress,_tmp_291);
    GC_PUSH_ROOT(_tmp_291);
    GC_ASSIGN(_tmp_291, endpoint);
    {
      struct java_net_InetSocketAddress_ClassStruct *_tmp_method;
      GC_GET(_tmp_method, _tmp_291, class);
      GC_VAR_FUNC_CALL(port, _tmp_method->methodTbl->getPort, GC_PASS(_tmp_291));
    }CHECK(1);
    GC_REF(java_lang_PhonyWriter,_tmp_292);
    GC_PUSH_ROOT(_tmp_292);
    GC_GET_REF(_tmp_292, java_lang_System_Static, _java_lang_System_out);
    GC_REF(java_lang_String,_tmp_293);
    GC_PUSH_ROOT(_tmp_293);
    GC_REF(java_lang_StringBuffer,_tmp_294);
    GC_PUSH_ROOT(_tmp_294);
    GC_REF_FUNC_CALL(_tmp_294, java_lang_StringBuffer_StringBuffer, &java_lang_StringBuffer_Class, GC_PASS(java_lang_StringBuffer_Layout));
    GC_REF(java_lang_String,_tmp_295);
    GC_PUSH_ROOT(_tmp_295);
    GC_REF(java_lang_StringBuffer,_tmp_296);
    GC_PUSH_ROOT(_tmp_296);
    GC_REF_FUNC_CALL(_tmp_296, java_lang_StringBuffer_StringBuffer, &java_lang_StringBuffer_Class, GC_PASS(java_lang_StringBuffer_Layout));
    GC_REF(java_lang_String,_tmp_297);
    GC_PUSH_ROOT(_tmp_297);
    GC_REF(java_lang_StringBuffer,_tmp_298);
    GC_PUSH_ROOT(_tmp_298);
    GC_REF_FUNC_CALL(_tmp_298, java_lang_StringBuffer_StringBuffer, &java_lang_StringBuffer_Class, GC_PASS(java_lang_StringBuffer_Layout));
    GC_REF(java_lang_String,_tmp_299);
    GC_PUSH_ROOT(_tmp_299);
    GC_REF(java_lang_StringBuffer,_tmp_300);
    GC_PUSH_ROOT(_tmp_300);
    GC_REF_FUNC_CALL(_tmp_300, java_lang_StringBuffer_StringBuffer, &java_lang_StringBuffer_Class, GC_PASS(java_lang_StringBuffer_Layout));
    GC_REF(java_lang_String,_tmp_301);
    GC_PUSH_ROOT(_tmp_301);
    GC_REF(java_lang_StringBuffer,_tmp_302);
    GC_PUSH_ROOT(_tmp_302);
    GC_REF_FUNC_CALL(_tmp_302, java_lang_StringBuffer_StringBuffer, &java_lang_StringBuffer_Class, GC_PASS(java_lang_StringBuffer_Layout));
    GC_REF(java_lang_String,_tmp_303);
    GC_PUSH_ROOT(_tmp_303);
    GC_REF(java_lang_StringBuffer,_tmp_304);
    GC_PUSH_ROOT(_tmp_304);
    GC_REF_FUNC_CALL(_tmp_304, java_lang_StringBuffer_StringBuffer, &java_lang_StringBuffer_Class, GC_PASS(java_lang_StringBuffer_Layout));
    GC_REF(java_lang_String,_tmp_305);
    GC_PUSH_ROOT(_tmp_305);
    GC_REF(java_lang_StringBuffer,_tmp_306);
    GC_PUSH_ROOT(_tmp_306);
    GC_REF_FUNC_CALL(_tmp_306, java_lang_StringBuffer_StringBuffer, &java_lang_StringBuffer_Class, GC_PASS(java_lang_StringBuffer_Layout));
    GC_REF(java_lang_String,_tmp_307);
    GC_PUSH_ROOT(_tmp_307);
    GC_REF_FUNC_CALL(_tmp_307, java_lang_String_String_CCharArray, &java_lang_String_Class, GC_PASS(java_lang_String_Layout), "connect to:");
    GC_REF_FUNC_CALL(_tmp_306, java_lang_StringBuffer_append_java_lang_Object, GC_PASS(_tmp_306), GC_PASS(_tmp_307));
    JByte _tmp_308;
    GC_GET_VAR_ARRAY(_tmp_308, a, 0);
    GC_REF_FUNC_CALL(_tmp_306, java_lang_StringBuffer_append_int, GC_PASS(_tmp_306), _tmp_308);
    GC_REF_FUNC_CALL(_tmp_305, java_lang_StringBuffer_toString, GC_PASS(_tmp_306));
    GC_REF_FUNC_CALL(_tmp_304, java_lang_StringBuffer_append_java_lang_Object, GC_PASS(_tmp_304), GC_PASS(_tmp_305));
    GC_REF(java_lang_String,_tmp_309);
    GC_PUSH_ROOT(_tmp_309);
    GC_REF_FUNC_CALL(_tmp_309, java_lang_String_String_CCharArray, &java_lang_String_Class, GC_PASS(java_lang_String_Layout), ".");
    GC_REF_FUNC_CALL(_tmp_304, java_lang_StringBuffer_append_java_lang_Object, GC_PASS(_tmp_304), GC_PASS(_tmp_309));
    GC_REF_FUNC_CALL(_tmp_303, java_lang_StringBuffer_toString, GC_PASS(_tmp_304));
    GC_REF_FUNC_CALL(_tmp_302, java_lang_StringBuffer_append_java_lang_Object, GC_PASS(_tmp_302), GC_PASS(_tmp_303));
    JByte _tmp_310;
    GC_GET_VAR_ARRAY(_tmp_310, a, 1);
    GC_REF_FUNC_CALL(_tmp_302, java_lang_StringBuffer_append_int, GC_PASS(_tmp_302), _tmp_310);
    GC_REF_FUNC_CALL(_tmp_301, java_lang_StringBuffer_toString, GC_PASS(_tmp_302));
    GC_REF_FUNC_CALL(_tmp_300, java_lang_StringBuffer_append_java_lang_Object, GC_PASS(_tmp_300), GC_PASS(_tmp_301));
    GC_REF(java_lang_String,_tmp_311);
    GC_PUSH_ROOT(_tmp_311);
    GC_REF_FUNC_CALL(_tmp_311, java_lang_String_String_CCharArray, &java_lang_String_Class, GC_PASS(java_lang_String_Layout), ".");
    GC_REF_FUNC_CALL(_tmp_300, java_lang_StringBuffer_append_java_lang_Object, GC_PASS(_tmp_300), GC_PASS(_tmp_311));
    GC_REF_FUNC_CALL(_tmp_299, java_lang_StringBuffer_toString, GC_PASS(_tmp_300));
    GC_REF_FUNC_CALL(_tmp_298, java_lang_StringBuffer_append_java_lang_Object, GC_PASS(_tmp_298), GC_PASS(_tmp_299));
    JByte _tmp_312;
    GC_GET_VAR_ARRAY(_tmp_312, a, 2);
    GC_REF_FUNC_CALL(_tmp_298, java_lang_StringBuffer_append_int, GC_PASS(_tmp_298), _tmp_312);
    GC_REF_FUNC_CALL(_tmp_297, java_lang_StringBuffer_toString, GC_PASS(_tmp_298));
    GC_REF_FUNC_CALL(_tmp_296, java_lang_StringBuffer_append_java_lang_Object, GC_PASS(_tmp_296), GC_PASS(_tmp_297));
    GC_REF(java_lang_String,_tmp_313);
    GC_PUSH_ROOT(_tmp_313);
    GC_REF_FUNC_CALL(_tmp_313, java_lang_String_String_CCharArray, &java_lang_String_Class, GC_PASS(java_lang_String_Layout), ".");
    GC_REF_FUNC_CALL(_tmp_296, java_lang_StringBuffer_append_java_lang_Object, GC_PASS(_tmp_296), GC_PASS(_tmp_313));
    GC_REF_FUNC_CALL(_tmp_295, java_lang_StringBuffer_toString, GC_PASS(_tmp_296));
    GC_REF_FUNC_CALL(_tmp_294, java_lang_StringBuffer_append_java_lang_Object, GC_PASS(_tmp_294), GC_PASS(_tmp_295));
    JByte _tmp_314;
    GC_GET_VAR_ARRAY(_tmp_314, a, 3);
    GC_REF_FUNC_CALL(_tmp_294, java_lang_StringBuffer_append_int, GC_PASS(_tmp_294), _tmp_314);
    GC_REF_FUNC_CALL(_tmp_293, java_lang_StringBuffer_toString, GC_PASS(_tmp_294));
    {
      struct java_lang_PhonyWriter_ClassStruct *_tmp_method;
      GC_GET(_tmp_method, _tmp_292, class);
      GC_PROC_CALL(_tmp_method->methodTbl->println_java_lang_String, GC_PASS(_tmp_292), GC_PASS(_tmp_293));
    }CHECK(1);
    JInt _tmp_315;
    JByte _tmp_316;
    GC_GET_VAR_ARRAY(_tmp_316, a, 0);
    _tmp_315 = (JInt) (_tmp_316);    JInt _tmp_317;
    JByte _tmp_318;
    GC_GET_VAR_ARRAY(_tmp_318, a, 1);
    _tmp_317 = (JInt) (_tmp_318);    JInt _tmp_319;
    JByte _tmp_320;
    GC_GET_VAR_ARRAY(_tmp_320, a, 2);
    _tmp_319 = (JInt) (_tmp_320);    JInt _tmp_321;
    JByte _tmp_322;
    GC_GET_VAR_ARRAY(_tmp_322, a, 3);
    _tmp_321 = (JInt) (_tmp_322);    adr = (_tmp_315 & 0xFF) | ((_tmp_317 & 0xFF) << 8) | ((_tmp_319 & 0xFF) << 16) | ((_tmp_321 & 0xFF) << 24);
    GC_REF(java_lang_PhonyWriter,_tmp_323);
    GC_PUSH_ROOT(_tmp_323);
    GC_GET_REF(_tmp_323, java_lang_System_Static, _java_lang_System_out);
    GC_REF(java_lang_String,_tmp_324);
    GC_PUSH_ROOT(_tmp_324);
    GC_REF(java_lang_StringBuffer,_tmp_325);
    GC_PUSH_ROOT(_tmp_325);
    GC_REF_FUNC_CALL(_tmp_325, java_lang_StringBuffer_StringBuffer, &java_lang_StringBuffer_Class, GC_PASS(java_lang_StringBuffer_Layout));
    GC_REF(java_lang_String,_tmp_326);
    GC_PUSH_ROOT(_tmp_326);
    GC_REF(java_lang_StringBuffer,_tmp_327);
    GC_PUSH_ROOT(_tmp_327);
    GC_REF_FUNC_CALL(_tmp_327, java_lang_StringBuffer_StringBuffer, &java_lang_StringBuffer_Class, GC_PASS(java_lang_StringBuffer_Layout));
    GC_REF(java_lang_String,_tmp_328);
    GC_PUSH_ROOT(_tmp_328);
    GC_REF(java_lang_StringBuffer,_tmp_329);
    GC_PUSH_ROOT(_tmp_329);
    GC_REF_FUNC_CALL(_tmp_329, java_lang_StringBuffer_StringBuffer, &java_lang_StringBuffer_Class, GC_PASS(java_lang_StringBuffer_Layout));
    GC_REF(java_lang_String,_tmp_330);
    GC_PUSH_ROOT(_tmp_330);
    GC_REF(java_lang_StringBuffer,_tmp_331);
    GC_PUSH_ROOT(_tmp_331);
    GC_REF_FUNC_CALL(_tmp_331, java_lang_StringBuffer_StringBuffer, &java_lang_StringBuffer_Class, GC_PASS(java_lang_StringBuffer_Layout));
    GC_REF(java_lang_String,_tmp_332);
    GC_PUSH_ROOT(_tmp_332);
    GC_REF(java_lang_StringBuffer,_tmp_333);
    GC_PUSH_ROOT(_tmp_333);
    GC_REF_FUNC_CALL(_tmp_333, java_lang_StringBuffer_StringBuffer, &java_lang_StringBuffer_Class, GC_PASS(java_lang_StringBuffer_Layout));
    GC_REF(java_lang_String,_tmp_334);
    GC_PUSH_ROOT(_tmp_334);
    GC_REF_FUNC_CALL(_tmp_334, java_lang_String_String_CCharArray, &java_lang_String_Class, GC_PASS(java_lang_String_Layout), "Socket.connect():");
    GC_REF_FUNC_CALL(_tmp_333, java_lang_StringBuffer_append_java_lang_Object, GC_PASS(_tmp_333), GC_PASS(_tmp_334));
    JInt _tmp_335;
    GC_GET(_tmp_335, this, _java_net_Socket_myfd);
    GC_REF_FUNC_CALL(_tmp_333, java_lang_StringBuffer_append_int, GC_PASS(_tmp_333), _tmp_335);
    GC_REF_FUNC_CALL(_tmp_332, java_lang_StringBuffer_toString, GC_PASS(_tmp_333));
    GC_REF_FUNC_CALL(_tmp_331, java_lang_StringBuffer_append_java_lang_Object, GC_PASS(_tmp_331), GC_PASS(_tmp_332));
    GC_REF(java_lang_String,_tmp_336);
    GC_PUSH_ROOT(_tmp_336);
    GC_REF_FUNC_CALL(_tmp_336, java_lang_String_String_CCharArray, &java_lang_String_Class, GC_PASS(java_lang_String_Layout), " adr = ");
    GC_REF_FUNC_CALL(_tmp_331, java_lang_StringBuffer_append_java_lang_Object, GC_PASS(_tmp_331), GC_PASS(_tmp_336));
    GC_REF_FUNC_CALL(_tmp_330, java_lang_StringBuffer_toString, GC_PASS(_tmp_331));
    GC_REF_FUNC_CALL(_tmp_329, java_lang_StringBuffer_append_java_lang_Object, GC_PASS(_tmp_329), GC_PASS(_tmp_330));
    GC_REF_FUNC_CALL(_tmp_329, java_lang_StringBuffer_append_int, GC_PASS(_tmp_329), adr);
    GC_REF_FUNC_CALL(_tmp_328, java_lang_StringBuffer_toString, GC_PASS(_tmp_329));
    GC_REF_FUNC_CALL(_tmp_327, java_lang_StringBuffer_append_java_lang_Object, GC_PASS(_tmp_327), GC_PASS(_tmp_328));
    GC_REF(java_lang_String,_tmp_337);
    GC_PUSH_ROOT(_tmp_337);
    GC_REF_FUNC_CALL(_tmp_337, java_lang_String_String_CCharArray, &java_lang_String_Class, GC_PASS(java_lang_String_Layout), " port = ");
    GC_REF_FUNC_CALL(_tmp_327, java_lang_StringBuffer_append_java_lang_Object, GC_PASS(_tmp_327), GC_PASS(_tmp_337));
    GC_REF_FUNC_CALL(_tmp_326, java_lang_StringBuffer_toString, GC_PASS(_tmp_327));
    GC_REF_FUNC_CALL(_tmp_325, java_lang_StringBuffer_append_java_lang_Object, GC_PASS(_tmp_325), GC_PASS(_tmp_326));
    GC_REF_FUNC_CALL(_tmp_325, java_lang_StringBuffer_append_int, GC_PASS(_tmp_325), port);
    GC_REF_FUNC_CALL(_tmp_324, java_lang_StringBuffer_toString, GC_PASS(_tmp_325));
    {
      struct java_lang_PhonyWriter_ClassStruct *_tmp_method;
      GC_GET(_tmp_method, _tmp_323, class);
      GC_PROC_CALL(_tmp_method->methodTbl->println_java_lang_String, GC_PASS(_tmp_323), GC_PASS(_tmp_324));
    }CHECK(1);
    JInt _tmp_338;
    GC_GET(_tmp_338, this, _java_net_Socket_myfd);
    GC_PROC_CALL(java_net_Socket_connect_int_int_int_int, _tmp_338, adr, port, timeout);CHECK(1);
    GC_POP_ROOT(_tmp_337);
    GC_POP_ROOT(_tmp_336);
    GC_POP_ROOT(_tmp_334);
    GC_POP_ROOT(_tmp_333);
    GC_POP_ROOT(_tmp_332);
    GC_POP_ROOT(_tmp_331);
    GC_POP_ROOT(_tmp_330);
    GC_POP_ROOT(_tmp_329);
    GC_POP_ROOT(_tmp_328);
    GC_POP_ROOT(_tmp_327);
    GC_POP_ROOT(_tmp_326);
    GC_POP_ROOT(_tmp_325);
    GC_POP_ROOT(_tmp_324);
    GC_POP_ROOT(_tmp_323);
    GC_POP_ROOT(_tmp_313);
    GC_POP_ROOT(_tmp_311);
    GC_POP_ROOT(_tmp_309);
    GC_POP_ROOT(_tmp_307);
    GC_POP_ROOT(_tmp_306);
    GC_POP_ROOT(_tmp_305);
    GC_POP_ROOT(_tmp_304);
    GC_POP_ROOT(_tmp_303);
    GC_POP_ROOT(_tmp_302);
    GC_POP_ROOT(_tmp_301);
    GC_POP_ROOT(_tmp_300);
    GC_POP_ROOT(_tmp_299);
    GC_POP_ROOT(_tmp_298);
    GC_POP_ROOT(_tmp_297);
    GC_POP_ROOT(_tmp_296);
    GC_POP_ROOT(_tmp_295);
    GC_POP_ROOT(_tmp_294);
    GC_POP_ROOT(_tmp_293);
    GC_POP_ROOT(_tmp_292);
    GC_POP_ROOT(_tmp_291);
    GC_POP_ROOT(_tmp_290);
    GC_POP_ROOT(_tmp_289);
    GC_POP_ROOT(a);
  }
  EXCEPTION_CATCH(1,&java_io_IOException_Class)
    GC_REF(java_io_IOException,exception);
    GC_PUSH_ROOT(exception);
    EXCEPTION_GET_OBJ(exception);
    {
      {
        struct java_net_Socket_ClassStruct *_tmp_method;
        GC_GET(_tmp_method, this, class);
        GC_PROC_CALL(_tmp_method->methodTbl->close, GC_PASS(this));
      }CHECK(0);
      EXCEPTION_STORE_OBJ(exception);
      GC_POP_ROOT(exception);
      EXCEPTION_THROW(0,&java_io_IOException_Class)
    }
    GC_POP_ROOT(exception);
  EXCEPTION_CATCH_MORE(&java_lang_RuntimeException_Class)
    GC_REF(java_lang_RuntimeException,exception);
    GC_PUSH_ROOT(exception);
    EXCEPTION_GET_OBJ(exception);
    {
      {
        struct java_net_Socket_ClassStruct *_tmp_method;
        GC_GET(_tmp_method, this, class);
        GC_PROC_CALL(_tmp_method->methodTbl->close, GC_PASS(this));
      }CHECK(0);
      EXCEPTION_STORE_OBJ(exception);
      GC_POP_ROOT(exception);
      EXCEPTION_THROW(0,&java_lang_RuntimeException_Class)
    }
    GC_POP_ROOT(exception);
  EXCEPTION_CATCH_MORE(&java_lang_Error_Class)
    GC_REF(java_lang_Error,error);
    GC_PUSH_ROOT(error);
    EXCEPTION_GET_OBJ(error);
    {
      {
        struct java_net_Socket_ClassStruct *_tmp_method;
        GC_GET(_tmp_method, this, class);
        GC_PROC_CALL(_tmp_method->methodTbl->close, GC_PASS(this));
      }CHECK(0);
      EXCEPTION_STORE_OBJ(error);
      GC_POP_ROOT(error);
      EXCEPTION_THROW(0,&java_lang_Error_Class)
    }
    GC_POP_ROOT(error);
  EXCEPTION_FINALLY
  EXCEPTION_END(0)
}
__branch_1:;
  GC_FUNC_LEAVE;
GC_PROC_END(java_net_Socket_connect_java_net_SocketAddress_int)


/* method: Socket.getInputStream() */
GC_REF_FUNC_BEGIN(java_io_InputStream,
    java_net_Socket_getInputStream,
    GC_PARAM(java_net_Socket,this))
  EXCEPTION_THROWS
  GC_PARAM_REF(java_net_Socket,this);
  GC_PUSH_PARAM(this);
  GC_REF(java_io_InputStream, __result);
  GC_PUSH_ROOT(__result);
  GC_FUNC_ENTER;
{
  JInt _tmp_339;
  GC_GET(_tmp_339, this, _java_net_Socket_myfd);
  if (_tmp_339 != 0)
  {
    GC_REF(java_io_SimpleTCPInputStream,_tmp_340);
    GC_PUSH_ROOT(_tmp_340);
    JInt _tmp_341;
    GC_GET(_tmp_341, this, _java_net_Socket_myfd);
    GC_REF_FUNC_CALL(_tmp_340, java_io_SimpleTCPInputStream_SimpleTCPInputStream_int, &java_io_SimpleTCPInputStream_Class, GC_PASS(java_io_SimpleTCPInputStream_Layout), _tmp_341);CHECK(0);
GC_ASSIGN(__result, _tmp_340);
    GC_POP_ROOT(_tmp_340);
    goto __branch_1;
  }
  else
  {
    GC_REF(java_lang_PhonyWriter,_tmp_342);
    GC_PUSH_ROOT(_tmp_342);
    GC_GET_REF(_tmp_342, java_lang_System_Static, _java_lang_System_out);
    GC_REF(java_lang_String,_tmp_343);
    GC_PUSH_ROOT(_tmp_343);
    GC_REF_FUNC_CALL(_tmp_343, java_lang_String_String_CCharArray, &java_lang_String_Class, GC_PASS(java_lang_String_Layout), "not connected");
    {
      struct java_lang_PhonyWriter_ClassStruct *_tmp_method;
      GC_GET(_tmp_method, _tmp_342, class);
      GC_PROC_CALL(_tmp_method->methodTbl->println_java_lang_String, GC_PASS(_tmp_342), GC_PASS(_tmp_343));
    }CHECK(0);
GC_ASSIGN(__result, JAVA_NULL);
    GC_POP_ROOT(_tmp_342);
    GC_POP_ROOT(_tmp_343);
    goto __branch_1;
  }
}
__branch_1:;
  GC_ASSIGN(gc_result, __result);
  GC_POP_ROOT(__result);
  GC_FUNC_LEAVE;
GC_REF_FUNC_END(java_io_InputStream, java_net_Socket_getInputStream)


/* method: Socket.getOutputStream() */
GC_REF_FUNC_BEGIN(java_io_OutputStream,
    java_net_Socket_getOutputStream,
    GC_PARAM(java_net_Socket,this))
  EXCEPTION_THROWS
  GC_PARAM_REF(java_net_Socket,this);
  GC_PUSH_PARAM(this);
  GC_REF(java_io_OutputStream, __result);
  GC_PUSH_ROOT(__result);
  GC_FUNC_ENTER;
{
  GC_REF(java_io_SimpleTCPOutputStream,_tmp_344);
  GC_PUSH_ROOT(_tmp_344);
  JInt _tmp_345;
  GC_GET(_tmp_345, this, _java_net_Socket_myfd);
  GC_REF_FUNC_CALL(_tmp_344, java_io_SimpleTCPOutputStream_SimpleTCPOutputStream_int, &java_io_SimpleTCPOutputStream_Class, GC_PASS(java_io_SimpleTCPOutputStream_Layout), _tmp_345);CHECK(0);
GC_ASSIGN(__result, _tmp_344);
  GC_POP_ROOT(_tmp_344);
  goto __branch_1;
}
__branch_1:;
  GC_ASSIGN(gc_result, __result);
  GC_POP_ROOT(__result);
  GC_FUNC_LEAVE;
GC_REF_FUNC_END(java_io_OutputStream, java_net_Socket_getOutputStream)


/* method: Socket.close() */
GC_PROC_BEGIN(
    java_net_Socket_close,
    GC_PARAM(java_net_Socket,this))
  EXCEPTION_THROWS
  GC_PARAM_REF(java_net_Socket,this);
  GC_PUSH_PARAM(this);
  GC_FUNC_ENTER;
{
  JInt _tmp_346;
  GC_GET(_tmp_346, this, _java_net_Socket_myfd);
  GC_PROC_CALL(java_net_Socket_close_int, _tmp_346);CHECK(0);
  GC_SET(this, _java_net_Socket_myfd, 0);
}
__branch_1:;
  GC_FUNC_LEAVE;
GC_PROC_END(java_net_Socket_close)


/* method: Socket.toString() */
GC_REF_FUNC_BEGIN(java_lang_String,
    java_net_Socket_toString,
    GC_PARAM(java_net_Socket,this))
  GC_PARAM_REF(java_net_Socket,this);
  GC_PUSH_PARAM(this);
  GC_REF(java_lang_String, __result);
  GC_PUSH_ROOT(__result);
  GC_FUNC_ENTER;
{
  GC_REF(java_lang_String,_tmp_347);
  GC_PUSH_ROOT(_tmp_347);
  GC_REF_FUNC_CALL(_tmp_347, java_lang_String_String_CCharArray, &java_lang_String_Class, GC_PASS(java_lang_String_Layout), "Socket[toString not completely implemented]");
GC_ASSIGN(__result, _tmp_347);
  GC_POP_ROOT(_tmp_347);
  goto __branch_1;
}
__branch_1:;
  GC_ASSIGN(gc_result, __result);
  GC_POP_ROOT(__result);
  GC_FUNC_LEAVE;
GC_REF_FUNC_END(java_lang_String, java_net_Socket_toString)


GC_PROC_BEGIN(HTTP_t_initializer,GC_PARAM(HTTP_t,this))
  GC_PARAM_REF(HTTP_t,this);
  GC_FUNC_ENTER;
  GC_PROC_CALL(java_lang_Thread_initializer,GC_PASS(this));
  GC_FUNC_LEAVE;
GC_PROC_END(HTTP_t_initializer)


/* constructor: HTTP_t(Monitor mon, int port) */
GC_REF_FUNC_BEGIN(HTTP_t,
    HTTP_t_HTTP_t_Monitor_int,
    void* class,
    GC_PARAM(LayoutHead, layout),
    GC_PARAM(Monitor,mon),
    JInt port)
  GC_PARAM_REF(LayoutHead, layout);
  GC_PARAM_REF(Monitor, mon);
  GC_REF(HTTP_t,this);
  GC_PUSH_PARAM(layout);
  GC_FUNC_ENTER;
  GC_PUSH_ROOT(this);
  {
    GC_NEW(this,layout);
    GC_SET(this,class,class);
    GC_PROC_CALL(HTTP_t_initializer,GC_PASS(this));
    GC_PROC_CALL(HTTP_t_HTTP_t_Monitor_int_init, GC_PASS(this), GC_PASS(mon), port);
    GC_ASSIGN(gc_result, this);
  }
  GC_POP_ROOT(this);
  GC_FUNC_LEAVE;
  GC_POP_PARAM(layout);
GC_REF_FUNC_END(HTTP_t, HTTP_t_HTTP_t_Monitor_int)


/* init func: HTTP_t(Monitor mon, int port) */
GC_PROC_BEGIN(
    HTTP_t_HTTP_t_Monitor_int_init,
    GC_PARAM(HTTP_t,this),
    GC_PARAM(Monitor,mon),
    JInt port)
  GC_PARAM_REF(HTTP_t,this);
  GC_PARAM_REF(Monitor, mon);
  GC_PUSH_PARAM(this);
  GC_FUNC_ENTER;
  {
    GC_PROC_CALL(java_lang_Thread_Thread_init, GC_PASS(this));CHECK(0);
    {
      GC_SET_REF(this, _HTTP_t_mon, mon);
      GC_SET(this, _HTTP_t_port, port);
    }
  }
  __branch_1:;
  GC_FUNC_LEAVE;
  GC_POP_PARAM(this);
GC_PROC_END(HTTP_t_HTTP_t_Monitor_int_init)


/* method: HTTP_t.run() */
GC_PROC_BEGIN(
    HTTP_t_run,
    GC_PARAM(HTTP_t,this))
  GC_PARAM_REF(HTTP_t,this);
  GC_PUSH_PARAM(this);
  GC_FUNC_ENTER;
{
  VOLATILE GC_REF(JByteArray,jpeg);
  GC_PUSH_ROOT(jpeg);
  GC_REF_FUNC_CALL(jpeg, newJByteArray, 131083);CHECK(0);
  EXCEPTION_TRY
  {
    GC_REF(java_net_ServerSocket,serverSocket);
    GC_PUSH_ROOT(serverSocket);
    JInt _tmp_348;
    GC_GET(_tmp_348, this, _HTTP_t_port);
    GC_REF_FUNC_CALL(serverSocket, java_net_ServerSocket_ServerSocket_int, &java_net_ServerSocket_Class, GC_PASS(java_net_ServerSocket_Layout), _tmp_348);CHECK(1);
    GC_REF(java_lang_PhonyWriter,_tmp_349);
    GC_PUSH_ROOT(_tmp_349);
    GC_GET_REF(_tmp_349, java_lang_System_Static, _java_lang_System_out);
    GC_REF(java_lang_String,_tmp_350);
    GC_PUSH_ROOT(_tmp_350);
    GC_REF(java_lang_StringBuffer,_tmp_351);
    GC_PUSH_ROOT(_tmp_351);
    GC_REF_FUNC_CALL(_tmp_351, java_lang_StringBuffer_StringBuffer, &java_lang_StringBuffer_Class, GC_PASS(java_lang_StringBuffer_Layout));
    GC_REF(java_lang_String,_tmp_352);
    GC_PUSH_ROOT(_tmp_352);
    GC_REF(java_lang_StringBuffer,_tmp_353);
    GC_PUSH_ROOT(_tmp_353);
    GC_REF_FUNC_CALL(_tmp_353, java_lang_StringBuffer_StringBuffer, &java_lang_StringBuffer_Class, GC_PASS(java_lang_StringBuffer_Layout));
    GC_REF(java_lang_String,_tmp_354);
    GC_PUSH_ROOT(_tmp_354);
    GC_REF_FUNC_CALL(_tmp_354, java_lang_String_String_CCharArray, &java_lang_String_Class, GC_PASS(java_lang_String_Layout), "HTTP server operating at port ");
    GC_REF_FUNC_CALL(_tmp_353, java_lang_StringBuffer_append_java_lang_Object, GC_PASS(_tmp_353), GC_PASS(_tmp_354));
    JInt _tmp_355;
    GC_GET(_tmp_355, this, _HTTP_t_port);
    GC_REF_FUNC_CALL(_tmp_353, java_lang_StringBuffer_append_int, GC_PASS(_tmp_353), _tmp_355);
    GC_REF_FUNC_CALL(_tmp_352, java_lang_StringBuffer_toString, GC_PASS(_tmp_353));
    GC_REF_FUNC_CALL(_tmp_351, java_lang_StringBuffer_append_java_lang_Object, GC_PASS(_tmp_351), GC_PASS(_tmp_352));
    GC_REF(java_lang_String,_tmp_356);
    GC_PUSH_ROOT(_tmp_356);
    GC_REF_FUNC_CALL(_tmp_356, java_lang_String_String_CCharArray, &java_lang_String_Class, GC_PASS(java_lang_String_Layout), ".");
    GC_REF_FUNC_CALL(_tmp_351, java_lang_StringBuffer_append_java_lang_Object, GC_PASS(_tmp_351), GC_PASS(_tmp_356));
    GC_REF_FUNC_CALL(_tmp_350, java_lang_StringBuffer_toString, GC_PASS(_tmp_351));
    {
      struct java_lang_PhonyWriter_ClassStruct *_tmp_method;
      GC_GET(_tmp_method, _tmp_349, class);
      GC_PROC_CALL(_tmp_method->methodTbl->println_java_lang_String, GC_PASS(_tmp_349), GC_PASS(_tmp_350));
    }CHECK(1);
    {
      goto __cond_21;
__loop_21:;
      {
        GC_REF(java_net_Socket,clientSocket);
        GC_REF(java_io_InputStream,is);
        GC_REF(java_io_OutputStream,os);
        GC_REF(java_lang_String,request);
        GC_REF(java_lang_String,header);
        JBoolean cont;
        GC_PUSH_ROOT(clientSocket);
        {
          struct java_net_ServerSocket_ClassStruct *_tmp_method;
          GC_GET(_tmp_method, serverSocket, class);
          GC_REF_FUNC_CALL(clientSocket, _tmp_method->methodTbl->accept, GC_PASS(serverSocket));
        }CHECK(1);
        GC_PUSH_ROOT(is);
        {
          struct java_net_Socket_ClassStruct *_tmp_method;
          GC_GET(_tmp_method, clientSocket, class);
          GC_REF_FUNC_CALL(is, _tmp_method->methodTbl->getInputStream, GC_PASS(clientSocket));
        }CHECK(1);
        GC_PUSH_ROOT(os);
        {
          struct java_net_Socket_ClassStruct *_tmp_method;
          GC_GET(_tmp_method, clientSocket, class);
          GC_REF_FUNC_CALL(os, _tmp_method->methodTbl->getOutputStream, GC_PASS(clientSocket));
        }CHECK(1);
        GC_PUSH_ROOT(request);
        GC_REF_FUNC_CALL(request, HTTP_t_getLine_java_io_InputStream, GC_PASS(is));CHECK(1);
        GC_PUSH_ROOT(header);
        {
__loop_22:;
          {
            GC_REF_FUNC_CALL(header, HTTP_t_getLine_java_io_InputStream, GC_PASS(is));CHECK(1);
            JBoolean _tmp_357;
            GC_REF(java_lang_String,_tmp_358);
            GC_PUSH_ROOT(_tmp_358);
            GC_REF_FUNC_CALL(_tmp_358, java_lang_String_String_CCharArray, &java_lang_String_Class, GC_PASS(java_lang_String_Layout), "");
            {
              struct java_lang_String_ClassStruct *_tmp_method;
              GC_GET(_tmp_method, header, class);
              GC_VAR_FUNC_CALL(_tmp_357, _tmp_method->methodTbl->equals_java_lang_Object, GC_PASS(header), GC_PASS(_tmp_358));
            }CHECK(1);
            cont = !(_tmp_357);
            GC_POP_ROOT(_tmp_358);
          }
          JBoolean _tmp_359;
          _tmp_359 = cont;
          if (_tmp_359) {
            goto __loop_22;
          }
        }
        GC_REF(java_lang_PhonyWriter,_tmp_360);
        GC_PUSH_ROOT(_tmp_360);
        GC_GET_REF(_tmp_360, java_lang_System_Static, _java_lang_System_out);
        GC_REF(java_lang_String,_tmp_361);
        GC_PUSH_ROOT(_tmp_361);
        GC_REF(java_lang_StringBuffer,_tmp_362);
        GC_PUSH_ROOT(_tmp_362);
        GC_REF_FUNC_CALL(_tmp_362, java_lang_StringBuffer_StringBuffer, &java_lang_StringBuffer_Class, GC_PASS(java_lang_StringBuffer_Layout));
        GC_REF(java_lang_String,_tmp_363);
        GC_PUSH_ROOT(_tmp_363);
        GC_REF(java_lang_StringBuffer,_tmp_364);
        GC_PUSH_ROOT(_tmp_364);
        GC_REF_FUNC_CALL(_tmp_364, java_lang_StringBuffer_StringBuffer, &java_lang_StringBuffer_Class, GC_PASS(java_lang_StringBuffer_Layout));
        GC_REF(java_lang_String,_tmp_365);
        GC_PUSH_ROOT(_tmp_365);
        GC_REF_FUNC_CALL(_tmp_365, java_lang_String_String_CCharArray, &java_lang_String_Class, GC_PASS(java_lang_String_Layout), "HTTP request '");
        GC_REF_FUNC_CALL(_tmp_364, java_lang_StringBuffer_append_java_lang_Object, GC_PASS(_tmp_364), GC_PASS(_tmp_365));
        GC_REF_FUNC_CALL(_tmp_364, java_lang_StringBuffer_append_java_lang_Object, GC_PASS(_tmp_364), GC_PASS(request));
        GC_REF_FUNC_CALL(_tmp_363, java_lang_StringBuffer_toString, GC_PASS(_tmp_364));
        GC_REF_FUNC_CALL(_tmp_362, java_lang_StringBuffer_append_java_lang_Object, GC_PASS(_tmp_362), GC_PASS(_tmp_363));
        GC_REF(java_lang_String,_tmp_366);
        GC_PUSH_ROOT(_tmp_366);
        GC_REF_FUNC_CALL(_tmp_366, java_lang_String_String_CCharArray, &java_lang_String_Class, GC_PASS(java_lang_String_Layout), "' received.");
        GC_REF_FUNC_CALL(_tmp_362, java_lang_StringBuffer_append_java_lang_Object, GC_PASS(_tmp_362), GC_PASS(_tmp_366));
        GC_REF_FUNC_CALL(_tmp_361, java_lang_StringBuffer_toString, GC_PASS(_tmp_362));
        {
          struct java_lang_PhonyWriter_ClassStruct *_tmp_method;
          GC_GET(_tmp_method, _tmp_360, class);
          GC_PROC_CALL(_tmp_method->methodTbl->println_java_lang_String, GC_PASS(_tmp_360), GC_PASS(_tmp_361));
        }CHECK(1);
        JBoolean _tmp_367;
        GC_REF(java_lang_String,_tmp_368);
        GC_PUSH_ROOT(_tmp_368);
        {
          struct java_lang_String_ClassStruct *_tmp_method;
          GC_GET(_tmp_method, request, class);
          GC_REF_FUNC_CALL(_tmp_368, _tmp_method->methodTbl->substring_int_int, GC_PASS(request), 0, 4);
        }CHECK(1);
        GC_REF(java_lang_String,_tmp_369);
        GC_PUSH_ROOT(_tmp_369);
        GC_REF_FUNC_CALL(_tmp_369, java_lang_String_String_CCharArray, &java_lang_String_Class, GC_PASS(java_lang_String_Layout), "GET ");
        {
          struct java_lang_String_ClassStruct *_tmp_method;
          GC_GET(_tmp_method, _tmp_368, class);
          GC_VAR_FUNC_CALL(_tmp_367, _tmp_method->methodTbl->equals_java_lang_Object, GC_PASS(_tmp_368), GC_PASS(_tmp_369));
        }CHECK(1);
        if (_tmp_367)
        {
          JInt len;
          GC_REF(java_lang_String,_tmp_370);
          GC_PUSH_ROOT(_tmp_370);
          GC_REF_FUNC_CALL(_tmp_370, java_lang_String_String_CCharArray, &java_lang_String_Class, GC_PASS(java_lang_String_Layout), "HTTP/1.0 200 OK");
          GC_PROC_CALL(HTTP_t_putLine_java_io_OutputStream_java_lang_String, GC_PASS(os), GC_PASS(_tmp_370));CHECK(1);
          GC_REF(java_lang_String,_tmp_371);
          GC_PUSH_ROOT(_tmp_371);
          GC_REF_FUNC_CALL(_tmp_371, java_lang_String_String_CCharArray, &java_lang_String_Class, GC_PASS(java_lang_String_Layout), "Content-Type: image/jpeg");
          GC_PROC_CALL(HTTP_t_putLine_java_io_OutputStream_java_lang_String, GC_PASS(os), GC_PASS(_tmp_371));CHECK(1);
          GC_REF(java_lang_String,_tmp_372);
          GC_PUSH_ROOT(_tmp_372);
          GC_REF_FUNC_CALL(_tmp_372, java_lang_String_String_CCharArray, &java_lang_String_Class, GC_PASS(java_lang_String_Layout), "Pragma: no-cache");
          GC_PROC_CALL(HTTP_t_putLine_java_io_OutputStream_java_lang_String, GC_PASS(os), GC_PASS(_tmp_372));CHECK(1);
          GC_REF(java_lang_String,_tmp_373);
          GC_PUSH_ROOT(_tmp_373);
          GC_REF_FUNC_CALL(_tmp_373, java_lang_String_String_CCharArray, &java_lang_String_Class, GC_PASS(java_lang_String_Layout), "Cache-Control: no-cache");
          GC_PROC_CALL(HTTP_t_putLine_java_io_OutputStream_java_lang_String, GC_PASS(os), GC_PASS(_tmp_373));CHECK(1);
          GC_REF(java_lang_String,_tmp_374);
          GC_PUSH_ROOT(_tmp_374);
          GC_REF_FUNC_CALL(_tmp_374, java_lang_String_String_CCharArray, &java_lang_String_Class, GC_PASS(java_lang_String_Layout), "");
          GC_PROC_CALL(HTTP_t_putLine_java_io_OutputStream_java_lang_String, GC_PASS(os), GC_PASS(_tmp_374));CHECK(1);
          EXCEPTION_TRY
          {
            GC_REF(Monitor,_tmp_375);
            GC_PUSH_ROOT(_tmp_375);
            GC_GET_REF(_tmp_375, this, _HTTP_t_mon);
            {
              struct Monitor_ClassStruct *_tmp_method;
              GC_GET(_tmp_method, _tmp_375, class);
              GC_REF_FUNC_CALL(jpeg, _tmp_method->methodTbl->getJpeg_long, GC_PASS(_tmp_375), -1);
            }CHECK(2);
            GC_POP_ROOT(_tmp_375);
          }
          EXCEPTION_CATCH(2,&java_lang_Exception_Class)
            GC_REF(java_lang_Exception,e);
            GC_PUSH_ROOT(e);
            EXCEPTION_GET_OBJ(e);
            {
            }
            GC_POP_ROOT(e);
          EXCEPTION_FINALLY
          EXCEPTION_END(1)
__branch_1:;
          JByte _tmp_376;
          GC_GET_VAR_ARRAY(_tmp_376, jpeg, 9);
          JByte _tmp_377;
          GC_GET_VAR_ARRAY(_tmp_377, jpeg, 10);
          len = (_tmp_376 & 0xFF) * 255 + (_tmp_377 & 0xFF);
          {
            struct java_io_OutputStream_ClassStruct *_tmp_method;
            GC_GET(_tmp_method, os, class);
            GC_PROC_CALL(_tmp_method->methodTbl->write_byteA_int_int, GC_PASS(os), GC_PASS(jpeg), 11, len);
          }CHECK(1);
          GC_POP_ROOT(_tmp_374);
          GC_POP_ROOT(_tmp_373);
          GC_POP_ROOT(_tmp_372);
          GC_POP_ROOT(_tmp_371);
          GC_POP_ROOT(_tmp_370);
        }
        else
        {
          GC_REF(java_lang_String,_tmp_378);
          GC_PUSH_ROOT(_tmp_378);
          GC_REF_FUNC_CALL(_tmp_378, java_lang_String_String_CCharArray, &java_lang_String_Class, GC_PASS(java_lang_String_Layout), "HTTP/1.0 501 Method not implemented");
          GC_PROC_CALL(HTTP_t_putLine_java_io_OutputStream_java_lang_String, GC_PASS(os), GC_PASS(_tmp_378));CHECK(1);
          GC_REF(java_lang_String,_tmp_379);
          GC_PUSH_ROOT(_tmp_379);
          GC_REF_FUNC_CALL(_tmp_379, java_lang_String_String_CCharArray, &java_lang_String_Class, GC_PASS(java_lang_String_Layout), "Content-Type: text/plain");
          GC_PROC_CALL(HTTP_t_putLine_java_io_OutputStream_java_lang_String, GC_PASS(os), GC_PASS(_tmp_379));CHECK(1);
          GC_REF(java_lang_String,_tmp_380);
          GC_PUSH_ROOT(_tmp_380);
          GC_REF_FUNC_CALL(_tmp_380, java_lang_String_String_CCharArray, &java_lang_String_Class, GC_PASS(java_lang_String_Layout), "");
          GC_PROC_CALL(HTTP_t_putLine_java_io_OutputStream_java_lang_String, GC_PASS(os), GC_PASS(_tmp_380));CHECK(1);
          GC_REF(java_lang_String,_tmp_381);
          GC_PUSH_ROOT(_tmp_381);
          GC_REF(java_lang_StringBuffer,_tmp_382);
          GC_PUSH_ROOT(_tmp_382);
          GC_REF_FUNC_CALL(_tmp_382, java_lang_StringBuffer_StringBuffer, &java_lang_StringBuffer_Class, GC_PASS(java_lang_StringBuffer_Layout));
          GC_REF(java_lang_String,_tmp_383);
          GC_PUSH_ROOT(_tmp_383);
          GC_REF(java_lang_StringBuffer,_tmp_384);
          GC_PUSH_ROOT(_tmp_384);
          GC_REF_FUNC_CALL(_tmp_384, java_lang_StringBuffer_StringBuffer, &java_lang_StringBuffer_Class, GC_PASS(java_lang_StringBuffer_Layout));
          GC_REF(java_lang_String,_tmp_385);
          GC_PUSH_ROOT(_tmp_385);
          GC_REF_FUNC_CALL(_tmp_385, java_lang_String_String_CCharArray, &java_lang_String_Class, GC_PASS(java_lang_String_Layout), "No can do. Request '");
          GC_REF_FUNC_CALL(_tmp_384, java_lang_StringBuffer_append_java_lang_Object, GC_PASS(_tmp_384), GC_PASS(_tmp_385));
          GC_REF_FUNC_CALL(_tmp_384, java_lang_StringBuffer_append_java_lang_Object, GC_PASS(_tmp_384), GC_PASS(request));
          GC_REF_FUNC_CALL(_tmp_383, java_lang_StringBuffer_toString, GC_PASS(_tmp_384));
          GC_REF_FUNC_CALL(_tmp_382, java_lang_StringBuffer_append_java_lang_Object, GC_PASS(_tmp_382), GC_PASS(_tmp_383));
          GC_REF(java_lang_String,_tmp_386);
          GC_PUSH_ROOT(_tmp_386);
          GC_REF_FUNC_CALL(_tmp_386, java_lang_String_String_CCharArray, &java_lang_String_Class, GC_PASS(java_lang_String_Layout), "' not understood.");
          GC_REF_FUNC_CALL(_tmp_382, java_lang_StringBuffer_append_java_lang_Object, GC_PASS(_tmp_382), GC_PASS(_tmp_386));
          GC_REF_FUNC_CALL(_tmp_381, java_lang_StringBuffer_toString, GC_PASS(_tmp_382));
          GC_PROC_CALL(HTTP_t_putLine_java_io_OutputStream_java_lang_String, GC_PASS(os), GC_PASS(_tmp_381));CHECK(1);
          GC_REF(java_lang_PhonyWriter,_tmp_387);
          GC_PUSH_ROOT(_tmp_387);
          GC_GET_REF(_tmp_387, java_lang_System_Static, _java_lang_System_out);
          GC_REF(java_lang_String,_tmp_388);
          GC_PUSH_ROOT(_tmp_388);
          GC_REF_FUNC_CALL(_tmp_388, java_lang_String_String_CCharArray, &java_lang_String_Class, GC_PASS(java_lang_String_Layout), "Unsupported HTTP request!");
          {
            struct java_lang_PhonyWriter_ClassStruct *_tmp_method;
            GC_GET(_tmp_method, _tmp_387, class);
            GC_PROC_CALL(_tmp_method->methodTbl->println_java_lang_String, GC_PASS(_tmp_387), GC_PASS(_tmp_388));
          }CHECK(1);
          GC_POP_ROOT(_tmp_388);
          GC_POP_ROOT(_tmp_387);
          GC_POP_ROOT(_tmp_386);
          GC_POP_ROOT(_tmp_385);
          GC_POP_ROOT(_tmp_384);
          GC_POP_ROOT(_tmp_383);
          GC_POP_ROOT(_tmp_382);
          GC_POP_ROOT(_tmp_381);
          GC_POP_ROOT(_tmp_380);
          GC_POP_ROOT(_tmp_379);
          GC_POP_ROOT(_tmp_378);
        }
        {
          struct java_io_OutputStream_ClassStruct *_tmp_method;
          GC_GET(_tmp_method, os, class);
          GC_PROC_CALL(_tmp_method->methodTbl->flush, GC_PASS(os));
        }CHECK(1);
        {
          struct java_net_Socket_ClassStruct *_tmp_method;
          GC_GET(_tmp_method, clientSocket, class);
          GC_PROC_CALL(_tmp_method->methodTbl->close, GC_PASS(clientSocket));
        }CHECK(1);
        GC_POP_ROOT(_tmp_369);
        GC_POP_ROOT(_tmp_368);
        GC_POP_ROOT(_tmp_366);
        GC_POP_ROOT(_tmp_365);
        GC_POP_ROOT(_tmp_364);
        GC_POP_ROOT(_tmp_363);
        GC_POP_ROOT(_tmp_362);
        GC_POP_ROOT(_tmp_361);
        GC_POP_ROOT(_tmp_360);
        GC_POP_ROOT(header);
        GC_POP_ROOT(request);
        GC_POP_ROOT(os);
        GC_POP_ROOT(is);
        GC_POP_ROOT(clientSocket);
      }
__cond_21:;
      JBoolean _tmp_389;
      JBoolean _tmp_390;
      {
        struct java_lang_Thread_ClassStruct *_tmp_method;
        GC_GET(_tmp_method, this, class);
        GC_VAR_FUNC_CALL(_tmp_390, _tmp_method->methodTbl->isInterrupted, GC_PASS(this));
      }CHECK(1);
      _tmp_389 = !_tmp_390;
      if (_tmp_389) {
        goto __loop_21;
      }
    }
    GC_POP_ROOT(_tmp_356);
    GC_POP_ROOT(_tmp_354);
    GC_POP_ROOT(_tmp_353);
    GC_POP_ROOT(_tmp_352);
    GC_POP_ROOT(_tmp_351);
    GC_POP_ROOT(_tmp_350);
    GC_POP_ROOT(_tmp_349);
    GC_POP_ROOT(serverSocket);
  }
  EXCEPTION_CATCH(1,&java_io_IOException_Class)
__branch_2:;
    GC_REF(java_io_IOException,e);
    GC_PUSH_ROOT(e);
    EXCEPTION_GET_OBJ(e);
    {
    }
    GC_POP_ROOT(e);
  EXCEPTION_FINALLY
  EXCEPTION_END(0)
  GC_POP_ROOT(jpeg);
}
__branch_3:;
  GC_FUNC_LEAVE;
GC_PROC_END(HTTP_t_run)


/* method: HTTP_t.getLine(java.io.InputStream) */
GC_REF_FUNC_BEGIN(java_lang_String,
    HTTP_t_getLine_java_io_InputStream,
    GC_PARAM(java_io_InputStream,s))
  EXCEPTION_THROWS
  GC_PARAM_REF(java_io_InputStream, s);
  GC_REF(java_lang_String, __result);
  GC_PUSH_ROOT(__result);
  GC_FUNC_ENTER;
{
  JBoolean done;
  GC_REF(java_lang_String,result);
  done = false;
  GC_PUSH_ROOT(result);
  GC_REF_FUNC_CALL(result, java_lang_String_String_CCharArray, &java_lang_String_Class, GC_PASS(java_lang_String_Layout), "");
  {
    goto __cond_23;
__loop_23:;
    {
      JInt ch;
      {
        struct java_io_InputStream_ClassStruct *_tmp_method;
        GC_GET(_tmp_method, s, class);
        GC_VAR_FUNC_CALL(ch, _tmp_method->methodTbl->read, GC_PASS(s));
      }CHECK(0);
      JBoolean _tmp_391;
      if (ch <= 0) {
        _tmp_391 = true;
      } else {
        if (ch == 10) {
          _tmp_391 = true;
        } else {
          _tmp_391 = false;
        }
      }
      if (_tmp_391)
      {
        done = true;
      }
      else
      {
        if (ch >= ' ')
        {
          GC_REF(java_lang_StringBuffer,_tmp_392);
          GC_PUSH_ROOT(_tmp_392);
          GC_REF_FUNC_CALL(_tmp_392, java_lang_StringBuffer_StringBuffer, &java_lang_StringBuffer_Class, GC_PASS(java_lang_StringBuffer_Layout));
          GC_REF_FUNC_CALL(_tmp_392, java_lang_StringBuffer_append_java_lang_Object, GC_PASS(_tmp_392), GC_PASS(result));
          JChar _tmp_393;
          _tmp_393 = (JChar) (ch);          GC_REF_FUNC_CALL(_tmp_392, java_lang_StringBuffer_append_char, GC_PASS(_tmp_392), _tmp_393);
          GC_REF_FUNC_CALL(result, java_lang_StringBuffer_toString, GC_PASS(_tmp_392));
          GC_POP_ROOT(_tmp_392);
        }
      }
    }
__cond_23:;
    JBoolean _tmp_394;
    _tmp_394 = !done;
    if (_tmp_394) {
      goto __loop_23;
    }
  }
GC_ASSIGN(__result, result);
  GC_POP_ROOT(result);
  goto __branch_1;
}
__branch_1:;
  GC_ASSIGN(gc_result, __result);
  GC_POP_ROOT(__result);
  GC_FUNC_LEAVE;
GC_REF_FUNC_END(java_lang_String, HTTP_t_getLine_java_io_InputStream)


/* method: HTTP_t.putLine(java.io.OutputStream, java.lang.String) */
GC_PROC_BEGIN(
    HTTP_t_putLine_java_io_OutputStream_java_lang_String,
    GC_PARAM(java_io_OutputStream,s),
    GC_PARAM(java_lang_String,str))
  EXCEPTION_THROWS
  GC_PARAM_REF(java_io_OutputStream, s);
  GC_PARAM_REF(java_lang_String, str);
  GC_FUNC_ENTER;
{
  GC_REF(JByteArray,_tmp_395);
  GC_PUSH_ROOT(_tmp_395);
  {
    struct java_lang_String_ClassStruct *_tmp_method;
    GC_GET(_tmp_method, str, class);
    GC_REF_FUNC_CALL(_tmp_395, _tmp_method->methodTbl->getBytes, GC_PASS(str));
  }CHECK(0);
  {
    struct java_io_OutputStream_ClassStruct *_tmp_method;
    GC_GET(_tmp_method, s, class);
    GC_PROC_CALL(_tmp_method->methodTbl->write_byteA, GC_PASS(s), GC_PASS(_tmp_395));
  }CHECK(0);
  GC_REF(JByteArray,_tmp_396);
  GC_PUSH_ROOT(_tmp_396);
  GC_GET_REF(_tmp_396, HTTP_t_Static, _HTTP_t_CRLF);
  {
    struct java_io_OutputStream_ClassStruct *_tmp_method;
    GC_GET(_tmp_method, s, class);
    GC_PROC_CALL(_tmp_method->methodTbl->write_byteA, GC_PASS(s), GC_PASS(_tmp_396));
  }CHECK(0);
  GC_POP_ROOT(_tmp_396);
  GC_POP_ROOT(_tmp_395);
}
__branch_1:;
  GC_FUNC_LEAVE;
GC_PROC_END(HTTP_t_putLine_java_io_OutputStream_java_lang_String)


GC_PROC_BEGIN(se_lth_cs_eda040_realcamera_AxisM3006V_initializer,GC_PARAM(se_lth_cs_eda040_realcamera_AxisM3006V,this))
  GC_PARAM_REF(se_lth_cs_eda040_realcamera_AxisM3006V,this);
  GC_FUNC_ENTER;
  GC_PROC_CALL(java_lang_Object_initializer,GC_PASS(this));
  GC_FUNC_LEAVE;
GC_PROC_END(se_lth_cs_eda040_realcamera_AxisM3006V_initializer)


/* method: AxisM3006V.init() */
GC_PROC_BEGIN(
    se_lth_cs_eda040_realcamera_AxisM3006V_init,
    GC_PARAM(se_lth_cs_eda040_realcamera_AxisM3006V,this))
  GC_PARAM_REF(se_lth_cs_eda040_realcamera_AxisM3006V,this);
  GC_PUSH_PARAM(this);
  GC_FUNC_ENTER;
{
}
__branch_1:;
  GC_FUNC_LEAVE;
GC_PROC_END(se_lth_cs_eda040_realcamera_AxisM3006V_init)


/* method: AxisM3006V.connect() */
GC_VAR_FUNC_BEGIN(JBoolean,
    se_lth_cs_eda040_realcamera_AxisM3006V_connect,
    GC_PARAM(se_lth_cs_eda040_realcamera_AxisM3006V,this))
  GC_PARAM_REF(se_lth_cs_eda040_realcamera_AxisM3006V,this);
  GC_PUSH_PARAM(this);
  JBoolean __result;
  GC_FUNC_ENTER;
{
  JBoolean _tmp_397;
  {
    struct se_lth_cs_eda040_realcamera_AxisM3006V_ClassStruct *_tmp_method;
    GC_GET(_tmp_method, this, class);
    GC_VAR_FUNC_CALL(_tmp_397, _tmp_method->methodTbl->nativeConnect, GC_PASS(this));
  }CHECK(0);
  __result = _tmp_397;
  goto __branch_1;
}
__branch_1:;
  gc_result = __result;
  GC_FUNC_LEAVE;
GC_VAR_FUNC_END(JBoolean, se_lth_cs_eda040_realcamera_AxisM3006V_connect)


/* method: AxisM3006V.getJPEG(byte[], int) */
GC_VAR_FUNC_BEGIN(JInt,
    se_lth_cs_eda040_realcamera_AxisM3006V_getJPEG_byteA_int,
    GC_PARAM(se_lth_cs_eda040_realcamera_AxisM3006V,this),
    GC_PARAM(JByteArray,target),
    JInt offset)
  GC_PARAM_REF(se_lth_cs_eda040_realcamera_AxisM3006V,this);
  GC_PARAM_REF(JByteArray, target);
  GC_PUSH_PARAM(this);
  JInt __result;
  GC_FUNC_ENTER;
{
  JInt result;
  JInt value_pos;
  {
    struct se_lth_cs_eda040_realcamera_AxisM3006V_ClassStruct *_tmp_method;
    GC_GET(_tmp_method, this, class);
    GC_VAR_FUNC_CALL(result, _tmp_method->methodTbl->nativeGetJPEG_byteA_int, GC_PASS(this), GC_PASS(target), offset);
  }CHECK(0);
  value_pos = 68 + offset;
  JByte _tmp_398;
  GC_GET_VAR_ARRAY(_tmp_398, target, value_pos);
  GC_SET(this, _se_lth_cs_eda040_realcamera_AxisM3006V_motion, _tmp_398 == '1');
  __result = result;
  goto __branch_1;
}
__branch_1:;
  gc_result = __result;
  GC_FUNC_LEAVE;
GC_VAR_FUNC_END(JInt, se_lth_cs_eda040_realcamera_AxisM3006V_getJPEG_byteA_int)


/* method: AxisM3006V.getTime(byte[], int) */
GC_PROC_BEGIN(
    se_lth_cs_eda040_realcamera_AxisM3006V_getTime_byteA_int,
    GC_PARAM(se_lth_cs_eda040_realcamera_AxisM3006V,this),
    GC_PARAM(JByteArray,target),
    JInt offset)
  GC_PARAM_REF(se_lth_cs_eda040_realcamera_AxisM3006V,this);
  GC_PARAM_REF(JByteArray, target);
  GC_PUSH_PARAM(this);
  GC_FUNC_ENTER;
{
  JInt minLength;
  JInt _tmp_399;
  GC_GET(_tmp_399, se_lth_cs_eda040_realcamera_AxisM3006V_Static, _se_lth_cs_eda040_realcamera_AxisM3006V_TIME_ARRAY_SIZE);
  minLength = _tmp_399 + offset;
  JInt _tmp_400;
  GC_GET(_tmp_400, target, _JByteA_length);
  if (_tmp_400 < minLength)
  {
    GC_REF(java_lang_IllegalArgumentException,_tmp_401);
    GC_PUSH_ROOT(_tmp_401);
    GC_REF(java_lang_String,_tmp_402);
    GC_PUSH_ROOT(_tmp_402);
    GC_REF(java_lang_StringBuffer,_tmp_403);
    GC_PUSH_ROOT(_tmp_403);
    GC_REF_FUNC_CALL(_tmp_403, java_lang_StringBuffer_StringBuffer, &java_lang_StringBuffer_Class, GC_PASS(java_lang_StringBuffer_Layout));
    GC_REF(java_lang_String,_tmp_404);
    GC_PUSH_ROOT(_tmp_404);
    GC_REF(java_lang_StringBuffer,_tmp_405);
    GC_PUSH_ROOT(_tmp_405);
    GC_REF_FUNC_CALL(_tmp_405, java_lang_StringBuffer_StringBuffer, &java_lang_StringBuffer_Class, GC_PASS(java_lang_StringBuffer_Layout));
    GC_REF(java_lang_String,_tmp_406);
    GC_PUSH_ROOT(_tmp_406);
    GC_REF(java_lang_StringBuffer,_tmp_407);
    GC_PUSH_ROOT(_tmp_407);
    GC_REF_FUNC_CALL(_tmp_407, java_lang_StringBuffer_StringBuffer, &java_lang_StringBuffer_Class, GC_PASS(java_lang_StringBuffer_Layout));
    GC_REF(java_lang_String,_tmp_408);
    GC_PUSH_ROOT(_tmp_408);
    GC_REF_FUNC_CALL(_tmp_408, java_lang_String_String_CCharArray, &java_lang_String_Class, GC_PASS(java_lang_String_Layout), "Length of target is too short, is ");
    GC_REF_FUNC_CALL(_tmp_407, java_lang_StringBuffer_append_java_lang_Object, GC_PASS(_tmp_407), GC_PASS(_tmp_408));
    JInt _tmp_409;
    GC_GET(_tmp_409, target, _JByteA_length);
    GC_REF_FUNC_CALL(_tmp_407, java_lang_StringBuffer_append_int, GC_PASS(_tmp_407), _tmp_409);
    GC_REF_FUNC_CALL(_tmp_406, java_lang_StringBuffer_toString, GC_PASS(_tmp_407));
    GC_REF_FUNC_CALL(_tmp_405, java_lang_StringBuffer_append_java_lang_Object, GC_PASS(_tmp_405), GC_PASS(_tmp_406));
    GC_REF(java_lang_String,_tmp_410);
    GC_PUSH_ROOT(_tmp_410);
    GC_REF_FUNC_CALL(_tmp_410, java_lang_String_String_CCharArray, &java_lang_String_Class, GC_PASS(java_lang_String_Layout), " should be atleast");
    GC_REF_FUNC_CALL(_tmp_405, java_lang_StringBuffer_append_java_lang_Object, GC_PASS(_tmp_405), GC_PASS(_tmp_410));
    GC_REF_FUNC_CALL(_tmp_404, java_lang_StringBuffer_toString, GC_PASS(_tmp_405));
    GC_REF_FUNC_CALL(_tmp_403, java_lang_StringBuffer_append_java_lang_Object, GC_PASS(_tmp_403), GC_PASS(_tmp_404));
    GC_REF_FUNC_CALL(_tmp_403, java_lang_StringBuffer_append_int, GC_PASS(_tmp_403), minLength);
    GC_REF_FUNC_CALL(_tmp_402, java_lang_StringBuffer_toString, GC_PASS(_tmp_403));
    GC_REF_FUNC_CALL(_tmp_401, java_lang_IllegalArgumentException_IllegalArgumentException_java_lang_String, &java_lang_IllegalArgumentException_Class, GC_PASS(java_lang_IllegalArgumentException_Layout), GC_PASS(_tmp_402));CHECK(0);
    EXCEPTION_STORE_OBJ(_tmp_401);
    GC_POP_ROOT(_tmp_401);
    GC_POP_ROOT(_tmp_402);
    GC_POP_ROOT(_tmp_403);
    GC_POP_ROOT(_tmp_404);
    GC_POP_ROOT(_tmp_405);
    GC_POP_ROOT(_tmp_406);
    GC_POP_ROOT(_tmp_407);
    GC_POP_ROOT(_tmp_408);
    GC_POP_ROOT(_tmp_410);
    EXCEPTION_THROW(0,&java_lang_IllegalArgumentException_Class)
    GC_POP_ROOT(_tmp_410);
    GC_POP_ROOT(_tmp_408);
    GC_POP_ROOT(_tmp_407);
    GC_POP_ROOT(_tmp_406);
    GC_POP_ROOT(_tmp_405);
    GC_POP_ROOT(_tmp_404);
    GC_POP_ROOT(_tmp_403);
    GC_POP_ROOT(_tmp_402);
    GC_POP_ROOT(_tmp_401);
  }
  {
    struct se_lth_cs_eda040_realcamera_AxisM3006V_ClassStruct *_tmp_method;
    GC_GET(_tmp_method, this, class);
    GC_PROC_CALL(_tmp_method->methodTbl->nativeGetTime_byteA_int, GC_PASS(this), GC_PASS(target), offset);
  }CHECK(0);
}
__branch_1:;
  GC_FUNC_LEAVE;
GC_PROC_END(se_lth_cs_eda040_realcamera_AxisM3006V_getTime_byteA_int)


/* method: AxisM3006V.motionDetected() */
GC_VAR_FUNC_BEGIN(JBoolean,
    se_lth_cs_eda040_realcamera_AxisM3006V_motionDetected,
    GC_PARAM(se_lth_cs_eda040_realcamera_AxisM3006V,this))
  GC_PARAM_REF(se_lth_cs_eda040_realcamera_AxisM3006V,this);
  GC_PUSH_PARAM(this);
  JBoolean __result;
  GC_FUNC_ENTER;
{
  JBoolean _tmp_411;
  GC_GET(_tmp_411, this, _se_lth_cs_eda040_realcamera_AxisM3006V_motion);
  __result = _tmp_411;
  goto __branch_1;
}
__branch_1:;
  gc_result = __result;
  GC_FUNC_LEAVE;
GC_VAR_FUNC_END(JBoolean, se_lth_cs_eda040_realcamera_AxisM3006V_motionDetected)


/* constructor: AxisM3006V() */
GC_REF_FUNC_BEGIN(se_lth_cs_eda040_realcamera_AxisM3006V,
    se_lth_cs_eda040_realcamera_AxisM3006V_AxisM3006V,
    void* class,
    GC_PARAM(LayoutHead, layout))
  GC_PARAM_REF(LayoutHead, layout);
  GC_REF(se_lth_cs_eda040_realcamera_AxisM3006V,this);
  GC_PUSH_PARAM(layout);
  GC_FUNC_ENTER;
  GC_PUSH_ROOT(this);
  {
    GC_NEW(this,layout);
    GC_SET(this,class,class);
    GC_PROC_CALL(se_lth_cs_eda040_realcamera_AxisM3006V_initializer,GC_PASS(this));
    GC_PROC_CALL(se_lth_cs_eda040_realcamera_AxisM3006V_AxisM3006V_init, GC_PASS(this));
    GC_ASSIGN(gc_result, this);
  }
  GC_POP_ROOT(this);
  GC_FUNC_LEAVE;
  GC_POP_PARAM(layout);
GC_REF_FUNC_END(se_lth_cs_eda040_realcamera_AxisM3006V, se_lth_cs_eda040_realcamera_AxisM3006V_AxisM3006V)


/* init func: AxisM3006V() */
GC_PROC_BEGIN(
    se_lth_cs_eda040_realcamera_AxisM3006V_AxisM3006V_init,
    GC_PARAM(se_lth_cs_eda040_realcamera_AxisM3006V,this))
  GC_PARAM_REF(se_lth_cs_eda040_realcamera_AxisM3006V,this);
  GC_PUSH_PARAM(this);
  GC_FUNC_ENTER;
  {
    GC_PROC_CALL(java_lang_Object_Object_init, GC_PASS(this));CHECK(0);
    {
    }
  }
  __branch_1:;
  GC_FUNC_LEAVE;
  GC_POP_PARAM(this);
GC_PROC_END(se_lth_cs_eda040_realcamera_AxisM3006V_AxisM3006V_init)


GC_PROC_BEGIN(java_lang_InterruptedException_initializer,GC_PARAM(java_lang_InterruptedException,this))
  GC_PARAM_REF(java_lang_InterruptedException,this);
  GC_FUNC_ENTER;
  GC_PROC_CALL(java_lang_Exception_initializer,GC_PASS(this));
  GC_FUNC_LEAVE;
GC_PROC_END(java_lang_InterruptedException_initializer)


/* constructor: InterruptedException() */
GC_REF_FUNC_BEGIN(java_lang_InterruptedException,
    java_lang_InterruptedException_InterruptedException,
    void* class,
    GC_PARAM(LayoutHead, layout))
  GC_PARAM_REF(LayoutHead, layout);
  GC_REF(java_lang_InterruptedException,this);
  GC_PUSH_PARAM(layout);
  GC_FUNC_ENTER;
  GC_PUSH_ROOT(this);
  {
    GC_NEW(this,layout);
    GC_SET(this,class,class);
    GC_PROC_CALL(java_lang_InterruptedException_initializer,GC_PASS(this));
    GC_PROC_CALL(java_lang_InterruptedException_InterruptedException_init, GC_PASS(this));
    GC_ASSIGN(gc_result, this);
  }
  GC_POP_ROOT(this);
  GC_FUNC_LEAVE;
  GC_POP_PARAM(layout);
GC_REF_FUNC_END(java_lang_InterruptedException, java_lang_InterruptedException_InterruptedException)


/* init func: InterruptedException() */
GC_PROC_BEGIN(
    java_lang_InterruptedException_InterruptedException_init,
    GC_PARAM(java_lang_InterruptedException,this))
  GC_PARAM_REF(java_lang_InterruptedException,this);
  GC_PUSH_PARAM(this);
  GC_FUNC_ENTER;
  {
    GC_PROC_CALL(java_lang_Exception_Exception_init, GC_PASS(this));CHECK(0);
    {
    }
  }
  __branch_1:;
  GC_FUNC_LEAVE;
  GC_POP_PARAM(this);
GC_PROC_END(java_lang_InterruptedException_InterruptedException_init)


GC_PROC_BEGIN(java_lang_Exception_initializer,GC_PARAM(java_lang_Exception,this))
  GC_PARAM_REF(java_lang_Exception,this);
  GC_FUNC_ENTER;
  GC_PROC_CALL(java_lang_Throwable_initializer,GC_PASS(this));
  GC_FUNC_LEAVE;
GC_PROC_END(java_lang_Exception_initializer)


/* constructor: Exception() */
GC_REF_FUNC_BEGIN(java_lang_Exception,
    java_lang_Exception_Exception,
    void* class,
    GC_PARAM(LayoutHead, layout))
  GC_PARAM_REF(LayoutHead, layout);
  GC_REF(java_lang_Exception,this);
  GC_PUSH_PARAM(layout);
  GC_FUNC_ENTER;
  GC_PUSH_ROOT(this);
  {
    GC_NEW(this,layout);
    GC_SET(this,class,class);
    GC_PROC_CALL(java_lang_Exception_initializer,GC_PASS(this));
    GC_PROC_CALL(java_lang_Exception_Exception_init, GC_PASS(this));
    GC_ASSIGN(gc_result, this);
  }
  GC_POP_ROOT(this);
  GC_FUNC_LEAVE;
  GC_POP_PARAM(layout);
GC_REF_FUNC_END(java_lang_Exception, java_lang_Exception_Exception)


/* init func: Exception() */
GC_PROC_BEGIN(
    java_lang_Exception_Exception_init,
    GC_PARAM(java_lang_Exception,this))
  GC_PARAM_REF(java_lang_Exception,this);
  GC_PUSH_PARAM(this);
  GC_FUNC_ENTER;
  {
    GC_PROC_CALL(java_lang_Throwable_Throwable_init, GC_PASS(this));CHECK(0);
    {
    }
  }
  __branch_1:;
  GC_FUNC_LEAVE;
  GC_POP_PARAM(this);
GC_PROC_END(java_lang_Exception_Exception_init)


/* constructor: Exception(String s) */
GC_REF_FUNC_BEGIN(java_lang_Exception,
    java_lang_Exception_Exception_java_lang_String,
    void* class,
    GC_PARAM(LayoutHead, layout),
    GC_PARAM(java_lang_String,s))
  GC_PARAM_REF(LayoutHead, layout);
  GC_PARAM_REF(java_lang_String, s);
  GC_REF(java_lang_Exception,this);
  GC_PUSH_PARAM(layout);
  GC_FUNC_ENTER;
  GC_PUSH_ROOT(this);
  {
    GC_NEW(this,layout);
    GC_SET(this,class,class);
    GC_PROC_CALL(java_lang_Exception_initializer,GC_PASS(this));
    GC_PROC_CALL(java_lang_Exception_Exception_java_lang_String_init, GC_PASS(this), GC_PASS(s));
    GC_ASSIGN(gc_result, this);
  }
  GC_POP_ROOT(this);
  GC_FUNC_LEAVE;
  GC_POP_PARAM(layout);
GC_REF_FUNC_END(java_lang_Exception, java_lang_Exception_Exception_java_lang_String)


/* init func: Exception(String s) */
GC_PROC_BEGIN(
    java_lang_Exception_Exception_java_lang_String_init,
    GC_PARAM(java_lang_Exception,this),
    GC_PARAM(java_lang_String,s))
  GC_PARAM_REF(java_lang_Exception,this);
  GC_PARAM_REF(java_lang_String, s);
  GC_PUSH_PARAM(this);
  GC_FUNC_ENTER;
  {
    GC_PROC_CALL(java_lang_Throwable_Throwable_java_lang_String_init, GC_PASS(this),GC_PASS(s));CHECK(0);
    {
    }
  }
  __branch_1:;
  GC_FUNC_LEAVE;
  GC_POP_PARAM(this);
GC_PROC_END(java_lang_Exception_Exception_java_lang_String_init)


/* constructor: Exception(String s, Throwable cause) */
GC_REF_FUNC_BEGIN(java_lang_Exception,
    java_lang_Exception_Exception_java_lang_String_java_lang_Throwable,
    void* class,
    GC_PARAM(LayoutHead, layout),
    GC_PARAM(java_lang_String,s),
    GC_PARAM(java_lang_Throwable,cause))
  GC_PARAM_REF(LayoutHead, layout);
  GC_PARAM_REF(java_lang_String, s);
  GC_PARAM_REF(java_lang_Throwable, cause);
  GC_REF(java_lang_Exception,this);
  GC_PUSH_PARAM(layout);
  GC_FUNC_ENTER;
  GC_PUSH_ROOT(this);
  {
    GC_NEW(this,layout);
    GC_SET(this,class,class);
    GC_PROC_CALL(java_lang_Exception_initializer,GC_PASS(this));
    GC_PROC_CALL(java_lang_Exception_Exception_java_lang_String_java_lang_Throwable_init, GC_PASS(this), GC_PASS(s), GC_PASS(cause));
    GC_ASSIGN(gc_result, this);
  }
  GC_POP_ROOT(this);
  GC_FUNC_LEAVE;
  GC_POP_PARAM(layout);
GC_REF_FUNC_END(java_lang_Exception, java_lang_Exception_Exception_java_lang_String_java_lang_Throwable)


/* init func: Exception(String s, Throwable cause) */
GC_PROC_BEGIN(
    java_lang_Exception_Exception_java_lang_String_java_lang_Throwable_init,
    GC_PARAM(java_lang_Exception,this),
    GC_PARAM(java_lang_String,s),
    GC_PARAM(java_lang_Throwable,cause))
  GC_PARAM_REF(java_lang_Exception,this);
  GC_PARAM_REF(java_lang_String, s);
  GC_PARAM_REF(java_lang_Throwable, cause);
  GC_PUSH_PARAM(this);
  GC_FUNC_ENTER;
  {
    GC_PROC_CALL(java_lang_Throwable_Throwable_java_lang_String_java_lang_Throwable_init, GC_PASS(this),GC_PASS(s),GC_PASS(cause));CHECK(0);
    {
    }
  }
  __branch_1:;
  GC_FUNC_LEAVE;
  GC_POP_PARAM(this);
GC_PROC_END(java_lang_Exception_Exception_java_lang_String_java_lang_Throwable_init)


/* constructor: Exception(Throwable cause) */
GC_REF_FUNC_BEGIN(java_lang_Exception,
    java_lang_Exception_Exception_java_lang_Throwable,
    void* class,
    GC_PARAM(LayoutHead, layout),
    GC_PARAM(java_lang_Throwable,cause))
  GC_PARAM_REF(LayoutHead, layout);
  GC_PARAM_REF(java_lang_Throwable, cause);
  GC_REF(java_lang_Exception,this);
  GC_PUSH_PARAM(layout);
  GC_FUNC_ENTER;
  GC_PUSH_ROOT(this);
  {
    GC_NEW(this,layout);
    GC_SET(this,class,class);
    GC_PROC_CALL(java_lang_Exception_initializer,GC_PASS(this));
    GC_PROC_CALL(java_lang_Exception_Exception_java_lang_Throwable_init, GC_PASS(this), GC_PASS(cause));
    GC_ASSIGN(gc_result, this);
  }
  GC_POP_ROOT(this);
  GC_FUNC_LEAVE;
  GC_POP_PARAM(layout);
GC_REF_FUNC_END(java_lang_Exception, java_lang_Exception_Exception_java_lang_Throwable)


/* init func: Exception(Throwable cause) */
GC_PROC_BEGIN(
    java_lang_Exception_Exception_java_lang_Throwable_init,
    GC_PARAM(java_lang_Exception,this),
    GC_PARAM(java_lang_Throwable,cause))
  GC_PARAM_REF(java_lang_Exception,this);
  GC_PARAM_REF(java_lang_Throwable, cause);
  GC_PUSH_PARAM(this);
  GC_FUNC_ENTER;
  {
    GC_PROC_CALL(java_lang_Throwable_Throwable_java_lang_Throwable_init, GC_PASS(this),GC_PASS(cause));CHECK(0);
    {
    }
  }
  __branch_1:;
  GC_FUNC_LEAVE;
  GC_POP_PARAM(this);
GC_PROC_END(java_lang_Exception_Exception_java_lang_Throwable_init)


GC_PROC_BEGIN(java_lang_StringBuilder_initializer,GC_PARAM(java_lang_StringBuilder,this))
  GC_PARAM_REF(java_lang_StringBuilder,this);
  GC_FUNC_ENTER;
  GC_PROC_CALL(java_lang_Object_initializer,GC_PASS(this));
  GC_FUNC_LEAVE;
GC_PROC_END(java_lang_StringBuilder_initializer)


/* method: StringBuilder.toString() */
GC_REF_FUNC_BEGIN(java_lang_String,
    java_lang_StringBuilder_toString,
    GC_PARAM(java_lang_StringBuilder,this))
  GC_PARAM_REF(java_lang_StringBuilder,this);
  GC_PUSH_PARAM(this);
  GC_REF(java_lang_String, __result);
  GC_PUSH_ROOT(__result);
  GC_FUNC_ENTER;
{
  GC_REF(java_lang_String,_tmp_412);
  GC_PUSH_ROOT(_tmp_412);
  GC_REF_FUNC_CALL(_tmp_412, java_lang_String_String_java_lang_StringBuilder, &java_lang_String_Class, GC_PASS(java_lang_String_Layout), GC_PASS(this));CHECK(0);
GC_ASSIGN(__result, _tmp_412);
  GC_POP_ROOT(_tmp_412);
  goto __branch_1;
}
__branch_1:;
  GC_ASSIGN(gc_result, __result);
  GC_POP_ROOT(__result);
  GC_FUNC_LEAVE;
GC_REF_FUNC_END(java_lang_String, java_lang_StringBuilder_toString)


GC_PROC_BEGIN(java_lang_StringBuffer_initializer,GC_PARAM(java_lang_StringBuffer,this))
  GC_PARAM_REF(java_lang_StringBuffer,this);
  GC_FUNC_ENTER;
  GC_PROC_CALL(java_lang_Object_initializer,GC_PASS(this));
  GC_FUNC_LEAVE;
GC_PROC_END(java_lang_StringBuffer_initializer)


/* constructor: StringBuffer() */
GC_REF_FUNC_BEGIN(java_lang_StringBuffer,
    java_lang_StringBuffer_StringBuffer,
    void* class,
    GC_PARAM(LayoutHead, layout))
  GC_PARAM_REF(LayoutHead, layout);
  GC_REF(java_lang_StringBuffer,this);
  GC_PUSH_PARAM(layout);
  GC_FUNC_ENTER;
  GC_PUSH_ROOT(this);
  {
    GC_NEW(this,layout);
    GC_SET(this,class,class);
    GC_PROC_CALL(java_lang_StringBuffer_initializer,GC_PASS(this));
    GC_PROC_CALL(java_lang_StringBuffer_StringBuffer_init, GC_PASS(this));
    GC_ASSIGN(gc_result, this);
  }
  GC_POP_ROOT(this);
  GC_FUNC_LEAVE;
  GC_POP_PARAM(layout);
GC_REF_FUNC_END(java_lang_StringBuffer, java_lang_StringBuffer_StringBuffer)


/* init func: StringBuffer() */
GC_PROC_BEGIN(
    java_lang_StringBuffer_StringBuffer_init,
    GC_PARAM(java_lang_StringBuffer,this))
  GC_PARAM_REF(java_lang_StringBuffer,this);
  GC_PUSH_PARAM(this);
  GC_FUNC_ENTER;
  {
    JInt _tmp_413;
    GC_GET(_tmp_413, java_lang_StringBuffer_Static, _java_lang_StringBuffer_DEFAULT_CAPACITY);
    GC_PROC_CALL(java_lang_StringBuffer_StringBuffer_int_init, GC_PASS(this),_tmp_413);CHECK(0);
    {
    }
  }
  __branch_1:;
  GC_FUNC_LEAVE;
  GC_POP_PARAM(this);
GC_PROC_END(java_lang_StringBuffer_StringBuffer_init)


/* constructor: StringBuffer(int capacity) */
GC_REF_FUNC_BEGIN(java_lang_StringBuffer,
    java_lang_StringBuffer_StringBuffer_int,
    void* class,
    GC_PARAM(LayoutHead, layout),
    JInt capacity)
  GC_PARAM_REF(LayoutHead, layout);
  GC_REF(java_lang_StringBuffer,this);
  GC_PUSH_PARAM(layout);
  GC_FUNC_ENTER;
  GC_PUSH_ROOT(this);
  {
    GC_NEW(this,layout);
    GC_SET(this,class,class);
    GC_PROC_CALL(java_lang_StringBuffer_initializer,GC_PASS(this));
    GC_PROC_CALL(java_lang_StringBuffer_StringBuffer_int_init, GC_PASS(this), capacity);
    GC_ASSIGN(gc_result, this);
  }
  GC_POP_ROOT(this);
  GC_FUNC_LEAVE;
  GC_POP_PARAM(layout);
GC_REF_FUNC_END(java_lang_StringBuffer, java_lang_StringBuffer_StringBuffer_int)


/* init func: StringBuffer(int capacity) */
GC_PROC_BEGIN(
    java_lang_StringBuffer_StringBuffer_int_init,
    GC_PARAM(java_lang_StringBuffer,this),
    JInt capacity)
  GC_PARAM_REF(java_lang_StringBuffer,this);
  GC_PUSH_PARAM(this);
  GC_FUNC_ENTER;
  {
    GC_PROC_CALL(java_lang_Object_Object_init, GC_PASS(this));CHECK(0);
    {
      GC_REF(JCharArray,_tmp_414);
      GC_PUSH_ROOT(_tmp_414);
      GC_REF_FUNC_CALL(_tmp_414, newJCharArray, capacity);CHECK(0);
      GC_SET_REF(this, _java_lang_StringBuffer_value, _tmp_414);
      GC_POP_ROOT(_tmp_414);
    }
  }
  __branch_1:;
  GC_FUNC_LEAVE;
  GC_POP_PARAM(this);
GC_PROC_END(java_lang_StringBuffer_StringBuffer_int_init)


/* method: StringBuffer.append(java.lang.Object) */
GC_REF_FUNC_BEGIN(java_lang_StringBuffer,
    java_lang_StringBuffer_append_java_lang_Object,
    GC_PARAM(java_lang_StringBuffer,this),
    GC_PARAM(java_lang_Object,obj))
  GC_PARAM_REF(java_lang_StringBuffer,this);
  GC_PARAM_REF(java_lang_Object, obj);
  GC_PUSH_PARAM(this);
  GC_REF(java_lang_StringBuffer, __result);
  GC_PUSH_ROOT(__result);
  GC_FUNC_ENTER;
{
  GC_REF(java_lang_StringBuffer,_tmp_415);
  GC_PUSH_ROOT(_tmp_415);
  GC_REF(java_lang_String,_tmp_416);
  GC_PUSH_ROOT(_tmp_416);
  if (GC_IS_NULL(obj)) {
    GC_REF_FUNC_CALL(_tmp_416, java_lang_String_String_CCharArray, &java_lang_String_Class, GC_PASS(java_lang_String_Layout), "null");
  } else {
    {
      struct java_lang_Object_ClassStruct *_tmp_method;
      GC_GET(_tmp_method, obj, class);
      GC_REF_FUNC_CALL(_tmp_416, _tmp_method->methodTbl->toString, GC_PASS(obj));
    }CHECK(0);
  }
  {
    struct java_lang_StringBuffer_ClassStruct *_tmp_method;
    GC_GET(_tmp_method, this, class);
    GC_REF_FUNC_CALL(_tmp_415, _tmp_method->methodTbl->append_java_lang_String, GC_PASS(this), GC_PASS(_tmp_416));
  }CHECK(0);
GC_ASSIGN(__result, _tmp_415);
  GC_POP_ROOT(_tmp_415);
  GC_POP_ROOT(_tmp_416);
  goto __branch_1;
}
__branch_1:;
  GC_ASSIGN(gc_result, __result);
  GC_POP_ROOT(__result);
  GC_FUNC_LEAVE;
GC_REF_FUNC_END(java_lang_StringBuffer, java_lang_StringBuffer_append_java_lang_Object)


/* method: StringBuffer.append(java.lang.String) */
GC_REF_FUNC_BEGIN(java_lang_StringBuffer,
    java_lang_StringBuffer_append_java_lang_String,
    GC_PARAM(java_lang_StringBuffer,this),
    GC_PARAM(java_lang_String,str))
  GC_PARAM_REF(java_lang_StringBuffer,this);
  GC_PARAM_REF(java_lang_String, str);
  GC_PUSH_PARAM(this);
  GC_REF(java_lang_StringBuffer, __result);
  GC_PUSH_ROOT(__result);
  GC_FUNC_ENTER;
  MONITOR_ENTER(this);
{
  JInt len;
  if (GC_IS_NULL(str))
  {
    GC_REF_FUNC_CALL(str, java_lang_String_String_CCharArray, &java_lang_String_Class, GC_PASS(java_lang_String_Layout), "null");
  }
  GC_GET(len, str, _java_lang_String_count);
  JInt _tmp_417;
  GC_GET(_tmp_417, this, _java_lang_StringBuffer_count);
  {
    struct java_lang_StringBuffer_ClassStruct *_tmp_method;
    GC_GET(_tmp_method, this, class);
    GC_PROC_CALL(_tmp_method->methodTbl->ensureCapacity_unsynchronized_int, GC_PASS(this), _tmp_417 + len);
  }CHECK(0);
  GC_REF(JCharArray,_tmp_418);
  GC_PUSH_ROOT(_tmp_418);
  GC_GET_REF(_tmp_418, this, _java_lang_StringBuffer_value);
  JInt _tmp_419;
  GC_GET(_tmp_419, this, _java_lang_StringBuffer_count);
  {
    struct java_lang_String_ClassStruct *_tmp_method;
    GC_GET(_tmp_method, str, class);
    GC_PROC_CALL(_tmp_method->methodTbl->getChars_int_int_charA_int, GC_PASS(str), 0, len, GC_PASS(_tmp_418), _tmp_419);
  }CHECK(0);
  JInt _tmp_420;
  GC_GET(_tmp_420, this, _java_lang_StringBuffer_count);
  GC_SET(this, _java_lang_StringBuffer_count, _tmp_420 + len);
GC_ASSIGN(__result, this);
  GC_POP_ROOT(_tmp_418);
  goto __branch_1;
}
__branch_1:;
  GC_ASSIGN(gc_result, __result);
  GC_POP_ROOT(__result);
  MONITOR_LEAVE(this);
  GC_FUNC_LEAVE;
GC_REF_FUNC_END(java_lang_StringBuffer, java_lang_StringBuffer_append_java_lang_String)


/* method: StringBuffer.append(java.lang.StringBuffer) */
GC_REF_FUNC_BEGIN(java_lang_StringBuffer,
    java_lang_StringBuffer_append_java_lang_StringBuffer,
    GC_PARAM(java_lang_StringBuffer,this),
    GC_PARAM(java_lang_StringBuffer,stringBuffer))
  GC_PARAM_REF(java_lang_StringBuffer,this);
  GC_PARAM_REF(java_lang_StringBuffer, stringBuffer);
  GC_PUSH_PARAM(this);
  GC_REF(java_lang_StringBuffer, __result);
  GC_PUSH_ROOT(__result);
  GC_FUNC_ENTER;
  MONITOR_ENTER(this);
{
  if (GC_IS_NULL(stringBuffer))
  {
    GC_REF(java_lang_StringBuffer,_tmp_421);
    GC_PUSH_ROOT(_tmp_421);
    GC_REF(java_lang_String,_tmp_422);
    GC_PUSH_ROOT(_tmp_422);
    GC_REF_FUNC_CALL(_tmp_422, java_lang_String_String_CCharArray, &java_lang_String_Class, GC_PASS(java_lang_String_Layout), "null");
    {
      struct java_lang_StringBuffer_ClassStruct *_tmp_method;
      GC_GET(_tmp_method, this, class);
      GC_REF_FUNC_CALL(_tmp_421, _tmp_method->methodTbl->append_java_lang_String, GC_PASS(this), GC_PASS(_tmp_422));
    }CHECK(0);
GC_ASSIGN(__result, _tmp_421);
    GC_POP_ROOT(_tmp_421);
    GC_POP_ROOT(_tmp_422);
    goto __branch_2;
    GC_POP_ROOT(_tmp_422);
    GC_POP_ROOT(_tmp_421);
  }
  EXCEPTION_TRY
  {
    GC_PROC_CALL(ljrt_monitor_enter, GC_PASS(stringBuffer));
    {
      JInt len;
      GC_GET(len, stringBuffer, _java_lang_StringBuffer_count);
      JInt _tmp_423;
      GC_GET(_tmp_423, this, _java_lang_StringBuffer_count);
      {
        struct java_lang_StringBuffer_ClassStruct *_tmp_method;
        GC_GET(_tmp_method, this, class);
        GC_PROC_CALL(_tmp_method->methodTbl->ensureCapacity_unsynchronized_int, GC_PASS(this), _tmp_423 + len);
      }CHECK(1);
      GC_REF(JCharArray,_tmp_424);
      GC_PUSH_ROOT(_tmp_424);
      GC_GET_REF(_tmp_424, stringBuffer, _java_lang_StringBuffer_value);
      GC_REF(JCharArray,_tmp_425);
      GC_PUSH_ROOT(_tmp_425);
      GC_GET_REF(_tmp_425, this, _java_lang_StringBuffer_value);
      JInt _tmp_426;
      GC_GET(_tmp_426, this, _java_lang_StringBuffer_count);
      GC_PROC_CALL(java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int, GC_PASS(_tmp_424), 0, GC_PASS(_tmp_425), _tmp_426, len);CHECK(1);
      JInt _tmp_427;
      GC_GET(_tmp_427, this, _java_lang_StringBuffer_count);
      GC_SET(this, _java_lang_StringBuffer_count, _tmp_427 + len);
      GC_POP_ROOT(_tmp_425);
      GC_POP_ROOT(_tmp_424);
    }
  }
  EXCEPTION_NO_CATCH(1)
  EXCEPTION_FINALLY
__branch_1:;
  {
    GC_PROC_CALL(ljrt_monitor_leave, GC_PASS(stringBuffer));
  }
  EXCEPTION_END(0)
GC_ASSIGN(__result, this);
  goto __branch_2;
}
__branch_2:;
  GC_ASSIGN(gc_result, __result);
  GC_POP_ROOT(__result);
  MONITOR_LEAVE(this);
  GC_FUNC_LEAVE;
GC_REF_FUNC_END(java_lang_StringBuffer, java_lang_StringBuffer_append_java_lang_StringBuffer)


/* method: StringBuffer.append(char[]) */
GC_REF_FUNC_BEGIN(java_lang_StringBuffer,
    java_lang_StringBuffer_append_charA,
    GC_PARAM(java_lang_StringBuffer,this),
    GC_PARAM(JCharArray,data))
  GC_PARAM_REF(java_lang_StringBuffer,this);
  GC_PARAM_REF(JCharArray, data);
  GC_PUSH_PARAM(this);
  GC_REF(java_lang_StringBuffer, __result);
  GC_PUSH_ROOT(__result);
  GC_FUNC_ENTER;
{
  GC_REF(java_lang_StringBuffer,_tmp_428);
  GC_PUSH_ROOT(_tmp_428);
  JInt _tmp_429;
  GC_GET(_tmp_429, data, _JCharA_length);
  {
    struct java_lang_StringBuffer_ClassStruct *_tmp_method;
    GC_GET(_tmp_method, this, class);
    GC_REF_FUNC_CALL(_tmp_428, _tmp_method->methodTbl->append_charA_int_int, GC_PASS(this), GC_PASS(data), 0, _tmp_429);
  }CHECK(0);
GC_ASSIGN(__result, _tmp_428);
  GC_POP_ROOT(_tmp_428);
  goto __branch_1;
}
__branch_1:;
  GC_ASSIGN(gc_result, __result);
  GC_POP_ROOT(__result);
  GC_FUNC_LEAVE;
GC_REF_FUNC_END(java_lang_StringBuffer, java_lang_StringBuffer_append_charA)


/* method: StringBuffer.append(char[], int, int) */
GC_REF_FUNC_BEGIN(java_lang_StringBuffer,
    java_lang_StringBuffer_append_charA_int_int,
    GC_PARAM(java_lang_StringBuffer,this),
    GC_PARAM(JCharArray,data),
    JInt offset,
    JInt count)
  GC_PARAM_REF(java_lang_StringBuffer,this);
  GC_PARAM_REF(JCharArray, data);
  GC_PUSH_PARAM(this);
  GC_REF(java_lang_StringBuffer, __result);
  GC_PUSH_ROOT(__result);
  GC_FUNC_ENTER;
  MONITOR_ENTER(this);
{
  JBoolean _tmp_430;
  JBoolean _tmp_431;
  if (offset < 0) {
    _tmp_431 = true;
  } else {
    if (count < 0) {
      _tmp_431 = true;
    } else {
      _tmp_431 = false;
    }
  }
  if (_tmp_431) {
    _tmp_430 = true;
  } else {
    JInt _tmp_432;
    GC_GET(_tmp_432, data, _JCharA_length);
    if (offset > _tmp_432 - count) {
      _tmp_430 = true;
    } else {
      _tmp_430 = false;
    }
  }
  if (_tmp_430)
  {
    GC_REF(java_lang_StringIndexOutOfBoundsException,_tmp_433);
    GC_PUSH_ROOT(_tmp_433);
    GC_REF_FUNC_CALL(_tmp_433, java_lang_StringIndexOutOfBoundsException_StringIndexOutOfBoundsException, &java_lang_StringIndexOutOfBoundsException_Class, GC_PASS(java_lang_StringIndexOutOfBoundsException_Layout));CHECK(0);
    EXCEPTION_STORE_OBJ(_tmp_433);
    GC_POP_ROOT(_tmp_433);
    EXCEPTION_THROW(0,&java_lang_StringIndexOutOfBoundsException_Class)
    GC_POP_ROOT(_tmp_433);
  }
  JInt _tmp_434;
  GC_GET(_tmp_434, this, _java_lang_StringBuffer_count);
  {
    struct java_lang_StringBuffer_ClassStruct *_tmp_method;
    GC_GET(_tmp_method, this, class);
    GC_PROC_CALL(_tmp_method->methodTbl->ensureCapacity_unsynchronized_int, GC_PASS(this), _tmp_434 + count);
  }CHECK(0);
  GC_REF(JCharArray,_tmp_435);
  GC_PUSH_ROOT(_tmp_435);
  GC_GET_REF(_tmp_435, this, _java_lang_StringBuffer_value);
  JInt _tmp_436;
  GC_GET(_tmp_436, this, _java_lang_StringBuffer_count);
  GC_PROC_CALL(java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int, GC_PASS(data), offset, GC_PASS(_tmp_435), _tmp_436, count);CHECK(0);
  JInt _tmp_437;
  GC_GET(_tmp_437, this, _java_lang_StringBuffer_count);
  GC_SET(this, _java_lang_StringBuffer_count, _tmp_437 + count);
GC_ASSIGN(__result, this);
  GC_POP_ROOT(_tmp_435);
  goto __branch_1;
}
__branch_1:;
  GC_ASSIGN(gc_result, __result);
  GC_POP_ROOT(__result);
  MONITOR_LEAVE(this);
  GC_FUNC_LEAVE;
GC_REF_FUNC_END(java_lang_StringBuffer, java_lang_StringBuffer_append_charA_int_int)


/* method: StringBuffer.append(boolean) */
GC_REF_FUNC_BEGIN(java_lang_StringBuffer,
    java_lang_StringBuffer_append_boolean,
    GC_PARAM(java_lang_StringBuffer,this),
    JBoolean bool)
  GC_PARAM_REF(java_lang_StringBuffer,this);
  GC_PUSH_PARAM(this);
  GC_REF(java_lang_StringBuffer, __result);
  GC_PUSH_ROOT(__result);
  GC_FUNC_ENTER;
{
  if (bool)
  {
    GC_REF(java_lang_StringBuffer,_tmp_438);
    GC_PUSH_ROOT(_tmp_438);
    GC_REF(java_lang_String,_tmp_439);
    GC_PUSH_ROOT(_tmp_439);
    GC_REF_FUNC_CALL(_tmp_439, java_lang_String_String_CCharArray, &java_lang_String_Class, GC_PASS(java_lang_String_Layout), "true");
    {
      struct java_lang_StringBuffer_ClassStruct *_tmp_method;
      GC_GET(_tmp_method, this, class);
      GC_REF_FUNC_CALL(_tmp_438, _tmp_method->methodTbl->append_java_lang_String, GC_PASS(this), GC_PASS(_tmp_439));
    }CHECK(0);
GC_ASSIGN(__result, _tmp_438);
    GC_POP_ROOT(_tmp_438);
    GC_POP_ROOT(_tmp_439);
    goto __branch_1;
  }
  else
  {
    GC_REF(java_lang_StringBuffer,_tmp_440);
    GC_PUSH_ROOT(_tmp_440);
    GC_REF(java_lang_String,_tmp_441);
    GC_PUSH_ROOT(_tmp_441);
    GC_REF_FUNC_CALL(_tmp_441, java_lang_String_String_CCharArray, &java_lang_String_Class, GC_PASS(java_lang_String_Layout), "false");
    {
      struct java_lang_StringBuffer_ClassStruct *_tmp_method;
      GC_GET(_tmp_method, this, class);
      GC_REF_FUNC_CALL(_tmp_440, _tmp_method->methodTbl->append_java_lang_String, GC_PASS(this), GC_PASS(_tmp_441));
    }CHECK(0);
GC_ASSIGN(__result, _tmp_440);
    GC_POP_ROOT(_tmp_440);
    GC_POP_ROOT(_tmp_441);
    goto __branch_1;
  }
}
__branch_1:;
  GC_ASSIGN(gc_result, __result);
  GC_POP_ROOT(__result);
  GC_FUNC_LEAVE;
GC_REF_FUNC_END(java_lang_StringBuffer, java_lang_StringBuffer_append_boolean)


/* method: StringBuffer.append(char) */
GC_REF_FUNC_BEGIN(java_lang_StringBuffer,
    java_lang_StringBuffer_append_char,
    GC_PARAM(java_lang_StringBuffer,this),
    JChar ch)
  GC_PARAM_REF(java_lang_StringBuffer,this);
  GC_PUSH_PARAM(this);
  GC_REF(java_lang_StringBuffer, __result);
  GC_PUSH_ROOT(__result);
  GC_FUNC_ENTER;
  MONITOR_ENTER(this);
{
  JInt _tmp_442;
  GC_GET(_tmp_442, this, _java_lang_StringBuffer_count);
  {
    struct java_lang_StringBuffer_ClassStruct *_tmp_method;
    GC_GET(_tmp_method, this, class);
    GC_PROC_CALL(_tmp_method->methodTbl->ensureCapacity_unsynchronized_int, GC_PASS(this), _tmp_442 + 1);
  }CHECK(0);
  GC_REF(JCharArray,_tmp_443);
  GC_PUSH_ROOT(_tmp_443);
  GC_GET_REF(_tmp_443, this, _java_lang_StringBuffer_value);
  JInt _tmp_444;
  GC_GET(_tmp_444, this, _java_lang_StringBuffer_count);
  GC_SET_VAR_ARRAY(_tmp_443, _tmp_444, ch);
  JInt _tmp_445;
  GC_GET(_tmp_445, this, _java_lang_StringBuffer_count);
  GC_SET(this, _java_lang_StringBuffer_count, _tmp_445 + 1);
GC_ASSIGN(__result, this);
  GC_POP_ROOT(_tmp_443);
  goto __branch_1;
}
__branch_1:;
  GC_ASSIGN(gc_result, __result);
  GC_POP_ROOT(__result);
  MONITOR_LEAVE(this);
  GC_FUNC_LEAVE;
GC_REF_FUNC_END(java_lang_StringBuffer, java_lang_StringBuffer_append_char)


/* method: StringBuffer.append(int) */
GC_REF_FUNC_BEGIN(java_lang_StringBuffer,
    java_lang_StringBuffer_append_int,
    GC_PARAM(java_lang_StringBuffer,this),
    JInt inum)
  GC_PARAM_REF(java_lang_StringBuffer,this);
  GC_PUSH_PARAM(this);
  GC_REF(java_lang_StringBuffer, __result);
  GC_PUSH_ROOT(__result);
  GC_FUNC_ENTER;
{
  GC_REF(java_lang_StringBuffer,_tmp_446);
  GC_PUSH_ROOT(_tmp_446);
  GC_REF(java_lang_String,_tmp_447);
  GC_PUSH_ROOT(_tmp_447);
  GC_REF_FUNC_CALL(_tmp_447, java_lang_String_valueOf_int, inum);CHECK(0);
  {
    struct java_lang_StringBuffer_ClassStruct *_tmp_method;
    GC_GET(_tmp_method, this, class);
    GC_REF_FUNC_CALL(_tmp_446, _tmp_method->methodTbl->append_java_lang_String, GC_PASS(this), GC_PASS(_tmp_447));
  }CHECK(0);
GC_ASSIGN(__result, _tmp_446);
  GC_POP_ROOT(_tmp_446);
  GC_POP_ROOT(_tmp_447);
  goto __branch_1;
}
__branch_1:;
  GC_ASSIGN(gc_result, __result);
  GC_POP_ROOT(__result);
  GC_FUNC_LEAVE;
GC_REF_FUNC_END(java_lang_StringBuffer, java_lang_StringBuffer_append_int)


/* method: StringBuffer.append(long) */
GC_REF_FUNC_BEGIN(java_lang_StringBuffer,
    java_lang_StringBuffer_append_long,
    GC_PARAM(java_lang_StringBuffer,this),
    JLong lnum)
  GC_PARAM_REF(java_lang_StringBuffer,this);
  GC_PUSH_PARAM(this);
  GC_REF(java_lang_StringBuffer, __result);
  GC_PUSH_ROOT(__result);
  GC_FUNC_ENTER;
{
  GC_REF(java_lang_StringBuffer,_tmp_448);
  GC_PUSH_ROOT(_tmp_448);
  GC_REF(java_lang_String,_tmp_449);
  GC_PUSH_ROOT(_tmp_449);
  GC_REF_FUNC_CALL(_tmp_449, java_lang_Long_toString_long_int, lnum, 10);CHECK(0);
  {
    struct java_lang_StringBuffer_ClassStruct *_tmp_method;
    GC_GET(_tmp_method, this, class);
    GC_REF_FUNC_CALL(_tmp_448, _tmp_method->methodTbl->append_java_lang_String, GC_PASS(this), GC_PASS(_tmp_449));
  }CHECK(0);
GC_ASSIGN(__result, _tmp_448);
  GC_POP_ROOT(_tmp_448);
  GC_POP_ROOT(_tmp_449);
  goto __branch_1;
}
__branch_1:;
  GC_ASSIGN(gc_result, __result);
  GC_POP_ROOT(__result);
  GC_FUNC_LEAVE;
GC_REF_FUNC_END(java_lang_StringBuffer, java_lang_StringBuffer_append_long)


/* method: StringBuffer.append(float) */
GC_REF_FUNC_BEGIN(java_lang_StringBuffer,
    java_lang_StringBuffer_append_float,
    GC_PARAM(java_lang_StringBuffer,this),
    JFloat fnum)
  GC_PARAM_REF(java_lang_StringBuffer,this);
  GC_PUSH_PARAM(this);
  GC_REF(java_lang_StringBuffer, __result);
  GC_PUSH_ROOT(__result);
  GC_FUNC_ENTER;
{
  GC_REF(java_lang_StringBuffer,_tmp_450);
  GC_PUSH_ROOT(_tmp_450);
  GC_REF(java_lang_String,_tmp_451);
  GC_PUSH_ROOT(_tmp_451);
  GC_REF_FUNC_CALL(_tmp_451, java_lang_Float_toString_float, fnum);CHECK(0);
  {
    struct java_lang_StringBuffer_ClassStruct *_tmp_method;
    GC_GET(_tmp_method, this, class);
    GC_REF_FUNC_CALL(_tmp_450, _tmp_method->methodTbl->append_java_lang_String, GC_PASS(this), GC_PASS(_tmp_451));
  }CHECK(0);
GC_ASSIGN(__result, _tmp_450);
  GC_POP_ROOT(_tmp_450);
  GC_POP_ROOT(_tmp_451);
  goto __branch_1;
}
__branch_1:;
  GC_ASSIGN(gc_result, __result);
  GC_POP_ROOT(__result);
  GC_FUNC_LEAVE;
GC_REF_FUNC_END(java_lang_StringBuffer, java_lang_StringBuffer_append_float)


/* method: StringBuffer.append(double) */
GC_REF_FUNC_BEGIN(java_lang_StringBuffer,
    java_lang_StringBuffer_append_double,
    GC_PARAM(java_lang_StringBuffer,this),
    JDouble dnum)
  GC_PARAM_REF(java_lang_StringBuffer,this);
  GC_PUSH_PARAM(this);
  GC_REF(java_lang_StringBuffer, __result);
  GC_PUSH_ROOT(__result);
  GC_FUNC_ENTER;
{
  GC_REF(java_lang_StringBuffer,_tmp_452);
  GC_PUSH_ROOT(_tmp_452);
  GC_REF(java_lang_String,_tmp_453);
  GC_PUSH_ROOT(_tmp_453);
  GC_REF_FUNC_CALL(_tmp_453, java_lang_Double_toString_double, dnum);CHECK(0);
  {
    struct java_lang_StringBuffer_ClassStruct *_tmp_method;
    GC_GET(_tmp_method, this, class);
    GC_REF_FUNC_CALL(_tmp_452, _tmp_method->methodTbl->append_java_lang_String, GC_PASS(this), GC_PASS(_tmp_453));
  }CHECK(0);
GC_ASSIGN(__result, _tmp_452);
  GC_POP_ROOT(_tmp_452);
  GC_POP_ROOT(_tmp_453);
  goto __branch_1;
}
__branch_1:;
  GC_ASSIGN(gc_result, __result);
  GC_POP_ROOT(__result);
  GC_FUNC_LEAVE;
GC_REF_FUNC_END(java_lang_StringBuffer, java_lang_StringBuffer_append_double)


/* method: StringBuffer.delete(int, int) */
GC_REF_FUNC_BEGIN(java_lang_StringBuffer,
    java_lang_StringBuffer_delete_int_int,
    GC_PARAM(java_lang_StringBuffer,this),
    JInt start,
    JInt end)
  GC_PARAM_REF(java_lang_StringBuffer,this);
  GC_PUSH_PARAM(this);
  GC_REF(java_lang_StringBuffer, __result);
  GC_PUSH_ROOT(__result);
  GC_FUNC_ENTER;
  MONITOR_ENTER(this);
{
  JBoolean _tmp_454;
  JBoolean _tmp_455;
  if (start < 0) {
    _tmp_455 = true;
  } else {
    JInt _tmp_456;
    GC_GET(_tmp_456, this, _java_lang_StringBuffer_count);
    if (start > _tmp_456) {
      _tmp_455 = true;
    } else {
      _tmp_455 = false;
    }
  }
  if (_tmp_455) {
    _tmp_454 = true;
  } else {
    if (start > end) {
      _tmp_454 = true;
    } else {
      _tmp_454 = false;
    }
  }
  if (_tmp_454)
  {
    GC_REF(java_lang_StringIndexOutOfBoundsException,_tmp_457);
    GC_PUSH_ROOT(_tmp_457);
    GC_REF_FUNC_CALL(_tmp_457, java_lang_StringIndexOutOfBoundsException_StringIndexOutOfBoundsException_int, &java_lang_StringIndexOutOfBoundsException_Class, GC_PASS(java_lang_StringIndexOutOfBoundsException_Layout), start);CHECK(0);
    EXCEPTION_STORE_OBJ(_tmp_457);
    GC_POP_ROOT(_tmp_457);
    EXCEPTION_THROW(0,&java_lang_StringIndexOutOfBoundsException_Class)
    GC_POP_ROOT(_tmp_457);
  }
  JInt _tmp_458;
  GC_GET(_tmp_458, this, _java_lang_StringBuffer_count);
  if (end > _tmp_458)
  {
    GC_GET(end, this, _java_lang_StringBuffer_count);
  }
  JInt _tmp_459;
  GC_GET(_tmp_459, this, _java_lang_StringBuffer_count);
  {
    struct java_lang_StringBuffer_ClassStruct *_tmp_method;
    GC_GET(_tmp_method, this, class);
    GC_PROC_CALL(_tmp_method->methodTbl->ensureCapacity_unsynchronized_int, GC_PASS(this), _tmp_459);
  }CHECK(0);
  JInt _tmp_460;
  GC_GET(_tmp_460, this, _java_lang_StringBuffer_count);
  if (_tmp_460 - end != 0)
  {
    GC_REF(JCharArray,_tmp_461);
    GC_PUSH_ROOT(_tmp_461);
    GC_GET_REF(_tmp_461, this, _java_lang_StringBuffer_value);
    GC_REF(JCharArray,_tmp_462);
    GC_PUSH_ROOT(_tmp_462);
    GC_GET_REF(_tmp_462, this, _java_lang_StringBuffer_value);
    JInt _tmp_463;
    GC_GET(_tmp_463, this, _java_lang_StringBuffer_count);
    GC_PROC_CALL(java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int, GC_PASS(_tmp_461), end, GC_PASS(_tmp_462), start, _tmp_463 - end);CHECK(0);
    GC_POP_ROOT(_tmp_462);
    GC_POP_ROOT(_tmp_461);
  }
  JInt _tmp_464;
  GC_GET(_tmp_464, this, _java_lang_StringBuffer_count);
  GC_SET(this, _java_lang_StringBuffer_count, _tmp_464 - end - start);
GC_ASSIGN(__result, this);
  goto __branch_1;
}
__branch_1:;
  GC_ASSIGN(gc_result, __result);
  GC_POP_ROOT(__result);
  MONITOR_LEAVE(this);
  GC_FUNC_LEAVE;
GC_REF_FUNC_END(java_lang_StringBuffer, java_lang_StringBuffer_delete_int_int)


/* method: StringBuffer.substring(int, int) */
GC_REF_FUNC_BEGIN(java_lang_String,
    java_lang_StringBuffer_substring_int_int,
    GC_PARAM(java_lang_StringBuffer,this),
    JInt beginIndex,
    JInt endIndex)
  GC_PARAM_REF(java_lang_StringBuffer,this);
  GC_PUSH_PARAM(this);
  GC_REF(java_lang_String, __result);
  GC_PUSH_ROOT(__result);
  GC_FUNC_ENTER;
  MONITOR_ENTER(this);
{
  GC_REF(java_lang_String,_tmp_465);
  GC_PUSH_ROOT(_tmp_465);
  GC_REF_FUNC_CALL(_tmp_465, java_lang_String_String, &java_lang_String_Class, GC_PASS(java_lang_String_Layout));CHECK(0);
GC_ASSIGN(__result, _tmp_465);
  GC_POP_ROOT(_tmp_465);
  goto __branch_1;
}
__branch_1:;
  GC_ASSIGN(gc_result, __result);
  GC_POP_ROOT(__result);
  MONITOR_LEAVE(this);
  GC_FUNC_LEAVE;
GC_REF_FUNC_END(java_lang_String, java_lang_StringBuffer_substring_int_int)


/* method: StringBuffer.insert(int, char[], int, int) */
GC_REF_FUNC_BEGIN(java_lang_StringBuffer,
    java_lang_StringBuffer_insert_int_charA_int_int,
    GC_PARAM(java_lang_StringBuffer,this),
    JInt offset,
    GC_PARAM(JCharArray,str),
    JInt str_offset,
    JInt len)
  GC_PARAM_REF(java_lang_StringBuffer,this);
  GC_PARAM_REF(JCharArray, str);
  GC_PUSH_PARAM(this);
  GC_REF(java_lang_StringBuffer, __result);
  GC_PUSH_ROOT(__result);
  GC_FUNC_ENTER;
  MONITOR_ENTER(this);
{
  JBoolean _tmp_466;
  JBoolean _tmp_467;
  JBoolean _tmp_468;
  JBoolean _tmp_469;
  if (offset < 0) {
    _tmp_469 = true;
  } else {
    JInt _tmp_470;
    GC_GET(_tmp_470, this, _java_lang_StringBuffer_count);
    if (offset > _tmp_470) {
      _tmp_469 = true;
    } else {
      _tmp_469 = false;
    }
  }
  if (_tmp_469) {
    _tmp_468 = true;
  } else {
    if (len < 0) {
      _tmp_468 = true;
    } else {
      _tmp_468 = false;
    }
  }
  if (_tmp_468) {
    _tmp_467 = true;
  } else {
    if (str_offset < 0) {
      _tmp_467 = true;
    } else {
      _tmp_467 = false;
    }
  }
  if (_tmp_467) {
    _tmp_466 = true;
  } else {
    JInt _tmp_471;
    GC_GET(_tmp_471, str, _JCharA_length);
    if (str_offset > _tmp_471 - len) {
      _tmp_466 = true;
    } else {
      _tmp_466 = false;
    }
  }
  if (_tmp_466)
  {
    GC_REF(java_lang_StringIndexOutOfBoundsException,_tmp_472);
    GC_PUSH_ROOT(_tmp_472);
    GC_REF_FUNC_CALL(_tmp_472, java_lang_StringIndexOutOfBoundsException_StringIndexOutOfBoundsException, &java_lang_StringIndexOutOfBoundsException_Class, GC_PASS(java_lang_StringIndexOutOfBoundsException_Layout));CHECK(0);
    EXCEPTION_STORE_OBJ(_tmp_472);
    GC_POP_ROOT(_tmp_472);
    EXCEPTION_THROW(0,&java_lang_StringIndexOutOfBoundsException_Class)
    GC_POP_ROOT(_tmp_472);
  }
  JInt _tmp_473;
  GC_GET(_tmp_473, this, _java_lang_StringBuffer_count);
  {
    struct java_lang_StringBuffer_ClassStruct *_tmp_method;
    GC_GET(_tmp_method, this, class);
    GC_PROC_CALL(_tmp_method->methodTbl->ensureCapacity_unsynchronized_int, GC_PASS(this), _tmp_473 + len);
  }CHECK(0);
  GC_REF(JCharArray,_tmp_474);
  GC_PUSH_ROOT(_tmp_474);
  GC_GET_REF(_tmp_474, this, _java_lang_StringBuffer_value);
  GC_REF(JCharArray,_tmp_475);
  GC_PUSH_ROOT(_tmp_475);
  GC_GET_REF(_tmp_475, this, _java_lang_StringBuffer_value);
  JInt _tmp_476;
  GC_GET(_tmp_476, this, _java_lang_StringBuffer_count);
  GC_PROC_CALL(java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int, GC_PASS(_tmp_474), offset, GC_PASS(_tmp_475), offset + len, _tmp_476 - offset);CHECK(0);
  GC_REF(JCharArray,_tmp_477);
  GC_PUSH_ROOT(_tmp_477);
  GC_GET_REF(_tmp_477, this, _java_lang_StringBuffer_value);
  GC_PROC_CALL(java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int, GC_PASS(str), str_offset, GC_PASS(_tmp_477), offset, len);CHECK(0);
  JInt _tmp_478;
  GC_GET(_tmp_478, this, _java_lang_StringBuffer_count);
  GC_SET(this, _java_lang_StringBuffer_count, _tmp_478 + len);
GC_ASSIGN(__result, this);
  GC_POP_ROOT(_tmp_474);
  GC_POP_ROOT(_tmp_475);
  GC_POP_ROOT(_tmp_477);
  goto __branch_1;
}
__branch_1:;
  GC_ASSIGN(gc_result, __result);
  GC_POP_ROOT(__result);
  MONITOR_LEAVE(this);
  GC_FUNC_LEAVE;
GC_REF_FUNC_END(java_lang_StringBuffer, java_lang_StringBuffer_insert_int_charA_int_int)


/* method: StringBuffer.insert(int, java.lang.String) */
GC_REF_FUNC_BEGIN(java_lang_StringBuffer,
    java_lang_StringBuffer_insert_int_java_lang_String,
    GC_PARAM(java_lang_StringBuffer,this),
    JInt offset,
    GC_PARAM(java_lang_String,str))
  GC_PARAM_REF(java_lang_StringBuffer,this);
  GC_PARAM_REF(java_lang_String, str);
  GC_PUSH_PARAM(this);
  GC_REF(java_lang_StringBuffer, __result);
  GC_PUSH_ROOT(__result);
  GC_FUNC_ENTER;
  MONITOR_ENTER(this);
{
  JInt len;
  JBoolean _tmp_479;
  if (offset < 0) {
    _tmp_479 = true;
  } else {
    JInt _tmp_480;
    GC_GET(_tmp_480, this, _java_lang_StringBuffer_count);
    if (offset > _tmp_480) {
      _tmp_479 = true;
    } else {
      _tmp_479 = false;
    }
  }
  if (_tmp_479)
  {
    GC_REF(java_lang_StringIndexOutOfBoundsException,_tmp_481);
    GC_PUSH_ROOT(_tmp_481);
    GC_REF_FUNC_CALL(_tmp_481, java_lang_StringIndexOutOfBoundsException_StringIndexOutOfBoundsException_int, &java_lang_StringIndexOutOfBoundsException_Class, GC_PASS(java_lang_StringIndexOutOfBoundsException_Layout), offset);CHECK(0);
    EXCEPTION_STORE_OBJ(_tmp_481);
    GC_POP_ROOT(_tmp_481);
    EXCEPTION_THROW(0,&java_lang_StringIndexOutOfBoundsException_Class)
    GC_POP_ROOT(_tmp_481);
  }
  if (GC_IS_NULL(str))
  {
    GC_REF_FUNC_CALL(str, java_lang_String_String_CCharArray, &java_lang_String_Class, GC_PASS(java_lang_String_Layout), "null");
  }
  GC_GET(len, str, _java_lang_String_count);
  JInt _tmp_482;
  GC_GET(_tmp_482, this, _java_lang_StringBuffer_count);
  {
    struct java_lang_StringBuffer_ClassStruct *_tmp_method;
    GC_GET(_tmp_method, this, class);
    GC_PROC_CALL(_tmp_method->methodTbl->ensureCapacity_unsynchronized_int, GC_PASS(this), _tmp_482 + len);
  }CHECK(0);
  GC_REF(JCharArray,_tmp_483);
  GC_PUSH_ROOT(_tmp_483);
  GC_GET_REF(_tmp_483, this, _java_lang_StringBuffer_value);
  GC_REF(JCharArray,_tmp_484);
  GC_PUSH_ROOT(_tmp_484);
  GC_GET_REF(_tmp_484, this, _java_lang_StringBuffer_value);
  JInt _tmp_485;
  GC_GET(_tmp_485, this, _java_lang_StringBuffer_count);
  GC_PROC_CALL(java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int, GC_PASS(_tmp_483), offset, GC_PASS(_tmp_484), offset + len, _tmp_485 - offset);CHECK(0);
  GC_REF(JCharArray,_tmp_486);
  GC_PUSH_ROOT(_tmp_486);
  GC_GET_REF(_tmp_486, this, _java_lang_StringBuffer_value);
  {
    struct java_lang_String_ClassStruct *_tmp_method;
    GC_GET(_tmp_method, str, class);
    GC_PROC_CALL(_tmp_method->methodTbl->getChars_int_int_charA_int, GC_PASS(str), 0, len, GC_PASS(_tmp_486), offset);
  }CHECK(0);
  JInt _tmp_487;
  GC_GET(_tmp_487, this, _java_lang_StringBuffer_count);
  GC_SET(this, _java_lang_StringBuffer_count, _tmp_487 + len);
GC_ASSIGN(__result, this);
  GC_POP_ROOT(_tmp_483);
  GC_POP_ROOT(_tmp_484);
  GC_POP_ROOT(_tmp_486);
  goto __branch_1;
}
__branch_1:;
  GC_ASSIGN(gc_result, __result);
  GC_POP_ROOT(__result);
  MONITOR_LEAVE(this);
  GC_FUNC_LEAVE;
GC_REF_FUNC_END(java_lang_StringBuffer, java_lang_StringBuffer_insert_int_java_lang_String)


/* method: StringBuffer.indexOf(java.lang.String, int) */
GC_VAR_FUNC_BEGIN(JInt,
    java_lang_StringBuffer_indexOf_java_lang_String_int,
    GC_PARAM(java_lang_StringBuffer,this),
    GC_PARAM(java_lang_String,str),
    JInt fromIndex)
  GC_PARAM_REF(java_lang_StringBuffer,this);
  GC_PARAM_REF(java_lang_String, str);
  GC_PUSH_PARAM(this);
  JInt __result;
  GC_FUNC_ENTER;
  MONITOR_ENTER(this);
{
  JInt limit;
  if (fromIndex < 0)
  {
    fromIndex = 0;
  }
  JInt _tmp_488;
  GC_GET(_tmp_488, this, _java_lang_StringBuffer_count);
  JInt _tmp_489;
  GC_GET(_tmp_489, str, _java_lang_String_count);
  limit = _tmp_488 - _tmp_489;
  {
    {
      goto __cond_24;
__loop_24:;
      JBoolean _tmp_490;
      {
        struct java_lang_StringBuffer_ClassStruct *_tmp_method;
        GC_GET(_tmp_method, this, class);
        GC_VAR_FUNC_CALL(_tmp_490, _tmp_method->methodTbl->regionMatches_int_java_lang_String, GC_PASS(this), fromIndex, GC_PASS(str));
      }CHECK(0);
      if (_tmp_490)
      {
        __result = fromIndex;
        goto __branch_1;
      }
      fromIndex = fromIndex + 1;
__cond_24:;
      JBoolean _tmp_491;
      _tmp_491 = fromIndex <= limit;
      if (_tmp_491) {
        goto __loop_24;
      }
    }
  }
  __result = -1;
  goto __branch_1;
}
__branch_1:;
  gc_result = __result;
  MONITOR_LEAVE(this);
  GC_FUNC_LEAVE;
GC_VAR_FUNC_END(JInt, java_lang_StringBuffer_indexOf_java_lang_String_int)


/* method: StringBuffer.lastIndexOf(java.lang.String, int) */
GC_VAR_FUNC_BEGIN(JInt,
    java_lang_StringBuffer_lastIndexOf_java_lang_String_int,
    GC_PARAM(java_lang_StringBuffer,this),
    GC_PARAM(java_lang_String,str),
    JInt fromIndex)
  GC_PARAM_REF(java_lang_StringBuffer,this);
  GC_PARAM_REF(java_lang_String, str);
  GC_PUSH_PARAM(this);
  JInt __result;
  GC_FUNC_ENTER;
  MONITOR_ENTER(this);
{
  JInt _tmp_492;
  GC_GET(_tmp_492, this, _java_lang_StringBuffer_count);
  JInt _tmp_493;
  GC_GET(_tmp_493, str, _java_lang_String_count);
  GC_VAR_FUNC_CALL(fromIndex, java_lang_Math_min_int_int, fromIndex, _tmp_492 - _tmp_493);CHECK(0);
  {
    {
      goto __cond_25;
__loop_25:;
      JBoolean _tmp_494;
      {
        struct java_lang_StringBuffer_ClassStruct *_tmp_method;
        GC_GET(_tmp_method, this, class);
        GC_VAR_FUNC_CALL(_tmp_494, _tmp_method->methodTbl->regionMatches_int_java_lang_String, GC_PASS(this), fromIndex, GC_PASS(str));
      }CHECK(0);
      if (_tmp_494)
      {
        __result = fromIndex;
        goto __branch_1;
      }
      fromIndex = fromIndex - 1;
__cond_25:;
      JBoolean _tmp_495;
      _tmp_495 = fromIndex >= 0;
      if (_tmp_495) {
        goto __loop_25;
      }
    }
  }
  __result = -1;
  goto __branch_1;
}
__branch_1:;
  gc_result = __result;
  MONITOR_LEAVE(this);
  GC_FUNC_LEAVE;
GC_VAR_FUNC_END(JInt, java_lang_StringBuffer_lastIndexOf_java_lang_String_int)


/* method: StringBuffer.toString() */
GC_REF_FUNC_BEGIN(java_lang_String,
    java_lang_StringBuffer_toString,
    GC_PARAM(java_lang_StringBuffer,this))
  GC_PARAM_REF(java_lang_StringBuffer,this);
  GC_PUSH_PARAM(this);
  GC_REF(java_lang_String, __result);
  GC_PUSH_ROOT(__result);
  GC_FUNC_ENTER;
{
  GC_REF(java_lang_String,_tmp_496);
  GC_PUSH_ROOT(_tmp_496);
  GC_REF_FUNC_CALL(_tmp_496, java_lang_String_String_java_lang_StringBuffer, &java_lang_String_Class, GC_PASS(java_lang_String_Layout), GC_PASS(this));CHECK(0);
GC_ASSIGN(__result, _tmp_496);
  GC_POP_ROOT(_tmp_496);
  goto __branch_1;
}
__branch_1:;
  GC_ASSIGN(gc_result, __result);
  GC_POP_ROOT(__result);
  GC_FUNC_LEAVE;
GC_REF_FUNC_END(java_lang_String, java_lang_StringBuffer_toString)


/* method: StringBuffer.ensureCapacity_unsynchronized(int) */
GC_PROC_BEGIN(
    java_lang_StringBuffer_ensureCapacity_unsynchronized_int,
    GC_PARAM(java_lang_StringBuffer,this),
    JInt minimumCapacity)
  GC_PARAM_REF(java_lang_StringBuffer,this);
  GC_PUSH_PARAM(this);
  GC_FUNC_ENTER;
{
  JBoolean _tmp_497;
  JBoolean _tmp_498;
  GC_GET(_tmp_498, this, _java_lang_StringBuffer_shared);
  if (_tmp_498) {
    _tmp_497 = true;
  } else {
    JInt _tmp_499;
    GC_REF(JCharArray,_tmp_500);
    GC_PUSH_ROOT(_tmp_500);
    GC_GET_REF(_tmp_500, this, _java_lang_StringBuffer_value);
    GC_GET(_tmp_499, _tmp_500, _JCharA_length);
    if (minimumCapacity > _tmp_499) {
      _tmp_497 = true;
    } else {
      _tmp_497 = false;
    }
    GC_POP_ROOT(_tmp_500);
  }
  if (_tmp_497)
  {
    JInt max;
    GC_REF(JCharArray,nb);
    JInt _tmp_501;
    JInt _tmp_502;
    GC_REF(JCharArray,_tmp_503);
    GC_PUSH_ROOT(_tmp_503);
    GC_GET_REF(_tmp_503, this, _java_lang_StringBuffer_value);
    GC_GET(_tmp_502, _tmp_503, _JCharA_length);
    if (minimumCapacity > _tmp_502) {
      JInt _tmp_504;
      GC_REF(JCharArray,_tmp_505);
      GC_PUSH_ROOT(_tmp_505);
      GC_GET_REF(_tmp_505, this, _java_lang_StringBuffer_value);
      GC_GET(_tmp_504, _tmp_505, _JCharA_length);
      _tmp_501 = _tmp_504 * 2 + 2;
      GC_POP_ROOT(_tmp_505);
    } else {
      GC_REF(JCharArray,_tmp_506);
      GC_PUSH_ROOT(_tmp_506);
      GC_GET_REF(_tmp_506, this, _java_lang_StringBuffer_value);
      GC_GET(_tmp_501, _tmp_506, _JCharA_length);
      GC_POP_ROOT(_tmp_506);
    }
    max = _tmp_501;
    JInt _tmp_507;
    if (minimumCapacity < max) {
      _tmp_507 = max;
    } else {
      _tmp_507 = minimumCapacity;
    }
    minimumCapacity = _tmp_507;
    GC_PUSH_ROOT(nb);
    GC_REF_FUNC_CALL(nb, newJCharArray, minimumCapacity);CHECK(0);
    GC_REF(JCharArray,_tmp_508);
    GC_PUSH_ROOT(_tmp_508);
    GC_GET_REF(_tmp_508, this, _java_lang_StringBuffer_value);
    JInt _tmp_509;
    GC_GET(_tmp_509, this, _java_lang_StringBuffer_count);
    GC_PROC_CALL(java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int, GC_PASS(_tmp_508), 0, GC_PASS(nb), 0, _tmp_509);CHECK(0);
    GC_SET_REF(this, _java_lang_StringBuffer_value, nb);
    GC_SET(this, _java_lang_StringBuffer_shared, false);
    GC_POP_ROOT(_tmp_508);
    GC_POP_ROOT(nb);
    GC_POP_ROOT(_tmp_503);
  }
}
__branch_1:;
  GC_FUNC_LEAVE;
GC_PROC_END(java_lang_StringBuffer_ensureCapacity_unsynchronized_int)


/* method: StringBuffer.regionMatches(int, java.lang.String) */
GC_VAR_FUNC_BEGIN(JBoolean,
    java_lang_StringBuffer_regionMatches_int_java_lang_String,
    GC_PARAM(java_lang_StringBuffer,this),
    JInt toffset,
    GC_PARAM(java_lang_String,other))
  GC_PARAM_REF(java_lang_StringBuffer,this);
  GC_PARAM_REF(java_lang_String, other);
  GC_PUSH_PARAM(this);
  JBoolean __result;
  GC_FUNC_ENTER;
{
  JInt len;
  JInt index;
  GC_GET(len, other, _java_lang_String_count);
  GC_GET(index, other, _java_lang_String_offset);
  {
    goto __cond_26;
__loop_26:;
    JChar _tmp_510;
    GC_REF(JCharArray,_tmp_511);
    GC_PUSH_ROOT(_tmp_511);
    GC_GET_REF(_tmp_511, this, _java_lang_StringBuffer_value);
    JInt _tmp_512;
    _tmp_512 = toffset;
    toffset = _tmp_512 + 1;
    GC_GET_VAR_ARRAY(_tmp_510, _tmp_511, _tmp_512);
    JChar _tmp_513;
    GC_REF(JCharArray,_tmp_514);
    GC_PUSH_ROOT(_tmp_514);
    GC_GET_REF(_tmp_514, other, _java_lang_String_value);
    JInt _tmp_515;
    _tmp_515 = index;
    index = _tmp_515 + 1;
    GC_GET_VAR_ARRAY(_tmp_513, _tmp_514, _tmp_515);
    if (_tmp_510 != _tmp_513)
    {
      __result = false;
      GC_POP_ROOT(_tmp_511);
      GC_POP_ROOT(_tmp_514);
      goto __branch_1;
    }
    GC_POP_ROOT(_tmp_514);
    GC_POP_ROOT(_tmp_511);
__cond_26:;
    JBoolean _tmp_516;
    len = len - 1;
    _tmp_516 = len >= 0;
    if (_tmp_516) {
      goto __loop_26;
    }
  }
  __result = true;
  goto __branch_1;
}
__branch_1:;
  gc_result = __result;
  GC_FUNC_LEAVE;
GC_VAR_FUNC_END(JBoolean, java_lang_StringBuffer_regionMatches_int_java_lang_String)


GC_PROC_BEGIN(java_lang_StringIndexOutOfBoundsException_initializer,GC_PARAM(java_lang_StringIndexOutOfBoundsException,this))
  GC_PARAM_REF(java_lang_StringIndexOutOfBoundsException,this);
  GC_FUNC_ENTER;
  GC_PROC_CALL(java_lang_IndexOutOfBoundsException_initializer,GC_PASS(this));
  GC_FUNC_LEAVE;
GC_PROC_END(java_lang_StringIndexOutOfBoundsException_initializer)


/* constructor: StringIndexOutOfBoundsException() */
GC_REF_FUNC_BEGIN(java_lang_StringIndexOutOfBoundsException,
    java_lang_StringIndexOutOfBoundsException_StringIndexOutOfBoundsException,
    void* class,
    GC_PARAM(LayoutHead, layout))
  GC_PARAM_REF(LayoutHead, layout);
  GC_REF(java_lang_StringIndexOutOfBoundsException,this);
  GC_PUSH_PARAM(layout);
  GC_FUNC_ENTER;
  GC_PUSH_ROOT(this);
  {
    GC_NEW(this,layout);
    GC_SET(this,class,class);
    GC_PROC_CALL(java_lang_StringIndexOutOfBoundsException_initializer,GC_PASS(this));
    GC_PROC_CALL(java_lang_StringIndexOutOfBoundsException_StringIndexOutOfBoundsException_init, GC_PASS(this));
    GC_ASSIGN(gc_result, this);
  }
  GC_POP_ROOT(this);
  GC_FUNC_LEAVE;
  GC_POP_PARAM(layout);
GC_REF_FUNC_END(java_lang_StringIndexOutOfBoundsException, java_lang_StringIndexOutOfBoundsException_StringIndexOutOfBoundsException)


/* init func: StringIndexOutOfBoundsException() */
GC_PROC_BEGIN(
    java_lang_StringIndexOutOfBoundsException_StringIndexOutOfBoundsException_init,
    GC_PARAM(java_lang_StringIndexOutOfBoundsException,this))
  GC_PARAM_REF(java_lang_StringIndexOutOfBoundsException,this);
  GC_PUSH_PARAM(this);
  GC_FUNC_ENTER;
  {
    GC_PROC_CALL(java_lang_IndexOutOfBoundsException_IndexOutOfBoundsException_init, GC_PASS(this));CHECK(0);
    {
    }
  }
  __branch_1:;
  GC_FUNC_LEAVE;
  GC_POP_PARAM(this);
GC_PROC_END(java_lang_StringIndexOutOfBoundsException_StringIndexOutOfBoundsException_init)


/* constructor: StringIndexOutOfBoundsException(int index) */
GC_REF_FUNC_BEGIN(java_lang_StringIndexOutOfBoundsException,
    java_lang_StringIndexOutOfBoundsException_StringIndexOutOfBoundsException_int,
    void* class,
    GC_PARAM(LayoutHead, layout),
    JInt index)
  GC_PARAM_REF(LayoutHead, layout);
  GC_REF(java_lang_StringIndexOutOfBoundsException,this);
  GC_PUSH_PARAM(layout);
  GC_FUNC_ENTER;
  GC_PUSH_ROOT(this);
  {
    GC_NEW(this,layout);
    GC_SET(this,class,class);
    GC_PROC_CALL(java_lang_StringIndexOutOfBoundsException_initializer,GC_PASS(this));
    GC_PROC_CALL(java_lang_StringIndexOutOfBoundsException_StringIndexOutOfBoundsException_int_init, GC_PASS(this), index);
    GC_ASSIGN(gc_result, this);
  }
  GC_POP_ROOT(this);
  GC_FUNC_LEAVE;
  GC_POP_PARAM(layout);
GC_REF_FUNC_END(java_lang_StringIndexOutOfBoundsException, java_lang_StringIndexOutOfBoundsException_StringIndexOutOfBoundsException_int)


/* init func: StringIndexOutOfBoundsException(int index) */
GC_PROC_BEGIN(
    java_lang_StringIndexOutOfBoundsException_StringIndexOutOfBoundsException_int_init,
    GC_PARAM(java_lang_StringIndexOutOfBoundsException,this),
    JInt index)
  GC_PARAM_REF(java_lang_StringIndexOutOfBoundsException,this);
  GC_PUSH_PARAM(this);
  GC_FUNC_ENTER;
  {
    GC_REF(java_lang_String,_tmp_517);
    GC_PUSH_ROOT(_tmp_517);
    GC_REF(java_lang_StringBuffer,_tmp_518);
    GC_PUSH_ROOT(_tmp_518);
    GC_REF_FUNC_CALL(_tmp_518, java_lang_StringBuffer_StringBuffer, &java_lang_StringBuffer_Class, GC_PASS(java_lang_StringBuffer_Layout));
    GC_REF(java_lang_String,_tmp_519);
    GC_PUSH_ROOT(_tmp_519);
    GC_REF_FUNC_CALL(_tmp_519, java_lang_String_String_CCharArray, &java_lang_String_Class, GC_PASS(java_lang_String_Layout), "String index out of range: ");
    GC_REF_FUNC_CALL(_tmp_518, java_lang_StringBuffer_append_java_lang_Object, GC_PASS(_tmp_518), GC_PASS(_tmp_519));
    GC_REF_FUNC_CALL(_tmp_518, java_lang_StringBuffer_append_int, GC_PASS(_tmp_518), index);
    GC_REF_FUNC_CALL(_tmp_517, java_lang_StringBuffer_toString, GC_PASS(_tmp_518));
    GC_PROC_CALL(java_lang_IndexOutOfBoundsException_IndexOutOfBoundsException_java_lang_String_init, GC_PASS(this),GC_PASS(_tmp_517));CHECK(0);
    {
    }
    GC_POP_ROOT(_tmp_519);
    GC_POP_ROOT(_tmp_518);
    GC_POP_ROOT(_tmp_517);
  }
  __branch_1:;
  GC_FUNC_LEAVE;
  GC_POP_PARAM(this);
GC_PROC_END(java_lang_StringIndexOutOfBoundsException_StringIndexOutOfBoundsException_int_init)


GC_PROC_BEGIN(java_lang_IndexOutOfBoundsException_initializer,GC_PARAM(java_lang_IndexOutOfBoundsException,this))
  GC_PARAM_REF(java_lang_IndexOutOfBoundsException,this);
  GC_FUNC_ENTER;
  GC_PROC_CALL(java_lang_RuntimeException_initializer,GC_PASS(this));
  GC_FUNC_LEAVE;
GC_PROC_END(java_lang_IndexOutOfBoundsException_initializer)


/* constructor: IndexOutOfBoundsException() */
GC_REF_FUNC_BEGIN(java_lang_IndexOutOfBoundsException,
    java_lang_IndexOutOfBoundsException_IndexOutOfBoundsException,
    void* class,
    GC_PARAM(LayoutHead, layout))
  GC_PARAM_REF(LayoutHead, layout);
  GC_REF(java_lang_IndexOutOfBoundsException,this);
  GC_PUSH_PARAM(layout);
  GC_FUNC_ENTER;
  GC_PUSH_ROOT(this);
  {
    GC_NEW(this,layout);
    GC_SET(this,class,class);
    GC_PROC_CALL(java_lang_IndexOutOfBoundsException_initializer,GC_PASS(this));
    GC_PROC_CALL(java_lang_IndexOutOfBoundsException_IndexOutOfBoundsException_init, GC_PASS(this));
    GC_ASSIGN(gc_result, this);
  }
  GC_POP_ROOT(this);
  GC_FUNC_LEAVE;
  GC_POP_PARAM(layout);
GC_REF_FUNC_END(java_lang_IndexOutOfBoundsException, java_lang_IndexOutOfBoundsException_IndexOutOfBoundsException)


/* init func: IndexOutOfBoundsException() */
GC_PROC_BEGIN(
    java_lang_IndexOutOfBoundsException_IndexOutOfBoundsException_init,
    GC_PARAM(java_lang_IndexOutOfBoundsException,this))
  GC_PARAM_REF(java_lang_IndexOutOfBoundsException,this);
  GC_PUSH_PARAM(this);
  GC_FUNC_ENTER;
  {
    GC_PROC_CALL(java_lang_RuntimeException_RuntimeException_init, GC_PASS(this));CHECK(0);
    {
    }
  }
  __branch_1:;
  GC_FUNC_LEAVE;
  GC_POP_PARAM(this);
GC_PROC_END(java_lang_IndexOutOfBoundsException_IndexOutOfBoundsException_init)


/* constructor: IndexOutOfBoundsException(String s) */
GC_REF_FUNC_BEGIN(java_lang_IndexOutOfBoundsException,
    java_lang_IndexOutOfBoundsException_IndexOutOfBoundsException_java_lang_String,
    void* class,
    GC_PARAM(LayoutHead, layout),
    GC_PARAM(java_lang_String,s))
  GC_PARAM_REF(LayoutHead, layout);
  GC_PARAM_REF(java_lang_String, s);
  GC_REF(java_lang_IndexOutOfBoundsException,this);
  GC_PUSH_PARAM(layout);
  GC_FUNC_ENTER;
  GC_PUSH_ROOT(this);
  {
    GC_NEW(this,layout);
    GC_SET(this,class,class);
    GC_PROC_CALL(java_lang_IndexOutOfBoundsException_initializer,GC_PASS(this));
    GC_PROC_CALL(java_lang_IndexOutOfBoundsException_IndexOutOfBoundsException_java_lang_String_init, GC_PASS(this), GC_PASS(s));
    GC_ASSIGN(gc_result, this);
  }
  GC_POP_ROOT(this);
  GC_FUNC_LEAVE;
  GC_POP_PARAM(layout);
GC_REF_FUNC_END(java_lang_IndexOutOfBoundsException, java_lang_IndexOutOfBoundsException_IndexOutOfBoundsException_java_lang_String)


/* init func: IndexOutOfBoundsException(String s) */
GC_PROC_BEGIN(
    java_lang_IndexOutOfBoundsException_IndexOutOfBoundsException_java_lang_String_init,
    GC_PARAM(java_lang_IndexOutOfBoundsException,this),
    GC_PARAM(java_lang_String,s))
  GC_PARAM_REF(java_lang_IndexOutOfBoundsException,this);
  GC_PARAM_REF(java_lang_String, s);
  GC_PUSH_PARAM(this);
  GC_FUNC_ENTER;
  {
    GC_PROC_CALL(java_lang_RuntimeException_RuntimeException_java_lang_String_init, GC_PASS(this),GC_PASS(s));CHECK(0);
    {
    }
  }
  __branch_1:;
  GC_FUNC_LEAVE;
  GC_POP_PARAM(this);
GC_PROC_END(java_lang_IndexOutOfBoundsException_IndexOutOfBoundsException_java_lang_String_init)


GC_PROC_BEGIN(java_lang_RuntimeException_initializer,GC_PARAM(java_lang_RuntimeException,this))
  GC_PARAM_REF(java_lang_RuntimeException,this);
  GC_FUNC_ENTER;
  GC_PROC_CALL(java_lang_Exception_initializer,GC_PASS(this));
  GC_FUNC_LEAVE;
GC_PROC_END(java_lang_RuntimeException_initializer)


/* constructor: RuntimeException() */
GC_REF_FUNC_BEGIN(java_lang_RuntimeException,
    java_lang_RuntimeException_RuntimeException,
    void* class,
    GC_PARAM(LayoutHead, layout))
  GC_PARAM_REF(LayoutHead, layout);
  GC_REF(java_lang_RuntimeException,this);
  GC_PUSH_PARAM(layout);
  GC_FUNC_ENTER;
  GC_PUSH_ROOT(this);
  {
    GC_NEW(this,layout);
    GC_SET(this,class,class);
    GC_PROC_CALL(java_lang_RuntimeException_initializer,GC_PASS(this));
    GC_PROC_CALL(java_lang_RuntimeException_RuntimeException_init, GC_PASS(this));
    GC_ASSIGN(gc_result, this);
  }
  GC_POP_ROOT(this);
  GC_FUNC_LEAVE;
  GC_POP_PARAM(layout);
GC_REF_FUNC_END(java_lang_RuntimeException, java_lang_RuntimeException_RuntimeException)


/* init func: RuntimeException() */
GC_PROC_BEGIN(
    java_lang_RuntimeException_RuntimeException_init,
    GC_PARAM(java_lang_RuntimeException,this))
  GC_PARAM_REF(java_lang_RuntimeException,this);
  GC_PUSH_PARAM(this);
  GC_FUNC_ENTER;
  {
    GC_PROC_CALL(java_lang_Exception_Exception_init, GC_PASS(this));CHECK(0);
    {
    }
  }
  __branch_1:;
  GC_FUNC_LEAVE;
  GC_POP_PARAM(this);
GC_PROC_END(java_lang_RuntimeException_RuntimeException_init)


/* constructor: RuntimeException(String s) */
GC_REF_FUNC_BEGIN(java_lang_RuntimeException,
    java_lang_RuntimeException_RuntimeException_java_lang_String,
    void* class,
    GC_PARAM(LayoutHead, layout),
    GC_PARAM(java_lang_String,s))
  GC_PARAM_REF(LayoutHead, layout);
  GC_PARAM_REF(java_lang_String, s);
  GC_REF(java_lang_RuntimeException,this);
  GC_PUSH_PARAM(layout);
  GC_FUNC_ENTER;
  GC_PUSH_ROOT(this);
  {
    GC_NEW(this,layout);
    GC_SET(this,class,class);
    GC_PROC_CALL(java_lang_RuntimeException_initializer,GC_PASS(this));
    GC_PROC_CALL(java_lang_RuntimeException_RuntimeException_java_lang_String_init, GC_PASS(this), GC_PASS(s));
    GC_ASSIGN(gc_result, this);
  }
  GC_POP_ROOT(this);
  GC_FUNC_LEAVE;
  GC_POP_PARAM(layout);
GC_REF_FUNC_END(java_lang_RuntimeException, java_lang_RuntimeException_RuntimeException_java_lang_String)


/* init func: RuntimeException(String s) */
GC_PROC_BEGIN(
    java_lang_RuntimeException_RuntimeException_java_lang_String_init,
    GC_PARAM(java_lang_RuntimeException,this),
    GC_PARAM(java_lang_String,s))
  GC_PARAM_REF(java_lang_RuntimeException,this);
  GC_PARAM_REF(java_lang_String, s);
  GC_PUSH_PARAM(this);
  GC_FUNC_ENTER;
  {
    GC_PROC_CALL(java_lang_Exception_Exception_java_lang_String_init, GC_PASS(this),GC_PASS(s));CHECK(0);
    {
    }
  }
  __branch_1:;
  GC_FUNC_LEAVE;
  GC_POP_PARAM(this);
GC_PROC_END(java_lang_RuntimeException_RuntimeException_java_lang_String_init)


GC_PROC_BEGIN(java_lang_Character_initializer,GC_PARAM(java_lang_Character,this))
  GC_PARAM_REF(java_lang_Character,this);
  GC_FUNC_ENTER;
  GC_PROC_CALL(java_lang_Object_initializer,GC_PASS(this));
  GC_FUNC_LEAVE;
GC_PROC_END(java_lang_Character_initializer)


GC_PROC_BEGIN(java_lang_Character_Subset_initializer,GC_PARAM(java_lang_Character_Subset,this))
  GC_PARAM_REF(java_lang_Character_Subset,this);
  GC_FUNC_ENTER;
  GC_PROC_CALL(java_lang_Object_initializer,GC_PASS(this));
  GC_FUNC_LEAVE;
GC_PROC_END(java_lang_Character_Subset_initializer)


/* method: Subset.toString() */
GC_REF_FUNC_BEGIN(java_lang_String,
    java_lang_Character_Subset_toString,
    GC_PARAM(java_lang_Character_Subset,this))
  GC_PARAM_REF(java_lang_Character_Subset,this);
  GC_PUSH_PARAM(this);
  GC_REF(java_lang_String, __result);
  GC_PUSH_ROOT(__result);
  GC_FUNC_ENTER;
{
  GC_REF(java_lang_PhonyWriter,_tmp_520);
  GC_PUSH_ROOT(_tmp_520);
  GC_GET_REF(_tmp_520, java_lang_System_Static, _java_lang_System_out);
  GC_REF(java_lang_String,_tmp_521);
  GC_PUSH_ROOT(_tmp_521);
  GC_REF_FUNC_CALL(_tmp_521, java_lang_String_String_CCharArray, &java_lang_String_Class, GC_PASS(java_lang_String_Layout), "java.lang.Character.toString() not implemented");
  {
    struct java_lang_PhonyWriter_ClassStruct *_tmp_method;
    GC_GET(_tmp_method, _tmp_520, class);
    GC_PROC_CALL(_tmp_method->methodTbl->println_java_lang_String, GC_PASS(_tmp_520), GC_PASS(_tmp_521));
  }CHECK(0);
  GC_REF(java_lang_String,_tmp_522);
  GC_PUSH_ROOT(_tmp_522);
  GC_REF_FUNC_CALL(_tmp_522, java_lang_String_String_CCharArray, &java_lang_String_Class, GC_PASS(java_lang_String_Layout), "foo");
GC_ASSIGN(__result, _tmp_522);
  GC_POP_ROOT(_tmp_520);
  GC_POP_ROOT(_tmp_521);
  GC_POP_ROOT(_tmp_522);
  goto __branch_1;
}
__branch_1:;
  GC_ASSIGN(gc_result, __result);
  GC_POP_ROOT(__result);
  GC_FUNC_LEAVE;
GC_REF_FUNC_END(java_lang_String, java_lang_Character_Subset_toString)


/* method: Character.readChar(char) */
GC_VAR_FUNC_BEGIN(JChar,
    java_lang_Character_readChar_char,
    JChar ch)
  JChar __result;
  GC_FUNC_ENTER;
{
  __result = ch;
  goto __branch_1;
}
__branch_1:;
  gc_result = __result;
  GC_FUNC_LEAVE;
GC_VAR_FUNC_END(JChar, java_lang_Character_readChar_char)


/* method: Character.toString() */
GC_REF_FUNC_BEGIN(java_lang_String,
    java_lang_Character_toString,
    GC_PARAM(java_lang_Character,this))
  GC_PARAM_REF(java_lang_Character,this);
  GC_PUSH_PARAM(this);
  GC_REF(java_lang_String, __result);
  GC_PUSH_ROOT(__result);
  GC_FUNC_ENTER;
{
  GC_REF(JCharArray,tmp);
  GC_PUSH_ROOT(tmp);
  GC_REF_FUNC_CALL(tmp, newJCharArray, 1);CHECK(0);
  JChar _tmp_523;
  GC_GET(_tmp_523, this, _java_lang_Character_value);
  GC_SET_VAR_ARRAY(tmp, 0, _tmp_523);
  GC_REF(java_lang_String,_tmp_524);
  GC_PUSH_ROOT(_tmp_524);
  GC_REF_FUNC_CALL(_tmp_524, java_lang_String_String_JCharA_int_int_boolean, &java_lang_String_Class, GC_PASS(java_lang_String_Layout), GC_PASS(tmp), 0, 1, true);CHECK(0);
GC_ASSIGN(__result, _tmp_524);
  GC_POP_ROOT(tmp);
  GC_POP_ROOT(_tmp_524);
  goto __branch_1;
}
__branch_1:;
  GC_ASSIGN(gc_result, __result);
  GC_POP_ROOT(__result);
  GC_FUNC_LEAVE;
GC_REF_FUNC_END(java_lang_String, java_lang_Character_toString)


/* method: Character.toLowerCase(char) */
GC_VAR_FUNC_BEGIN(JChar,
    java_lang_Character_toLowerCase_char,
    JChar ch)
  JChar __result;
  GC_FUNC_ENTER;
{
  GC_REF(java_lang_PhonyWriter,_tmp_525);
  GC_PUSH_ROOT(_tmp_525);
  GC_GET_REF(_tmp_525, java_lang_System_Static, _java_lang_System_out);
  GC_REF(java_lang_String,_tmp_526);
  GC_PUSH_ROOT(_tmp_526);
  GC_REF_FUNC_CALL(_tmp_526, java_lang_String_String_CCharArray, &java_lang_String_Class, GC_PASS(java_lang_String_Layout), "java.lang.Character.toLowerCase(char) not implemented");
  {
    struct java_lang_PhonyWriter_ClassStruct *_tmp_method;
    GC_GET(_tmp_method, _tmp_525, class);
    GC_PROC_CALL(_tmp_method->methodTbl->println_java_lang_String, GC_PASS(_tmp_525), GC_PASS(_tmp_526));
  }CHECK(0);
  __result = 'a';
  GC_POP_ROOT(_tmp_525);
  GC_POP_ROOT(_tmp_526);
  goto __branch_1;
}
__branch_1:;
  gc_result = __result;
  GC_FUNC_LEAVE;
GC_VAR_FUNC_END(JChar, java_lang_Character_toLowerCase_char)


/* method: Character.toUpperCase(char) */
GC_VAR_FUNC_BEGIN(JChar,
    java_lang_Character_toUpperCase_char,
    JChar ch)
  JChar __result;
  GC_FUNC_ENTER;
{
  GC_REF(java_lang_PhonyWriter,_tmp_527);
  GC_PUSH_ROOT(_tmp_527);
  GC_GET_REF(_tmp_527, java_lang_System_Static, _java_lang_System_out);
  GC_REF(java_lang_String,_tmp_528);
  GC_PUSH_ROOT(_tmp_528);
  GC_REF_FUNC_CALL(_tmp_528, java_lang_String_String_CCharArray, &java_lang_String_Class, GC_PASS(java_lang_String_Layout), "java.lang.Character.toUpperCase(char) not implemented");
  {
    struct java_lang_PhonyWriter_ClassStruct *_tmp_method;
    GC_GET(_tmp_method, _tmp_527, class);
    GC_PROC_CALL(_tmp_method->methodTbl->println_java_lang_String, GC_PASS(_tmp_527), GC_PASS(_tmp_528));
  }CHECK(0);
  __result = 'a';
  GC_POP_ROOT(_tmp_527);
  GC_POP_ROOT(_tmp_528);
  goto __branch_1;
}
__branch_1:;
  gc_result = __result;
  GC_FUNC_LEAVE;
GC_VAR_FUNC_END(JChar, java_lang_Character_toUpperCase_char)


/* method: Character.digit(char, int) */
GC_VAR_FUNC_BEGIN(JInt,
    java_lang_Character_digit_char_int,
    JChar ch,
    JInt radix)
  JInt __result;
  GC_FUNC_ENTER;
{
  JChar attr;
  JBoolean _tmp_529;
  JInt _tmp_530;
  GC_GET(_tmp_530, java_lang_Character_Static, _java_lang_Character_MIN_RADIX);
  if (radix < _tmp_530) {
    _tmp_529 = true;
  } else {
    JInt _tmp_531;
    GC_GET(_tmp_531, java_lang_Character_Static, _java_lang_Character_MAX_RADIX);
    if (radix > _tmp_531) {
      _tmp_529 = true;
    } else {
      _tmp_529 = false;
    }
  }
  if (_tmp_529)
  {
    __result = -1;
    goto __branch_1;
  }
  GC_VAR_FUNC_CALL(attr, java_lang_Character_readChar_char, ch);CHECK(0);
  __result = attr - 48;
  goto __branch_1;
}
__branch_1:;
  gc_result = __result;
  GC_FUNC_LEAVE;
GC_VAR_FUNC_END(JInt, java_lang_Character_digit_char_int)


GC_PROC_BEGIN(java_lang_Math_initializer,GC_PARAM(java_lang_Math,this))
  GC_PARAM_REF(java_lang_Math,this);
  GC_FUNC_ENTER;
  GC_PROC_CALL(java_lang_Object_initializer,GC_PASS(this));
  GC_FUNC_LEAVE;
GC_PROC_END(java_lang_Math_initializer)


/* method: Math.min(int, int) */
GC_VAR_FUNC_BEGIN(JInt,
    java_lang_Math_min_int_int,
    JInt a,
    JInt b)
  JInt __result;
  GC_FUNC_ENTER;
{
  JInt _tmp_532;
  if ((a < b)) {
    _tmp_532 = a;
  } else {
    _tmp_532 = b;
  }
  __result = _tmp_532;
  goto __branch_1;
}
__branch_1:;
  gc_result = __result;
  GC_FUNC_LEAVE;
GC_VAR_FUNC_END(JInt, java_lang_Math_min_int_int)


GC_PROC_BEGIN(java_lang_Long_initializer,GC_PARAM(java_lang_Long,this))
  GC_PARAM_REF(java_lang_Long,this);
  GC_FUNC_ENTER;
  GC_PROC_CALL(java_lang_Number_initializer,GC_PASS(this));
  GC_FUNC_LEAVE;
GC_PROC_END(java_lang_Long_initializer)


/* method: Long.toString(long, int) */
GC_REF_FUNC_BEGIN(java_lang_String,
    java_lang_Long_toString_long_int,
    JLong num,
    JInt radix)
  GC_REF(java_lang_String, __result);
  GC_PUSH_ROOT(__result);
  GC_FUNC_ENTER;
{
  GC_REF(JCharArray,buffer);
  JInt i;
  JBoolean isNeg;
  JInt _tmp_533;
  _tmp_533 = (JInt) (num);  if (_tmp_533 == num)
  {
    GC_REF(java_lang_String,_tmp_534);
    GC_PUSH_ROOT(_tmp_534);
    JInt _tmp_535;
    _tmp_535 = (JInt) (num);    GC_REF_FUNC_CALL(_tmp_534, java_lang_Integer_toString_int_int, _tmp_535, radix);CHECK(0);
GC_ASSIGN(__result, _tmp_534);
    GC_POP_ROOT(_tmp_534);
    goto __branch_1;
    GC_POP_ROOT(_tmp_534);
  }
  JBoolean _tmp_536;
  JInt _tmp_537;
  GC_GET(_tmp_537, java_lang_Character_Static, _java_lang_Character_MIN_RADIX);
  if (radix < _tmp_537) {
    _tmp_536 = true;
  } else {
    JInt _tmp_538;
    GC_GET(_tmp_538, java_lang_Character_Static, _java_lang_Character_MAX_RADIX);
    if (radix > _tmp_538) {
      _tmp_536 = true;
    } else {
      _tmp_536 = false;
    }
  }
  if (_tmp_536)
  {
    radix = 10;
  }
  GC_PUSH_ROOT(buffer);
  GC_REF_FUNC_CALL(buffer, newJCharArray, 65);CHECK(0);
  i = 65;
  isNeg = false;
  if (num < 0)
  {
    isNeg = true;
    num = -num;
    if (num < 0)
    {
      i = i - 1;
      JChar _tmp_539;
      GC_REF(JCharArray,_tmp_540);
      GC_PUSH_ROOT(_tmp_540);
      GC_GET_REF(_tmp_540, java_lang_Number_Static, _java_lang_Number_digits);
      JInt _tmp_541;
      _tmp_541 = (JInt) ((-(num + radix) % radix));      GC_GET_VAR_ARRAY(_tmp_539, _tmp_540, _tmp_541);
      GC_SET_VAR_ARRAY(buffer, i, _tmp_539);
      num = -(num / radix);
      GC_POP_ROOT(_tmp_540);
    }
  }
  {
__loop_27:;
    {
      i = i - 1;
      JChar _tmp_542;
      GC_REF(JCharArray,_tmp_543);
      GC_PUSH_ROOT(_tmp_543);
      GC_GET_REF(_tmp_543, java_lang_Number_Static, _java_lang_Number_digits);
      JInt _tmp_544;
      _tmp_544 = (JInt) ((num % radix));      GC_GET_VAR_ARRAY(_tmp_542, _tmp_543, _tmp_544);
      GC_SET_VAR_ARRAY(buffer, i, _tmp_542);
      num = num / radix;
      GC_POP_ROOT(_tmp_543);
    }
    JBoolean _tmp_545;
    _tmp_545 = num > 0;
    if (_tmp_545) {
      goto __loop_27;
    }
  }
  if (isNeg)
  {
    i = i - 1;
    GC_SET_VAR_ARRAY(buffer, i, '-');
  }
  GC_REF(java_lang_String,_tmp_546);
  GC_PUSH_ROOT(_tmp_546);
  GC_REF_FUNC_CALL(_tmp_546, java_lang_String_String_JCharA_int_int_boolean, &java_lang_String_Class, GC_PASS(java_lang_String_Layout), GC_PASS(buffer), i, 65 - i, true);CHECK(0);
GC_ASSIGN(__result, _tmp_546);
  GC_POP_ROOT(buffer);
  GC_POP_ROOT(_tmp_546);
  goto __branch_1;
}
__branch_1:;
  GC_ASSIGN(gc_result, __result);
  GC_POP_ROOT(__result);
  GC_FUNC_LEAVE;
GC_REF_FUNC_END(java_lang_String, java_lang_Long_toString_long_int)


/* method: Long.toString(long) */
GC_REF_FUNC_BEGIN(java_lang_String,
    java_lang_Long_toString_long,
    JLong num)
  GC_REF(java_lang_String, __result);
  GC_PUSH_ROOT(__result);
  GC_FUNC_ENTER;
{
  GC_REF(java_lang_String,_tmp_547);
  GC_PUSH_ROOT(_tmp_547);
  GC_REF_FUNC_CALL(_tmp_547, java_lang_Long_toString_long_int, num, 10);CHECK(0);
GC_ASSIGN(__result, _tmp_547);
  GC_POP_ROOT(_tmp_547);
  goto __branch_1;
}
__branch_1:;
  GC_ASSIGN(gc_result, __result);
  GC_POP_ROOT(__result);
  GC_FUNC_LEAVE;
GC_REF_FUNC_END(java_lang_String, java_lang_Long_toString_long)


/* method: Long.toString() */
GC_REF_FUNC_BEGIN(java_lang_String,
    java_lang_Long_toString,
    GC_PARAM(java_lang_Long,this))
  GC_PARAM_REF(java_lang_Long,this);
  GC_PUSH_PARAM(this);
  GC_REF(java_lang_String, __result);
  GC_PUSH_ROOT(__result);
  GC_FUNC_ENTER;
{
  GC_REF(java_lang_String,_tmp_548);
  GC_PUSH_ROOT(_tmp_548);
  JLong _tmp_549;
  GC_GET(_tmp_549, this, _java_lang_Long_value);
  GC_REF_FUNC_CALL(_tmp_548, java_lang_Long_toString_long_int, _tmp_549, 10);CHECK(0);
GC_ASSIGN(__result, _tmp_548);
  GC_POP_ROOT(_tmp_548);
  goto __branch_1;
}
__branch_1:;
  GC_ASSIGN(gc_result, __result);
  GC_POP_ROOT(__result);
  GC_FUNC_LEAVE;
GC_REF_FUNC_END(java_lang_String, java_lang_Long_toString)


GC_PROC_BEGIN(java_lang_Float_initializer,GC_PARAM(java_lang_Float,this))
  GC_PARAM_REF(java_lang_Float,this);
  GC_FUNC_ENTER;
  GC_PROC_CALL(java_lang_Number_initializer,GC_PASS(this));
  GC_FUNC_LEAVE;
GC_PROC_END(java_lang_Float_initializer)


/* method: Float.toString() */
GC_REF_FUNC_BEGIN(java_lang_String,
    java_lang_Float_toString,
    GC_PARAM(java_lang_Float,this))
  GC_PARAM_REF(java_lang_Float,this);
  GC_PUSH_PARAM(this);
  GC_REF(java_lang_String, __result);
  GC_PUSH_ROOT(__result);
  GC_FUNC_ENTER;
{
  GC_REF(java_lang_String,_tmp_550);
  GC_PUSH_ROOT(_tmp_550);
  JFloat _tmp_551;
  GC_GET(_tmp_551, this, _java_lang_Float_value);
  GC_REF_FUNC_CALL(_tmp_550, java_lang_Float_toString_float, _tmp_551);CHECK(0);
GC_ASSIGN(__result, _tmp_550);
  GC_POP_ROOT(_tmp_550);
  goto __branch_1;
}
__branch_1:;
  GC_ASSIGN(gc_result, __result);
  GC_POP_ROOT(__result);
  GC_FUNC_LEAVE;
GC_REF_FUNC_END(java_lang_String, java_lang_Float_toString)


GC_PROC_BEGIN(java_lang_Double_initializer,GC_PARAM(java_lang_Double,this))
  GC_PARAM_REF(java_lang_Double,this);
  GC_FUNC_ENTER;
  GC_PROC_CALL(java_lang_Number_initializer,GC_PASS(this));
  GC_FUNC_LEAVE;
GC_PROC_END(java_lang_Double_initializer)


/* method: Double.toString() */
GC_REF_FUNC_BEGIN(java_lang_String,
    java_lang_Double_toString,
    GC_PARAM(java_lang_Double,this))
  GC_PARAM_REF(java_lang_Double,this);
  GC_PUSH_PARAM(this);
  GC_REF(java_lang_String, __result);
  GC_PUSH_ROOT(__result);
  GC_FUNC_ENTER;
{
  GC_REF(java_lang_String,_tmp_552);
  GC_PUSH_ROOT(_tmp_552);
  JDouble _tmp_553;
  GC_GET(_tmp_553, this, _java_lang_Double_value);
  GC_REF_FUNC_CALL(_tmp_552, java_lang_Double_toString_double, _tmp_553);CHECK(0);
GC_ASSIGN(__result, _tmp_552);
  GC_POP_ROOT(_tmp_552);
  goto __branch_1;
}
__branch_1:;
  GC_ASSIGN(gc_result, __result);
  GC_POP_ROOT(__result);
  GC_FUNC_LEAVE;
GC_REF_FUNC_END(java_lang_String, java_lang_Double_toString)


GC_PROC_BEGIN(java_lang_StackTraceElement_initializer,GC_PARAM(java_lang_StackTraceElement,this))
  GC_PARAM_REF(java_lang_StackTraceElement,this);
  GC_FUNC_ENTER;
  GC_PROC_CALL(java_lang_Object_initializer,GC_PASS(this));
  GC_FUNC_LEAVE;
GC_PROC_END(java_lang_StackTraceElement_initializer)


/* method: StackTraceElement.toString() */
GC_REF_FUNC_BEGIN(java_lang_String,
    java_lang_StackTraceElement_toString,
    GC_PARAM(java_lang_StackTraceElement,this))
  GC_PARAM_REF(java_lang_StackTraceElement,this);
  GC_PUSH_PARAM(this);
  GC_REF(java_lang_String, __result);
  GC_PUSH_ROOT(__result);
  GC_FUNC_ENTER;
{
  GC_REF(java_lang_StringBuffer,sb);
  GC_PUSH_ROOT(sb);
  GC_REF_FUNC_CALL(sb, java_lang_StringBuffer_StringBuffer, &java_lang_StringBuffer_Class, GC_PASS(java_lang_StringBuffer_Layout));CHECK(0);
  GC_REF(java_lang_String,_tmp_554);
  GC_PUSH_ROOT(_tmp_554);
  GC_GET_REF(_tmp_554, this, _java_lang_StackTraceElement_declaringClass);
  if (!(GC_IS_NULL(_tmp_554)))
  {
    GC_REF(java_lang_String,_tmp_555);
    GC_PUSH_ROOT(_tmp_555);
    GC_GET_REF(_tmp_555, this, _java_lang_StackTraceElement_declaringClass);
    {
      struct java_lang_StringBuffer_ClassStruct *_tmp_method;
      GC_GET(_tmp_method, sb, class);
      GC_REF_FUNC_CALL(___phonyObj___, _tmp_method->methodTbl->append_java_lang_String, GC_PASS(sb), GC_PASS(_tmp_555));
    }CHECK(0);
    GC_REF(java_lang_String,_tmp_556);
    GC_PUSH_ROOT(_tmp_556);
    GC_GET_REF(_tmp_556, this, _java_lang_StackTraceElement_methodName);
    if (!(GC_IS_NULL(_tmp_556)))
    {
      {
        struct java_lang_StringBuffer_ClassStruct *_tmp_method;
        GC_GET(_tmp_method, sb, class);
        GC_REF_FUNC_CALL(___phonyObj___, _tmp_method->methodTbl->append_char, GC_PASS(sb), '.');
      }CHECK(0);
    }
    GC_POP_ROOT(_tmp_556);
    GC_POP_ROOT(_tmp_555);
  }
  GC_REF(java_lang_String,_tmp_557);
  GC_PUSH_ROOT(_tmp_557);
  GC_GET_REF(_tmp_557, this, _java_lang_StackTraceElement_methodName);
  if (!(GC_IS_NULL(_tmp_557)))
  {
    GC_REF(java_lang_String,_tmp_558);
    GC_PUSH_ROOT(_tmp_558);
    GC_GET_REF(_tmp_558, this, _java_lang_StackTraceElement_methodName);
    {
      struct java_lang_StringBuffer_ClassStruct *_tmp_method;
      GC_GET(_tmp_method, sb, class);
      GC_REF_FUNC_CALL(___phonyObj___, _tmp_method->methodTbl->append_java_lang_String, GC_PASS(sb), GC_PASS(_tmp_558));
    }CHECK(0);
    GC_POP_ROOT(_tmp_558);
  }
  GC_REF(java_lang_String,_tmp_559);
  GC_PUSH_ROOT(_tmp_559);
  GC_REF_FUNC_CALL(_tmp_559, java_lang_String_String_CCharArray, &java_lang_String_Class, GC_PASS(java_lang_String_Layout), " (");
  {
    struct java_lang_StringBuffer_ClassStruct *_tmp_method;
    GC_GET(_tmp_method, sb, class);
    GC_REF_FUNC_CALL(___phonyObj___, _tmp_method->methodTbl->append_java_lang_String, GC_PASS(sb), GC_PASS(_tmp_559));
  }CHECK(0);
  GC_REF(java_lang_String,_tmp_560);
  GC_PUSH_ROOT(_tmp_560);
  GC_GET_REF(_tmp_560, this, _java_lang_StackTraceElement_fileName);
  if (!(GC_IS_NULL(_tmp_560)))
  {
    GC_REF(java_lang_String,_tmp_561);
    GC_PUSH_ROOT(_tmp_561);
    GC_GET_REF(_tmp_561, this, _java_lang_StackTraceElement_fileName);
    {
      struct java_lang_StringBuffer_ClassStruct *_tmp_method;
      GC_GET(_tmp_method, sb, class);
      GC_REF_FUNC_CALL(___phonyObj___, _tmp_method->methodTbl->append_java_lang_String, GC_PASS(sb), GC_PASS(_tmp_561));
    }CHECK(0);
    GC_POP_ROOT(_tmp_561);
  }
  else
  {
    GC_REF(java_lang_String,_tmp_562);
    GC_PUSH_ROOT(_tmp_562);
    JBoolean _tmp_563;
    GC_GET(_tmp_563, this, _java_lang_StackTraceElement_isNative);
    if (_tmp_563) {
      GC_REF_FUNC_CALL(_tmp_562, java_lang_String_String_CCharArray, &java_lang_String_Class, GC_PASS(java_lang_String_Layout), "Native Method");
    } else {
      GC_REF_FUNC_CALL(_tmp_562, java_lang_String_String_CCharArray, &java_lang_String_Class, GC_PASS(java_lang_String_Layout), "Unknown Source");
    }
    {
      struct java_lang_StringBuffer_ClassStruct *_tmp_method;
      GC_GET(_tmp_method, sb, class);
      GC_REF_FUNC_CALL(___phonyObj___, _tmp_method->methodTbl->append_java_lang_String, GC_PASS(sb), GC_PASS(_tmp_562));
    }CHECK(0);
    GC_POP_ROOT(_tmp_562);
  }
  JInt _tmp_564;
  GC_GET(_tmp_564, this, _java_lang_StackTraceElement_lineNumber);
  if (_tmp_564 >= 0)
  {
    GC_REF(java_lang_StringBuffer,_tmp_565);
    GC_PUSH_ROOT(_tmp_565);
    {
      struct java_lang_StringBuffer_ClassStruct *_tmp_method;
      GC_GET(_tmp_method, sb, class);
      GC_REF_FUNC_CALL(_tmp_565, _tmp_method->methodTbl->append_char, GC_PASS(sb), ':');
    }CHECK(0);
    JInt _tmp_566;
    GC_GET(_tmp_566, this, _java_lang_StackTraceElement_lineNumber);
    {
      struct java_lang_StringBuffer_ClassStruct *_tmp_method;
      GC_GET(_tmp_method, _tmp_565, class);
      GC_REF_FUNC_CALL(___phonyObj___, _tmp_method->methodTbl->append_int, GC_PASS(_tmp_565), _tmp_566);
    }CHECK(0);
    GC_POP_ROOT(_tmp_565);
  }
  {
    struct java_lang_StringBuffer_ClassStruct *_tmp_method;
    GC_GET(_tmp_method, sb, class);
    GC_REF_FUNC_CALL(___phonyObj___, _tmp_method->methodTbl->append_char, GC_PASS(sb), ')');
  }CHECK(0);
  GC_REF(java_lang_String,_tmp_567);
  GC_PUSH_ROOT(_tmp_567);
  {
    struct java_lang_StringBuffer_ClassStruct *_tmp_method;
    GC_GET(_tmp_method, sb, class);
    GC_REF_FUNC_CALL(_tmp_567, _tmp_method->methodTbl->toString, GC_PASS(sb));
  }CHECK(0);
GC_ASSIGN(__result, _tmp_567);
  GC_POP_ROOT(sb);
  GC_POP_ROOT(_tmp_554);
  GC_POP_ROOT(_tmp_557);
  GC_POP_ROOT(_tmp_559);
  GC_POP_ROOT(_tmp_560);
  GC_POP_ROOT(_tmp_567);
  goto __branch_1;
}
__branch_1:;
  GC_ASSIGN(gc_result, __result);
  GC_POP_ROOT(__result);
  GC_FUNC_LEAVE;
GC_REF_FUNC_END(java_lang_String, java_lang_StackTraceElement_toString)


GC_PROC_BEGIN(java_lang_IllegalArgumentException_initializer,GC_PARAM(java_lang_IllegalArgumentException,this))
  GC_PARAM_REF(java_lang_IllegalArgumentException,this);
  GC_FUNC_ENTER;
  GC_PROC_CALL(java_lang_RuntimeException_initializer,GC_PASS(this));
  GC_FUNC_LEAVE;
GC_PROC_END(java_lang_IllegalArgumentException_initializer)


/* constructor: IllegalArgumentException() */
GC_REF_FUNC_BEGIN(java_lang_IllegalArgumentException,
    java_lang_IllegalArgumentException_IllegalArgumentException,
    void* class,
    GC_PARAM(LayoutHead, layout))
  GC_PARAM_REF(LayoutHead, layout);
  GC_REF(java_lang_IllegalArgumentException,this);
  GC_PUSH_PARAM(layout);
  GC_FUNC_ENTER;
  GC_PUSH_ROOT(this);
  {
    GC_NEW(this,layout);
    GC_SET(this,class,class);
    GC_PROC_CALL(java_lang_IllegalArgumentException_initializer,GC_PASS(this));
    GC_PROC_CALL(java_lang_IllegalArgumentException_IllegalArgumentException_init, GC_PASS(this));
    GC_ASSIGN(gc_result, this);
  }
  GC_POP_ROOT(this);
  GC_FUNC_LEAVE;
  GC_POP_PARAM(layout);
GC_REF_FUNC_END(java_lang_IllegalArgumentException, java_lang_IllegalArgumentException_IllegalArgumentException)


/* init func: IllegalArgumentException() */
GC_PROC_BEGIN(
    java_lang_IllegalArgumentException_IllegalArgumentException_init,
    GC_PARAM(java_lang_IllegalArgumentException,this))
  GC_PARAM_REF(java_lang_IllegalArgumentException,this);
  GC_PUSH_PARAM(this);
  GC_FUNC_ENTER;
  {
    GC_PROC_CALL(java_lang_RuntimeException_RuntimeException_init, GC_PASS(this));CHECK(0);
    {
    }
  }
  __branch_1:;
  GC_FUNC_LEAVE;
  GC_POP_PARAM(this);
GC_PROC_END(java_lang_IllegalArgumentException_IllegalArgumentException_init)


/* constructor: IllegalArgumentException(String s) */
GC_REF_FUNC_BEGIN(java_lang_IllegalArgumentException,
    java_lang_IllegalArgumentException_IllegalArgumentException_java_lang_String,
    void* class,
    GC_PARAM(LayoutHead, layout),
    GC_PARAM(java_lang_String,s))
  GC_PARAM_REF(LayoutHead, layout);
  GC_PARAM_REF(java_lang_String, s);
  GC_REF(java_lang_IllegalArgumentException,this);
  GC_PUSH_PARAM(layout);
  GC_FUNC_ENTER;
  GC_PUSH_ROOT(this);
  {
    GC_NEW(this,layout);
    GC_SET(this,class,class);
    GC_PROC_CALL(java_lang_IllegalArgumentException_initializer,GC_PASS(this));
    GC_PROC_CALL(java_lang_IllegalArgumentException_IllegalArgumentException_java_lang_String_init, GC_PASS(this), GC_PASS(s));
    GC_ASSIGN(gc_result, this);
  }
  GC_POP_ROOT(this);
  GC_FUNC_LEAVE;
  GC_POP_PARAM(layout);
GC_REF_FUNC_END(java_lang_IllegalArgumentException, java_lang_IllegalArgumentException_IllegalArgumentException_java_lang_String)


/* init func: IllegalArgumentException(String s) */
GC_PROC_BEGIN(
    java_lang_IllegalArgumentException_IllegalArgumentException_java_lang_String_init,
    GC_PARAM(java_lang_IllegalArgumentException,this),
    GC_PARAM(java_lang_String,s))
  GC_PARAM_REF(java_lang_IllegalArgumentException,this);
  GC_PARAM_REF(java_lang_String, s);
  GC_PUSH_PARAM(this);
  GC_FUNC_ENTER;
  {
    GC_PROC_CALL(java_lang_RuntimeException_RuntimeException_java_lang_String_init, GC_PASS(this),GC_PASS(s));CHECK(0);
    {
    }
  }
  __branch_1:;
  GC_FUNC_LEAVE;
  GC_POP_PARAM(this);
GC_PROC_END(java_lang_IllegalArgumentException_IllegalArgumentException_java_lang_String_init)


GC_PROC_BEGIN(java_lang_IllegalStateException_initializer,GC_PARAM(java_lang_IllegalStateException,this))
  GC_PARAM_REF(java_lang_IllegalStateException,this);
  GC_FUNC_ENTER;
  GC_PROC_CALL(java_lang_RuntimeException_initializer,GC_PASS(this));
  GC_FUNC_LEAVE;
GC_PROC_END(java_lang_IllegalStateException_initializer)


/* constructor: IllegalStateException() */
GC_REF_FUNC_BEGIN(java_lang_IllegalStateException,
    java_lang_IllegalStateException_IllegalStateException,
    void* class,
    GC_PARAM(LayoutHead, layout))
  GC_PARAM_REF(LayoutHead, layout);
  GC_REF(java_lang_IllegalStateException,this);
  GC_PUSH_PARAM(layout);
  GC_FUNC_ENTER;
  GC_PUSH_ROOT(this);
  {
    GC_NEW(this,layout);
    GC_SET(this,class,class);
    GC_PROC_CALL(java_lang_IllegalStateException_initializer,GC_PASS(this));
    GC_PROC_CALL(java_lang_IllegalStateException_IllegalStateException_init, GC_PASS(this));
    GC_ASSIGN(gc_result, this);
  }
  GC_POP_ROOT(this);
  GC_FUNC_LEAVE;
  GC_POP_PARAM(layout);
GC_REF_FUNC_END(java_lang_IllegalStateException, java_lang_IllegalStateException_IllegalStateException)


/* init func: IllegalStateException() */
GC_PROC_BEGIN(
    java_lang_IllegalStateException_IllegalStateException_init,
    GC_PARAM(java_lang_IllegalStateException,this))
  GC_PARAM_REF(java_lang_IllegalStateException,this);
  GC_PUSH_PARAM(this);
  GC_FUNC_ENTER;
  {
    GC_PROC_CALL(java_lang_RuntimeException_RuntimeException_init, GC_PASS(this));CHECK(0);
    {
    }
  }
  __branch_1:;
  GC_FUNC_LEAVE;
  GC_POP_PARAM(this);
GC_PROC_END(java_lang_IllegalStateException_IllegalStateException_init)


GC_PROC_BEGIN(java_lang_ErrWriter_initializer,GC_PARAM(java_lang_ErrWriter,this))
  GC_PARAM_REF(java_lang_ErrWriter,this);
  GC_FUNC_ENTER;
  GC_PROC_CALL(java_io_PrintStream_initializer,GC_PASS(this));
  GC_FUNC_LEAVE;
GC_PROC_END(java_lang_ErrWriter_initializer)


/* constructor: ErrWriter() */
GC_REF_FUNC_BEGIN(java_lang_ErrWriter,
    java_lang_ErrWriter_ErrWriter,
    void* class,
    GC_PARAM(LayoutHead, layout))
  GC_PARAM_REF(LayoutHead, layout);
  GC_REF(java_lang_ErrWriter,this);
  GC_PUSH_PARAM(layout);
  GC_FUNC_ENTER;
  GC_PUSH_ROOT(this);
  {
    GC_NEW(this,layout);
    GC_SET(this,class,class);
    GC_PROC_CALL(java_lang_ErrWriter_initializer,GC_PASS(this));
    GC_PROC_CALL(java_lang_ErrWriter_ErrWriter_init, GC_PASS(this));
    GC_ASSIGN(gc_result, this);
  }
  GC_POP_ROOT(this);
  GC_FUNC_LEAVE;
  GC_POP_PARAM(layout);
GC_REF_FUNC_END(java_lang_ErrWriter, java_lang_ErrWriter_ErrWriter)


/* init func: ErrWriter() */
GC_PROC_BEGIN(
    java_lang_ErrWriter_ErrWriter_init,
    GC_PARAM(java_lang_ErrWriter,this))
  GC_PARAM_REF(java_lang_ErrWriter,this);
  GC_PUSH_PARAM(this);
  GC_FUNC_ENTER;
  {
    GC_PROC_CALL(java_io_PrintStream_PrintStream_java_io_OutputStream_init, GC_PASS(this),GC_PASS(JAVA_NULL));CHECK(0);
    {
    }
  }
  __branch_1:;
  GC_FUNC_LEAVE;
  GC_POP_PARAM(this);
GC_PROC_END(java_lang_ErrWriter_ErrWriter_init)


/* method: ErrWriter.flush() */
GC_PROC_BEGIN(
    java_lang_ErrWriter_flush,
    GC_PARAM(java_lang_ErrWriter,this))
  GC_PARAM_REF(java_lang_ErrWriter,this);
  GC_PUSH_PARAM(this);
  GC_FUNC_ENTER;
{
}
__branch_1:;
  GC_FUNC_LEAVE;
GC_PROC_END(java_lang_ErrWriter_flush)


GC_PROC_BEGIN(java_lang_NullPointerException_initializer,GC_PARAM(java_lang_NullPointerException,this))
  GC_PARAM_REF(java_lang_NullPointerException,this);
  GC_FUNC_ENTER;
  GC_PROC_CALL(java_lang_RuntimeException_initializer,GC_PASS(this));
  GC_FUNC_LEAVE;
GC_PROC_END(java_lang_NullPointerException_initializer)


/* constructor: NullPointerException(String s) */
GC_REF_FUNC_BEGIN(java_lang_NullPointerException,
    java_lang_NullPointerException_NullPointerException_java_lang_String,
    void* class,
    GC_PARAM(LayoutHead, layout),
    GC_PARAM(java_lang_String,s))
  GC_PARAM_REF(LayoutHead, layout);
  GC_PARAM_REF(java_lang_String, s);
  GC_REF(java_lang_NullPointerException,this);
  GC_PUSH_PARAM(layout);
  GC_FUNC_ENTER;
  GC_PUSH_ROOT(this);
  {
    GC_NEW(this,layout);
    GC_SET(this,class,class);
    GC_PROC_CALL(java_lang_NullPointerException_initializer,GC_PASS(this));
    GC_PROC_CALL(java_lang_NullPointerException_NullPointerException_java_lang_String_init, GC_PASS(this), GC_PASS(s));
    GC_ASSIGN(gc_result, this);
  }
  GC_POP_ROOT(this);
  GC_FUNC_LEAVE;
  GC_POP_PARAM(layout);
GC_REF_FUNC_END(java_lang_NullPointerException, java_lang_NullPointerException_NullPointerException_java_lang_String)


/* init func: NullPointerException(String s) */
GC_PROC_BEGIN(
    java_lang_NullPointerException_NullPointerException_java_lang_String_init,
    GC_PARAM(java_lang_NullPointerException,this),
    GC_PARAM(java_lang_String,s))
  GC_PARAM_REF(java_lang_NullPointerException,this);
  GC_PARAM_REF(java_lang_String, s);
  GC_PUSH_PARAM(this);
  GC_FUNC_ENTER;
  {
    GC_PROC_CALL(java_lang_RuntimeException_RuntimeException_java_lang_String_init, GC_PASS(this),GC_PASS(s));CHECK(0);
    {
    }
  }
  __branch_1:;
  GC_FUNC_LEAVE;
  GC_POP_PARAM(this);
GC_PROC_END(java_lang_NullPointerException_NullPointerException_java_lang_String_init)


GC_PROC_BEGIN(java_lang_PhonyReader_initializer,GC_PARAM(java_lang_PhonyReader,this))
  GC_PARAM_REF(java_lang_PhonyReader,this);
  GC_FUNC_ENTER;
  GC_PROC_CALL(java_io_InputStream_initializer,GC_PASS(this));
  GC_FUNC_LEAVE;
GC_PROC_END(java_lang_PhonyReader_initializer)


/* constructor: PhonyReader() */
GC_REF_FUNC_BEGIN(java_lang_PhonyReader,
    java_lang_PhonyReader_PhonyReader,
    void* class,
    GC_PARAM(LayoutHead, layout))
  GC_PARAM_REF(LayoutHead, layout);
  GC_REF(java_lang_PhonyReader,this);
  GC_PUSH_PARAM(layout);
  GC_FUNC_ENTER;
  GC_PUSH_ROOT(this);
  {
    GC_NEW(this,layout);
    GC_SET(this,class,class);
    GC_PROC_CALL(java_lang_PhonyReader_initializer,GC_PASS(this));
    GC_PROC_CALL(java_lang_PhonyReader_PhonyReader_init, GC_PASS(this));
    GC_ASSIGN(gc_result, this);
  }
  GC_POP_ROOT(this);
  GC_FUNC_LEAVE;
  GC_POP_PARAM(layout);
GC_REF_FUNC_END(java_lang_PhonyReader, java_lang_PhonyReader_PhonyReader)


/* init func: PhonyReader() */
GC_PROC_BEGIN(
    java_lang_PhonyReader_PhonyReader_init,
    GC_PARAM(java_lang_PhonyReader,this))
  GC_PARAM_REF(java_lang_PhonyReader,this);
  GC_PUSH_PARAM(this);
  GC_FUNC_ENTER;
  {
    GC_PROC_CALL(java_io_InputStream_InputStream_init, GC_PASS(this));CHECK(0);
    {
    }
  }
  __branch_1:;
  GC_FUNC_LEAVE;
  GC_POP_PARAM(this);
GC_PROC_END(java_lang_PhonyReader_PhonyReader_init)


GC_PROC_BEGIN(java_io_InterruptedIOException_initializer,GC_PARAM(java_io_InterruptedIOException,this))
  GC_PARAM_REF(java_io_InterruptedIOException,this);
  GC_FUNC_ENTER;
  GC_PROC_CALL(java_io_IOException_initializer,GC_PASS(this));
  GC_FUNC_LEAVE;
GC_PROC_END(java_io_InterruptedIOException_initializer)


GC_PROC_BEGIN(java_lang_ArrayIndexOutOfBoundsException_initializer,GC_PARAM(java_lang_ArrayIndexOutOfBoundsException,this))
  GC_PARAM_REF(java_lang_ArrayIndexOutOfBoundsException,this);
  GC_FUNC_ENTER;
  GC_PROC_CALL(java_lang_IndexOutOfBoundsException_initializer,GC_PASS(this));
  GC_FUNC_LEAVE;
GC_PROC_END(java_lang_ArrayIndexOutOfBoundsException_initializer)


/* constructor: ArrayIndexOutOfBoundsException() */
GC_REF_FUNC_BEGIN(java_lang_ArrayIndexOutOfBoundsException,
    java_lang_ArrayIndexOutOfBoundsException_ArrayIndexOutOfBoundsException,
    void* class,
    GC_PARAM(LayoutHead, layout))
  GC_PARAM_REF(LayoutHead, layout);
  GC_REF(java_lang_ArrayIndexOutOfBoundsException,this);
  GC_PUSH_PARAM(layout);
  GC_FUNC_ENTER;
  GC_PUSH_ROOT(this);
  {
    GC_NEW(this,layout);
    GC_SET(this,class,class);
    GC_PROC_CALL(java_lang_ArrayIndexOutOfBoundsException_initializer,GC_PASS(this));
    GC_PROC_CALL(java_lang_ArrayIndexOutOfBoundsException_ArrayIndexOutOfBoundsException_init, GC_PASS(this));
    GC_ASSIGN(gc_result, this);
  }
  GC_POP_ROOT(this);
  GC_FUNC_LEAVE;
  GC_POP_PARAM(layout);
GC_REF_FUNC_END(java_lang_ArrayIndexOutOfBoundsException, java_lang_ArrayIndexOutOfBoundsException_ArrayIndexOutOfBoundsException)


/* init func: ArrayIndexOutOfBoundsException() */
GC_PROC_BEGIN(
    java_lang_ArrayIndexOutOfBoundsException_ArrayIndexOutOfBoundsException_init,
    GC_PARAM(java_lang_ArrayIndexOutOfBoundsException,this))
  GC_PARAM_REF(java_lang_ArrayIndexOutOfBoundsException,this);
  GC_PUSH_PARAM(this);
  GC_FUNC_ENTER;
  {
    GC_PROC_CALL(java_lang_IndexOutOfBoundsException_IndexOutOfBoundsException_init, GC_PASS(this));CHECK(0);
    {
    }
  }
  __branch_1:;
  GC_FUNC_LEAVE;
  GC_POP_PARAM(this);
GC_PROC_END(java_lang_ArrayIndexOutOfBoundsException_ArrayIndexOutOfBoundsException_init)


GC_PROC_BEGIN(java_lang_NumberFormatException_initializer,GC_PARAM(java_lang_NumberFormatException,this))
  GC_PARAM_REF(java_lang_NumberFormatException,this);
  GC_FUNC_ENTER;
  GC_PROC_CALL(java_lang_IllegalArgumentException_initializer,GC_PASS(this));
  GC_FUNC_LEAVE;
GC_PROC_END(java_lang_NumberFormatException_initializer)


/* constructor: NumberFormatException() */
GC_REF_FUNC_BEGIN(java_lang_NumberFormatException,
    java_lang_NumberFormatException_NumberFormatException,
    void* class,
    GC_PARAM(LayoutHead, layout))
  GC_PARAM_REF(LayoutHead, layout);
  GC_REF(java_lang_NumberFormatException,this);
  GC_PUSH_PARAM(layout);
  GC_FUNC_ENTER;
  GC_PUSH_ROOT(this);
  {
    GC_NEW(this,layout);
    GC_SET(this,class,class);
    GC_PROC_CALL(java_lang_NumberFormatException_initializer,GC_PASS(this));
    GC_PROC_CALL(java_lang_NumberFormatException_NumberFormatException_init, GC_PASS(this));
    GC_ASSIGN(gc_result, this);
  }
  GC_POP_ROOT(this);
  GC_FUNC_LEAVE;
  GC_POP_PARAM(layout);
GC_REF_FUNC_END(java_lang_NumberFormatException, java_lang_NumberFormatException_NumberFormatException)


/* init func: NumberFormatException() */
GC_PROC_BEGIN(
    java_lang_NumberFormatException_NumberFormatException_init,
    GC_PARAM(java_lang_NumberFormatException,this))
  GC_PARAM_REF(java_lang_NumberFormatException,this);
  GC_PUSH_PARAM(this);
  GC_FUNC_ENTER;
  {
    GC_PROC_CALL(java_lang_IllegalArgumentException_IllegalArgumentException_init, GC_PASS(this));CHECK(0);
    {
    }
  }
  __branch_1:;
  GC_FUNC_LEAVE;
  GC_POP_PARAM(this);
GC_PROC_END(java_lang_NumberFormatException_NumberFormatException_init)


GC_PROC_BEGIN(java_lang_Error_initializer,GC_PARAM(java_lang_Error,this))
  GC_PARAM_REF(java_lang_Error,this);
  GC_FUNC_ENTER;
  GC_PROC_CALL(java_lang_Throwable_initializer,GC_PASS(this));
  GC_FUNC_LEAVE;
GC_PROC_END(java_lang_Error_initializer)


GC_PROC_BEGIN(java_net_SocketAddress_initializer,GC_PARAM(java_net_SocketAddress,this))
  GC_PARAM_REF(java_net_SocketAddress,this);
  GC_FUNC_ENTER;
  GC_PROC_CALL(java_lang_Object_initializer,GC_PASS(this));
  GC_FUNC_LEAVE;
GC_PROC_END(java_net_SocketAddress_initializer)


/* constructor: SocketAddress() */
GC_REF_FUNC_BEGIN(java_net_SocketAddress,
    java_net_SocketAddress_SocketAddress,
    void* class,
    GC_PARAM(LayoutHead, layout))
  GC_PARAM_REF(LayoutHead, layout);
  GC_REF(java_net_SocketAddress,this);
  GC_PUSH_PARAM(layout);
  GC_FUNC_ENTER;
  GC_PUSH_ROOT(this);
  {
    GC_NEW(this,layout);
    GC_SET(this,class,class);
    GC_PROC_CALL(java_net_SocketAddress_initializer,GC_PASS(this));
    GC_PROC_CALL(java_net_SocketAddress_SocketAddress_init, GC_PASS(this));
    GC_ASSIGN(gc_result, this);
  }
  GC_POP_ROOT(this);
  GC_FUNC_LEAVE;
  GC_POP_PARAM(layout);
GC_REF_FUNC_END(java_net_SocketAddress, java_net_SocketAddress_SocketAddress)


/* init func: SocketAddress() */
GC_PROC_BEGIN(
    java_net_SocketAddress_SocketAddress_init,
    GC_PARAM(java_net_SocketAddress,this))
  GC_PARAM_REF(java_net_SocketAddress,this);
  GC_PUSH_PARAM(this);
  GC_FUNC_ENTER;
  {
    GC_PROC_CALL(java_lang_Object_Object_init, GC_PASS(this));CHECK(0);
    {
    }
  }
  __branch_1:;
  GC_FUNC_LEAVE;
  GC_POP_PARAM(this);
GC_PROC_END(java_net_SocketAddress_SocketAddress_init)


GC_PROC_BEGIN(ToClient_t_initializer,GC_PARAM(ToClient_t,this))
  GC_PARAM_REF(ToClient_t,this);
  GC_FUNC_ENTER;
  GC_PROC_CALL(java_lang_Thread_initializer,GC_PASS(this));
    GC_SET(this, _ToClient_t_old, 0);
  GC_FUNC_LEAVE;
GC_PROC_END(ToClient_t_initializer)


/* constructor: ToClient_t(Monitor mon, OutputStream os) */
GC_REF_FUNC_BEGIN(ToClient_t,
    ToClient_t_ToClient_t_Monitor_java_io_OutputStream,
    void* class,
    GC_PARAM(LayoutHead, layout),
    GC_PARAM(Monitor,mon),
    GC_PARAM(java_io_OutputStream,os))
  GC_PARAM_REF(LayoutHead, layout);
  GC_PARAM_REF(Monitor, mon);
  GC_PARAM_REF(java_io_OutputStream, os);
  GC_REF(ToClient_t,this);
  GC_PUSH_PARAM(layout);
  GC_FUNC_ENTER;
  GC_PUSH_ROOT(this);
  {
    GC_NEW(this,layout);
    GC_SET(this,class,class);
    GC_PROC_CALL(ToClient_t_initializer,GC_PASS(this));
    GC_PROC_CALL(ToClient_t_ToClient_t_Monitor_java_io_OutputStream_init, GC_PASS(this), GC_PASS(mon), GC_PASS(os));
    GC_ASSIGN(gc_result, this);
  }
  GC_POP_ROOT(this);
  GC_FUNC_LEAVE;
  GC_POP_PARAM(layout);
GC_REF_FUNC_END(ToClient_t, ToClient_t_ToClient_t_Monitor_java_io_OutputStream)


/* init func: ToClient_t(Monitor mon, OutputStream os) */
GC_PROC_BEGIN(
    ToClient_t_ToClient_t_Monitor_java_io_OutputStream_init,
    GC_PARAM(ToClient_t,this),
    GC_PARAM(Monitor,mon),
    GC_PARAM(java_io_OutputStream,os))
  GC_PARAM_REF(ToClient_t,this);
  GC_PARAM_REF(Monitor, mon);
  GC_PARAM_REF(java_io_OutputStream, os);
  GC_PUSH_PARAM(this);
  GC_FUNC_ENTER;
  {
    GC_PROC_CALL(java_lang_Thread_Thread_init, GC_PASS(this));CHECK(0);
    {
      GC_SET_REF(this, _ToClient_t_mon, mon);
      GC_SET_REF(this, _ToClient_t_os, os);
    }
  }
  __branch_1:;
  GC_FUNC_LEAVE;
  GC_POP_PARAM(this);
GC_PROC_END(ToClient_t_ToClient_t_Monitor_java_io_OutputStream_init)


/* method: ToClient_t.run() */
GC_PROC_BEGIN(
    ToClient_t_run,
    GC_PARAM(ToClient_t,this))
  GC_PARAM_REF(ToClient_t,this);
  GC_PUSH_PARAM(this);
  GC_FUNC_ENTER;
{
  VOLATILE GC_REF(JByteArray,jpeg);
  GC_PUSH_ROOT(jpeg);
  GC_REF_FUNC_CALL(jpeg, newJByteArray, 131083);CHECK(0);
  EXCEPTION_TRY
  {
    {
      goto __cond_28;
__loop_28:;
      {
        EXCEPTION_TRY
        {
          JInt size;
          GC_REF(Monitor,_tmp_568);
          GC_PUSH_ROOT(_tmp_568);
          GC_GET_REF(_tmp_568, this, _ToClient_t_mon);
          JLong _tmp_569;
          GC_GET(_tmp_569, this, _ToClient_t_old);
          {
            struct Monitor_ClassStruct *_tmp_method;
            GC_GET(_tmp_method, _tmp_568, class);
            GC_REF_FUNC_CALL(jpeg, _tmp_method->methodTbl->getJpeg_long, GC_PASS(_tmp_568), _tmp_569);
          }CHECK(2);
          JByte _tmp_570;
          GC_GET_VAR_ARRAY(_tmp_570, jpeg, 9);
          JByte _tmp_571;
          GC_GET_VAR_ARRAY(_tmp_571, jpeg, 10);
          size = (_tmp_570 & 0xFF) * 255 + (_tmp_571 & 0xFF);
          JLong _tmp_572;
          GC_VAR_FUNC_CALL(_tmp_572, ToClient_t_timeMillisFromArray_byteA, GC_PASS(jpeg));CHECK(2);
          GC_SET(this, _ToClient_t_old, _tmp_572);
          GC_REF(java_io_OutputStream,_tmp_573);
          GC_PUSH_ROOT(_tmp_573);
          GC_GET_REF(_tmp_573, this, _ToClient_t_os);
          {
            struct java_io_OutputStream_ClassStruct *_tmp_method;
            GC_GET(_tmp_method, _tmp_573, class);
            GC_PROC_CALL(_tmp_method->methodTbl->write_byteA_int_int, GC_PASS(_tmp_573), GC_PASS(jpeg), 0, size + 11);
          }CHECK(2);
          GC_POP_ROOT(_tmp_573);
          GC_POP_ROOT(_tmp_568);
        }
        EXCEPTION_CATCH(2,&java_lang_InterruptedException_Class)
__branch_2:;
          GC_REF(java_lang_InterruptedException,e1);
          GC_PUSH_ROOT(e1);
          EXCEPTION_GET_OBJ(e1);
          {
          }
          GC_POP_ROOT(e1);
        EXCEPTION_FINALLY
        EXCEPTION_END(1)
      }
__cond_28:;
__branch_1:;
      JBoolean _tmp_574;
      JBoolean _tmp_575;
      {
        struct java_lang_Thread_ClassStruct *_tmp_method;
        GC_GET(_tmp_method, this, class);
        GC_VAR_FUNC_CALL(_tmp_575, _tmp_method->methodTbl->isInterrupted, GC_PASS(this));
      }CHECK(1);
      _tmp_574 = !_tmp_575;
      if (_tmp_574) {
        goto __loop_28;
      }
    }
  }
  EXCEPTION_CATCH(1,&java_io_IOException_Class)
__branch_3:;
    GC_REF(java_io_IOException,e);
    GC_PUSH_ROOT(e);
    EXCEPTION_GET_OBJ(e);
    {
    }
    GC_POP_ROOT(e);
  EXCEPTION_FINALLY
  EXCEPTION_END(0)
  GC_POP_ROOT(jpeg);
}
__branch_4:;
  GC_FUNC_LEAVE;
GC_PROC_END(ToClient_t_run)


/* method: ToClient_t.timeMillisFromArray(byte[]) */
GC_VAR_FUNC_BEGIN(JLong,
    ToClient_t_timeMillisFromArray_byteA,
    GC_PARAM(JByteArray,array))
  GC_PARAM_REF(JByteArray, array);
  JLong __result;
  GC_FUNC_ENTER;
{
  JLong time;
  time = 0;
  {
    JInt i;
    i = 0;
    {
      goto __cond_29;
__loop_29:;
      JByte _tmp_576;
      GC_GET_VAR_ARRAY(_tmp_576, array, i);
      time = (time << 8) | (_tmp_576 & 0xFF);
      i = i + 1;
__cond_29:;
      JBoolean _tmp_577;
      _tmp_577 = i < 8;
      if (_tmp_577) {
        goto __loop_29;
      }
    }
  }
  __result = time;
  goto __branch_1;
}
__branch_1:;
  gc_result = __result;
  GC_FUNC_LEAVE;
GC_VAR_FUNC_END(JLong, ToClient_t_timeMillisFromArray_byteA)


GC_PROC_BEGIN(java_net_UnknownHostException_initializer,GC_PARAM(java_net_UnknownHostException,this))
  GC_PARAM_REF(java_net_UnknownHostException,this);
  GC_FUNC_ENTER;
  GC_PROC_CALL(java_io_IOException_initializer,GC_PASS(this));
  GC_FUNC_LEAVE;
GC_PROC_END(java_net_UnknownHostException_initializer)


/* constructor: UnknownHostException(String message) */
GC_REF_FUNC_BEGIN(java_net_UnknownHostException,
    java_net_UnknownHostException_UnknownHostException_java_lang_String,
    void* class,
    GC_PARAM(LayoutHead, layout),
    GC_PARAM(java_lang_String,message))
  GC_PARAM_REF(LayoutHead, layout);
  GC_PARAM_REF(java_lang_String, message);
  GC_REF(java_net_UnknownHostException,this);
  GC_PUSH_PARAM(layout);
  GC_FUNC_ENTER;
  GC_PUSH_ROOT(this);
  {
    GC_NEW(this,layout);
    GC_SET(this,class,class);
    GC_PROC_CALL(java_net_UnknownHostException_initializer,GC_PASS(this));
    GC_PROC_CALL(java_net_UnknownHostException_UnknownHostException_java_lang_String_init, GC_PASS(this), GC_PASS(message));
    GC_ASSIGN(gc_result, this);
  }
  GC_POP_ROOT(this);
  GC_FUNC_LEAVE;
  GC_POP_PARAM(layout);
GC_REF_FUNC_END(java_net_UnknownHostException, java_net_UnknownHostException_UnknownHostException_java_lang_String)


/* init func: UnknownHostException(String message) */
GC_PROC_BEGIN(
    java_net_UnknownHostException_UnknownHostException_java_lang_String_init,
    GC_PARAM(java_net_UnknownHostException,this),
    GC_PARAM(java_lang_String,message))
  GC_PARAM_REF(java_net_UnknownHostException,this);
  GC_PARAM_REF(java_lang_String, message);
  GC_PUSH_PARAM(this);
  GC_FUNC_ENTER;
  {
    GC_PROC_CALL(java_io_IOException_IOException_java_lang_String_init, GC_PASS(this),GC_PASS(message));CHECK(0);
    {
    }
  }
  __branch_1:;
  GC_FUNC_LEAVE;
  GC_POP_PARAM(this);
GC_PROC_END(java_net_UnknownHostException_UnknownHostException_java_lang_String_init)


GC_PROC_BEGIN(java_net_InetSocketAddress_initializer,GC_PARAM(java_net_InetSocketAddress,this))
  GC_PARAM_REF(java_net_InetSocketAddress,this);
  GC_FUNC_ENTER;
  GC_PROC_CALL(java_net_SocketAddress_initializer,GC_PASS(this));
  GC_FUNC_LEAVE;
GC_PROC_END(java_net_InetSocketAddress_initializer)


/* constructor: InetSocketAddress(InetAddress addr, int port) */
GC_REF_FUNC_BEGIN(java_net_InetSocketAddress,
    java_net_InetSocketAddress_InetSocketAddress_java_net_InetAddress_int,
    void* class,
    GC_PARAM(LayoutHead, layout),
    GC_PARAM(java_net_InetAddress,addr),
    JInt port)
  GC_PARAM_REF(LayoutHead, layout);
  GC_PARAM_REF(java_net_InetAddress, addr);
  GC_REF(java_net_InetSocketAddress,this);
  GC_PUSH_PARAM(layout);
  GC_FUNC_ENTER;
  GC_PUSH_ROOT(this);
  {
    GC_NEW(this,layout);
    GC_SET(this,class,class);
    GC_PROC_CALL(java_net_InetSocketAddress_initializer,GC_PASS(this));
    GC_PROC_CALL(java_net_InetSocketAddress_InetSocketAddress_java_net_InetAddress_int_init, GC_PASS(this), GC_PASS(addr), port);
    GC_ASSIGN(gc_result, this);
  }
  GC_POP_ROOT(this);
  GC_FUNC_LEAVE;
  GC_POP_PARAM(layout);
GC_REF_FUNC_END(java_net_InetSocketAddress, java_net_InetSocketAddress_InetSocketAddress_java_net_InetAddress_int)


/* init func: InetSocketAddress(InetAddress addr, int port) */
GC_PROC_BEGIN(
    java_net_InetSocketAddress_InetSocketAddress_java_net_InetAddress_int_init,
    GC_PARAM(java_net_InetSocketAddress,this),
    GC_PARAM(java_net_InetAddress,addr),
    JInt port)
  GC_PARAM_REF(java_net_InetSocketAddress,this);
  GC_PARAM_REF(java_net_InetAddress, addr);
  GC_PUSH_PARAM(this);
  GC_FUNC_ENTER;
  {
    GC_PROC_CALL(java_net_SocketAddress_SocketAddress_init, GC_PASS(this));CHECK(0);
    {
      GC_SET_REF(this, _java_net_InetSocketAddress_addr, addr);
      GC_SET(this, _java_net_InetSocketAddress_port, port);
      GC_REF(java_lang_String,_tmp_578);
      GC_PUSH_ROOT(_tmp_578);
      {
        struct java_net_InetAddress_ClassStruct *_tmp_method;
        GC_GET(_tmp_method, addr, class);
        GC_REF_FUNC_CALL(_tmp_578, _tmp_method->methodTbl->getHostName, GC_PASS(addr));
      }CHECK(0);
      GC_SET_REF(this, _java_net_InetSocketAddress_hostname, _tmp_578);
      GC_POP_ROOT(_tmp_578);
    }
  }
  __branch_1:;
  GC_FUNC_LEAVE;
  GC_POP_PARAM(this);
GC_PROC_END(java_net_InetSocketAddress_InetSocketAddress_java_net_InetAddress_int_init)


/* method: InetSocketAddress.getAddress() */
GC_REF_FUNC_BEGIN(java_net_InetAddress,
    java_net_InetSocketAddress_getAddress,
    GC_PARAM(java_net_InetSocketAddress,this))
  GC_PARAM_REF(java_net_InetSocketAddress,this);
  GC_PUSH_PARAM(this);
  GC_REF(java_net_InetAddress, __result);
  GC_PUSH_ROOT(__result);
  GC_FUNC_ENTER;
{
  GC_REF(java_net_InetAddress,_tmp_579);
  GC_PUSH_ROOT(_tmp_579);
  GC_GET_REF(_tmp_579, this, _java_net_InetSocketAddress_addr);
GC_ASSIGN(__result, _tmp_579);
  GC_POP_ROOT(_tmp_579);
  goto __branch_1;
}
__branch_1:;
  GC_ASSIGN(gc_result, __result);
  GC_POP_ROOT(__result);
  GC_FUNC_LEAVE;
GC_REF_FUNC_END(java_net_InetAddress, java_net_InetSocketAddress_getAddress)


/* method: InetSocketAddress.getPort() */
GC_VAR_FUNC_BEGIN(JInt,
    java_net_InetSocketAddress_getPort,
    GC_PARAM(java_net_InetSocketAddress,this))
  GC_PARAM_REF(java_net_InetSocketAddress,this);
  GC_PUSH_PARAM(this);
  JInt __result;
  GC_FUNC_ENTER;
{
  JInt _tmp_580;
  GC_GET(_tmp_580, this, _java_net_InetSocketAddress_port);
  __result = _tmp_580;
  goto __branch_1;
}
__branch_1:;
  gc_result = __result;
  GC_FUNC_LEAVE;
GC_VAR_FUNC_END(JInt, java_net_InetSocketAddress_getPort)


/* method: InetSocketAddress.toString() */
GC_REF_FUNC_BEGIN(java_lang_String,
    java_net_InetSocketAddress_toString,
    GC_PARAM(java_net_InetSocketAddress,this))
  GC_PARAM_REF(java_net_InetSocketAddress,this);
  GC_PUSH_PARAM(this);
  GC_REF(java_lang_String, __result);
  GC_PUSH_ROOT(__result);
  GC_FUNC_ENTER;
{
  GC_REF(java_lang_String,_tmp_581);
  GC_PUSH_ROOT(_tmp_581);
  GC_REF_FUNC_CALL(_tmp_581, java_lang_String_String_CCharArray, &java_lang_String_Class, GC_PASS(java_lang_String_Layout), "tostring not impl.");
GC_ASSIGN(__result, _tmp_581);
  GC_POP_ROOT(_tmp_581);
  goto __branch_1;
}
__branch_1:;
  GC_ASSIGN(gc_result, __result);
  GC_POP_ROOT(__result);
  GC_FUNC_LEAVE;
GC_REF_FUNC_END(java_lang_String, java_net_InetSocketAddress_toString)


GC_PROC_BEGIN(java_net_InetAddress_initializer,GC_PARAM(java_net_InetAddress,this))
  GC_PARAM_REF(java_net_InetAddress,this);
  GC_FUNC_ENTER;
  GC_PROC_CALL(java_lang_Object_initializer,GC_PASS(this));
  GC_FUNC_LEAVE;
GC_PROC_END(java_net_InetAddress_initializer)


/* constructor: InetAddress(byte[] ipaddr, String hostname) */
GC_REF_FUNC_BEGIN(java_net_InetAddress,
    java_net_InetAddress_InetAddress_JByteA_java_lang_String,
    void* class,
    GC_PARAM(LayoutHead, layout),
    GC_PARAM(JByteArray,ipaddr),
    GC_PARAM(java_lang_String,hostname))
  GC_PARAM_REF(LayoutHead, layout);
  GC_PARAM_REF(JByteArray, ipaddr);
  GC_PARAM_REF(java_lang_String, hostname);
  GC_REF(java_net_InetAddress,this);
  GC_PUSH_PARAM(layout);
  GC_FUNC_ENTER;
  GC_PUSH_ROOT(this);
  {
    GC_NEW(this,layout);
    GC_SET(this,class,class);
    GC_PROC_CALL(java_net_InetAddress_initializer,GC_PASS(this));
    GC_PROC_CALL(java_net_InetAddress_InetAddress_JByteA_java_lang_String_init, GC_PASS(this), GC_PASS(ipaddr), GC_PASS(hostname));
    GC_ASSIGN(gc_result, this);
  }
  GC_POP_ROOT(this);
  GC_FUNC_LEAVE;
  GC_POP_PARAM(layout);
GC_REF_FUNC_END(java_net_InetAddress, java_net_InetAddress_InetAddress_JByteA_java_lang_String)


/* init func: InetAddress(byte[] ipaddr, String hostname) */
GC_PROC_BEGIN(
    java_net_InetAddress_InetAddress_JByteA_java_lang_String_init,
    GC_PARAM(java_net_InetAddress,this),
    GC_PARAM(JByteArray,ipaddr),
    GC_PARAM(java_lang_String,hostname))
  GC_PARAM_REF(java_net_InetAddress,this);
  GC_PARAM_REF(JByteArray, ipaddr);
  GC_PARAM_REF(java_lang_String, hostname);
  GC_PUSH_PARAM(this);
  GC_FUNC_ENTER;
  {
    GC_PROC_CALL(java_lang_Object_Object_init, GC_PASS(this));CHECK(0);
    {
      GC_SET_REF(this, _java_net_InetAddress_addr, ipaddr);
      GC_SET_REF(this, _java_net_InetAddress_hostName, hostname);
    }
  }
  __branch_1:;
  GC_FUNC_LEAVE;
  GC_POP_PARAM(this);
GC_PROC_END(java_net_InetAddress_InetAddress_JByteA_java_lang_String_init)


/* method: InetAddress.isMulticastAddress() */
GC_VAR_FUNC_BEGIN(JBoolean,
    java_net_InetAddress_isMulticastAddress,
    GC_PARAM(java_net_InetAddress,this))
  GC_PARAM_REF(java_net_InetAddress,this);
  GC_PUSH_PARAM(this);
  JBoolean __result;
  GC_FUNC_ENTER;
{
  JInt _tmp_582;
  GC_REF(JByteArray,_tmp_583);
  GC_PUSH_ROOT(_tmp_583);
  GC_GET_REF(_tmp_583, this, _java_net_InetAddress_addr);
  GC_GET(_tmp_582, _tmp_583, _JByteA_length);
  if (_tmp_582 == 4)
  {
    JByte _tmp_584;
    GC_REF(JByteArray,_tmp_585);
    GC_PUSH_ROOT(_tmp_585);
    GC_GET_REF(_tmp_585, this, _java_net_InetAddress_addr);
    GC_GET_VAR_ARRAY(_tmp_584, _tmp_585, 0);
    __result = (_tmp_584 & 0xf0) == 0xe0;
    GC_POP_ROOT(_tmp_583);
    GC_POP_ROOT(_tmp_585);
    goto __branch_1;
    GC_POP_ROOT(_tmp_585);
  }
  __result = false;
  GC_POP_ROOT(_tmp_583);
  goto __branch_1;
}
__branch_1:;
  gc_result = __result;
  GC_FUNC_LEAVE;
GC_VAR_FUNC_END(JBoolean, java_net_InetAddress_isMulticastAddress)


/* method: InetAddress.getHostName() */
GC_REF_FUNC_BEGIN(java_lang_String,
    java_net_InetAddress_getHostName,
    GC_PARAM(java_net_InetAddress,this))
  GC_PARAM_REF(java_net_InetAddress,this);
  GC_PUSH_PARAM(this);
  GC_REF(java_lang_String, __result);
  GC_PUSH_ROOT(__result);
  GC_FUNC_ENTER;
{
  GC_REF(java_lang_String,_tmp_586);
  GC_PUSH_ROOT(_tmp_586);
  GC_GET_REF(_tmp_586, this, _java_net_InetAddress_hostName);
  if (!(GC_IS_NULL(_tmp_586)))
  {
    GC_REF(java_lang_String,_tmp_587);
    GC_PUSH_ROOT(_tmp_587);
    GC_GET_REF(_tmp_587, this, _java_net_InetAddress_hostName);
GC_ASSIGN(__result, _tmp_587);
    GC_POP_ROOT(_tmp_586);
    GC_POP_ROOT(_tmp_587);
    goto __branch_1;
    GC_POP_ROOT(_tmp_587);
  }
  GC_REF(java_lang_String,_tmp_588);
  GC_PUSH_ROOT(_tmp_588);
  GC_REF(java_lang_StringBuffer,_tmp_589);
  GC_PUSH_ROOT(_tmp_589);
  GC_REF_FUNC_CALL(_tmp_589, java_lang_StringBuffer_StringBuffer, &java_lang_StringBuffer_Class, GC_PASS(java_lang_StringBuffer_Layout));
  GC_REF(java_lang_String,_tmp_590);
  GC_PUSH_ROOT(_tmp_590);
  GC_REF(java_lang_StringBuffer,_tmp_591);
  GC_PUSH_ROOT(_tmp_591);
  GC_REF_FUNC_CALL(_tmp_591, java_lang_StringBuffer_StringBuffer, &java_lang_StringBuffer_Class, GC_PASS(java_lang_StringBuffer_Layout));
  GC_REF(java_lang_String,_tmp_592);
  GC_PUSH_ROOT(_tmp_592);
  GC_REF(java_lang_StringBuffer,_tmp_593);
  GC_PUSH_ROOT(_tmp_593);
  GC_REF_FUNC_CALL(_tmp_593, java_lang_StringBuffer_StringBuffer, &java_lang_StringBuffer_Class, GC_PASS(java_lang_StringBuffer_Layout));
  GC_REF(java_lang_String,_tmp_594);
  GC_PUSH_ROOT(_tmp_594);
  GC_REF(java_lang_StringBuffer,_tmp_595);
  GC_PUSH_ROOT(_tmp_595);
  GC_REF_FUNC_CALL(_tmp_595, java_lang_StringBuffer_StringBuffer, &java_lang_StringBuffer_Class, GC_PASS(java_lang_StringBuffer_Layout));
  GC_REF(java_lang_String,_tmp_596);
  GC_PUSH_ROOT(_tmp_596);
  GC_REF(java_lang_StringBuffer,_tmp_597);
  GC_PUSH_ROOT(_tmp_597);
  GC_REF_FUNC_CALL(_tmp_597, java_lang_StringBuffer_StringBuffer, &java_lang_StringBuffer_Class, GC_PASS(java_lang_StringBuffer_Layout));
  GC_REF(java_lang_String,_tmp_598);
  GC_PUSH_ROOT(_tmp_598);
  GC_REF(java_lang_StringBuffer,_tmp_599);
  GC_PUSH_ROOT(_tmp_599);
  GC_REF_FUNC_CALL(_tmp_599, java_lang_StringBuffer_StringBuffer, &java_lang_StringBuffer_Class, GC_PASS(java_lang_StringBuffer_Layout));
  GC_REF(java_lang_String,_tmp_600);
  GC_PUSH_ROOT(_tmp_600);
  GC_REF(java_lang_StringBuffer,_tmp_601);
  GC_PUSH_ROOT(_tmp_601);
  GC_REF_FUNC_CALL(_tmp_601, java_lang_StringBuffer_StringBuffer, &java_lang_StringBuffer_Class, GC_PASS(java_lang_StringBuffer_Layout));
  GC_REF(java_lang_String,_tmp_602);
  GC_PUSH_ROOT(_tmp_602);
  GC_REF_FUNC_CALL(_tmp_602, java_lang_String_String_CCharArray, &java_lang_String_Class, GC_PASS(java_lang_String_Layout), "");
  GC_REF_FUNC_CALL(_tmp_601, java_lang_StringBuffer_append_java_lang_Object, GC_PASS(_tmp_601), GC_PASS(_tmp_602));
  JByte _tmp_603;
  GC_REF(JByteArray,_tmp_604);
  GC_PUSH_ROOT(_tmp_604);
  GC_GET_REF(_tmp_604, this, _java_net_InetAddress_addr);
  GC_GET_VAR_ARRAY(_tmp_603, _tmp_604, 0);
  GC_REF_FUNC_CALL(_tmp_601, java_lang_StringBuffer_append_int, GC_PASS(_tmp_601), (0xFF & _tmp_603));
  GC_REF_FUNC_CALL(_tmp_600, java_lang_StringBuffer_toString, GC_PASS(_tmp_601));
  GC_REF_FUNC_CALL(_tmp_599, java_lang_StringBuffer_append_java_lang_Object, GC_PASS(_tmp_599), GC_PASS(_tmp_600));
  GC_REF(java_lang_String,_tmp_605);
  GC_PUSH_ROOT(_tmp_605);
  GC_REF_FUNC_CALL(_tmp_605, java_lang_String_String_CCharArray, &java_lang_String_Class, GC_PASS(java_lang_String_Layout), ".");
  GC_REF_FUNC_CALL(_tmp_599, java_lang_StringBuffer_append_java_lang_Object, GC_PASS(_tmp_599), GC_PASS(_tmp_605));
  GC_REF_FUNC_CALL(_tmp_598, java_lang_StringBuffer_toString, GC_PASS(_tmp_599));
  GC_REF_FUNC_CALL(_tmp_597, java_lang_StringBuffer_append_java_lang_Object, GC_PASS(_tmp_597), GC_PASS(_tmp_598));
  JByte _tmp_606;
  GC_REF(JByteArray,_tmp_607);
  GC_PUSH_ROOT(_tmp_607);
  GC_GET_REF(_tmp_607, this, _java_net_InetAddress_addr);
  GC_GET_VAR_ARRAY(_tmp_606, _tmp_607, 1);
  GC_REF_FUNC_CALL(_tmp_597, java_lang_StringBuffer_append_int, GC_PASS(_tmp_597), (0xFF & _tmp_606));
  GC_REF_FUNC_CALL(_tmp_596, java_lang_StringBuffer_toString, GC_PASS(_tmp_597));
  GC_REF_FUNC_CALL(_tmp_595, java_lang_StringBuffer_append_java_lang_Object, GC_PASS(_tmp_595), GC_PASS(_tmp_596));
  GC_REF(java_lang_String,_tmp_608);
  GC_PUSH_ROOT(_tmp_608);
  GC_REF_FUNC_CALL(_tmp_608, java_lang_String_String_CCharArray, &java_lang_String_Class, GC_PASS(java_lang_String_Layout), ".");
  GC_REF_FUNC_CALL(_tmp_595, java_lang_StringBuffer_append_java_lang_Object, GC_PASS(_tmp_595), GC_PASS(_tmp_608));
  GC_REF_FUNC_CALL(_tmp_594, java_lang_StringBuffer_toString, GC_PASS(_tmp_595));
  GC_REF_FUNC_CALL(_tmp_593, java_lang_StringBuffer_append_java_lang_Object, GC_PASS(_tmp_593), GC_PASS(_tmp_594));
  JByte _tmp_609;
  GC_REF(JByteArray,_tmp_610);
  GC_PUSH_ROOT(_tmp_610);
  GC_GET_REF(_tmp_610, this, _java_net_InetAddress_addr);
  GC_GET_VAR_ARRAY(_tmp_609, _tmp_610, 2);
  GC_REF_FUNC_CALL(_tmp_593, java_lang_StringBuffer_append_int, GC_PASS(_tmp_593), (0xFF & _tmp_609));
  GC_REF_FUNC_CALL(_tmp_592, java_lang_StringBuffer_toString, GC_PASS(_tmp_593));
  GC_REF_FUNC_CALL(_tmp_591, java_lang_StringBuffer_append_java_lang_Object, GC_PASS(_tmp_591), GC_PASS(_tmp_592));
  GC_REF(java_lang_String,_tmp_611);
  GC_PUSH_ROOT(_tmp_611);
  GC_REF_FUNC_CALL(_tmp_611, java_lang_String_String_CCharArray, &java_lang_String_Class, GC_PASS(java_lang_String_Layout), ".");
  GC_REF_FUNC_CALL(_tmp_591, java_lang_StringBuffer_append_java_lang_Object, GC_PASS(_tmp_591), GC_PASS(_tmp_611));
  GC_REF_FUNC_CALL(_tmp_590, java_lang_StringBuffer_toString, GC_PASS(_tmp_591));
  GC_REF_FUNC_CALL(_tmp_589, java_lang_StringBuffer_append_java_lang_Object, GC_PASS(_tmp_589), GC_PASS(_tmp_590));
  JByte _tmp_612;
  GC_REF(JByteArray,_tmp_613);
  GC_PUSH_ROOT(_tmp_613);
  GC_GET_REF(_tmp_613, this, _java_net_InetAddress_addr);
  GC_GET_VAR_ARRAY(_tmp_612, _tmp_613, 3);
  GC_REF_FUNC_CALL(_tmp_589, java_lang_StringBuffer_append_int, GC_PASS(_tmp_589), (0xFF & _tmp_612));
  GC_REF_FUNC_CALL(_tmp_588, java_lang_StringBuffer_toString, GC_PASS(_tmp_589));
GC_ASSIGN(__result, _tmp_588);
  GC_POP_ROOT(_tmp_586);
  GC_POP_ROOT(_tmp_588);
  GC_POP_ROOT(_tmp_589);
  GC_POP_ROOT(_tmp_590);
  GC_POP_ROOT(_tmp_591);
  GC_POP_ROOT(_tmp_592);
  GC_POP_ROOT(_tmp_593);
  GC_POP_ROOT(_tmp_594);
  GC_POP_ROOT(_tmp_595);
  GC_POP_ROOT(_tmp_596);
  GC_POP_ROOT(_tmp_597);
  GC_POP_ROOT(_tmp_598);
  GC_POP_ROOT(_tmp_599);
  GC_POP_ROOT(_tmp_600);
  GC_POP_ROOT(_tmp_601);
  GC_POP_ROOT(_tmp_602);
  GC_POP_ROOT(_tmp_604);
  GC_POP_ROOT(_tmp_605);
  GC_POP_ROOT(_tmp_607);
  GC_POP_ROOT(_tmp_608);
  GC_POP_ROOT(_tmp_610);
  GC_POP_ROOT(_tmp_611);
  GC_POP_ROOT(_tmp_613);
  goto __branch_1;
}
__branch_1:;
  GC_ASSIGN(gc_result, __result);
  GC_POP_ROOT(__result);
  GC_FUNC_LEAVE;
GC_REF_FUNC_END(java_lang_String, java_net_InetAddress_getHostName)


/* method: InetAddress.getAddress() */
GC_REF_FUNC_BEGIN(JByteArray,
    java_net_InetAddress_getAddress,
    GC_PARAM(java_net_InetAddress,this))
  GC_PARAM_REF(java_net_InetAddress,this);
  GC_PUSH_PARAM(this);
  GC_REF(JByteArray, __result);
  GC_PUSH_ROOT(__result);
  GC_FUNC_ENTER;
{
  GC_REF(JByteArray,_tmp_614);
  GC_PUSH_ROOT(_tmp_614);
  GC_GET_REF(_tmp_614, this, _java_net_InetAddress_addr);
GC_ASSIGN(__result, _tmp_614);
  GC_POP_ROOT(_tmp_614);
  goto __branch_1;
}
__branch_1:;
  GC_ASSIGN(gc_result, __result);
  GC_POP_ROOT(__result);
  GC_FUNC_LEAVE;
GC_REF_FUNC_END(JByteArray, java_net_InetAddress_getAddress)


/* method: InetAddress.getHostAddress() */
GC_REF_FUNC_BEGIN(java_lang_String,
    java_net_InetAddress_getHostAddress,
    GC_PARAM(java_net_InetAddress,this))
  GC_PARAM_REF(java_net_InetAddress,this);
  GC_PUSH_PARAM(this);
  GC_REF(java_lang_String, __result);
  GC_PUSH_ROOT(__result);
  GC_FUNC_ENTER;
{
  GC_REF(java_lang_StringBuffer,sb);
  JInt len;
  JInt i;
  GC_PUSH_ROOT(sb);
  GC_REF_FUNC_CALL(sb, java_lang_StringBuffer_StringBuffer_int, &java_lang_StringBuffer_Class, GC_PASS(java_lang_StringBuffer_Layout), 40);CHECK(0);
  GC_REF(JByteArray,_tmp_615);
  GC_PUSH_ROOT(_tmp_615);
  GC_GET_REF(_tmp_615, this, _java_net_InetAddress_addr);
  GC_GET(len, _tmp_615, _JByteA_length);
  i = 0;
  {
    {
      goto __cond_30;
__loop_30:;
      {
        JByte _tmp_616;
        GC_REF(JByteArray,_tmp_617);
        GC_PUSH_ROOT(_tmp_617);
        GC_GET_REF(_tmp_617, this, _java_net_InetAddress_addr);
        GC_GET_VAR_ARRAY(_tmp_616, _tmp_617, i);
        {
          struct java_lang_StringBuffer_ClassStruct *_tmp_method;
          GC_GET(_tmp_method, sb, class);
          GC_REF_FUNC_CALL(___phonyObj___, _tmp_method->methodTbl->append_int, GC_PASS(sb), _tmp_616 & 0xff);
        }CHECK(0);
        i = i + 1;
        if (i == len)
        {
          GC_POP_ROOT(_tmp_617);
          goto __branch_1;
        }
        {
          struct java_lang_StringBuffer_ClassStruct *_tmp_method;
          GC_GET(_tmp_method, sb, class);
          GC_REF_FUNC_CALL(___phonyObj___, _tmp_method->methodTbl->append_char, GC_PASS(sb), '.');
        }CHECK(0);
        GC_POP_ROOT(_tmp_617);
      }
__cond_30:;
      JBoolean _tmp_618;
      _tmp_618 = true;
      if (_tmp_618) {
        goto __loop_30;
      }
    }
  }
__branch_1:;
  GC_REF(java_lang_String,_tmp_619);
  GC_PUSH_ROOT(_tmp_619);
  {
    struct java_lang_StringBuffer_ClassStruct *_tmp_method;
    GC_GET(_tmp_method, sb, class);
    GC_REF_FUNC_CALL(_tmp_619, _tmp_method->methodTbl->toString, GC_PASS(sb));
  }CHECK(0);
GC_ASSIGN(__result, _tmp_619);
  GC_POP_ROOT(sb);
  GC_POP_ROOT(_tmp_615);
  GC_POP_ROOT(_tmp_619);
  goto __branch_2;
}
__branch_2:;
  GC_ASSIGN(gc_result, __result);
  GC_POP_ROOT(__result);
  GC_FUNC_LEAVE;
GC_REF_FUNC_END(java_lang_String, java_net_InetAddress_getHostAddress)


/* method: InetAddress.toString() */
GC_REF_FUNC_BEGIN(java_lang_String,
    java_net_InetAddress_toString,
    GC_PARAM(java_net_InetAddress,this))
  GC_PARAM_REF(java_net_InetAddress,this);
  GC_PUSH_PARAM(this);
  GC_REF(java_lang_String, __result);
  GC_PUSH_ROOT(__result);
  GC_FUNC_ENTER;
{
  GC_REF(java_lang_String,addr);
  GC_REF(java_lang_String,host);
  GC_PUSH_ROOT(addr);
  {
    struct java_net_InetAddress_ClassStruct *_tmp_method;
    GC_GET(_tmp_method, this, class);
    GC_REF_FUNC_CALL(addr, _tmp_method->methodTbl->getHostAddress, GC_PASS(this));
  }CHECK(0);
  GC_PUSH_ROOT(host);
  GC_REF(java_lang_String,_tmp_620);
  GC_PUSH_ROOT(_tmp_620);
  GC_GET_REF(_tmp_620, this, _java_net_InetAddress_hostName);
  if ((!(GC_IS_NULL(_tmp_620)))) {
    GC_GET_REF(host, this, _java_net_InetAddress_hostName);
  } else {
    GC_REF_FUNC_CALL(host, java_lang_String_String_CCharArray, &java_lang_String_Class, GC_PASS(java_lang_String_Layout), "");
  }
  GC_REF(java_lang_String,_tmp_621);
  GC_PUSH_ROOT(_tmp_621);
  GC_REF(java_lang_StringBuffer,_tmp_622);
  GC_PUSH_ROOT(_tmp_622);
  GC_REF_FUNC_CALL(_tmp_622, java_lang_StringBuffer_StringBuffer, &java_lang_StringBuffer_Class, GC_PASS(java_lang_StringBuffer_Layout));
  GC_REF(java_lang_String,_tmp_623);
  GC_PUSH_ROOT(_tmp_623);
  GC_REF(java_lang_StringBuffer,_tmp_624);
  GC_PUSH_ROOT(_tmp_624);
  GC_REF_FUNC_CALL(_tmp_624, java_lang_StringBuffer_StringBuffer, &java_lang_StringBuffer_Class, GC_PASS(java_lang_StringBuffer_Layout));
  GC_REF_FUNC_CALL(_tmp_624, java_lang_StringBuffer_append_java_lang_Object, GC_PASS(_tmp_624), GC_PASS(host));
  GC_REF(java_lang_String,_tmp_625);
  GC_PUSH_ROOT(_tmp_625);
  GC_REF_FUNC_CALL(_tmp_625, java_lang_String_String_CCharArray, &java_lang_String_Class, GC_PASS(java_lang_String_Layout), "/");
  GC_REF_FUNC_CALL(_tmp_624, java_lang_StringBuffer_append_java_lang_Object, GC_PASS(_tmp_624), GC_PASS(_tmp_625));
  GC_REF_FUNC_CALL(_tmp_623, java_lang_StringBuffer_toString, GC_PASS(_tmp_624));
  GC_REF_FUNC_CALL(_tmp_622, java_lang_StringBuffer_append_java_lang_Object, GC_PASS(_tmp_622), GC_PASS(_tmp_623));
  GC_REF_FUNC_CALL(_tmp_622, java_lang_StringBuffer_append_java_lang_Object, GC_PASS(_tmp_622), GC_PASS(addr));
  GC_REF_FUNC_CALL(_tmp_621, java_lang_StringBuffer_toString, GC_PASS(_tmp_622));
GC_ASSIGN(__result, _tmp_621);
  GC_POP_ROOT(addr);
  GC_POP_ROOT(host);
  GC_POP_ROOT(_tmp_620);
  GC_POP_ROOT(_tmp_621);
  GC_POP_ROOT(_tmp_622);
  GC_POP_ROOT(_tmp_623);
  GC_POP_ROOT(_tmp_624);
  GC_POP_ROOT(_tmp_625);
  goto __branch_1;
}
__branch_1:;
  GC_ASSIGN(gc_result, __result);
  GC_POP_ROOT(__result);
  GC_FUNC_LEAVE;
GC_REF_FUNC_END(java_lang_String, java_net_InetAddress_toString)


/* method: InetAddress.getByAddress(java.lang.String, byte[]) */
GC_REF_FUNC_BEGIN(java_net_InetAddress,
    java_net_InetAddress_getByAddress_java_lang_String_byteA,
    GC_PARAM(java_lang_String,host),
    GC_PARAM(JByteArray,addr))
  EXCEPTION_THROWS
  GC_PARAM_REF(java_lang_String, host);
  GC_PARAM_REF(JByteArray, addr);
  GC_REF(java_net_InetAddress, __result);
  GC_PUSH_ROOT(__result);
  GC_FUNC_ENTER;
{
  JInt _tmp_626;
  GC_GET(_tmp_626, addr, _JByteA_length);
  if (_tmp_626 == 4)
  {
    GC_REF(java_net_InetAddress,_tmp_627);
    GC_PUSH_ROOT(_tmp_627);
    GC_REF_FUNC_CALL(_tmp_627, java_net_InetAddress_InetAddress_JByteA_java_lang_String, &java_net_InetAddress_Class, GC_PASS(java_net_InetAddress_Layout), GC_PASS(addr), GC_PASS(host));CHECK(0);
GC_ASSIGN(__result, _tmp_627);
    GC_POP_ROOT(_tmp_627);
    goto __branch_1;
    GC_POP_ROOT(_tmp_627);
  }
  GC_REF(java_net_UnknownHostException,_tmp_628);
  GC_PUSH_ROOT(_tmp_628);
  GC_REF(java_lang_String,_tmp_629);
  GC_PUSH_ROOT(_tmp_629);
  GC_REF_FUNC_CALL(_tmp_629, java_lang_String_String_CCharArray, &java_lang_String_Class, GC_PASS(java_lang_String_Layout), "IP address has illegal length");
  GC_REF_FUNC_CALL(_tmp_628, java_net_UnknownHostException_UnknownHostException_java_lang_String, &java_net_UnknownHostException_Class, GC_PASS(java_net_UnknownHostException_Layout), GC_PASS(_tmp_629));CHECK(0);
  EXCEPTION_STORE_OBJ(_tmp_628);
  GC_POP_ROOT(_tmp_628);
  GC_POP_ROOT(_tmp_629);
  EXCEPTION_THROW(0,&java_net_UnknownHostException_Class)
  GC_POP_ROOT(_tmp_629);
  GC_POP_ROOT(_tmp_628);
}
__branch_1:;
  GC_ASSIGN(gc_result, __result);
  GC_POP_ROOT(__result);
  GC_FUNC_LEAVE;
GC_REF_FUNC_END(java_net_InetAddress, java_net_InetAddress_getByAddress_java_lang_String_byteA)


/* method: InetAddress.getByName(java.lang.String) */
GC_REF_FUNC_BEGIN(java_net_InetAddress,
    java_net_InetAddress_getByName_java_lang_String,
    GC_PARAM(java_lang_String,hostname))
  GC_PARAM_REF(java_lang_String, hostname);
  GC_REF(java_net_InetAddress, __result);
  GC_PUSH_ROOT(__result);
  GC_FUNC_ENTER;
{
  JInt ipaddr;
  GC_REF(JByteArray,a);
  GC_VAR_FUNC_CALL(ipaddr, java_net_InetAddress_getHostByName_java_lang_String, GC_PASS(hostname));CHECK(0);
  GC_PUSH_ROOT(a);
  GC_REF_FUNC_CALL(a, newJByteArray, 4);CHECK(0);
  JByte _tmp_630;
  _tmp_630 = (JByte) (((ipaddr >> 24) & 0xFF));  GC_SET_VAR_ARRAY(a, 0, _tmp_630);
  JByte _tmp_631;
  _tmp_631 = (JByte) (((ipaddr >> 16) & 0xFF));  GC_SET_VAR_ARRAY(a, 1, _tmp_631);
  JByte _tmp_632;
  _tmp_632 = (JByte) (((ipaddr >> 8) & 0xFF));  GC_SET_VAR_ARRAY(a, 2, _tmp_632);
  JByte _tmp_633;
  _tmp_633 = (JByte) (((ipaddr) & 0xFF));  GC_SET_VAR_ARRAY(a, 3, _tmp_633);
  GC_REF(java_net_InetAddress,_tmp_634);
  GC_PUSH_ROOT(_tmp_634);
  GC_REF_FUNC_CALL(_tmp_634, java_net_InetAddress_InetAddress_JByteA_java_lang_String, &java_net_InetAddress_Class, GC_PASS(java_net_InetAddress_Layout), GC_PASS(a), GC_PASS(hostname));CHECK(0);
GC_ASSIGN(__result, _tmp_634);
  GC_POP_ROOT(a);
  GC_POP_ROOT(_tmp_634);
  goto __branch_1;
}
__branch_1:;
  GC_ASSIGN(gc_result, __result);
  GC_POP_ROOT(__result);
  GC_FUNC_LEAVE;
GC_REF_FUNC_END(java_net_InetAddress, java_net_InetAddress_getByName_java_lang_String)


GC_PROC_BEGIN(java_io_SimpleTCPInputStream_initializer,GC_PARAM(java_io_SimpleTCPInputStream,this))
  GC_PARAM_REF(java_io_SimpleTCPInputStream,this);
  GC_FUNC_ENTER;
  GC_PROC_CALL(java_io_InputStream_initializer,GC_PASS(this));
  GC_FUNC_LEAVE;
GC_PROC_END(java_io_SimpleTCPInputStream_initializer)


/* constructor: SimpleTCPInputStream(int fd) */
GC_REF_FUNC_BEGIN(java_io_SimpleTCPInputStream,
    java_io_SimpleTCPInputStream_SimpleTCPInputStream_int,
    void* class,
    GC_PARAM(LayoutHead, layout),
    JInt fd)
  GC_PARAM_REF(LayoutHead, layout);
  GC_REF(java_io_SimpleTCPInputStream,this);
  GC_PUSH_PARAM(layout);
  GC_FUNC_ENTER;
  GC_PUSH_ROOT(this);
  {
    GC_NEW(this,layout);
    GC_SET(this,class,class);
    GC_PROC_CALL(java_io_SimpleTCPInputStream_initializer,GC_PASS(this));
    GC_PROC_CALL(java_io_SimpleTCPInputStream_SimpleTCPInputStream_int_init, GC_PASS(this), fd);
    GC_ASSIGN(gc_result, this);
  }
  GC_POP_ROOT(this);
  GC_FUNC_LEAVE;
  GC_POP_PARAM(layout);
GC_REF_FUNC_END(java_io_SimpleTCPInputStream, java_io_SimpleTCPInputStream_SimpleTCPInputStream_int)


/* init func: SimpleTCPInputStream(int fd) */
GC_PROC_BEGIN(
    java_io_SimpleTCPInputStream_SimpleTCPInputStream_int_init,
    GC_PARAM(java_io_SimpleTCPInputStream,this),
    JInt fd)
  GC_PARAM_REF(java_io_SimpleTCPInputStream,this);
  GC_PUSH_PARAM(this);
  GC_FUNC_ENTER;
  {
    GC_PROC_CALL(java_io_InputStream_InputStream_init, GC_PASS(this));CHECK(0);
    {
      GC_SET(this, _java_io_SimpleTCPInputStream_myfd, fd);
    }
  }
  __branch_1:;
  GC_FUNC_LEAVE;
  GC_POP_PARAM(this);
GC_PROC_END(java_io_SimpleTCPInputStream_SimpleTCPInputStream_int_init)


/* method: SimpleTCPInputStream.read() */
GC_VAR_FUNC_BEGIN(JInt,
    java_io_SimpleTCPInputStream_read,
    GC_PARAM(java_io_SimpleTCPInputStream,this))
  EXCEPTION_THROWS
  GC_PARAM_REF(java_io_SimpleTCPInputStream,this);
  GC_PUSH_PARAM(this);
  JInt __result;
  GC_FUNC_ENTER;
{
  JInt _tmp_635;
  JInt _tmp_636;
  GC_GET(_tmp_636, this, _java_io_SimpleTCPInputStream_myfd);
  GC_VAR_FUNC_CALL(_tmp_635, java_io_SimpleTCPInputStream_readByte_int, _tmp_636);CHECK(0);
  __result = _tmp_635;
  goto __branch_1;
}
__branch_1:;
  gc_result = __result;
  GC_FUNC_LEAVE;
GC_VAR_FUNC_END(JInt, java_io_SimpleTCPInputStream_read)


/* method: SimpleTCPInputStream.read(byte[], int, int) */
GC_VAR_FUNC_BEGIN(JInt,
    java_io_SimpleTCPInputStream_read_byteA_int_int,
    GC_PARAM(java_io_SimpleTCPInputStream,this),
    GC_PARAM(JByteArray,b),
    JInt off,
    JInt len)
  EXCEPTION_THROWS
  GC_PARAM_REF(java_io_SimpleTCPInputStream,this);
  GC_PARAM_REF(JByteArray, b);
  GC_PUSH_PARAM(this);
  JInt __result;
  GC_FUNC_ENTER;
{
  JInt res;
  JBoolean _tmp_637;
  JBoolean _tmp_638;
  if (off < 0) {
    _tmp_638 = true;
  } else {
    if (len < 0) {
      _tmp_638 = true;
    } else {
      _tmp_638 = false;
    }
  }
  if (_tmp_638) {
    _tmp_637 = true;
  } else {
    JInt _tmp_639;
    GC_GET(_tmp_639, b, _JByteA_length);
    if (off + len > _tmp_639) {
      _tmp_637 = true;
    } else {
      _tmp_637 = false;
    }
  }
  if (_tmp_637)
  {
    GC_REF(java_lang_IndexOutOfBoundsException,_tmp_640);
    GC_PUSH_ROOT(_tmp_640);
    GC_REF_FUNC_CALL(_tmp_640, java_lang_IndexOutOfBoundsException_IndexOutOfBoundsException, &java_lang_IndexOutOfBoundsException_Class, GC_PASS(java_lang_IndexOutOfBoundsException_Layout));CHECK(0);
    EXCEPTION_STORE_OBJ(_tmp_640);
    GC_POP_ROOT(_tmp_640);
    EXCEPTION_THROW(0,&java_lang_IndexOutOfBoundsException_Class)
    GC_POP_ROOT(_tmp_640);
  }
  JInt _tmp_641;
  GC_GET(_tmp_641, b, _JByteA_length);
  if (_tmp_641 == 0)
  {
    __result = 0;
    goto __branch_1;
  }
  JInt _tmp_642;
  GC_GET(_tmp_642, this, _java_io_SimpleTCPInputStream_myfd);
  GC_VAR_FUNC_CALL(res, java_io_SimpleTCPInputStream_read_int_byteA_int_int, _tmp_642, GC_PASS(b), off, len);CHECK(0);
  __result = res;
  goto __branch_1;
}
__branch_1:;
  gc_result = __result;
  GC_FUNC_LEAVE;
GC_VAR_FUNC_END(JInt, java_io_SimpleTCPInputStream_read_byteA_int_int)


GC_PROC_BEGIN(java_io_SimpleTCPOutputStream_initializer,GC_PARAM(java_io_SimpleTCPOutputStream,this))
  GC_PARAM_REF(java_io_SimpleTCPOutputStream,this);
  GC_FUNC_ENTER;
  GC_PROC_CALL(java_io_OutputStream_initializer,GC_PASS(this));
  GC_FUNC_LEAVE;
GC_PROC_END(java_io_SimpleTCPOutputStream_initializer)


/* constructor: SimpleTCPOutputStream(int fd) */
GC_REF_FUNC_BEGIN(java_io_SimpleTCPOutputStream,
    java_io_SimpleTCPOutputStream_SimpleTCPOutputStream_int,
    void* class,
    GC_PARAM(LayoutHead, layout),
    JInt fd)
  GC_PARAM_REF(LayoutHead, layout);
  GC_REF(java_io_SimpleTCPOutputStream,this);
  GC_PUSH_PARAM(layout);
  GC_FUNC_ENTER;
  GC_PUSH_ROOT(this);
  {
    GC_NEW(this,layout);
    GC_SET(this,class,class);
    GC_PROC_CALL(java_io_SimpleTCPOutputStream_initializer,GC_PASS(this));
    GC_PROC_CALL(java_io_SimpleTCPOutputStream_SimpleTCPOutputStream_int_init, GC_PASS(this), fd);
    GC_ASSIGN(gc_result, this);
  }
  GC_POP_ROOT(this);
  GC_FUNC_LEAVE;
  GC_POP_PARAM(layout);
GC_REF_FUNC_END(java_io_SimpleTCPOutputStream, java_io_SimpleTCPOutputStream_SimpleTCPOutputStream_int)


/* init func: SimpleTCPOutputStream(int fd) */
GC_PROC_BEGIN(
    java_io_SimpleTCPOutputStream_SimpleTCPOutputStream_int_init,
    GC_PARAM(java_io_SimpleTCPOutputStream,this),
    JInt fd)
  GC_PARAM_REF(java_io_SimpleTCPOutputStream,this);
  GC_PUSH_PARAM(this);
  GC_FUNC_ENTER;
  {
    GC_PROC_CALL(java_io_OutputStream_OutputStream_init, GC_PASS(this));CHECK(0);
    {
      GC_SET(this, _java_io_SimpleTCPOutputStream_myfd, fd);
    }
  }
  __branch_1:;
  GC_FUNC_LEAVE;
  GC_POP_PARAM(this);
GC_PROC_END(java_io_SimpleTCPOutputStream_SimpleTCPOutputStream_int_init)


/* method: SimpleTCPOutputStream.write(int) */
GC_PROC_BEGIN(
    java_io_SimpleTCPOutputStream_write_int,
    GC_PARAM(java_io_SimpleTCPOutputStream,this),
    JInt b)
  EXCEPTION_THROWS
  GC_PARAM_REF(java_io_SimpleTCPOutputStream,this);
  GC_PUSH_PARAM(this);
  GC_FUNC_ENTER;
{
  JInt _tmp_643;
  GC_GET(_tmp_643, this, _java_io_SimpleTCPOutputStream_myfd);
  GC_PROC_CALL(java_io_SimpleTCPOutputStream_writeByte_int_int, _tmp_643, b);CHECK(0);
}
__branch_1:;
  GC_FUNC_LEAVE;
GC_PROC_END(java_io_SimpleTCPOutputStream_write_int)


/* method: SimpleTCPOutputStream.write(byte[]) */
GC_PROC_BEGIN(
    java_io_SimpleTCPOutputStream_write_byteA,
    GC_PARAM(java_io_SimpleTCPOutputStream,this),
    GC_PARAM(JByteArray,b))
  EXCEPTION_THROWS
  GC_PARAM_REF(java_io_SimpleTCPOutputStream,this);
  GC_PARAM_REF(JByteArray, b);
  GC_PUSH_PARAM(this);
  GC_FUNC_ENTER;
{
  JInt _tmp_644;
  GC_GET(_tmp_644, b, _JByteA_length);
  {
    struct java_io_SimpleTCPOutputStream_ClassStruct *_tmp_method;
    GC_GET(_tmp_method, this, class);
    GC_PROC_CALL(_tmp_method->methodTbl->write_byteA_int_int, GC_PASS(this), GC_PASS(b), 0, _tmp_644);
  }CHECK(0);
}
__branch_1:;
  GC_FUNC_LEAVE;
GC_PROC_END(java_io_SimpleTCPOutputStream_write_byteA)


/* method: SimpleTCPOutputStream.write(byte[], int, int) */
GC_PROC_BEGIN(
    java_io_SimpleTCPOutputStream_write_byteA_int_int,
    GC_PARAM(java_io_SimpleTCPOutputStream,this),
    GC_PARAM(JByteArray,b),
    JInt off,
    JInt len)
  EXCEPTION_THROWS
  GC_PARAM_REF(java_io_SimpleTCPOutputStream,this);
  GC_PARAM_REF(JByteArray, b);
  GC_PUSH_PARAM(this);
  GC_FUNC_ENTER;
{
  JInt res;
  JBoolean _tmp_645;
  JBoolean _tmp_646;
  if (off < 0) {
    _tmp_646 = true;
  } else {
    if (len < 0) {
      _tmp_646 = true;
    } else {
      _tmp_646 = false;
    }
  }
  if (_tmp_646) {
    _tmp_645 = true;
  } else {
    JInt _tmp_647;
    GC_GET(_tmp_647, b, _JByteA_length);
    if (off + len > _tmp_647) {
      _tmp_645 = true;
    } else {
      _tmp_645 = false;
    }
  }
  if (_tmp_645)
  {
    GC_REF(java_lang_ArrayIndexOutOfBoundsException,_tmp_648);
    GC_PUSH_ROOT(_tmp_648);
    GC_REF_FUNC_CALL(_tmp_648, java_lang_ArrayIndexOutOfBoundsException_ArrayIndexOutOfBoundsException, &java_lang_ArrayIndexOutOfBoundsException_Class, GC_PASS(java_lang_ArrayIndexOutOfBoundsException_Layout));CHECK(0);
    EXCEPTION_STORE_OBJ(_tmp_648);
    GC_POP_ROOT(_tmp_648);
    EXCEPTION_THROW(0,&java_lang_ArrayIndexOutOfBoundsException_Class)
    GC_POP_ROOT(_tmp_648);
  }
  JInt _tmp_649;
  GC_GET(_tmp_649, this, _java_io_SimpleTCPOutputStream_myfd);
  GC_VAR_FUNC_CALL(res, java_io_SimpleTCPOutputStream_writeByteA_int_byteA_int_int, _tmp_649, GC_PASS(b), off, len);CHECK(0);
  if (res == -1)
  {
    GC_REF(java_io_IOException,_tmp_650);
    GC_PUSH_ROOT(_tmp_650);
    GC_REF(java_lang_String,_tmp_651);
    GC_PUSH_ROOT(_tmp_651);
    GC_REF_FUNC_CALL(_tmp_651, java_lang_String_String_CCharArray, &java_lang_String_Class, GC_PASS(java_lang_String_Layout), "OutputStream was closed");
    GC_REF_FUNC_CALL(_tmp_650, java_io_IOException_IOException_java_lang_String, &java_io_IOException_Class, GC_PASS(java_io_IOException_Layout), GC_PASS(_tmp_651));CHECK(0);
    EXCEPTION_STORE_OBJ(_tmp_650);
    GC_POP_ROOT(_tmp_650);
    GC_POP_ROOT(_tmp_651);
    EXCEPTION_THROW(0,&java_io_IOException_Class)
    GC_POP_ROOT(_tmp_651);
    GC_POP_ROOT(_tmp_650);
  }
}
__branch_1:;
  GC_FUNC_LEAVE;
GC_PROC_END(java_io_SimpleTCPOutputStream_write_byteA_int_int)


/* method: SimpleTCPOutputStream.flush() */
GC_PROC_BEGIN(
    java_io_SimpleTCPOutputStream_flush,
    GC_PARAM(java_io_SimpleTCPOutputStream,this))
  EXCEPTION_THROWS
  GC_PARAM_REF(java_io_SimpleTCPOutputStream,this);
  GC_PUSH_PARAM(this);
  GC_FUNC_ENTER;
{
}
__branch_1:;
  GC_FUNC_LEAVE;
GC_PROC_END(java_io_SimpleTCPOutputStream_flush)


/* method: SimpleTCPOutputStream.close() */
GC_PROC_BEGIN(
    java_io_SimpleTCPOutputStream_close,
    GC_PARAM(java_io_SimpleTCPOutputStream,this))
  EXCEPTION_THROWS
  GC_PARAM_REF(java_io_SimpleTCPOutputStream,this);
  GC_PUSH_PARAM(this);
  GC_FUNC_ENTER;
{
  JInt _tmp_652;
  GC_GET(_tmp_652, this, _java_io_SimpleTCPOutputStream_myfd);
  GC_PROC_CALL(java_io_SimpleTCPOutputStream_close_int, _tmp_652);CHECK(0);
}
__branch_1:;
  GC_FUNC_LEAVE;
GC_PROC_END(java_io_SimpleTCPOutputStream_close)


void Fields_Init(void **__eFlag__) {
  GC__GET_THREAD_ROOT;
  GC_SET(java_lang_String_Static, _java_lang_String_serialVersionUID, -6849794470754667710L);
  GC_SET(java_lang_Throwable_Static, _java_lang_Throwable_serialVersionUID, -3042686055658047285L);
  {
    GC_REF(java_lang_PhonyWriter,_tmp_653);
    GC_PUSH_ROOT(_tmp_653);
    GC_REF_FUNC_CALL(_tmp_653, java_lang_PhonyWriter_PhonyWriter, &java_lang_PhonyWriter_Class, GC_PASS(java_lang_PhonyWriter_Layout));CHECK(0);
    GC_SET_REF(java_lang_System_Static, _java_lang_System_out, _tmp_653);
    GC_REF(java_lang_PhonyReader,_tmp_654);
    GC_PUSH_ROOT(_tmp_654);
    GC_REF_FUNC_CALL(_tmp_654, java_lang_PhonyReader_PhonyReader, &java_lang_PhonyReader_Class, GC_PASS(java_lang_PhonyReader_Layout));CHECK(0);
    GC_SET_REF(java_lang_System_Static, _java_lang_System_in, _tmp_654);
    GC_REF(java_lang_ErrWriter,_tmp_655);
    GC_PUSH_ROOT(_tmp_655);
    GC_REF_FUNC_CALL(_tmp_655, java_lang_ErrWriter_ErrWriter, &java_lang_ErrWriter_Class, GC_PASS(java_lang_ErrWriter_Layout));CHECK(0);
    GC_SET_REF(java_lang_System_Static, _java_lang_System_err, _tmp_655);
    GC_POP_ROOT(_tmp_655);
    GC_POP_ROOT(_tmp_654);
    GC_POP_ROOT(_tmp_653);
  }
  {
  }
  GC_REF(JCharArray,_tmp_656);
  GC_PUSH_ROOT(_tmp_656);
  GC_REF_FUNC_CALL(_tmp_656, newJCharArray, 1);CHECK(0);
  GC_SET_REF(java_io_PrintStream_Static, _java_io_PrintStream_line_separator, _tmp_656);
  GC_POP_ROOT(_tmp_656);
  GC_SET(java_lang_Integer_Static, _java_lang_Integer_serialVersionUID, 1360826667806852920L);
  GC_SET(java_lang_Integer_Static, _java_lang_Integer_MIN_VALUE, 0x80000000);
  GC_SET(java_lang_Integer_Static, _java_lang_Integer_MAX_VALUE, 0x7fffffff);
  GC_SET(java_lang_Integer_Static, _java_lang_Integer_SIZE, 32);
  GC_SET(java_lang_Integer_Static, _java_lang_Integer_MIN_CACHE, -128);
  GC_SET(java_lang_Integer_Static, _java_lang_Integer_MAX_CACHE, 127);
  GC_REF(RefArray,_tmp_657);
  GC_PUSH_ROOT(_tmp_657);
  GC_REF_FUNC_CALL(_tmp_657, newRefArray, 256);CHECK(0);
  GC_SET_REF(java_lang_Integer_Static, _java_lang_Integer_intCache, _tmp_657);
  GC_POP_ROOT(_tmp_657);
  GC_SET(java_lang_Number_Static, _java_lang_Number_serialVersionUID, -8742448824652078965L);
  GC_REF(JCharArray,_tmp_658);
  GC_PUSH_ROOT(_tmp_658);
  GC_REF_FUNC_CALL(_tmp_658, newJCharArray, 36);CHECK(0);
  GC_SET_VAR_ARRAY(_tmp_658, 0, '0');
  GC_SET_VAR_ARRAY(_tmp_658, 1, '1');
  GC_SET_VAR_ARRAY(_tmp_658, 2, '2');
  GC_SET_VAR_ARRAY(_tmp_658, 3, '3');
  GC_SET_VAR_ARRAY(_tmp_658, 4, '4');
  GC_SET_VAR_ARRAY(_tmp_658, 5, '5');
  GC_SET_VAR_ARRAY(_tmp_658, 6, '6');
  GC_SET_VAR_ARRAY(_tmp_658, 7, '7');
  GC_SET_VAR_ARRAY(_tmp_658, 8, '8');
  GC_SET_VAR_ARRAY(_tmp_658, 9, '9');
  GC_SET_VAR_ARRAY(_tmp_658, 10, 'a');
  GC_SET_VAR_ARRAY(_tmp_658, 11, 'b');
  GC_SET_VAR_ARRAY(_tmp_658, 12, 'c');
  GC_SET_VAR_ARRAY(_tmp_658, 13, 'd');
  GC_SET_VAR_ARRAY(_tmp_658, 14, 'e');
  GC_SET_VAR_ARRAY(_tmp_658, 15, 'f');
  GC_SET_VAR_ARRAY(_tmp_658, 16, 'g');
  GC_SET_VAR_ARRAY(_tmp_658, 17, 'h');
  GC_SET_VAR_ARRAY(_tmp_658, 18, 'i');
  GC_SET_VAR_ARRAY(_tmp_658, 19, 'j');
  GC_SET_VAR_ARRAY(_tmp_658, 20, 'k');
  GC_SET_VAR_ARRAY(_tmp_658, 21, 'l');
  GC_SET_VAR_ARRAY(_tmp_658, 22, 'm');
  GC_SET_VAR_ARRAY(_tmp_658, 23, 'n');
  GC_SET_VAR_ARRAY(_tmp_658, 24, 'o');
  GC_SET_VAR_ARRAY(_tmp_658, 25, 'p');
  GC_SET_VAR_ARRAY(_tmp_658, 26, 'q');
  GC_SET_VAR_ARRAY(_tmp_658, 27, 'r');
  GC_SET_VAR_ARRAY(_tmp_658, 28, 's');
  GC_SET_VAR_ARRAY(_tmp_658, 29, 't');
  GC_SET_VAR_ARRAY(_tmp_658, 30, 'u');
  GC_SET_VAR_ARRAY(_tmp_658, 31, 'v');
  GC_SET_VAR_ARRAY(_tmp_658, 32, 'w');
  GC_SET_VAR_ARRAY(_tmp_658, 33, 'x');
  GC_SET_VAR_ARRAY(_tmp_658, 34, 'y');
  GC_SET_VAR_ARRAY(_tmp_658, 35, 'z');
  GC_SET_REF(java_lang_Number_Static, _java_lang_Number_digits, _tmp_658);
  GC_POP_ROOT(_tmp_658);
  GC_SET(Monitor_Static, _Monitor_AUTO, 0);
  GC_SET(Monitor_Static, _Monitor_MOVIE, 1);
  GC_SET(Monitor_Static, _Monitor_IDLE, 2);
  GC_SET(java_lang_Thread_Static, _java_lang_Thread_MAX_PRIORITY, 10);
  GC_SET(java_lang_Thread_Static, _java_lang_Thread_MIN_PRIORITY, 1);
  GC_SET(java_lang_Thread_Static, _java_lang_Thread_NORM_PRIORITY, 5);
  GC_SET(java_io_IOException_Static, _java_io_IOException_serialVersionUID, 7818375828146090155L);
  GC_REF(JByteArray,_tmp_659);
  GC_PUSH_ROOT(_tmp_659);
  GC_REF_FUNC_CALL(_tmp_659, newJIntArray, 2);CHECK(0);
  GC_SET_VAR_ARRAY(_tmp_659, 0, 13);
  GC_SET_VAR_ARRAY(_tmp_659, 1, 10);
  GC_SET_REF(HTTP_t_Static, _HTTP_t_CRLF, _tmp_659);
  GC_POP_ROOT(_tmp_659);
  GC_SET(se_lth_cs_eda040_realcamera_AxisM3006V_Static, _se_lth_cs_eda040_realcamera_AxisM3006V_TIME_ARRAY_SIZE, 8);
  GC_SET(se_lth_cs_eda040_realcamera_AxisM3006V_Static, _se_lth_cs_eda040_realcamera_AxisM3006V_IMAGE_BUFFER_SIZE, 131072);
  GC_SET(se_lth_cs_eda040_realcamera_AxisM3006V_Static, _se_lth_cs_eda040_realcamera_AxisM3006V_IMAGE_WIDTH, 640);
  GC_SET(se_lth_cs_eda040_realcamera_AxisM3006V_Static, _se_lth_cs_eda040_realcamera_AxisM3006V_IMAGE_HEIGHT, 480);
  GC_SET(java_lang_InterruptedException_Static, _java_lang_InterruptedException_serialVersionUID, 6700697376100628473L);
  GC_SET(java_lang_Exception_Static, _java_lang_Exception_serialVersionUID, -3387516993124229948L);
  GC_SET(java_lang_StringBuilder_Static, _java_lang_StringBuilder_serialVersionUID, 4383685877147921099L);
  GC_SET(java_lang_StringBuilder_Static, _java_lang_StringBuilder_DEFAULT_CAPACITY, 16);
  GC_SET(java_lang_StringBuffer_Static, _java_lang_StringBuffer_serialVersionUID, 3388685877147921107L);
  GC_SET(java_lang_StringBuffer_Static, _java_lang_StringBuffer_DEFAULT_CAPACITY, 16);
  GC_SET(java_lang_StringIndexOutOfBoundsException_Static, _java_lang_StringIndexOutOfBoundsException_serialVersionUID, -6762910422159637258L);
  GC_SET(java_lang_IndexOutOfBoundsException_Static, _java_lang_IndexOutOfBoundsException_serialVersionUID, 234122996006267687L);
  GC_SET(java_lang_RuntimeException_Static, _java_lang_RuntimeException_serialVersionUID, -7034897190745766939L);
  GC_SET(java_lang_Character_Static, _java_lang_Character_serialVersionUID, 3786198910865385080L);
  GC_SET(java_lang_Character_Static, _java_lang_Character_MIN_RADIX, 2);
  GC_SET(java_lang_Character_Static, _java_lang_Character_MAX_RADIX, 36);
  GC_SET(java_lang_Character_Static, _java_lang_Character_MIN_VALUE, ' ');
  GC_SET(java_lang_Character_Static, _java_lang_Character_MAX_VALUE, '￿');
  GC_SET(java_lang_Character_Static, _java_lang_Character_UPPERCASE_LETTER, 1);
  GC_SET(java_lang_Character_Static, _java_lang_Character_LOWERCASE_LETTER, 2);
  GC_SET(java_lang_Character_Static, _java_lang_Character_TITLECASE_LETTER, 3);
  GC_SET(java_lang_Character_Static, _java_lang_Character_NON_SPACING_MARK, 6);
  GC_SET(java_lang_Character_Static, _java_lang_Character_COMBINING_SPACING_MARK, 8);
  GC_SET(java_lang_Character_Static, _java_lang_Character_ENCLOSING_MARK, 7);
  GC_SET(java_lang_Character_Static, _java_lang_Character_DECIMAL_DIGIT_NUMBER, 9);
  GC_SET(java_lang_Character_Static, _java_lang_Character_LETTER_NUMBER, 10);
  GC_SET(java_lang_Character_Static, _java_lang_Character_OTHER_NUMBER, 11);
  GC_SET(java_lang_Character_Static, _java_lang_Character_SPACE_SEPARATOR, 12);
  GC_SET(java_lang_Character_Static, _java_lang_Character_LINE_SEPARATOR, 13);
  GC_SET(java_lang_Character_Static, _java_lang_Character_PARAGRAPH_SEPARATOR, 14);
  GC_SET(java_lang_Character_Static, _java_lang_Character_CONTROL, 15);
  GC_SET(java_lang_Character_Static, _java_lang_Character_FORMAT, 16);
  GC_SET(java_lang_Character_Static, _java_lang_Character_SURROGATE, 19);
  GC_SET(java_lang_Character_Static, _java_lang_Character_PRIVATE_USE, 18);
  GC_SET(java_lang_Character_Static, _java_lang_Character_UNASSIGNED, 0);
  GC_SET(java_lang_Character_Static, _java_lang_Character_MODIFIER_LETTER, 4);
  GC_SET(java_lang_Character_Static, _java_lang_Character_OTHER_LETTER, 5);
  GC_SET(java_lang_Character_Static, _java_lang_Character_CONNECTOR_PUNCTUATION, 23);
  GC_SET(java_lang_Character_Static, _java_lang_Character_DASH_PUNCTUATION, 20);
  GC_SET(java_lang_Character_Static, _java_lang_Character_START_PUNCTUATION, 21);
  GC_SET(java_lang_Character_Static, _java_lang_Character_END_PUNCTUATION, 22);
  GC_SET(java_lang_Character_Static, _java_lang_Character_INITIAL_QUOTE_PUNCTUATION, 29);
  GC_SET(java_lang_Character_Static, _java_lang_Character_FINAL_QUOTE_PUNCTUATION, 30);
  GC_SET(java_lang_Character_Static, _java_lang_Character_OTHER_PUNCTUATION, 24);
  GC_SET(java_lang_Character_Static, _java_lang_Character_MATH_SYMBOL, 25);
  GC_SET(java_lang_Character_Static, _java_lang_Character_CURRENCY_SYMBOL, 26);
  GC_SET(java_lang_Character_Static, _java_lang_Character_MODIFIER_SYMBOL, 27);
  GC_SET(java_lang_Character_Static, _java_lang_Character_OTHER_SYMBOL, 28);
  GC_SET(java_lang_Character_Static, _java_lang_Character_DIRECTIONALITY_UNDEFINED, -1);
  GC_SET(java_lang_Character_Static, _java_lang_Character_DIRECTIONALITY_LEFT_TO_RIGHT, 0);
  GC_SET(java_lang_Character_Static, _java_lang_Character_DIRECTIONALITY_RIGHT_TO_LEFT, 1);
  GC_SET(java_lang_Character_Static, _java_lang_Character_DIRECTIONALITY_RIGHT_TO_LEFT_ARABIC, 2);
  GC_SET(java_lang_Character_Static, _java_lang_Character_DIRECTIONALITY_EUROPEAN_NUMBER, 3);
  GC_SET(java_lang_Character_Static, _java_lang_Character_DIRECTIONALITY_EUROPEAN_NUMBER_SEPARATOR, 4);
  GC_SET(java_lang_Character_Static, _java_lang_Character_DIRECTIONALITY_EUROPEAN_NUMBER_TERMINATOR, 5);
  GC_SET(java_lang_Character_Static, _java_lang_Character_DIRECTIONALITY_ARABIC_NUMBER, 6);
  GC_SET(java_lang_Character_Static, _java_lang_Character_DIRECTIONALITY_COMMON_NUMBER_SEPARATOR, 7);
  GC_SET(java_lang_Character_Static, _java_lang_Character_DIRECTIONALITY_NONSPACING_MARK, 8);
  GC_SET(java_lang_Character_Static, _java_lang_Character_DIRECTIONALITY_BOUNDARY_NEUTRAL, 9);
  GC_SET(java_lang_Character_Static, _java_lang_Character_DIRECTIONALITY_PARAGRAPH_SEPARATOR, 10);
  GC_SET(java_lang_Character_Static, _java_lang_Character_DIRECTIONALITY_SEGMENT_SEPARATOR, 11);
  GC_SET(java_lang_Character_Static, _java_lang_Character_DIRECTIONALITY_WHITESPACE, 12);
  GC_SET(java_lang_Character_Static, _java_lang_Character_DIRECTIONALITY_OTHER_NEUTRALS, 13);
  GC_SET(java_lang_Character_Static, _java_lang_Character_DIRECTIONALITY_LEFT_TO_RIGHT_EMBEDDING, 14);
  GC_SET(java_lang_Character_Static, _java_lang_Character_DIRECTIONALITY_LEFT_TO_RIGHT_OVERRIDE, 15);
  GC_SET(java_lang_Character_Static, _java_lang_Character_DIRECTIONALITY_RIGHT_TO_LEFT_EMBEDDING, 16);
  GC_SET(java_lang_Character_Static, _java_lang_Character_DIRECTIONALITY_RIGHT_TO_LEFT_OVERRIDE, 17);
  GC_SET(java_lang_Character_Static, _java_lang_Character_DIRECTIONALITY_POP_DIRECTIONAL_FORMAT, 18);
  GC_REF(java_lang_String,_tmp_660);
  GC_PUSH_ROOT(_tmp_660);
  GC_REF_FUNC_CALL(_tmp_660, java_lang_String_String_CCharArray, &java_lang_String_Class, GC_PASS(java_lang_String_Layout), "￿￿￿￿￿￿￿￿￿￿￿￿￿￿ \t￿￿\n\f\r !\"#￿￿\n\f\r !\"#￿￿￿￿￿￿￿￿￾￿￿￿￿￿￿￿￿￿￿￿￿￿￿￿￿￿￿￿￿￿￿￿￿￿￿￿￿￿￿￿￿￿￿￿￿￿￿￿￿￿￿￿￿￿￿￿￿￿￿￿￿￿￿￿￿￿￿￿￿￿￿￿￿￿￿￿￿￿￿￿￿￿￿￿￿￿￿ \t￿￿￿￿ \t￿\ndϨ￿￿￿(2<FPZ✐￿￿￿￿￿￿￿￿￿￿￿￿￿￿￿￿￿￿￿￿￿￿￿￿￿￿￿￿￿￿￿￿￿￿￿￿ \t￿￿￿\t\n\f2dǴϨ\t\n\f2dǴϨϨᎈ✐￿\n\f\r￿￿\t\n \t\n\t￿￿");
  GC_SET_REF(java_lang_Character_Static, _java_lang_Character_NUM_VALUE, _tmp_660);
  GC_POP_ROOT(_tmp_660);
  GC_SET(java_lang_Character_Static, _java_lang_Character_TYPE_MASK, 0x1F);
  GC_SET(java_lang_Character_Static, _java_lang_Character_NO_BREAK_MASK, 0x20);
  GC_SET(java_lang_Character_Static, _java_lang_Character_MIRROR_MASK, 0x40);
  GC_SET(java_lang_Math_Static, _java_lang_Math_E, 2.718281828459045);
  GC_SET(java_lang_Math_Static, _java_lang_Math_PI, 3.141592653589793);
  GC_SET(java_lang_Long_Static, _java_lang_Long_serialVersionUID, 4290774380558885855L);
  GC_SET(java_lang_Long_Static, _java_lang_Long_MIN_VALUE, 0x8000000000000000L);
  GC_SET(java_lang_Long_Static, _java_lang_Long_MAX_VALUE, 0x7fffffffffffffffL);
  GC_SET(java_lang_Float_Static, _java_lang_Float_serialVersionUID, -2671257302660747028L);
  GC_SET(java_lang_Float_Static, _java_lang_Float_MAX_VALUE, 3.4028235e+38);
  GC_SET(java_lang_Float_Static, _java_lang_Float_MIN_VALUE, 1.4e-45);
  GC_SET(java_lang_Float_Static, _java_lang_Float_NEGATIVE_INFINITY, -HUGE_VALF);
  GC_SET(java_lang_Float_Static, _java_lang_Float_POSITIVE_INFINITY, HUGE_VALF);
  GC_SET(java_lang_Float_Static, _java_lang_Float_NaN, NAN);
  GC_SET(java_lang_Double_Static, _java_lang_Double_serialVersionUID, -9172774392245257468L);
  GC_SET(java_lang_Double_Static, _java_lang_Double_MAX_VALUE, 1.7976931348623157e+308);
  GC_SET(java_lang_Double_Static, _java_lang_Double_MIN_VALUE, 5e-324);
  GC_SET(java_lang_Double_Static, _java_lang_Double_NEGATIVE_INFINITY, -HUGE_VALL);
  GC_SET(java_lang_Double_Static, _java_lang_Double_POSITIVE_INFINITY, HUGE_VALL);
  GC_SET(java_lang_Double_Static, _java_lang_Double_NaN, NAN);
  GC_SET(java_lang_StackTraceElement_Static, _java_lang_StackTraceElement_serialVersionUID, 6992337162326171013L);
  GC_SET(java_lang_IllegalArgumentException_Static, _java_lang_IllegalArgumentException_serialVersionUID, -5365630128856068164L);
  GC_SET(java_lang_IllegalStateException_Static, _java_lang_IllegalStateException_serialVersionUID, -1848914673093119416L);
  GC_SET(java_lang_NullPointerException_Static, _java_lang_NullPointerException_serialVersionUID, 5162710183389028792L);
  GC_SET(java_io_InterruptedIOException_Static, _java_io_InterruptedIOException_serialVersionUID, 4020568460727500567L);
  GC_SET(java_lang_ArrayIndexOutOfBoundsException_Static, _java_lang_ArrayIndexOutOfBoundsException_serialVersionUID, -5116101128118950844L);
  GC_SET(java_lang_NumberFormatException_Static, _java_lang_NumberFormatException_serialVersionUID, -2848938806368998894L);
  GC_SET(java_lang_Error_Static, _java_lang_Error_serialVersionUID, 4980196508277280342L);
  GC_SET(java_net_UnknownHostException_Static, _java_net_UnknownHostException_serialVersionUID, -4639126076052875403L);
  GC_SET(java_net_InetSocketAddress_Static, _java_net_InetSocketAddress_serialVersionUID, 5076001401234631237L);
catch_0:
gc_leave:
return;
}
void javaClasses_Init(void **__eFlag__) {
  // Declare phony Object ref to be used when
  // return value is not used by tha application
  GC_PUSH_ALIAS(___phonyObj___);


/* AST.NullType.genInit() not implemented yet */

/* AST.VoidType.genInit() not implemented yet */
  GC_PUSH_STATIC_ROOT(java_lang_Object_LayoutStatic);
  GC_NEW_LAYOUT(java_lang_Object_LayoutStatic,java_lang_Object_ClassStatic,  0);

  GC_PUSH_STATIC_ROOT(java_lang_Object_Layout);
  GC_NEW_LAYOUT(java_lang_Object_Layout,java_lang_Object,  0);

  GC_PUSH_STATIC_ROOT(java_lang_Object_Static);
  GC_NEW(java_lang_Object_Static,java_lang_Object_LayoutStatic);

  java_lang_Object_Class.super = (void *) 0;
  java_lang_Object_Class.methodTbl = &java_lang_Object_MethodTbl;
  java_lang_Object_MethodTbl.notifyAll = java_lang_Object_notifyAll;
  java_lang_Object_MethodTbl.wait_long_int = java_lang_Object_wait_long_int;
  java_lang_Object_MethodTbl.toString = java_lang_Object_toString;
  java_lang_Object_MethodTbl.wait = java_lang_Object_wait;
  java_lang_Object_MethodTbl.clone = java_lang_Object_clone;
  java_lang_Object_Class.classIndex = JAVA_LANG_OBJECT_INDEX;

  GC_PUSH_STATIC_ROOT(java_lang_String_LayoutStatic);
  GC_NEW_LAYOUT(java_lang_String_LayoutStatic,java_lang_String_ClassStatic,  0);

  GC_PUSH_STATIC_ROOT(java_lang_String_Layout);
  GC_NEW_LAYOUT(java_lang_String_Layout,java_lang_String,  1,  GC_LAYOUT_FIELD(java_lang_String,_java_lang_String_value));

  GC_PUSH_STATIC_ROOT(java_lang_String_Static);
  GC_NEW(java_lang_String_Static,java_lang_String_LayoutStatic);

  java_lang_String_Class.super = &java_lang_Object_Class;
  java_lang_String_Class.methodTbl = &java_lang_String_MethodTbl;
  java_lang_String_MethodTbl.notifyAll = java_lang_Object_notifyAll;
  java_lang_String_MethodTbl.wait_long_int = java_lang_Object_wait_long_int;
  java_lang_String_MethodTbl.equals_java_lang_Object = java_lang_String_equals_java_lang_Object;
  java_lang_String_MethodTbl.toString = java_lang_String_toString;
  java_lang_String_MethodTbl.wait = java_lang_Object_wait;
  java_lang_String_MethodTbl.clone = java_lang_Object_clone;
  java_lang_String_MethodTbl.length = java_lang_String_length;
  java_lang_String_MethodTbl.charAt_int = java_lang_String_charAt_int;
  java_lang_String_MethodTbl.getChars_int_int_charA_int = java_lang_String_getChars_int_int_charA_int;
  java_lang_String_MethodTbl.getBytes_java_lang_String = java_lang_String_getBytes_java_lang_String;
  java_lang_String_MethodTbl.getBytes = java_lang_String_getBytes;
  java_lang_String_MethodTbl.compareTo_java_lang_String = java_lang_String_compareTo_java_lang_String;
  java_lang_String_MethodTbl.regionMatches_int_java_lang_String_int_int = java_lang_String_regionMatches_int_java_lang_String_int_int;
  java_lang_String_MethodTbl.regionMatches_boolean_int_java_lang_String_int_int = java_lang_String_regionMatches_boolean_int_java_lang_String_int_int;
  java_lang_String_MethodTbl.indexOf_int_int = java_lang_String_indexOf_int_int;
  java_lang_String_MethodTbl.lastIndexOf_int_int = java_lang_String_lastIndexOf_int_int;
  java_lang_String_MethodTbl.indexOf_java_lang_String_int = java_lang_String_indexOf_java_lang_String_int;
  java_lang_String_MethodTbl.lastIndexOf_java_lang_String_int = java_lang_String_lastIndexOf_java_lang_String_int;
  java_lang_String_MethodTbl.substring_int_int = java_lang_String_substring_int_int;
  java_lang_String_Class.ifazTbl = &java_lang_String_ifazTbl;
  java_lang_String_Class.ifazTbl->java_io_Serializable_methodTbl = &java_lang_String_java_io_Serializable_MethodTblStruct;
  java_lang_String_Class.ifazTbl->java_io_Serializable_methodTbl->toString = java_lang_String_MethodTbl.toString;
  java_lang_String_Class.ifazTbl->java_io_Serializable_methodTbl->wait_long_int = java_lang_String_MethodTbl.wait_long_int;
  java_lang_String_Class.ifazTbl->java_io_Serializable_methodTbl->notifyAll = java_lang_String_MethodTbl.notifyAll;
  java_lang_String_Class.ifazTbl->java_io_Serializable_methodTbl->wait = java_lang_String_MethodTbl.wait;
  java_lang_String_Class.ifazTbl->java_lang_Comparable_methodTbl = &java_lang_String_java_lang_Comparable_MethodTblStruct;
  java_lang_String_Class.ifazTbl->java_lang_Comparable_methodTbl->toString = java_lang_String_MethodTbl.toString;
  java_lang_String_Class.ifazTbl->java_lang_Comparable_methodTbl->wait_long_int = java_lang_String_MethodTbl.wait_long_int;
  java_lang_String_Class.ifazTbl->java_lang_Comparable_methodTbl->notifyAll = java_lang_String_MethodTbl.notifyAll;
  java_lang_String_Class.ifazTbl->java_lang_Comparable_methodTbl->wait = java_lang_String_MethodTbl.wait;
  java_lang_String_Class.ifazTbl->java_lang_CharSequence_methodTbl = &java_lang_String_java_lang_CharSequence_MethodTblStruct;
  java_lang_String_Class.ifazTbl->java_lang_CharSequence_methodTbl->toString = java_lang_String_MethodTbl.toString;
  java_lang_String_Class.ifazTbl->java_lang_CharSequence_methodTbl->wait_long_int = java_lang_String_MethodTbl.wait_long_int;
  java_lang_String_Class.ifazTbl->java_lang_CharSequence_methodTbl->notifyAll = java_lang_String_MethodTbl.notifyAll;
  java_lang_String_Class.ifazTbl->java_lang_CharSequence_methodTbl->wait = java_lang_String_MethodTbl.wait;
  java_lang_String_Class.iface_size = 3;
  java_lang_String_Class.iface_array[0] = JAVA_IO_SERIALIZABLE_INDEX;
  java_lang_String_Class.iface_array[1] = JAVA_LANG_COMPARABLE_INDEX;
  java_lang_String_Class.iface_array[2] = JAVA_LANG_CHARSEQUENCE_INDEX;
  java_lang_String_Class.classIndex = JAVA_LANG_STRING_INDEX;

  GC_PUSH_STATIC_ROOT(java_lang_Cloneable_LayoutStatic);
  GC_NEW_LAYOUT(java_lang_Cloneable_LayoutStatic,java_lang_Cloneable_ClassStatic,  0);

  GC_PUSH_STATIC_ROOT(java_lang_Cloneable_Static);
  GC_NEW(java_lang_Cloneable_Static,java_lang_Cloneable_LayoutStatic);


  GC_PUSH_STATIC_ROOT(java_io_Serializable_LayoutStatic);
  GC_NEW_LAYOUT(java_io_Serializable_LayoutStatic,java_io_Serializable_ClassStatic,  0);

  GC_PUSH_STATIC_ROOT(java_io_Serializable_Static);
  GC_NEW(java_io_Serializable_Static,java_io_Serializable_LayoutStatic);


  GC_PUSH_STATIC_ROOT(java_lang_Throwable_LayoutStatic);
  GC_NEW_LAYOUT(java_lang_Throwable_LayoutStatic,java_lang_Throwable_ClassStatic,  0);

  GC_PUSH_STATIC_ROOT(java_lang_Throwable_Layout);
  GC_NEW_LAYOUT(java_lang_Throwable_Layout,java_lang_Throwable,  3,  GC_LAYOUT_FIELD(java_lang_Throwable,_java_lang_Throwable_detailMessage),  GC_LAYOUT_FIELD(java_lang_Throwable,_java_lang_Throwable_cause),  GC_LAYOUT_FIELD(java_lang_Throwable,_java_lang_Throwable_stackTrace));

  GC_PUSH_STATIC_ROOT(java_lang_Throwable_Static);
  GC_NEW(java_lang_Throwable_Static,java_lang_Throwable_LayoutStatic);

  java_lang_Throwable_Class.super = &java_lang_Object_Class;
  java_lang_Throwable_Class.methodTbl = &java_lang_Throwable_MethodTbl;
  java_lang_Throwable_MethodTbl.notifyAll = java_lang_Object_notifyAll;
  java_lang_Throwable_MethodTbl.wait_long_int = java_lang_Object_wait_long_int;
  java_lang_Throwable_MethodTbl.toString = java_lang_Throwable_toString;
  java_lang_Throwable_MethodTbl.wait = java_lang_Object_wait;
  java_lang_Throwable_MethodTbl.clone = java_lang_Object_clone;
  java_lang_Throwable_MethodTbl.getMessage = java_lang_Throwable_getMessage;
  java_lang_Throwable_MethodTbl.printStackTrace_java_io_PrintStream = java_lang_Throwable_printStackTrace_java_io_PrintStream;
  java_lang_Throwable_MethodTbl.stackTraceString = java_lang_Throwable_stackTraceString;
  java_lang_Throwable_MethodTbl.fillInStackTrace = java_lang_Throwable_fillInStackTrace;
  java_lang_Throwable_Class.ifazTbl = &java_lang_Throwable_ifazTbl;
  java_lang_Throwable_Class.ifazTbl->java_io_Serializable_methodTbl = &java_lang_Throwable_java_io_Serializable_MethodTblStruct;
  java_lang_Throwable_Class.ifazTbl->java_io_Serializable_methodTbl->toString = java_lang_Throwable_MethodTbl.toString;
  java_lang_Throwable_Class.ifazTbl->java_io_Serializable_methodTbl->wait_long_int = java_lang_Throwable_MethodTbl.wait_long_int;
  java_lang_Throwable_Class.ifazTbl->java_io_Serializable_methodTbl->notifyAll = java_lang_Throwable_MethodTbl.notifyAll;
  java_lang_Throwable_Class.ifazTbl->java_io_Serializable_methodTbl->wait = java_lang_Throwable_MethodTbl.wait;
  java_lang_Throwable_Class.iface_size = 1;
  java_lang_Throwable_Class.iface_array[0] = JAVA_IO_SERIALIZABLE_INDEX;
  java_lang_Throwable_Class.classIndex = JAVA_LANG_THROWABLE_INDEX;

  GC_PUSH_STATIC_ROOT(java_lang_System_LayoutStatic);
  GC_NEW_LAYOUT(java_lang_System_LayoutStatic,java_lang_System_ClassStatic,  3,  GC_LAYOUT_FIELD(java_lang_System_ClassStatic,_java_lang_System_out),  GC_LAYOUT_FIELD(java_lang_System_ClassStatic,_java_lang_System_in),  GC_LAYOUT_FIELD(java_lang_System_ClassStatic,_java_lang_System_err));

  GC_PUSH_STATIC_ROOT(java_lang_System_Layout);
  GC_NEW_LAYOUT(java_lang_System_Layout,java_lang_System,  0);

  GC_PUSH_STATIC_ROOT(java_lang_System_Static);
  GC_NEW(java_lang_System_Static,java_lang_System_LayoutStatic);

  java_lang_System_Class.super = &java_lang_Object_Class;
  java_lang_System_Class.methodTbl = &java_lang_System_MethodTbl;
  java_lang_System_MethodTbl.notifyAll = java_lang_Object_notifyAll;
  java_lang_System_MethodTbl.wait_long_int = java_lang_Object_wait_long_int;
  java_lang_System_MethodTbl.toString = java_lang_Object_toString;
  java_lang_System_MethodTbl.wait = java_lang_Object_wait;
  java_lang_System_MethodTbl.clone = java_lang_Object_clone;
  java_lang_System_Class.classIndex = JAVA_LANG_SYSTEM_INDEX;

  GC_PUSH_STATIC_ROOT(java_lang_PhonyWriter_LayoutStatic);
  GC_NEW_LAYOUT(java_lang_PhonyWriter_LayoutStatic,java_lang_PhonyWriter_ClassStatic,  0);

  GC_PUSH_STATIC_ROOT(java_lang_PhonyWriter_Layout);
  GC_NEW_LAYOUT(java_lang_PhonyWriter_Layout,java_lang_PhonyWriter,  2,  GC_LAYOUT_FIELD(java_lang_PhonyWriter,_java_io_FilterOutputStream_out),  GC_LAYOUT_FIELD(java_lang_PhonyWriter,_java_io_PrintStream_encoding));

  GC_PUSH_STATIC_ROOT(java_lang_PhonyWriter_Static);
  GC_NEW(java_lang_PhonyWriter_Static,java_lang_PhonyWriter_LayoutStatic);

  java_lang_PhonyWriter_Class.super = &java_io_PrintStream_Class;
  java_lang_PhonyWriter_Class.methodTbl = &java_lang_PhonyWriter_MethodTbl;
  java_lang_PhonyWriter_MethodTbl.notifyAll = java_lang_Object_notifyAll;
  java_lang_PhonyWriter_MethodTbl.wait_long_int = java_lang_Object_wait_long_int;
  java_lang_PhonyWriter_MethodTbl.toString = java_lang_Object_toString;
  java_lang_PhonyWriter_MethodTbl.wait = java_lang_Object_wait;
  java_lang_PhonyWriter_MethodTbl.clone = java_lang_Object_clone;
  java_lang_PhonyWriter_MethodTbl.write_int = java_io_PrintStream_write_int;
  java_lang_PhonyWriter_MethodTbl.write_byteA = java_io_FilterOutputStream_write_byteA;
  java_lang_PhonyWriter_MethodTbl.write_byteA_int_int = java_io_PrintStream_write_byteA_int_int;
  java_lang_PhonyWriter_MethodTbl.flush = java_lang_PhonyWriter_flush;
  java_lang_PhonyWriter_MethodTbl.setError = java_io_PrintStream_setError;
  java_lang_PhonyWriter_MethodTbl.print_java_lang_String_boolean = java_io_PrintStream_print_java_lang_String_boolean;
  java_lang_PhonyWriter_MethodTbl.print_charA_int_int_boolean = java_io_PrintStream_print_charA_int_int_boolean;
  java_lang_PhonyWriter_MethodTbl.writeChars_charA_int_int = java_io_PrintStream_writeChars_charA_int_int;
  java_lang_PhonyWriter_MethodTbl.writeChars_java_lang_String_int_int = java_io_PrintStream_writeChars_java_lang_String_int_int;
  java_lang_PhonyWriter_MethodTbl.print_java_lang_String = java_lang_PhonyWriter_print_java_lang_String;
  java_lang_PhonyWriter_MethodTbl.println_java_lang_String = java_lang_PhonyWriter_println_java_lang_String;
  java_lang_PhonyWriter_Class.classIndex = JAVA_LANG_PHONYWRITER_INDEX;

  GC_PUSH_STATIC_ROOT(java_io_PrintStream_LayoutStatic);
  GC_NEW_LAYOUT(java_io_PrintStream_LayoutStatic,java_io_PrintStream_ClassStatic,  1,  GC_LAYOUT_FIELD(java_io_PrintStream_ClassStatic,_java_io_PrintStream_line_separator));

  GC_PUSH_STATIC_ROOT(java_io_PrintStream_Layout);
  GC_NEW_LAYOUT(java_io_PrintStream_Layout,java_io_PrintStream,  2,  GC_LAYOUT_FIELD(java_io_PrintStream,_java_io_FilterOutputStream_out),  GC_LAYOUT_FIELD(java_io_PrintStream,_java_io_PrintStream_encoding));

  GC_PUSH_STATIC_ROOT(java_io_PrintStream_Static);
  GC_NEW(java_io_PrintStream_Static,java_io_PrintStream_LayoutStatic);

  java_io_PrintStream_Class.super = &java_io_FilterOutputStream_Class;
  java_io_PrintStream_Class.methodTbl = &java_io_PrintStream_MethodTbl;
  java_io_PrintStream_MethodTbl.notifyAll = java_lang_Object_notifyAll;
  java_io_PrintStream_MethodTbl.wait_long_int = java_lang_Object_wait_long_int;
  java_io_PrintStream_MethodTbl.toString = java_lang_Object_toString;
  java_io_PrintStream_MethodTbl.wait = java_lang_Object_wait;
  java_io_PrintStream_MethodTbl.clone = java_lang_Object_clone;
  java_io_PrintStream_MethodTbl.write_int = java_io_PrintStream_write_int;
  java_io_PrintStream_MethodTbl.write_byteA = java_io_FilterOutputStream_write_byteA;
  java_io_PrintStream_MethodTbl.write_byteA_int_int = java_io_PrintStream_write_byteA_int_int;
  java_io_PrintStream_MethodTbl.flush = java_io_PrintStream_flush;
  java_io_PrintStream_MethodTbl.setError = java_io_PrintStream_setError;
  java_io_PrintStream_MethodTbl.print_java_lang_String_boolean = java_io_PrintStream_print_java_lang_String_boolean;
  java_io_PrintStream_MethodTbl.print_charA_int_int_boolean = java_io_PrintStream_print_charA_int_int_boolean;
  java_io_PrintStream_MethodTbl.writeChars_charA_int_int = java_io_PrintStream_writeChars_charA_int_int;
  java_io_PrintStream_MethodTbl.writeChars_java_lang_String_int_int = java_io_PrintStream_writeChars_java_lang_String_int_int;
  java_io_PrintStream_MethodTbl.print_java_lang_String = java_io_PrintStream_print_java_lang_String;
  java_io_PrintStream_Class.classIndex = JAVA_IO_PRINTSTREAM_INDEX;

  GC_PUSH_STATIC_ROOT(java_io_FilterOutputStream_LayoutStatic);
  GC_NEW_LAYOUT(java_io_FilterOutputStream_LayoutStatic,java_io_FilterOutputStream_ClassStatic,  0);

  GC_PUSH_STATIC_ROOT(java_io_FilterOutputStream_Layout);
  GC_NEW_LAYOUT(java_io_FilterOutputStream_Layout,java_io_FilterOutputStream,  1,  GC_LAYOUT_FIELD(java_io_FilterOutputStream,_java_io_FilterOutputStream_out));

  GC_PUSH_STATIC_ROOT(java_io_FilterOutputStream_Static);
  GC_NEW(java_io_FilterOutputStream_Static,java_io_FilterOutputStream_LayoutStatic);

  java_io_FilterOutputStream_Class.super = &java_io_OutputStream_Class;
  java_io_FilterOutputStream_Class.methodTbl = &java_io_FilterOutputStream_MethodTbl;
  java_io_FilterOutputStream_MethodTbl.notifyAll = java_lang_Object_notifyAll;
  java_io_FilterOutputStream_MethodTbl.wait_long_int = java_lang_Object_wait_long_int;
  java_io_FilterOutputStream_MethodTbl.toString = java_lang_Object_toString;
  java_io_FilterOutputStream_MethodTbl.wait = java_lang_Object_wait;
  java_io_FilterOutputStream_MethodTbl.clone = java_lang_Object_clone;
  java_io_FilterOutputStream_MethodTbl.write_int = java_io_FilterOutputStream_write_int;
  java_io_FilterOutputStream_MethodTbl.write_byteA = java_io_FilterOutputStream_write_byteA;
  java_io_FilterOutputStream_MethodTbl.write_byteA_int_int = java_io_FilterOutputStream_write_byteA_int_int;
  java_io_FilterOutputStream_MethodTbl.flush = java_io_FilterOutputStream_flush;
  java_io_FilterOutputStream_MethodTbl.close = java_io_FilterOutputStream_close;
  java_io_FilterOutputStream_Class.classIndex = JAVA_IO_FILTEROUTPUTSTREAM_INDEX;

  GC_PUSH_STATIC_ROOT(java_io_OutputStream_LayoutStatic);
  GC_NEW_LAYOUT(java_io_OutputStream_LayoutStatic,java_io_OutputStream_ClassStatic,  0);

  GC_PUSH_STATIC_ROOT(java_io_OutputStream_Layout);
  GC_NEW_LAYOUT(java_io_OutputStream_Layout,java_io_OutputStream,  0);

  GC_PUSH_STATIC_ROOT(java_io_OutputStream_Static);
  GC_NEW(java_io_OutputStream_Static,java_io_OutputStream_LayoutStatic);

  java_io_OutputStream_Class.super = &java_lang_Object_Class;
  java_io_OutputStream_Class.classIndex = JAVA_IO_OUTPUTSTREAM_INDEX;

  GC_PUSH_STATIC_ROOT(java_lang_Integer_LayoutStatic);
  GC_NEW_LAYOUT(java_lang_Integer_LayoutStatic,java_lang_Integer_ClassStatic,  1,  GC_LAYOUT_FIELD(java_lang_Integer_ClassStatic,_java_lang_Integer_intCache));

  GC_PUSH_STATIC_ROOT(java_lang_Integer_Layout);
  GC_NEW_LAYOUT(java_lang_Integer_Layout,java_lang_Integer,  0);

  GC_PUSH_STATIC_ROOT(java_lang_Integer_Static);
  GC_NEW(java_lang_Integer_Static,java_lang_Integer_LayoutStatic);

  java_lang_Integer_Class.super = &java_lang_Number_Class;
  java_lang_Integer_Class.methodTbl = &java_lang_Integer_MethodTbl;
  java_lang_Integer_MethodTbl.notifyAll = java_lang_Object_notifyAll;
  java_lang_Integer_MethodTbl.wait_long_int = java_lang_Object_wait_long_int;
  java_lang_Integer_MethodTbl.toString = java_lang_Integer_toString;
  java_lang_Integer_MethodTbl.wait = java_lang_Object_wait;
  java_lang_Integer_MethodTbl.clone = java_lang_Object_clone;
  java_lang_Integer_Class.ifazTbl = &java_lang_Integer_ifazTbl;
  java_lang_Integer_Class.ifazTbl->java_io_Serializable_methodTbl = &java_lang_Integer_java_io_Serializable_MethodTblStruct;
  java_lang_Integer_Class.ifazTbl->java_io_Serializable_methodTbl->toString = java_lang_Integer_MethodTbl.toString;
  java_lang_Integer_Class.ifazTbl->java_io_Serializable_methodTbl->wait_long_int = java_lang_Integer_MethodTbl.wait_long_int;
  java_lang_Integer_Class.ifazTbl->java_io_Serializable_methodTbl->notifyAll = java_lang_Integer_MethodTbl.notifyAll;
  java_lang_Integer_Class.ifazTbl->java_io_Serializable_methodTbl->wait = java_lang_Integer_MethodTbl.wait;
  java_lang_Integer_Class.ifazTbl->java_lang_Comparable_methodTbl = &java_lang_Integer_java_lang_Comparable_MethodTblStruct;
  java_lang_Integer_Class.ifazTbl->java_lang_Comparable_methodTbl->toString = java_lang_Integer_MethodTbl.toString;
  java_lang_Integer_Class.ifazTbl->java_lang_Comparable_methodTbl->wait_long_int = java_lang_Integer_MethodTbl.wait_long_int;
  java_lang_Integer_Class.ifazTbl->java_lang_Comparable_methodTbl->notifyAll = java_lang_Integer_MethodTbl.notifyAll;
  java_lang_Integer_Class.ifazTbl->java_lang_Comparable_methodTbl->wait = java_lang_Integer_MethodTbl.wait;
  java_lang_Integer_Class.iface_size = 2;
  java_lang_Integer_Class.iface_array[0] = JAVA_IO_SERIALIZABLE_INDEX;
  java_lang_Integer_Class.iface_array[1] = JAVA_LANG_COMPARABLE_INDEX;
  java_lang_Integer_Class.classIndex = JAVA_LANG_INTEGER_INDEX;

  GC_PUSH_STATIC_ROOT(java_lang_Number_LayoutStatic);
  GC_NEW_LAYOUT(java_lang_Number_LayoutStatic,java_lang_Number_ClassStatic,  1,  GC_LAYOUT_FIELD(java_lang_Number_ClassStatic,_java_lang_Number_digits));

  GC_PUSH_STATIC_ROOT(java_lang_Number_Layout);
  GC_NEW_LAYOUT(java_lang_Number_Layout,java_lang_Number,  0);

  GC_PUSH_STATIC_ROOT(java_lang_Number_Static);
  GC_NEW(java_lang_Number_Static,java_lang_Number_LayoutStatic);

  java_lang_Number_Class.super = &java_lang_Object_Class;
  java_lang_Number_Class.classIndex = JAVA_LANG_NUMBER_INDEX;

  GC_PUSH_STATIC_ROOT(java_lang_Comparable_LayoutStatic);
  GC_NEW_LAYOUT(java_lang_Comparable_LayoutStatic,java_lang_Comparable_ClassStatic,  0);

  GC_PUSH_STATIC_ROOT(java_lang_Comparable_Static);
  GC_NEW(java_lang_Comparable_Static,java_lang_Comparable_LayoutStatic);


  GC_PUSH_STATIC_ROOT(Monitor_LayoutStatic);
  GC_NEW_LAYOUT(Monitor_LayoutStatic,Monitor_ClassStatic,  0);

  GC_PUSH_STATIC_ROOT(Monitor_Layout);
  GC_NEW_LAYOUT(Monitor_Layout,Monitor,  1,  GC_LAYOUT_FIELD(Monitor,_Monitor_jpeg));

  GC_PUSH_STATIC_ROOT(Monitor_Static);
  GC_NEW(Monitor_Static,Monitor_LayoutStatic);

  Monitor_Class.super = &java_lang_Object_Class;
  Monitor_Class.methodTbl = &Monitor_MethodTbl;
  Monitor_MethodTbl.notifyAll = java_lang_Object_notifyAll;
  Monitor_MethodTbl.wait_long_int = java_lang_Object_wait_long_int;
  Monitor_MethodTbl.toString = java_lang_Object_toString;
  Monitor_MethodTbl.wait = java_lang_Object_wait;
  Monitor_MethodTbl.clone = java_lang_Object_clone;
  Monitor_MethodTbl.getJpeg_long = Monitor_getJpeg_long;
  Monitor_MethodTbl.setJpeg_byteA = Monitor_setJpeg_byteA;
  Monitor_MethodTbl.getMode = Monitor_getMode;
  Monitor_MethodTbl.setMode_byte = Monitor_setMode_byte;
  Monitor_MethodTbl.testSetMode = Monitor_testSetMode;
  Monitor_Class.classIndex = MONITOR_INDEX;

  GC_PUSH_STATIC_ROOT(CamToMonitor_t_LayoutStatic);
  GC_NEW_LAYOUT(CamToMonitor_t_LayoutStatic,CamToMonitor_t_ClassStatic,  0);

  GC_PUSH_STATIC_ROOT(CamToMonitor_t_Layout);
  GC_NEW_LAYOUT(CamToMonitor_t_Layout,CamToMonitor_t,  3,  GC_LAYOUT_FIELD(CamToMonitor_t,_java_lang_Thread_targetRun),  GC_LAYOUT_FIELD(CamToMonitor_t,_java_lang_Thread_name),  GC_LAYOUT_FIELD(CamToMonitor_t,_CamToMonitor_t_mon));

  GC_PUSH_STATIC_ROOT(CamToMonitor_t_Static);
  GC_NEW(CamToMonitor_t_Static,CamToMonitor_t_LayoutStatic);

  CamToMonitor_t_Class.super = &java_lang_Thread_Class;
  CamToMonitor_t_Class.methodTbl = &CamToMonitor_t_MethodTbl;
  CamToMonitor_t_MethodTbl.notifyAll = java_lang_Object_notifyAll;
  CamToMonitor_t_MethodTbl.wait_long_int = java_lang_Object_wait_long_int;
  CamToMonitor_t_MethodTbl.toString = java_lang_Object_toString;
  CamToMonitor_t_MethodTbl.wait = java_lang_Object_wait;
  CamToMonitor_t_MethodTbl.clone = java_lang_Object_clone;
  CamToMonitor_t_MethodTbl.inheritPriority = java_lang_Thread_inheritPriority;
  CamToMonitor_t_MethodTbl.createThread = java_lang_Thread_createThread;
  CamToMonitor_t_MethodTbl.start = java_lang_Thread_start;
  CamToMonitor_t_MethodTbl.run = CamToMonitor_t_run;
  CamToMonitor_t_MethodTbl.isInterrupted = java_lang_Thread_isInterrupted;
  CamToMonitor_t_MethodTbl.interrupt = java_lang_Thread_interrupt;
  CamToMonitor_t_Class.ifazTbl = &CamToMonitor_t_ifazTbl;
  CamToMonitor_t_Class.ifazTbl->java_lang_Runnable_methodTbl = &CamToMonitor_t_java_lang_Runnable_MethodTblStruct;
  CamToMonitor_t_Class.ifazTbl->java_lang_Runnable_methodTbl->run = CamToMonitor_t_MethodTbl.run;
  CamToMonitor_t_Class.ifazTbl->java_lang_Runnable_methodTbl->toString = CamToMonitor_t_MethodTbl.toString;
  CamToMonitor_t_Class.ifazTbl->java_lang_Runnable_methodTbl->wait_long_int = CamToMonitor_t_MethodTbl.wait_long_int;
  CamToMonitor_t_Class.ifazTbl->java_lang_Runnable_methodTbl->notifyAll = CamToMonitor_t_MethodTbl.notifyAll;
  CamToMonitor_t_Class.ifazTbl->java_lang_Runnable_methodTbl->wait = CamToMonitor_t_MethodTbl.wait;
  CamToMonitor_t_Class.iface_size = 1;
  CamToMonitor_t_Class.iface_array[0] = JAVA_LANG_RUNNABLE_INDEX;
  CamToMonitor_t_Class.classIndex = CAMTOMONITOR_T_INDEX;

  GC_PUSH_STATIC_ROOT(java_lang_Thread_LayoutStatic);
  GC_NEW_LAYOUT(java_lang_Thread_LayoutStatic,java_lang_Thread_ClassStatic,  0);

  GC_PUSH_STATIC_ROOT(java_lang_Thread_Layout);
  GC_NEW_LAYOUT(java_lang_Thread_Layout,java_lang_Thread,  2,  GC_LAYOUT_FIELD(java_lang_Thread,_java_lang_Thread_targetRun),  GC_LAYOUT_FIELD(java_lang_Thread,_java_lang_Thread_name));

  GC_PUSH_STATIC_ROOT(java_lang_Thread_Static);
  GC_NEW(java_lang_Thread_Static,java_lang_Thread_LayoutStatic);

  java_lang_Thread_Class.super = &java_lang_Object_Class;
  java_lang_Thread_Class.methodTbl = &java_lang_Thread_MethodTbl;
  java_lang_Thread_MethodTbl.notifyAll = java_lang_Object_notifyAll;
  java_lang_Thread_MethodTbl.wait_long_int = java_lang_Object_wait_long_int;
  java_lang_Thread_MethodTbl.toString = java_lang_Object_toString;
  java_lang_Thread_MethodTbl.wait = java_lang_Object_wait;
  java_lang_Thread_MethodTbl.clone = java_lang_Object_clone;
  java_lang_Thread_MethodTbl.inheritPriority = java_lang_Thread_inheritPriority;
  java_lang_Thread_MethodTbl.createThread = java_lang_Thread_createThread;
  java_lang_Thread_MethodTbl.start = java_lang_Thread_start;
  java_lang_Thread_MethodTbl.run = java_lang_Thread_run;
  java_lang_Thread_MethodTbl.isInterrupted = java_lang_Thread_isInterrupted;
  java_lang_Thread_MethodTbl.interrupt = java_lang_Thread_interrupt;
  java_lang_Thread_Class.ifazTbl = &java_lang_Thread_ifazTbl;
  java_lang_Thread_Class.ifazTbl->java_lang_Runnable_methodTbl = &java_lang_Thread_java_lang_Runnable_MethodTblStruct;
  java_lang_Thread_Class.ifazTbl->java_lang_Runnable_methodTbl->run = java_lang_Thread_MethodTbl.run;
  java_lang_Thread_Class.ifazTbl->java_lang_Runnable_methodTbl->toString = java_lang_Thread_MethodTbl.toString;
  java_lang_Thread_Class.ifazTbl->java_lang_Runnable_methodTbl->wait_long_int = java_lang_Thread_MethodTbl.wait_long_int;
  java_lang_Thread_Class.ifazTbl->java_lang_Runnable_methodTbl->notifyAll = java_lang_Thread_MethodTbl.notifyAll;
  java_lang_Thread_Class.ifazTbl->java_lang_Runnable_methodTbl->wait = java_lang_Thread_MethodTbl.wait;
  java_lang_Thread_Class.iface_size = 1;
  java_lang_Thread_Class.iface_array[0] = JAVA_LANG_RUNNABLE_INDEX;
  java_lang_Thread_Class.classIndex = JAVA_LANG_THREAD_INDEX;

  GC_PUSH_STATIC_ROOT(java_lang_Runnable_LayoutStatic);
  GC_NEW_LAYOUT(java_lang_Runnable_LayoutStatic,java_lang_Runnable_ClassStatic,  0);

  GC_PUSH_STATIC_ROOT(java_lang_Runnable_Static);
  GC_NEW(java_lang_Runnable_Static,java_lang_Runnable_LayoutStatic);


  GC_PUSH_STATIC_ROOT(FromClient_t_LayoutStatic);
  GC_NEW_LAYOUT(FromClient_t_LayoutStatic,FromClient_t_ClassStatic,  0);

  GC_PUSH_STATIC_ROOT(FromClient_t_Layout);
  GC_NEW_LAYOUT(FromClient_t_Layout,FromClient_t,  3,  GC_LAYOUT_FIELD(FromClient_t,_java_lang_Thread_targetRun),  GC_LAYOUT_FIELD(FromClient_t,_java_lang_Thread_name),  GC_LAYOUT_FIELD(FromClient_t,_FromClient_t_mon));

  GC_PUSH_STATIC_ROOT(FromClient_t_Static);
  GC_NEW(FromClient_t_Static,FromClient_t_LayoutStatic);

  FromClient_t_Class.super = &java_lang_Thread_Class;
  FromClient_t_Class.methodTbl = &FromClient_t_MethodTbl;
  FromClient_t_MethodTbl.notifyAll = java_lang_Object_notifyAll;
  FromClient_t_MethodTbl.wait_long_int = java_lang_Object_wait_long_int;
  FromClient_t_MethodTbl.toString = java_lang_Object_toString;
  FromClient_t_MethodTbl.wait = java_lang_Object_wait;
  FromClient_t_MethodTbl.clone = java_lang_Object_clone;
  FromClient_t_MethodTbl.inheritPriority = java_lang_Thread_inheritPriority;
  FromClient_t_MethodTbl.createThread = java_lang_Thread_createThread;
  FromClient_t_MethodTbl.start = java_lang_Thread_start;
  FromClient_t_MethodTbl.run = FromClient_t_run;
  FromClient_t_MethodTbl.isInterrupted = java_lang_Thread_isInterrupted;
  FromClient_t_MethodTbl.interrupt = java_lang_Thread_interrupt;
  FromClient_t_Class.ifazTbl = &FromClient_t_ifazTbl;
  FromClient_t_Class.ifazTbl->java_lang_Runnable_methodTbl = &FromClient_t_java_lang_Runnable_MethodTblStruct;
  FromClient_t_Class.ifazTbl->java_lang_Runnable_methodTbl->run = FromClient_t_MethodTbl.run;
  FromClient_t_Class.ifazTbl->java_lang_Runnable_methodTbl->toString = FromClient_t_MethodTbl.toString;
  FromClient_t_Class.ifazTbl->java_lang_Runnable_methodTbl->wait_long_int = FromClient_t_MethodTbl.wait_long_int;
  FromClient_t_Class.ifazTbl->java_lang_Runnable_methodTbl->notifyAll = FromClient_t_MethodTbl.notifyAll;
  FromClient_t_Class.ifazTbl->java_lang_Runnable_methodTbl->wait = FromClient_t_MethodTbl.wait;
  FromClient_t_Class.iface_size = 1;
  FromClient_t_Class.iface_array[0] = JAVA_LANG_RUNNABLE_INDEX;
  FromClient_t_Class.classIndex = FROMCLIENT_T_INDEX;

  GC_PUSH_STATIC_ROOT(java_io_IOException_LayoutStatic);
  GC_NEW_LAYOUT(java_io_IOException_LayoutStatic,java_io_IOException_ClassStatic,  0);

  GC_PUSH_STATIC_ROOT(java_io_IOException_Layout);
  GC_NEW_LAYOUT(java_io_IOException_Layout,java_io_IOException,  3,  GC_LAYOUT_FIELD(java_io_IOException,_java_lang_Throwable_detailMessage),  GC_LAYOUT_FIELD(java_io_IOException,_java_lang_Throwable_cause),  GC_LAYOUT_FIELD(java_io_IOException,_java_lang_Throwable_stackTrace));

  GC_PUSH_STATIC_ROOT(java_io_IOException_Static);
  GC_NEW(java_io_IOException_Static,java_io_IOException_LayoutStatic);

  java_io_IOException_Class.super = &java_lang_Exception_Class;
  java_io_IOException_Class.methodTbl = &java_io_IOException_MethodTbl;
  java_io_IOException_MethodTbl.notifyAll = java_lang_Object_notifyAll;
  java_io_IOException_MethodTbl.wait_long_int = java_lang_Object_wait_long_int;
  java_io_IOException_MethodTbl.toString = java_lang_Throwable_toString;
  java_io_IOException_MethodTbl.wait = java_lang_Object_wait;
  java_io_IOException_MethodTbl.clone = java_lang_Object_clone;
  java_io_IOException_MethodTbl.getMessage = java_lang_Throwable_getMessage;
  java_io_IOException_MethodTbl.printStackTrace_java_io_PrintStream = java_lang_Throwable_printStackTrace_java_io_PrintStream;
  java_io_IOException_MethodTbl.stackTraceString = java_lang_Throwable_stackTraceString;
  java_io_IOException_MethodTbl.fillInStackTrace = java_lang_Throwable_fillInStackTrace;
  java_io_IOException_Class.ifazTbl = &java_io_IOException_ifazTbl;
  java_io_IOException_Class.ifazTbl->java_io_Serializable_methodTbl = &java_io_IOException_java_io_Serializable_MethodTblStruct;
  java_io_IOException_Class.ifazTbl->java_io_Serializable_methodTbl->toString = java_io_IOException_MethodTbl.toString;
  java_io_IOException_Class.ifazTbl->java_io_Serializable_methodTbl->wait_long_int = java_io_IOException_MethodTbl.wait_long_int;
  java_io_IOException_Class.ifazTbl->java_io_Serializable_methodTbl->notifyAll = java_io_IOException_MethodTbl.notifyAll;
  java_io_IOException_Class.ifazTbl->java_io_Serializable_methodTbl->wait = java_io_IOException_MethodTbl.wait;
  java_io_IOException_Class.iface_size = 1;
  java_io_IOException_Class.iface_array[0] = JAVA_IO_SERIALIZABLE_INDEX;
  java_io_IOException_Class.classIndex = JAVA_IO_IOEXCEPTION_INDEX;

  GC_PUSH_STATIC_ROOT(java_io_InputStream_LayoutStatic);
  GC_NEW_LAYOUT(java_io_InputStream_LayoutStatic,java_io_InputStream_ClassStatic,  0);

  GC_PUSH_STATIC_ROOT(java_io_InputStream_Layout);
  GC_NEW_LAYOUT(java_io_InputStream_Layout,java_io_InputStream,  0);

  GC_PUSH_STATIC_ROOT(java_io_InputStream_Static);
  GC_NEW(java_io_InputStream_Static,java_io_InputStream_LayoutStatic);

  java_io_InputStream_Class.super = &java_lang_Object_Class;
  java_io_InputStream_Class.classIndex = JAVA_IO_INPUTSTREAM_INDEX;

  GC_PUSH_STATIC_ROOT(java_net_ServerSocket_LayoutStatic);
  GC_NEW_LAYOUT(java_net_ServerSocket_LayoutStatic,java_net_ServerSocket_ClassStatic,  0);

  GC_PUSH_STATIC_ROOT(java_net_ServerSocket_Layout);
  GC_NEW_LAYOUT(java_net_ServerSocket_Layout,java_net_ServerSocket,  0);

  GC_PUSH_STATIC_ROOT(java_net_ServerSocket_Static);
  GC_NEW(java_net_ServerSocket_Static,java_net_ServerSocket_LayoutStatic);

  java_net_ServerSocket_Class.super = &java_lang_Object_Class;
  java_net_ServerSocket_Class.methodTbl = &java_net_ServerSocket_MethodTbl;
  java_net_ServerSocket_MethodTbl.notifyAll = java_lang_Object_notifyAll;
  java_net_ServerSocket_MethodTbl.wait_long_int = java_lang_Object_wait_long_int;
  java_net_ServerSocket_MethodTbl.toString = java_net_ServerSocket_toString;
  java_net_ServerSocket_MethodTbl.wait = java_lang_Object_wait;
  java_net_ServerSocket_MethodTbl.clone = java_lang_Object_clone;
  java_net_ServerSocket_MethodTbl.bind_java_net_SocketAddress_int = java_net_ServerSocket_bind_java_net_SocketAddress_int;
  java_net_ServerSocket_MethodTbl.accept = java_net_ServerSocket_accept;
  java_net_ServerSocket_Class.classIndex = JAVA_NET_SERVERSOCKET_INDEX;

  GC_PUSH_STATIC_ROOT(java_net_Socket_LayoutStatic);
  GC_NEW_LAYOUT(java_net_Socket_LayoutStatic,java_net_Socket_ClassStatic,  0);

  GC_PUSH_STATIC_ROOT(java_net_Socket_Layout);
  GC_NEW_LAYOUT(java_net_Socket_Layout,java_net_Socket,  0);

  GC_PUSH_STATIC_ROOT(java_net_Socket_Static);
  GC_NEW(java_net_Socket_Static,java_net_Socket_LayoutStatic);

  java_net_Socket_Class.super = &java_lang_Object_Class;
  java_net_Socket_Class.methodTbl = &java_net_Socket_MethodTbl;
  java_net_Socket_MethodTbl.notifyAll = java_lang_Object_notifyAll;
  java_net_Socket_MethodTbl.wait_long_int = java_lang_Object_wait_long_int;
  java_net_Socket_MethodTbl.toString = java_net_Socket_toString;
  java_net_Socket_MethodTbl.wait = java_lang_Object_wait;
  java_net_Socket_MethodTbl.clone = java_lang_Object_clone;
  java_net_Socket_MethodTbl.setFd_int = java_net_Socket_setFd_int;
  java_net_Socket_MethodTbl.connect_java_net_SocketAddress = java_net_Socket_connect_java_net_SocketAddress;
  java_net_Socket_MethodTbl.connect_java_net_SocketAddress_int = java_net_Socket_connect_java_net_SocketAddress_int;
  java_net_Socket_MethodTbl.getInputStream = java_net_Socket_getInputStream;
  java_net_Socket_MethodTbl.getOutputStream = java_net_Socket_getOutputStream;
  java_net_Socket_MethodTbl.close = java_net_Socket_close;
  java_net_Socket_Class.classIndex = JAVA_NET_SOCKET_INDEX;

  GC_PUSH_STATIC_ROOT(HTTP_t_LayoutStatic);
  GC_NEW_LAYOUT(HTTP_t_LayoutStatic,HTTP_t_ClassStatic,  1,  GC_LAYOUT_FIELD(HTTP_t_ClassStatic,_HTTP_t_CRLF));

  GC_PUSH_STATIC_ROOT(HTTP_t_Layout);
  GC_NEW_LAYOUT(HTTP_t_Layout,HTTP_t,  3,  GC_LAYOUT_FIELD(HTTP_t,_java_lang_Thread_targetRun),  GC_LAYOUT_FIELD(HTTP_t,_java_lang_Thread_name),  GC_LAYOUT_FIELD(HTTP_t,_HTTP_t_mon));

  GC_PUSH_STATIC_ROOT(HTTP_t_Static);
  GC_NEW(HTTP_t_Static,HTTP_t_LayoutStatic);

  HTTP_t_Class.super = &java_lang_Thread_Class;
  HTTP_t_Class.methodTbl = &HTTP_t_MethodTbl;
  HTTP_t_MethodTbl.notifyAll = java_lang_Object_notifyAll;
  HTTP_t_MethodTbl.wait_long_int = java_lang_Object_wait_long_int;
  HTTP_t_MethodTbl.toString = java_lang_Object_toString;
  HTTP_t_MethodTbl.wait = java_lang_Object_wait;
  HTTP_t_MethodTbl.clone = java_lang_Object_clone;
  HTTP_t_MethodTbl.inheritPriority = java_lang_Thread_inheritPriority;
  HTTP_t_MethodTbl.createThread = java_lang_Thread_createThread;
  HTTP_t_MethodTbl.start = java_lang_Thread_start;
  HTTP_t_MethodTbl.run = HTTP_t_run;
  HTTP_t_MethodTbl.isInterrupted = java_lang_Thread_isInterrupted;
  HTTP_t_MethodTbl.interrupt = java_lang_Thread_interrupt;
  HTTP_t_Class.ifazTbl = &HTTP_t_ifazTbl;
  HTTP_t_Class.ifazTbl->java_lang_Runnable_methodTbl = &HTTP_t_java_lang_Runnable_MethodTblStruct;
  HTTP_t_Class.ifazTbl->java_lang_Runnable_methodTbl->run = HTTP_t_MethodTbl.run;
  HTTP_t_Class.ifazTbl->java_lang_Runnable_methodTbl->toString = HTTP_t_MethodTbl.toString;
  HTTP_t_Class.ifazTbl->java_lang_Runnable_methodTbl->wait_long_int = HTTP_t_MethodTbl.wait_long_int;
  HTTP_t_Class.ifazTbl->java_lang_Runnable_methodTbl->notifyAll = HTTP_t_MethodTbl.notifyAll;
  HTTP_t_Class.ifazTbl->java_lang_Runnable_methodTbl->wait = HTTP_t_MethodTbl.wait;
  HTTP_t_Class.iface_size = 1;
  HTTP_t_Class.iface_array[0] = JAVA_LANG_RUNNABLE_INDEX;
  HTTP_t_Class.classIndex = HTTP_T_INDEX;

  GC_PUSH_STATIC_ROOT(se_lth_cs_eda040_realcamera_AxisM3006V_LayoutStatic);
  GC_NEW_LAYOUT(se_lth_cs_eda040_realcamera_AxisM3006V_LayoutStatic,se_lth_cs_eda040_realcamera_AxisM3006V_ClassStatic,  0);

  GC_PUSH_STATIC_ROOT(se_lth_cs_eda040_realcamera_AxisM3006V_Layout);
  GC_NEW_LAYOUT(se_lth_cs_eda040_realcamera_AxisM3006V_Layout,se_lth_cs_eda040_realcamera_AxisM3006V,  0);

  GC_PUSH_STATIC_ROOT(se_lth_cs_eda040_realcamera_AxisM3006V_Static);
  GC_NEW(se_lth_cs_eda040_realcamera_AxisM3006V_Static,se_lth_cs_eda040_realcamera_AxisM3006V_LayoutStatic);

  se_lth_cs_eda040_realcamera_AxisM3006V_Class.super = &java_lang_Object_Class;
  se_lth_cs_eda040_realcamera_AxisM3006V_Class.methodTbl = &se_lth_cs_eda040_realcamera_AxisM3006V_MethodTbl;
  se_lth_cs_eda040_realcamera_AxisM3006V_MethodTbl.notifyAll = java_lang_Object_notifyAll;
  se_lth_cs_eda040_realcamera_AxisM3006V_MethodTbl.wait_long_int = java_lang_Object_wait_long_int;
  se_lth_cs_eda040_realcamera_AxisM3006V_MethodTbl.toString = java_lang_Object_toString;
  se_lth_cs_eda040_realcamera_AxisM3006V_MethodTbl.wait = java_lang_Object_wait;
  se_lth_cs_eda040_realcamera_AxisM3006V_MethodTbl.clone = java_lang_Object_clone;
  se_lth_cs_eda040_realcamera_AxisM3006V_MethodTbl.nativeConnect = se_lth_cs_eda040_realcamera_AxisM3006V_nativeConnect;
  se_lth_cs_eda040_realcamera_AxisM3006V_MethodTbl.nativeGetJPEG_byteA_int = se_lth_cs_eda040_realcamera_AxisM3006V_nativeGetJPEG_byteA_int;
  se_lth_cs_eda040_realcamera_AxisM3006V_MethodTbl.nativeClose = se_lth_cs_eda040_realcamera_AxisM3006V_nativeClose;
  se_lth_cs_eda040_realcamera_AxisM3006V_MethodTbl.nativeGetTime_byteA_int = se_lth_cs_eda040_realcamera_AxisM3006V_nativeGetTime_byteA_int;
  se_lth_cs_eda040_realcamera_AxisM3006V_MethodTbl.init = se_lth_cs_eda040_realcamera_AxisM3006V_init;
  se_lth_cs_eda040_realcamera_AxisM3006V_MethodTbl.connect = se_lth_cs_eda040_realcamera_AxisM3006V_connect;
  se_lth_cs_eda040_realcamera_AxisM3006V_MethodTbl.getJPEG_byteA_int = se_lth_cs_eda040_realcamera_AxisM3006V_getJPEG_byteA_int;
  se_lth_cs_eda040_realcamera_AxisM3006V_MethodTbl.getTime_byteA_int = se_lth_cs_eda040_realcamera_AxisM3006V_getTime_byteA_int;
  se_lth_cs_eda040_realcamera_AxisM3006V_MethodTbl.motionDetected = se_lth_cs_eda040_realcamera_AxisM3006V_motionDetected;
  se_lth_cs_eda040_realcamera_AxisM3006V_Class.classIndex = SE_LTH_CS_EDA040_REALCAMERA_AXISM3006V_INDEX;

  GC_PUSH_STATIC_ROOT(java_lang_InterruptedException_LayoutStatic);
  GC_NEW_LAYOUT(java_lang_InterruptedException_LayoutStatic,java_lang_InterruptedException_ClassStatic,  0);

  GC_PUSH_STATIC_ROOT(java_lang_InterruptedException_Layout);
  GC_NEW_LAYOUT(java_lang_InterruptedException_Layout,java_lang_InterruptedException,  3,  GC_LAYOUT_FIELD(java_lang_InterruptedException,_java_lang_Throwable_detailMessage),  GC_LAYOUT_FIELD(java_lang_InterruptedException,_java_lang_Throwable_cause),  GC_LAYOUT_FIELD(java_lang_InterruptedException,_java_lang_Throwable_stackTrace));

  GC_PUSH_STATIC_ROOT(java_lang_InterruptedException_Static);
  GC_NEW(java_lang_InterruptedException_Static,java_lang_InterruptedException_LayoutStatic);

  java_lang_InterruptedException_Class.super = &java_lang_Exception_Class;
  java_lang_InterruptedException_Class.methodTbl = &java_lang_InterruptedException_MethodTbl;
  java_lang_InterruptedException_MethodTbl.notifyAll = java_lang_Object_notifyAll;
  java_lang_InterruptedException_MethodTbl.wait_long_int = java_lang_Object_wait_long_int;
  java_lang_InterruptedException_MethodTbl.toString = java_lang_Throwable_toString;
  java_lang_InterruptedException_MethodTbl.wait = java_lang_Object_wait;
  java_lang_InterruptedException_MethodTbl.clone = java_lang_Object_clone;
  java_lang_InterruptedException_MethodTbl.getMessage = java_lang_Throwable_getMessage;
  java_lang_InterruptedException_MethodTbl.printStackTrace_java_io_PrintStream = java_lang_Throwable_printStackTrace_java_io_PrintStream;
  java_lang_InterruptedException_MethodTbl.stackTraceString = java_lang_Throwable_stackTraceString;
  java_lang_InterruptedException_MethodTbl.fillInStackTrace = java_lang_Throwable_fillInStackTrace;
  java_lang_InterruptedException_Class.ifazTbl = &java_lang_InterruptedException_ifazTbl;
  java_lang_InterruptedException_Class.ifazTbl->java_io_Serializable_methodTbl = &java_lang_InterruptedException_java_io_Serializable_MethodTblStruct;
  java_lang_InterruptedException_Class.ifazTbl->java_io_Serializable_methodTbl->toString = java_lang_InterruptedException_MethodTbl.toString;
  java_lang_InterruptedException_Class.ifazTbl->java_io_Serializable_methodTbl->wait_long_int = java_lang_InterruptedException_MethodTbl.wait_long_int;
  java_lang_InterruptedException_Class.ifazTbl->java_io_Serializable_methodTbl->notifyAll = java_lang_InterruptedException_MethodTbl.notifyAll;
  java_lang_InterruptedException_Class.ifazTbl->java_io_Serializable_methodTbl->wait = java_lang_InterruptedException_MethodTbl.wait;
  java_lang_InterruptedException_Class.iface_size = 1;
  java_lang_InterruptedException_Class.iface_array[0] = JAVA_IO_SERIALIZABLE_INDEX;
  java_lang_InterruptedException_Class.classIndex = JAVA_LANG_INTERRUPTEDEXCEPTION_INDEX;

  GC_PUSH_STATIC_ROOT(java_lang_Exception_LayoutStatic);
  GC_NEW_LAYOUT(java_lang_Exception_LayoutStatic,java_lang_Exception_ClassStatic,  0);

  GC_PUSH_STATIC_ROOT(java_lang_Exception_Layout);
  GC_NEW_LAYOUT(java_lang_Exception_Layout,java_lang_Exception,  3,  GC_LAYOUT_FIELD(java_lang_Exception,_java_lang_Throwable_detailMessage),  GC_LAYOUT_FIELD(java_lang_Exception,_java_lang_Throwable_cause),  GC_LAYOUT_FIELD(java_lang_Exception,_java_lang_Throwable_stackTrace));

  GC_PUSH_STATIC_ROOT(java_lang_Exception_Static);
  GC_NEW(java_lang_Exception_Static,java_lang_Exception_LayoutStatic);

  java_lang_Exception_Class.super = &java_lang_Throwable_Class;
  java_lang_Exception_Class.methodTbl = &java_lang_Exception_MethodTbl;
  java_lang_Exception_MethodTbl.notifyAll = java_lang_Object_notifyAll;
  java_lang_Exception_MethodTbl.wait_long_int = java_lang_Object_wait_long_int;
  java_lang_Exception_MethodTbl.toString = java_lang_Throwable_toString;
  java_lang_Exception_MethodTbl.wait = java_lang_Object_wait;
  java_lang_Exception_MethodTbl.clone = java_lang_Object_clone;
  java_lang_Exception_MethodTbl.getMessage = java_lang_Throwable_getMessage;
  java_lang_Exception_MethodTbl.printStackTrace_java_io_PrintStream = java_lang_Throwable_printStackTrace_java_io_PrintStream;
  java_lang_Exception_MethodTbl.stackTraceString = java_lang_Throwable_stackTraceString;
  java_lang_Exception_MethodTbl.fillInStackTrace = java_lang_Throwable_fillInStackTrace;
  java_lang_Exception_Class.ifazTbl = &java_lang_Exception_ifazTbl;
  java_lang_Exception_Class.ifazTbl->java_io_Serializable_methodTbl = &java_lang_Exception_java_io_Serializable_MethodTblStruct;
  java_lang_Exception_Class.ifazTbl->java_io_Serializable_methodTbl->toString = java_lang_Exception_MethodTbl.toString;
  java_lang_Exception_Class.ifazTbl->java_io_Serializable_methodTbl->wait_long_int = java_lang_Exception_MethodTbl.wait_long_int;
  java_lang_Exception_Class.ifazTbl->java_io_Serializable_methodTbl->notifyAll = java_lang_Exception_MethodTbl.notifyAll;
  java_lang_Exception_Class.ifazTbl->java_io_Serializable_methodTbl->wait = java_lang_Exception_MethodTbl.wait;
  java_lang_Exception_Class.iface_size = 1;
  java_lang_Exception_Class.iface_array[0] = JAVA_IO_SERIALIZABLE_INDEX;
  java_lang_Exception_Class.classIndex = JAVA_LANG_EXCEPTION_INDEX;

  GC_PUSH_STATIC_ROOT(java_lang_CharSequence_LayoutStatic);
  GC_NEW_LAYOUT(java_lang_CharSequence_LayoutStatic,java_lang_CharSequence_ClassStatic,  0);

  GC_PUSH_STATIC_ROOT(java_lang_CharSequence_Static);
  GC_NEW(java_lang_CharSequence_Static,java_lang_CharSequence_LayoutStatic);


  GC_PUSH_STATIC_ROOT(java_lang_StringBuilder_LayoutStatic);
  GC_NEW_LAYOUT(java_lang_StringBuilder_LayoutStatic,java_lang_StringBuilder_ClassStatic,  0);

  GC_PUSH_STATIC_ROOT(java_lang_StringBuilder_Layout);
  GC_NEW_LAYOUT(java_lang_StringBuilder_Layout,java_lang_StringBuilder,  1,  GC_LAYOUT_FIELD(java_lang_StringBuilder,_java_lang_StringBuilder_value));

  GC_PUSH_STATIC_ROOT(java_lang_StringBuilder_Static);
  GC_NEW(java_lang_StringBuilder_Static,java_lang_StringBuilder_LayoutStatic);

  java_lang_StringBuilder_Class.super = &java_lang_Object_Class;
  java_lang_StringBuilder_Class.methodTbl = &java_lang_StringBuilder_MethodTbl;
  java_lang_StringBuilder_MethodTbl.notifyAll = java_lang_Object_notifyAll;
  java_lang_StringBuilder_MethodTbl.wait_long_int = java_lang_Object_wait_long_int;
  java_lang_StringBuilder_MethodTbl.toString = java_lang_StringBuilder_toString;
  java_lang_StringBuilder_MethodTbl.wait = java_lang_Object_wait;
  java_lang_StringBuilder_MethodTbl.clone = java_lang_Object_clone;
  java_lang_StringBuilder_Class.ifazTbl = &java_lang_StringBuilder_ifazTbl;
  java_lang_StringBuilder_Class.ifazTbl->java_io_Serializable_methodTbl = &java_lang_StringBuilder_java_io_Serializable_MethodTblStruct;
  java_lang_StringBuilder_Class.ifazTbl->java_io_Serializable_methodTbl->toString = java_lang_StringBuilder_MethodTbl.toString;
  java_lang_StringBuilder_Class.ifazTbl->java_io_Serializable_methodTbl->wait_long_int = java_lang_StringBuilder_MethodTbl.wait_long_int;
  java_lang_StringBuilder_Class.ifazTbl->java_io_Serializable_methodTbl->notifyAll = java_lang_StringBuilder_MethodTbl.notifyAll;
  java_lang_StringBuilder_Class.ifazTbl->java_io_Serializable_methodTbl->wait = java_lang_StringBuilder_MethodTbl.wait;
  java_lang_StringBuilder_Class.ifazTbl->java_lang_CharSequence_methodTbl = &java_lang_StringBuilder_java_lang_CharSequence_MethodTblStruct;
  java_lang_StringBuilder_Class.ifazTbl->java_lang_CharSequence_methodTbl->toString = java_lang_StringBuilder_MethodTbl.toString;
  java_lang_StringBuilder_Class.ifazTbl->java_lang_CharSequence_methodTbl->wait_long_int = java_lang_StringBuilder_MethodTbl.wait_long_int;
  java_lang_StringBuilder_Class.ifazTbl->java_lang_CharSequence_methodTbl->notifyAll = java_lang_StringBuilder_MethodTbl.notifyAll;
  java_lang_StringBuilder_Class.ifazTbl->java_lang_CharSequence_methodTbl->wait = java_lang_StringBuilder_MethodTbl.wait;
  java_lang_StringBuilder_Class.iface_size = 2;
  java_lang_StringBuilder_Class.iface_array[0] = JAVA_IO_SERIALIZABLE_INDEX;
  java_lang_StringBuilder_Class.iface_array[1] = JAVA_LANG_CHARSEQUENCE_INDEX;
  java_lang_StringBuilder_Class.classIndex = JAVA_LANG_STRINGBUILDER_INDEX;

  GC_PUSH_STATIC_ROOT(java_lang_StringBuffer_LayoutStatic);
  GC_NEW_LAYOUT(java_lang_StringBuffer_LayoutStatic,java_lang_StringBuffer_ClassStatic,  0);

  GC_PUSH_STATIC_ROOT(java_lang_StringBuffer_Layout);
  GC_NEW_LAYOUT(java_lang_StringBuffer_Layout,java_lang_StringBuffer,  1,  GC_LAYOUT_FIELD(java_lang_StringBuffer,_java_lang_StringBuffer_value));

  GC_PUSH_STATIC_ROOT(java_lang_StringBuffer_Static);
  GC_NEW(java_lang_StringBuffer_Static,java_lang_StringBuffer_LayoutStatic);

  java_lang_StringBuffer_Class.super = &java_lang_Object_Class;
  java_lang_StringBuffer_Class.methodTbl = &java_lang_StringBuffer_MethodTbl;
  java_lang_StringBuffer_MethodTbl.notifyAll = java_lang_Object_notifyAll;
  java_lang_StringBuffer_MethodTbl.wait_long_int = java_lang_Object_wait_long_int;
  java_lang_StringBuffer_MethodTbl.toString = java_lang_StringBuffer_toString;
  java_lang_StringBuffer_MethodTbl.wait = java_lang_Object_wait;
  java_lang_StringBuffer_MethodTbl.clone = java_lang_Object_clone;
  java_lang_StringBuffer_MethodTbl.append_java_lang_Object = java_lang_StringBuffer_append_java_lang_Object;
  java_lang_StringBuffer_MethodTbl.append_java_lang_String = java_lang_StringBuffer_append_java_lang_String;
  java_lang_StringBuffer_MethodTbl.append_java_lang_StringBuffer = java_lang_StringBuffer_append_java_lang_StringBuffer;
  java_lang_StringBuffer_MethodTbl.append_charA = java_lang_StringBuffer_append_charA;
  java_lang_StringBuffer_MethodTbl.append_charA_int_int = java_lang_StringBuffer_append_charA_int_int;
  java_lang_StringBuffer_MethodTbl.append_boolean = java_lang_StringBuffer_append_boolean;
  java_lang_StringBuffer_MethodTbl.append_char = java_lang_StringBuffer_append_char;
  java_lang_StringBuffer_MethodTbl.append_int = java_lang_StringBuffer_append_int;
  java_lang_StringBuffer_MethodTbl.append_long = java_lang_StringBuffer_append_long;
  java_lang_StringBuffer_MethodTbl.append_float = java_lang_StringBuffer_append_float;
  java_lang_StringBuffer_MethodTbl.append_double = java_lang_StringBuffer_append_double;
  java_lang_StringBuffer_MethodTbl.delete_int_int = java_lang_StringBuffer_delete_int_int;
  java_lang_StringBuffer_MethodTbl.substring_int_int = java_lang_StringBuffer_substring_int_int;
  java_lang_StringBuffer_MethodTbl.insert_int_charA_int_int = java_lang_StringBuffer_insert_int_charA_int_int;
  java_lang_StringBuffer_MethodTbl.insert_int_java_lang_String = java_lang_StringBuffer_insert_int_java_lang_String;
  java_lang_StringBuffer_MethodTbl.indexOf_java_lang_String_int = java_lang_StringBuffer_indexOf_java_lang_String_int;
  java_lang_StringBuffer_MethodTbl.lastIndexOf_java_lang_String_int = java_lang_StringBuffer_lastIndexOf_java_lang_String_int;
  java_lang_StringBuffer_MethodTbl.ensureCapacity_unsynchronized_int = java_lang_StringBuffer_ensureCapacity_unsynchronized_int;
  java_lang_StringBuffer_MethodTbl.regionMatches_int_java_lang_String = java_lang_StringBuffer_regionMatches_int_java_lang_String;
  java_lang_StringBuffer_Class.ifazTbl = &java_lang_StringBuffer_ifazTbl;
  java_lang_StringBuffer_Class.ifazTbl->java_io_Serializable_methodTbl = &java_lang_StringBuffer_java_io_Serializable_MethodTblStruct;
  java_lang_StringBuffer_Class.ifazTbl->java_io_Serializable_methodTbl->toString = java_lang_StringBuffer_MethodTbl.toString;
  java_lang_StringBuffer_Class.ifazTbl->java_io_Serializable_methodTbl->wait_long_int = java_lang_StringBuffer_MethodTbl.wait_long_int;
  java_lang_StringBuffer_Class.ifazTbl->java_io_Serializable_methodTbl->notifyAll = java_lang_StringBuffer_MethodTbl.notifyAll;
  java_lang_StringBuffer_Class.ifazTbl->java_io_Serializable_methodTbl->wait = java_lang_StringBuffer_MethodTbl.wait;
  java_lang_StringBuffer_Class.ifazTbl->java_lang_CharSequence_methodTbl = &java_lang_StringBuffer_java_lang_CharSequence_MethodTblStruct;
  java_lang_StringBuffer_Class.ifazTbl->java_lang_CharSequence_methodTbl->toString = java_lang_StringBuffer_MethodTbl.toString;
  java_lang_StringBuffer_Class.ifazTbl->java_lang_CharSequence_methodTbl->wait_long_int = java_lang_StringBuffer_MethodTbl.wait_long_int;
  java_lang_StringBuffer_Class.ifazTbl->java_lang_CharSequence_methodTbl->notifyAll = java_lang_StringBuffer_MethodTbl.notifyAll;
  java_lang_StringBuffer_Class.ifazTbl->java_lang_CharSequence_methodTbl->wait = java_lang_StringBuffer_MethodTbl.wait;
  java_lang_StringBuffer_Class.iface_size = 2;
  java_lang_StringBuffer_Class.iface_array[0] = JAVA_IO_SERIALIZABLE_INDEX;
  java_lang_StringBuffer_Class.iface_array[1] = JAVA_LANG_CHARSEQUENCE_INDEX;
  java_lang_StringBuffer_Class.classIndex = JAVA_LANG_STRINGBUFFER_INDEX;

  GC_PUSH_STATIC_ROOT(java_lang_StringIndexOutOfBoundsException_LayoutStatic);
  GC_NEW_LAYOUT(java_lang_StringIndexOutOfBoundsException_LayoutStatic,java_lang_StringIndexOutOfBoundsException_ClassStatic,  0);

  GC_PUSH_STATIC_ROOT(java_lang_StringIndexOutOfBoundsException_Layout);
  GC_NEW_LAYOUT(java_lang_StringIndexOutOfBoundsException_Layout,java_lang_StringIndexOutOfBoundsException,  3,  GC_LAYOUT_FIELD(java_lang_StringIndexOutOfBoundsException,_java_lang_Throwable_detailMessage),  GC_LAYOUT_FIELD(java_lang_StringIndexOutOfBoundsException,_java_lang_Throwable_cause),  GC_LAYOUT_FIELD(java_lang_StringIndexOutOfBoundsException,_java_lang_Throwable_stackTrace));

  GC_PUSH_STATIC_ROOT(java_lang_StringIndexOutOfBoundsException_Static);
  GC_NEW(java_lang_StringIndexOutOfBoundsException_Static,java_lang_StringIndexOutOfBoundsException_LayoutStatic);

  java_lang_StringIndexOutOfBoundsException_Class.super = &java_lang_IndexOutOfBoundsException_Class;
  java_lang_StringIndexOutOfBoundsException_Class.methodTbl = &java_lang_StringIndexOutOfBoundsException_MethodTbl;
  java_lang_StringIndexOutOfBoundsException_MethodTbl.notifyAll = java_lang_Object_notifyAll;
  java_lang_StringIndexOutOfBoundsException_MethodTbl.wait_long_int = java_lang_Object_wait_long_int;
  java_lang_StringIndexOutOfBoundsException_MethodTbl.toString = java_lang_Throwable_toString;
  java_lang_StringIndexOutOfBoundsException_MethodTbl.wait = java_lang_Object_wait;
  java_lang_StringIndexOutOfBoundsException_MethodTbl.clone = java_lang_Object_clone;
  java_lang_StringIndexOutOfBoundsException_MethodTbl.getMessage = java_lang_Throwable_getMessage;
  java_lang_StringIndexOutOfBoundsException_MethodTbl.printStackTrace_java_io_PrintStream = java_lang_Throwable_printStackTrace_java_io_PrintStream;
  java_lang_StringIndexOutOfBoundsException_MethodTbl.stackTraceString = java_lang_Throwable_stackTraceString;
  java_lang_StringIndexOutOfBoundsException_MethodTbl.fillInStackTrace = java_lang_Throwable_fillInStackTrace;
  java_lang_StringIndexOutOfBoundsException_Class.ifazTbl = &java_lang_StringIndexOutOfBoundsException_ifazTbl;
  java_lang_StringIndexOutOfBoundsException_Class.ifazTbl->java_io_Serializable_methodTbl = &java_lang_StringIndexOutOfBoundsException_java_io_Serializable_MethodTblStruct;
  java_lang_StringIndexOutOfBoundsException_Class.ifazTbl->java_io_Serializable_methodTbl->toString = java_lang_StringIndexOutOfBoundsException_MethodTbl.toString;
  java_lang_StringIndexOutOfBoundsException_Class.ifazTbl->java_io_Serializable_methodTbl->wait_long_int = java_lang_StringIndexOutOfBoundsException_MethodTbl.wait_long_int;
  java_lang_StringIndexOutOfBoundsException_Class.ifazTbl->java_io_Serializable_methodTbl->notifyAll = java_lang_StringIndexOutOfBoundsException_MethodTbl.notifyAll;
  java_lang_StringIndexOutOfBoundsException_Class.ifazTbl->java_io_Serializable_methodTbl->wait = java_lang_StringIndexOutOfBoundsException_MethodTbl.wait;
  java_lang_StringIndexOutOfBoundsException_Class.iface_size = 1;
  java_lang_StringIndexOutOfBoundsException_Class.iface_array[0] = JAVA_IO_SERIALIZABLE_INDEX;
  java_lang_StringIndexOutOfBoundsException_Class.classIndex = JAVA_LANG_STRINGINDEXOUTOFBOUNDSEXCEPTION_INDEX;

  GC_PUSH_STATIC_ROOT(java_lang_IndexOutOfBoundsException_LayoutStatic);
  GC_NEW_LAYOUT(java_lang_IndexOutOfBoundsException_LayoutStatic,java_lang_IndexOutOfBoundsException_ClassStatic,  0);

  GC_PUSH_STATIC_ROOT(java_lang_IndexOutOfBoundsException_Layout);
  GC_NEW_LAYOUT(java_lang_IndexOutOfBoundsException_Layout,java_lang_IndexOutOfBoundsException,  3,  GC_LAYOUT_FIELD(java_lang_IndexOutOfBoundsException,_java_lang_Throwable_detailMessage),  GC_LAYOUT_FIELD(java_lang_IndexOutOfBoundsException,_java_lang_Throwable_cause),  GC_LAYOUT_FIELD(java_lang_IndexOutOfBoundsException,_java_lang_Throwable_stackTrace));

  GC_PUSH_STATIC_ROOT(java_lang_IndexOutOfBoundsException_Static);
  GC_NEW(java_lang_IndexOutOfBoundsException_Static,java_lang_IndexOutOfBoundsException_LayoutStatic);

  java_lang_IndexOutOfBoundsException_Class.super = &java_lang_RuntimeException_Class;
  java_lang_IndexOutOfBoundsException_Class.methodTbl = &java_lang_IndexOutOfBoundsException_MethodTbl;
  java_lang_IndexOutOfBoundsException_MethodTbl.notifyAll = java_lang_Object_notifyAll;
  java_lang_IndexOutOfBoundsException_MethodTbl.wait_long_int = java_lang_Object_wait_long_int;
  java_lang_IndexOutOfBoundsException_MethodTbl.toString = java_lang_Throwable_toString;
  java_lang_IndexOutOfBoundsException_MethodTbl.wait = java_lang_Object_wait;
  java_lang_IndexOutOfBoundsException_MethodTbl.clone = java_lang_Object_clone;
  java_lang_IndexOutOfBoundsException_MethodTbl.getMessage = java_lang_Throwable_getMessage;
  java_lang_IndexOutOfBoundsException_MethodTbl.printStackTrace_java_io_PrintStream = java_lang_Throwable_printStackTrace_java_io_PrintStream;
  java_lang_IndexOutOfBoundsException_MethodTbl.stackTraceString = java_lang_Throwable_stackTraceString;
  java_lang_IndexOutOfBoundsException_MethodTbl.fillInStackTrace = java_lang_Throwable_fillInStackTrace;
  java_lang_IndexOutOfBoundsException_Class.ifazTbl = &java_lang_IndexOutOfBoundsException_ifazTbl;
  java_lang_IndexOutOfBoundsException_Class.ifazTbl->java_io_Serializable_methodTbl = &java_lang_IndexOutOfBoundsException_java_io_Serializable_MethodTblStruct;
  java_lang_IndexOutOfBoundsException_Class.ifazTbl->java_io_Serializable_methodTbl->toString = java_lang_IndexOutOfBoundsException_MethodTbl.toString;
  java_lang_IndexOutOfBoundsException_Class.ifazTbl->java_io_Serializable_methodTbl->wait_long_int = java_lang_IndexOutOfBoundsException_MethodTbl.wait_long_int;
  java_lang_IndexOutOfBoundsException_Class.ifazTbl->java_io_Serializable_methodTbl->notifyAll = java_lang_IndexOutOfBoundsException_MethodTbl.notifyAll;
  java_lang_IndexOutOfBoundsException_Class.ifazTbl->java_io_Serializable_methodTbl->wait = java_lang_IndexOutOfBoundsException_MethodTbl.wait;
  java_lang_IndexOutOfBoundsException_Class.iface_size = 1;
  java_lang_IndexOutOfBoundsException_Class.iface_array[0] = JAVA_IO_SERIALIZABLE_INDEX;
  java_lang_IndexOutOfBoundsException_Class.classIndex = JAVA_LANG_INDEXOUTOFBOUNDSEXCEPTION_INDEX;

  GC_PUSH_STATIC_ROOT(java_lang_RuntimeException_LayoutStatic);
  GC_NEW_LAYOUT(java_lang_RuntimeException_LayoutStatic,java_lang_RuntimeException_ClassStatic,  0);

  GC_PUSH_STATIC_ROOT(java_lang_RuntimeException_Layout);
  GC_NEW_LAYOUT(java_lang_RuntimeException_Layout,java_lang_RuntimeException,  3,  GC_LAYOUT_FIELD(java_lang_RuntimeException,_java_lang_Throwable_detailMessage),  GC_LAYOUT_FIELD(java_lang_RuntimeException,_java_lang_Throwable_cause),  GC_LAYOUT_FIELD(java_lang_RuntimeException,_java_lang_Throwable_stackTrace));

  GC_PUSH_STATIC_ROOT(java_lang_RuntimeException_Static);
  GC_NEW(java_lang_RuntimeException_Static,java_lang_RuntimeException_LayoutStatic);

  java_lang_RuntimeException_Class.super = &java_lang_Exception_Class;
  java_lang_RuntimeException_Class.methodTbl = &java_lang_RuntimeException_MethodTbl;
  java_lang_RuntimeException_MethodTbl.notifyAll = java_lang_Object_notifyAll;
  java_lang_RuntimeException_MethodTbl.wait_long_int = java_lang_Object_wait_long_int;
  java_lang_RuntimeException_MethodTbl.toString = java_lang_Throwable_toString;
  java_lang_RuntimeException_MethodTbl.wait = java_lang_Object_wait;
  java_lang_RuntimeException_MethodTbl.clone = java_lang_Object_clone;
  java_lang_RuntimeException_MethodTbl.getMessage = java_lang_Throwable_getMessage;
  java_lang_RuntimeException_MethodTbl.printStackTrace_java_io_PrintStream = java_lang_Throwable_printStackTrace_java_io_PrintStream;
  java_lang_RuntimeException_MethodTbl.stackTraceString = java_lang_Throwable_stackTraceString;
  java_lang_RuntimeException_MethodTbl.fillInStackTrace = java_lang_Throwable_fillInStackTrace;
  java_lang_RuntimeException_Class.ifazTbl = &java_lang_RuntimeException_ifazTbl;
  java_lang_RuntimeException_Class.ifazTbl->java_io_Serializable_methodTbl = &java_lang_RuntimeException_java_io_Serializable_MethodTblStruct;
  java_lang_RuntimeException_Class.ifazTbl->java_io_Serializable_methodTbl->toString = java_lang_RuntimeException_MethodTbl.toString;
  java_lang_RuntimeException_Class.ifazTbl->java_io_Serializable_methodTbl->wait_long_int = java_lang_RuntimeException_MethodTbl.wait_long_int;
  java_lang_RuntimeException_Class.ifazTbl->java_io_Serializable_methodTbl->notifyAll = java_lang_RuntimeException_MethodTbl.notifyAll;
  java_lang_RuntimeException_Class.ifazTbl->java_io_Serializable_methodTbl->wait = java_lang_RuntimeException_MethodTbl.wait;
  java_lang_RuntimeException_Class.iface_size = 1;
  java_lang_RuntimeException_Class.iface_array[0] = JAVA_IO_SERIALIZABLE_INDEX;
  java_lang_RuntimeException_Class.classIndex = JAVA_LANG_RUNTIMEEXCEPTION_INDEX;

  GC_PUSH_STATIC_ROOT(java_lang_Character_LayoutStatic);
  GC_NEW_LAYOUT(java_lang_Character_LayoutStatic,java_lang_Character_ClassStatic,  1,  GC_LAYOUT_FIELD(java_lang_Character_ClassStatic,_java_lang_Character_NUM_VALUE));

  GC_PUSH_STATIC_ROOT(java_lang_Character_Layout);
  GC_NEW_LAYOUT(java_lang_Character_Layout,java_lang_Character,  0);

  GC_PUSH_STATIC_ROOT(java_lang_Character_Static);
  GC_NEW(java_lang_Character_Static,java_lang_Character_LayoutStatic);

  java_lang_Character_Class.super = &java_lang_Object_Class;
  java_lang_Character_Class.methodTbl = &java_lang_Character_MethodTbl;
  java_lang_Character_MethodTbl.notifyAll = java_lang_Object_notifyAll;
  java_lang_Character_MethodTbl.wait_long_int = java_lang_Object_wait_long_int;
  java_lang_Character_MethodTbl.toString = java_lang_Character_toString;
  java_lang_Character_MethodTbl.wait = java_lang_Object_wait;
  java_lang_Character_MethodTbl.clone = java_lang_Object_clone;
  java_lang_Character_Class.ifazTbl = &java_lang_Character_ifazTbl;
  java_lang_Character_Class.ifazTbl->java_io_Serializable_methodTbl = &java_lang_Character_java_io_Serializable_MethodTblStruct;
  java_lang_Character_Class.ifazTbl->java_io_Serializable_methodTbl->toString = java_lang_Character_MethodTbl.toString;
  java_lang_Character_Class.ifazTbl->java_io_Serializable_methodTbl->wait_long_int = java_lang_Character_MethodTbl.wait_long_int;
  java_lang_Character_Class.ifazTbl->java_io_Serializable_methodTbl->notifyAll = java_lang_Character_MethodTbl.notifyAll;
  java_lang_Character_Class.ifazTbl->java_io_Serializable_methodTbl->wait = java_lang_Character_MethodTbl.wait;
  java_lang_Character_Class.ifazTbl->java_lang_Comparable_methodTbl = &java_lang_Character_java_lang_Comparable_MethodTblStruct;
  java_lang_Character_Class.ifazTbl->java_lang_Comparable_methodTbl->toString = java_lang_Character_MethodTbl.toString;
  java_lang_Character_Class.ifazTbl->java_lang_Comparable_methodTbl->wait_long_int = java_lang_Character_MethodTbl.wait_long_int;
  java_lang_Character_Class.ifazTbl->java_lang_Comparable_methodTbl->notifyAll = java_lang_Character_MethodTbl.notifyAll;
  java_lang_Character_Class.ifazTbl->java_lang_Comparable_methodTbl->wait = java_lang_Character_MethodTbl.wait;
  java_lang_Character_Class.iface_size = 2;
  java_lang_Character_Class.iface_array[0] = JAVA_IO_SERIALIZABLE_INDEX;
  java_lang_Character_Class.iface_array[1] = JAVA_LANG_COMPARABLE_INDEX;
  java_lang_Character_Class.classIndex = JAVA_LANG_CHARACTER_INDEX;

  GC_PUSH_STATIC_ROOT(java_lang_Character_Subset_LayoutStatic);
  GC_NEW_LAYOUT(java_lang_Character_Subset_LayoutStatic,java_lang_Character_Subset_ClassStatic,  0);

  GC_PUSH_STATIC_ROOT(java_lang_Character_Subset_Layout);
  GC_NEW_LAYOUT(java_lang_Character_Subset_Layout,java_lang_Character_Subset,  1,  GC_LAYOUT_FIELD(java_lang_Character_Subset,_java_lang_Character_Subset_name));

  GC_PUSH_STATIC_ROOT(java_lang_Character_Subset_Static);
  GC_NEW(java_lang_Character_Subset_Static,java_lang_Character_Subset_LayoutStatic);

  java_lang_Character_Subset_Class.super = &java_lang_Object_Class;
  java_lang_Character_Subset_Class.methodTbl = &java_lang_Character_Subset_MethodTbl;
  java_lang_Character_Subset_MethodTbl.notifyAll = java_lang_Object_notifyAll;
  java_lang_Character_Subset_MethodTbl.wait_long_int = java_lang_Object_wait_long_int;
  java_lang_Character_Subset_MethodTbl.toString = java_lang_Character_Subset_toString;
  java_lang_Character_Subset_MethodTbl.wait = java_lang_Object_wait;
  java_lang_Character_Subset_MethodTbl.clone = java_lang_Object_clone;
  java_lang_Character_Subset_Class.classIndex = JAVA_LANG_CHARACTER_SUBSET_INDEX;

  GC_PUSH_STATIC_ROOT(java_lang_Math_LayoutStatic);
  GC_NEW_LAYOUT(java_lang_Math_LayoutStatic,java_lang_Math_ClassStatic,  1,  GC_LAYOUT_FIELD(java_lang_Math_ClassStatic,_java_lang_Math_rand));

  GC_PUSH_STATIC_ROOT(java_lang_Math_Layout);
  GC_NEW_LAYOUT(java_lang_Math_Layout,java_lang_Math,  0);

  GC_PUSH_STATIC_ROOT(java_lang_Math_Static);
  GC_NEW(java_lang_Math_Static,java_lang_Math_LayoutStatic);

  java_lang_Math_Class.super = &java_lang_Object_Class;
  java_lang_Math_Class.methodTbl = &java_lang_Math_MethodTbl;
  java_lang_Math_MethodTbl.notifyAll = java_lang_Object_notifyAll;
  java_lang_Math_MethodTbl.wait_long_int = java_lang_Object_wait_long_int;
  java_lang_Math_MethodTbl.toString = java_lang_Object_toString;
  java_lang_Math_MethodTbl.wait = java_lang_Object_wait;
  java_lang_Math_MethodTbl.clone = java_lang_Object_clone;
  java_lang_Math_Class.classIndex = JAVA_LANG_MATH_INDEX;

  GC_PUSH_STATIC_ROOT(java_lang_Long_LayoutStatic);
  GC_NEW_LAYOUT(java_lang_Long_LayoutStatic,java_lang_Long_ClassStatic,  0);

  GC_PUSH_STATIC_ROOT(java_lang_Long_Layout);
  GC_NEW_LAYOUT(java_lang_Long_Layout,java_lang_Long,  0);

  GC_PUSH_STATIC_ROOT(java_lang_Long_Static);
  GC_NEW(java_lang_Long_Static,java_lang_Long_LayoutStatic);

  java_lang_Long_Class.super = &java_lang_Number_Class;
  java_lang_Long_Class.methodTbl = &java_lang_Long_MethodTbl;
  java_lang_Long_MethodTbl.notifyAll = java_lang_Object_notifyAll;
  java_lang_Long_MethodTbl.wait_long_int = java_lang_Object_wait_long_int;
  java_lang_Long_MethodTbl.toString = java_lang_Long_toString;
  java_lang_Long_MethodTbl.wait = java_lang_Object_wait;
  java_lang_Long_MethodTbl.clone = java_lang_Object_clone;
  java_lang_Long_Class.ifazTbl = &java_lang_Long_ifazTbl;
  java_lang_Long_Class.ifazTbl->java_io_Serializable_methodTbl = &java_lang_Long_java_io_Serializable_MethodTblStruct;
  java_lang_Long_Class.ifazTbl->java_io_Serializable_methodTbl->toString = java_lang_Long_MethodTbl.toString;
  java_lang_Long_Class.ifazTbl->java_io_Serializable_methodTbl->wait_long_int = java_lang_Long_MethodTbl.wait_long_int;
  java_lang_Long_Class.ifazTbl->java_io_Serializable_methodTbl->notifyAll = java_lang_Long_MethodTbl.notifyAll;
  java_lang_Long_Class.ifazTbl->java_io_Serializable_methodTbl->wait = java_lang_Long_MethodTbl.wait;
  java_lang_Long_Class.ifazTbl->java_lang_Comparable_methodTbl = &java_lang_Long_java_lang_Comparable_MethodTblStruct;
  java_lang_Long_Class.ifazTbl->java_lang_Comparable_methodTbl->toString = java_lang_Long_MethodTbl.toString;
  java_lang_Long_Class.ifazTbl->java_lang_Comparable_methodTbl->wait_long_int = java_lang_Long_MethodTbl.wait_long_int;
  java_lang_Long_Class.ifazTbl->java_lang_Comparable_methodTbl->notifyAll = java_lang_Long_MethodTbl.notifyAll;
  java_lang_Long_Class.ifazTbl->java_lang_Comparable_methodTbl->wait = java_lang_Long_MethodTbl.wait;
  java_lang_Long_Class.iface_size = 2;
  java_lang_Long_Class.iface_array[0] = JAVA_IO_SERIALIZABLE_INDEX;
  java_lang_Long_Class.iface_array[1] = JAVA_LANG_COMPARABLE_INDEX;
  java_lang_Long_Class.classIndex = JAVA_LANG_LONG_INDEX;

  GC_PUSH_STATIC_ROOT(java_lang_Float_LayoutStatic);
  GC_NEW_LAYOUT(java_lang_Float_LayoutStatic,java_lang_Float_ClassStatic,  0);

  GC_PUSH_STATIC_ROOT(java_lang_Float_Layout);
  GC_NEW_LAYOUT(java_lang_Float_Layout,java_lang_Float,  0);

  GC_PUSH_STATIC_ROOT(java_lang_Float_Static);
  GC_NEW(java_lang_Float_Static,java_lang_Float_LayoutStatic);

  java_lang_Float_Class.super = &java_lang_Number_Class;
  java_lang_Float_Class.methodTbl = &java_lang_Float_MethodTbl;
  java_lang_Float_MethodTbl.notifyAll = java_lang_Object_notifyAll;
  java_lang_Float_MethodTbl.wait_long_int = java_lang_Object_wait_long_int;
  java_lang_Float_MethodTbl.toString = java_lang_Float_toString;
  java_lang_Float_MethodTbl.wait = java_lang_Object_wait;
  java_lang_Float_MethodTbl.clone = java_lang_Object_clone;
  java_lang_Float_Class.ifazTbl = &java_lang_Float_ifazTbl;
  java_lang_Float_Class.ifazTbl->java_io_Serializable_methodTbl = &java_lang_Float_java_io_Serializable_MethodTblStruct;
  java_lang_Float_Class.ifazTbl->java_io_Serializable_methodTbl->toString = java_lang_Float_MethodTbl.toString;
  java_lang_Float_Class.ifazTbl->java_io_Serializable_methodTbl->wait_long_int = java_lang_Float_MethodTbl.wait_long_int;
  java_lang_Float_Class.ifazTbl->java_io_Serializable_methodTbl->notifyAll = java_lang_Float_MethodTbl.notifyAll;
  java_lang_Float_Class.ifazTbl->java_io_Serializable_methodTbl->wait = java_lang_Float_MethodTbl.wait;
  java_lang_Float_Class.ifazTbl->java_lang_Comparable_methodTbl = &java_lang_Float_java_lang_Comparable_MethodTblStruct;
  java_lang_Float_Class.ifazTbl->java_lang_Comparable_methodTbl->toString = java_lang_Float_MethodTbl.toString;
  java_lang_Float_Class.ifazTbl->java_lang_Comparable_methodTbl->wait_long_int = java_lang_Float_MethodTbl.wait_long_int;
  java_lang_Float_Class.ifazTbl->java_lang_Comparable_methodTbl->notifyAll = java_lang_Float_MethodTbl.notifyAll;
  java_lang_Float_Class.ifazTbl->java_lang_Comparable_methodTbl->wait = java_lang_Float_MethodTbl.wait;
  java_lang_Float_Class.iface_size = 2;
  java_lang_Float_Class.iface_array[0] = JAVA_IO_SERIALIZABLE_INDEX;
  java_lang_Float_Class.iface_array[1] = JAVA_LANG_COMPARABLE_INDEX;
  java_lang_Float_Class.classIndex = JAVA_LANG_FLOAT_INDEX;

  GC_PUSH_STATIC_ROOT(java_lang_Double_LayoutStatic);
  GC_NEW_LAYOUT(java_lang_Double_LayoutStatic,java_lang_Double_ClassStatic,  0);

  GC_PUSH_STATIC_ROOT(java_lang_Double_Layout);
  GC_NEW_LAYOUT(java_lang_Double_Layout,java_lang_Double,  0);

  GC_PUSH_STATIC_ROOT(java_lang_Double_Static);
  GC_NEW(java_lang_Double_Static,java_lang_Double_LayoutStatic);

  java_lang_Double_Class.super = &java_lang_Number_Class;
  java_lang_Double_Class.methodTbl = &java_lang_Double_MethodTbl;
  java_lang_Double_MethodTbl.notifyAll = java_lang_Object_notifyAll;
  java_lang_Double_MethodTbl.wait_long_int = java_lang_Object_wait_long_int;
  java_lang_Double_MethodTbl.toString = java_lang_Double_toString;
  java_lang_Double_MethodTbl.wait = java_lang_Object_wait;
  java_lang_Double_MethodTbl.clone = java_lang_Object_clone;
  java_lang_Double_Class.ifazTbl = &java_lang_Double_ifazTbl;
  java_lang_Double_Class.ifazTbl->java_io_Serializable_methodTbl = &java_lang_Double_java_io_Serializable_MethodTblStruct;
  java_lang_Double_Class.ifazTbl->java_io_Serializable_methodTbl->toString = java_lang_Double_MethodTbl.toString;
  java_lang_Double_Class.ifazTbl->java_io_Serializable_methodTbl->wait_long_int = java_lang_Double_MethodTbl.wait_long_int;
  java_lang_Double_Class.ifazTbl->java_io_Serializable_methodTbl->notifyAll = java_lang_Double_MethodTbl.notifyAll;
  java_lang_Double_Class.ifazTbl->java_io_Serializable_methodTbl->wait = java_lang_Double_MethodTbl.wait;
  java_lang_Double_Class.ifazTbl->java_lang_Comparable_methodTbl = &java_lang_Double_java_lang_Comparable_MethodTblStruct;
  java_lang_Double_Class.ifazTbl->java_lang_Comparable_methodTbl->toString = java_lang_Double_MethodTbl.toString;
  java_lang_Double_Class.ifazTbl->java_lang_Comparable_methodTbl->wait_long_int = java_lang_Double_MethodTbl.wait_long_int;
  java_lang_Double_Class.ifazTbl->java_lang_Comparable_methodTbl->notifyAll = java_lang_Double_MethodTbl.notifyAll;
  java_lang_Double_Class.ifazTbl->java_lang_Comparable_methodTbl->wait = java_lang_Double_MethodTbl.wait;
  java_lang_Double_Class.iface_size = 2;
  java_lang_Double_Class.iface_array[0] = JAVA_IO_SERIALIZABLE_INDEX;
  java_lang_Double_Class.iface_array[1] = JAVA_LANG_COMPARABLE_INDEX;
  java_lang_Double_Class.classIndex = JAVA_LANG_DOUBLE_INDEX;

  GC_PUSH_STATIC_ROOT(java_lang_StackTraceElement_LayoutStatic);
  GC_NEW_LAYOUT(java_lang_StackTraceElement_LayoutStatic,java_lang_StackTraceElement_ClassStatic,  0);

  GC_PUSH_STATIC_ROOT(java_lang_StackTraceElement_Layout);
  GC_NEW_LAYOUT(java_lang_StackTraceElement_Layout,java_lang_StackTraceElement,  3,  GC_LAYOUT_FIELD(java_lang_StackTraceElement,_java_lang_StackTraceElement_fileName),  GC_LAYOUT_FIELD(java_lang_StackTraceElement,_java_lang_StackTraceElement_declaringClass),  GC_LAYOUT_FIELD(java_lang_StackTraceElement,_java_lang_StackTraceElement_methodName));

  GC_PUSH_STATIC_ROOT(java_lang_StackTraceElement_Static);
  GC_NEW(java_lang_StackTraceElement_Static,java_lang_StackTraceElement_LayoutStatic);

  java_lang_StackTraceElement_Class.super = &java_lang_Object_Class;
  java_lang_StackTraceElement_Class.methodTbl = &java_lang_StackTraceElement_MethodTbl;
  java_lang_StackTraceElement_MethodTbl.notifyAll = java_lang_Object_notifyAll;
  java_lang_StackTraceElement_MethodTbl.wait_long_int = java_lang_Object_wait_long_int;
  java_lang_StackTraceElement_MethodTbl.toString = java_lang_StackTraceElement_toString;
  java_lang_StackTraceElement_MethodTbl.wait = java_lang_Object_wait;
  java_lang_StackTraceElement_MethodTbl.clone = java_lang_Object_clone;
  java_lang_StackTraceElement_Class.ifazTbl = &java_lang_StackTraceElement_ifazTbl;
  java_lang_StackTraceElement_Class.ifazTbl->java_io_Serializable_methodTbl = &java_lang_StackTraceElement_java_io_Serializable_MethodTblStruct;
  java_lang_StackTraceElement_Class.ifazTbl->java_io_Serializable_methodTbl->toString = java_lang_StackTraceElement_MethodTbl.toString;
  java_lang_StackTraceElement_Class.ifazTbl->java_io_Serializable_methodTbl->wait_long_int = java_lang_StackTraceElement_MethodTbl.wait_long_int;
  java_lang_StackTraceElement_Class.ifazTbl->java_io_Serializable_methodTbl->notifyAll = java_lang_StackTraceElement_MethodTbl.notifyAll;
  java_lang_StackTraceElement_Class.ifazTbl->java_io_Serializable_methodTbl->wait = java_lang_StackTraceElement_MethodTbl.wait;
  java_lang_StackTraceElement_Class.iface_size = 1;
  java_lang_StackTraceElement_Class.iface_array[0] = JAVA_IO_SERIALIZABLE_INDEX;
  java_lang_StackTraceElement_Class.classIndex = JAVA_LANG_STACKTRACEELEMENT_INDEX;

  GC_PUSH_STATIC_ROOT(java_lang_IllegalArgumentException_LayoutStatic);
  GC_NEW_LAYOUT(java_lang_IllegalArgumentException_LayoutStatic,java_lang_IllegalArgumentException_ClassStatic,  0);

  GC_PUSH_STATIC_ROOT(java_lang_IllegalArgumentException_Layout);
  GC_NEW_LAYOUT(java_lang_IllegalArgumentException_Layout,java_lang_IllegalArgumentException,  3,  GC_LAYOUT_FIELD(java_lang_IllegalArgumentException,_java_lang_Throwable_detailMessage),  GC_LAYOUT_FIELD(java_lang_IllegalArgumentException,_java_lang_Throwable_cause),  GC_LAYOUT_FIELD(java_lang_IllegalArgumentException,_java_lang_Throwable_stackTrace));

  GC_PUSH_STATIC_ROOT(java_lang_IllegalArgumentException_Static);
  GC_NEW(java_lang_IllegalArgumentException_Static,java_lang_IllegalArgumentException_LayoutStatic);

  java_lang_IllegalArgumentException_Class.super = &java_lang_RuntimeException_Class;
  java_lang_IllegalArgumentException_Class.methodTbl = &java_lang_IllegalArgumentException_MethodTbl;
  java_lang_IllegalArgumentException_MethodTbl.notifyAll = java_lang_Object_notifyAll;
  java_lang_IllegalArgumentException_MethodTbl.wait_long_int = java_lang_Object_wait_long_int;
  java_lang_IllegalArgumentException_MethodTbl.toString = java_lang_Throwable_toString;
  java_lang_IllegalArgumentException_MethodTbl.wait = java_lang_Object_wait;
  java_lang_IllegalArgumentException_MethodTbl.clone = java_lang_Object_clone;
  java_lang_IllegalArgumentException_MethodTbl.getMessage = java_lang_Throwable_getMessage;
  java_lang_IllegalArgumentException_MethodTbl.printStackTrace_java_io_PrintStream = java_lang_Throwable_printStackTrace_java_io_PrintStream;
  java_lang_IllegalArgumentException_MethodTbl.stackTraceString = java_lang_Throwable_stackTraceString;
  java_lang_IllegalArgumentException_MethodTbl.fillInStackTrace = java_lang_Throwable_fillInStackTrace;
  java_lang_IllegalArgumentException_Class.ifazTbl = &java_lang_IllegalArgumentException_ifazTbl;
  java_lang_IllegalArgumentException_Class.ifazTbl->java_io_Serializable_methodTbl = &java_lang_IllegalArgumentException_java_io_Serializable_MethodTblStruct;
  java_lang_IllegalArgumentException_Class.ifazTbl->java_io_Serializable_methodTbl->toString = java_lang_IllegalArgumentException_MethodTbl.toString;
  java_lang_IllegalArgumentException_Class.ifazTbl->java_io_Serializable_methodTbl->wait_long_int = java_lang_IllegalArgumentException_MethodTbl.wait_long_int;
  java_lang_IllegalArgumentException_Class.ifazTbl->java_io_Serializable_methodTbl->notifyAll = java_lang_IllegalArgumentException_MethodTbl.notifyAll;
  java_lang_IllegalArgumentException_Class.ifazTbl->java_io_Serializable_methodTbl->wait = java_lang_IllegalArgumentException_MethodTbl.wait;
  java_lang_IllegalArgumentException_Class.iface_size = 1;
  java_lang_IllegalArgumentException_Class.iface_array[0] = JAVA_IO_SERIALIZABLE_INDEX;
  java_lang_IllegalArgumentException_Class.classIndex = JAVA_LANG_ILLEGALARGUMENTEXCEPTION_INDEX;

  GC_PUSH_STATIC_ROOT(java_lang_IllegalStateException_LayoutStatic);
  GC_NEW_LAYOUT(java_lang_IllegalStateException_LayoutStatic,java_lang_IllegalStateException_ClassStatic,  0);

  GC_PUSH_STATIC_ROOT(java_lang_IllegalStateException_Layout);
  GC_NEW_LAYOUT(java_lang_IllegalStateException_Layout,java_lang_IllegalStateException,  3,  GC_LAYOUT_FIELD(java_lang_IllegalStateException,_java_lang_Throwable_detailMessage),  GC_LAYOUT_FIELD(java_lang_IllegalStateException,_java_lang_Throwable_cause),  GC_LAYOUT_FIELD(java_lang_IllegalStateException,_java_lang_Throwable_stackTrace));

  GC_PUSH_STATIC_ROOT(java_lang_IllegalStateException_Static);
  GC_NEW(java_lang_IllegalStateException_Static,java_lang_IllegalStateException_LayoutStatic);

  java_lang_IllegalStateException_Class.super = &java_lang_RuntimeException_Class;
  java_lang_IllegalStateException_Class.methodTbl = &java_lang_IllegalStateException_MethodTbl;
  java_lang_IllegalStateException_MethodTbl.notifyAll = java_lang_Object_notifyAll;
  java_lang_IllegalStateException_MethodTbl.wait_long_int = java_lang_Object_wait_long_int;
  java_lang_IllegalStateException_MethodTbl.toString = java_lang_Throwable_toString;
  java_lang_IllegalStateException_MethodTbl.wait = java_lang_Object_wait;
  java_lang_IllegalStateException_MethodTbl.clone = java_lang_Object_clone;
  java_lang_IllegalStateException_MethodTbl.getMessage = java_lang_Throwable_getMessage;
  java_lang_IllegalStateException_MethodTbl.printStackTrace_java_io_PrintStream = java_lang_Throwable_printStackTrace_java_io_PrintStream;
  java_lang_IllegalStateException_MethodTbl.stackTraceString = java_lang_Throwable_stackTraceString;
  java_lang_IllegalStateException_MethodTbl.fillInStackTrace = java_lang_Throwable_fillInStackTrace;
  java_lang_IllegalStateException_Class.ifazTbl = &java_lang_IllegalStateException_ifazTbl;
  java_lang_IllegalStateException_Class.ifazTbl->java_io_Serializable_methodTbl = &java_lang_IllegalStateException_java_io_Serializable_MethodTblStruct;
  java_lang_IllegalStateException_Class.ifazTbl->java_io_Serializable_methodTbl->toString = java_lang_IllegalStateException_MethodTbl.toString;
  java_lang_IllegalStateException_Class.ifazTbl->java_io_Serializable_methodTbl->wait_long_int = java_lang_IllegalStateException_MethodTbl.wait_long_int;
  java_lang_IllegalStateException_Class.ifazTbl->java_io_Serializable_methodTbl->notifyAll = java_lang_IllegalStateException_MethodTbl.notifyAll;
  java_lang_IllegalStateException_Class.ifazTbl->java_io_Serializable_methodTbl->wait = java_lang_IllegalStateException_MethodTbl.wait;
  java_lang_IllegalStateException_Class.iface_size = 1;
  java_lang_IllegalStateException_Class.iface_array[0] = JAVA_IO_SERIALIZABLE_INDEX;
  java_lang_IllegalStateException_Class.classIndex = JAVA_LANG_ILLEGALSTATEEXCEPTION_INDEX;

  GC_PUSH_STATIC_ROOT(java_lang_ErrWriter_LayoutStatic);
  GC_NEW_LAYOUT(java_lang_ErrWriter_LayoutStatic,java_lang_ErrWriter_ClassStatic,  0);

  GC_PUSH_STATIC_ROOT(java_lang_ErrWriter_Layout);
  GC_NEW_LAYOUT(java_lang_ErrWriter_Layout,java_lang_ErrWriter,  2,  GC_LAYOUT_FIELD(java_lang_ErrWriter,_java_io_FilterOutputStream_out),  GC_LAYOUT_FIELD(java_lang_ErrWriter,_java_io_PrintStream_encoding));

  GC_PUSH_STATIC_ROOT(java_lang_ErrWriter_Static);
  GC_NEW(java_lang_ErrWriter_Static,java_lang_ErrWriter_LayoutStatic);

  java_lang_ErrWriter_Class.super = &java_io_PrintStream_Class;
  java_lang_ErrWriter_Class.methodTbl = &java_lang_ErrWriter_MethodTbl;
  java_lang_ErrWriter_MethodTbl.notifyAll = java_lang_Object_notifyAll;
  java_lang_ErrWriter_MethodTbl.wait_long_int = java_lang_Object_wait_long_int;
  java_lang_ErrWriter_MethodTbl.toString = java_lang_Object_toString;
  java_lang_ErrWriter_MethodTbl.wait = java_lang_Object_wait;
  java_lang_ErrWriter_MethodTbl.clone = java_lang_Object_clone;
  java_lang_ErrWriter_MethodTbl.write_int = java_io_PrintStream_write_int;
  java_lang_ErrWriter_MethodTbl.write_byteA = java_io_FilterOutputStream_write_byteA;
  java_lang_ErrWriter_MethodTbl.write_byteA_int_int = java_io_PrintStream_write_byteA_int_int;
  java_lang_ErrWriter_MethodTbl.flush = java_lang_ErrWriter_flush;
  java_lang_ErrWriter_MethodTbl.setError = java_io_PrintStream_setError;
  java_lang_ErrWriter_MethodTbl.print_java_lang_String_boolean = java_io_PrintStream_print_java_lang_String_boolean;
  java_lang_ErrWriter_MethodTbl.print_charA_int_int_boolean = java_io_PrintStream_print_charA_int_int_boolean;
  java_lang_ErrWriter_MethodTbl.writeChars_charA_int_int = java_io_PrintStream_writeChars_charA_int_int;
  java_lang_ErrWriter_MethodTbl.writeChars_java_lang_String_int_int = java_io_PrintStream_writeChars_java_lang_String_int_int;
  java_lang_ErrWriter_MethodTbl.print_java_lang_String = java_lang_ErrWriter_print_java_lang_String;
  java_lang_ErrWriter_Class.classIndex = JAVA_LANG_ERRWRITER_INDEX;

  GC_PUSH_STATIC_ROOT(java_lang_NullPointerException_LayoutStatic);
  GC_NEW_LAYOUT(java_lang_NullPointerException_LayoutStatic,java_lang_NullPointerException_ClassStatic,  0);

  GC_PUSH_STATIC_ROOT(java_lang_NullPointerException_Layout);
  GC_NEW_LAYOUT(java_lang_NullPointerException_Layout,java_lang_NullPointerException,  3,  GC_LAYOUT_FIELD(java_lang_NullPointerException,_java_lang_Throwable_detailMessage),  GC_LAYOUT_FIELD(java_lang_NullPointerException,_java_lang_Throwable_cause),  GC_LAYOUT_FIELD(java_lang_NullPointerException,_java_lang_Throwable_stackTrace));

  GC_PUSH_STATIC_ROOT(java_lang_NullPointerException_Static);
  GC_NEW(java_lang_NullPointerException_Static,java_lang_NullPointerException_LayoutStatic);

  java_lang_NullPointerException_Class.super = &java_lang_RuntimeException_Class;
  java_lang_NullPointerException_Class.methodTbl = &java_lang_NullPointerException_MethodTbl;
  java_lang_NullPointerException_MethodTbl.notifyAll = java_lang_Object_notifyAll;
  java_lang_NullPointerException_MethodTbl.wait_long_int = java_lang_Object_wait_long_int;
  java_lang_NullPointerException_MethodTbl.toString = java_lang_Throwable_toString;
  java_lang_NullPointerException_MethodTbl.wait = java_lang_Object_wait;
  java_lang_NullPointerException_MethodTbl.clone = java_lang_Object_clone;
  java_lang_NullPointerException_MethodTbl.getMessage = java_lang_Throwable_getMessage;
  java_lang_NullPointerException_MethodTbl.printStackTrace_java_io_PrintStream = java_lang_Throwable_printStackTrace_java_io_PrintStream;
  java_lang_NullPointerException_MethodTbl.stackTraceString = java_lang_Throwable_stackTraceString;
  java_lang_NullPointerException_MethodTbl.fillInStackTrace = java_lang_Throwable_fillInStackTrace;
  java_lang_NullPointerException_Class.ifazTbl = &java_lang_NullPointerException_ifazTbl;
  java_lang_NullPointerException_Class.ifazTbl->java_io_Serializable_methodTbl = &java_lang_NullPointerException_java_io_Serializable_MethodTblStruct;
  java_lang_NullPointerException_Class.ifazTbl->java_io_Serializable_methodTbl->toString = java_lang_NullPointerException_MethodTbl.toString;
  java_lang_NullPointerException_Class.ifazTbl->java_io_Serializable_methodTbl->wait_long_int = java_lang_NullPointerException_MethodTbl.wait_long_int;
  java_lang_NullPointerException_Class.ifazTbl->java_io_Serializable_methodTbl->notifyAll = java_lang_NullPointerException_MethodTbl.notifyAll;
  java_lang_NullPointerException_Class.ifazTbl->java_io_Serializable_methodTbl->wait = java_lang_NullPointerException_MethodTbl.wait;
  java_lang_NullPointerException_Class.iface_size = 1;
  java_lang_NullPointerException_Class.iface_array[0] = JAVA_IO_SERIALIZABLE_INDEX;
  java_lang_NullPointerException_Class.classIndex = JAVA_LANG_NULLPOINTEREXCEPTION_INDEX;

  GC_PUSH_STATIC_ROOT(java_lang_PhonyReader_LayoutStatic);
  GC_NEW_LAYOUT(java_lang_PhonyReader_LayoutStatic,java_lang_PhonyReader_ClassStatic,  0);

  GC_PUSH_STATIC_ROOT(java_lang_PhonyReader_Layout);
  GC_NEW_LAYOUT(java_lang_PhonyReader_Layout,java_lang_PhonyReader,  0);

  GC_PUSH_STATIC_ROOT(java_lang_PhonyReader_Static);
  GC_NEW(java_lang_PhonyReader_Static,java_lang_PhonyReader_LayoutStatic);

  java_lang_PhonyReader_Class.super = &java_io_InputStream_Class;
  java_lang_PhonyReader_Class.methodTbl = &java_lang_PhonyReader_MethodTbl;
  java_lang_PhonyReader_MethodTbl.notifyAll = java_lang_Object_notifyAll;
  java_lang_PhonyReader_MethodTbl.wait_long_int = java_lang_Object_wait_long_int;
  java_lang_PhonyReader_MethodTbl.toString = java_lang_Object_toString;
  java_lang_PhonyReader_MethodTbl.wait = java_lang_Object_wait;
  java_lang_PhonyReader_MethodTbl.clone = java_lang_Object_clone;
  java_lang_PhonyReader_MethodTbl.read = java_lang_PhonyReader_read;
  java_lang_PhonyReader_MethodTbl.read_byteA_int_int = java_io_InputStream_read_byteA_int_int;
  java_lang_PhonyReader_Class.classIndex = JAVA_LANG_PHONYREADER_INDEX;

  GC_PUSH_STATIC_ROOT(java_io_InterruptedIOException_LayoutStatic);
  GC_NEW_LAYOUT(java_io_InterruptedIOException_LayoutStatic,java_io_InterruptedIOException_ClassStatic,  0);

  GC_PUSH_STATIC_ROOT(java_io_InterruptedIOException_Layout);
  GC_NEW_LAYOUT(java_io_InterruptedIOException_Layout,java_io_InterruptedIOException,  3,  GC_LAYOUT_FIELD(java_io_InterruptedIOException,_java_lang_Throwable_detailMessage),  GC_LAYOUT_FIELD(java_io_InterruptedIOException,_java_lang_Throwable_cause),  GC_LAYOUT_FIELD(java_io_InterruptedIOException,_java_lang_Throwable_stackTrace));

  GC_PUSH_STATIC_ROOT(java_io_InterruptedIOException_Static);
  GC_NEW(java_io_InterruptedIOException_Static,java_io_InterruptedIOException_LayoutStatic);

  java_io_InterruptedIOException_Class.super = &java_io_IOException_Class;
  java_io_InterruptedIOException_Class.methodTbl = &java_io_InterruptedIOException_MethodTbl;
  java_io_InterruptedIOException_MethodTbl.notifyAll = java_lang_Object_notifyAll;
  java_io_InterruptedIOException_MethodTbl.wait_long_int = java_lang_Object_wait_long_int;
  java_io_InterruptedIOException_MethodTbl.toString = java_lang_Throwable_toString;
  java_io_InterruptedIOException_MethodTbl.wait = java_lang_Object_wait;
  java_io_InterruptedIOException_MethodTbl.clone = java_lang_Object_clone;
  java_io_InterruptedIOException_MethodTbl.getMessage = java_lang_Throwable_getMessage;
  java_io_InterruptedIOException_MethodTbl.printStackTrace_java_io_PrintStream = java_lang_Throwable_printStackTrace_java_io_PrintStream;
  java_io_InterruptedIOException_MethodTbl.stackTraceString = java_lang_Throwable_stackTraceString;
  java_io_InterruptedIOException_MethodTbl.fillInStackTrace = java_lang_Throwable_fillInStackTrace;
  java_io_InterruptedIOException_Class.ifazTbl = &java_io_InterruptedIOException_ifazTbl;
  java_io_InterruptedIOException_Class.ifazTbl->java_io_Serializable_methodTbl = &java_io_InterruptedIOException_java_io_Serializable_MethodTblStruct;
  java_io_InterruptedIOException_Class.ifazTbl->java_io_Serializable_methodTbl->toString = java_io_InterruptedIOException_MethodTbl.toString;
  java_io_InterruptedIOException_Class.ifazTbl->java_io_Serializable_methodTbl->wait_long_int = java_io_InterruptedIOException_MethodTbl.wait_long_int;
  java_io_InterruptedIOException_Class.ifazTbl->java_io_Serializable_methodTbl->notifyAll = java_io_InterruptedIOException_MethodTbl.notifyAll;
  java_io_InterruptedIOException_Class.ifazTbl->java_io_Serializable_methodTbl->wait = java_io_InterruptedIOException_MethodTbl.wait;
  java_io_InterruptedIOException_Class.iface_size = 1;
  java_io_InterruptedIOException_Class.iface_array[0] = JAVA_IO_SERIALIZABLE_INDEX;
  java_io_InterruptedIOException_Class.classIndex = JAVA_IO_INTERRUPTEDIOEXCEPTION_INDEX;

  GC_PUSH_STATIC_ROOT(java_lang_ArrayIndexOutOfBoundsException_LayoutStatic);
  GC_NEW_LAYOUT(java_lang_ArrayIndexOutOfBoundsException_LayoutStatic,java_lang_ArrayIndexOutOfBoundsException_ClassStatic,  0);

  GC_PUSH_STATIC_ROOT(java_lang_ArrayIndexOutOfBoundsException_Layout);
  GC_NEW_LAYOUT(java_lang_ArrayIndexOutOfBoundsException_Layout,java_lang_ArrayIndexOutOfBoundsException,  3,  GC_LAYOUT_FIELD(java_lang_ArrayIndexOutOfBoundsException,_java_lang_Throwable_detailMessage),  GC_LAYOUT_FIELD(java_lang_ArrayIndexOutOfBoundsException,_java_lang_Throwable_cause),  GC_LAYOUT_FIELD(java_lang_ArrayIndexOutOfBoundsException,_java_lang_Throwable_stackTrace));

  GC_PUSH_STATIC_ROOT(java_lang_ArrayIndexOutOfBoundsException_Static);
  GC_NEW(java_lang_ArrayIndexOutOfBoundsException_Static,java_lang_ArrayIndexOutOfBoundsException_LayoutStatic);

  java_lang_ArrayIndexOutOfBoundsException_Class.super = &java_lang_IndexOutOfBoundsException_Class;
  java_lang_ArrayIndexOutOfBoundsException_Class.methodTbl = &java_lang_ArrayIndexOutOfBoundsException_MethodTbl;
  java_lang_ArrayIndexOutOfBoundsException_MethodTbl.notifyAll = java_lang_Object_notifyAll;
  java_lang_ArrayIndexOutOfBoundsException_MethodTbl.wait_long_int = java_lang_Object_wait_long_int;
  java_lang_ArrayIndexOutOfBoundsException_MethodTbl.toString = java_lang_Throwable_toString;
  java_lang_ArrayIndexOutOfBoundsException_MethodTbl.wait = java_lang_Object_wait;
  java_lang_ArrayIndexOutOfBoundsException_MethodTbl.clone = java_lang_Object_clone;
  java_lang_ArrayIndexOutOfBoundsException_MethodTbl.getMessage = java_lang_Throwable_getMessage;
  java_lang_ArrayIndexOutOfBoundsException_MethodTbl.printStackTrace_java_io_PrintStream = java_lang_Throwable_printStackTrace_java_io_PrintStream;
  java_lang_ArrayIndexOutOfBoundsException_MethodTbl.stackTraceString = java_lang_Throwable_stackTraceString;
  java_lang_ArrayIndexOutOfBoundsException_MethodTbl.fillInStackTrace = java_lang_Throwable_fillInStackTrace;
  java_lang_ArrayIndexOutOfBoundsException_Class.ifazTbl = &java_lang_ArrayIndexOutOfBoundsException_ifazTbl;
  java_lang_ArrayIndexOutOfBoundsException_Class.ifazTbl->java_io_Serializable_methodTbl = &java_lang_ArrayIndexOutOfBoundsException_java_io_Serializable_MethodTblStruct;
  java_lang_ArrayIndexOutOfBoundsException_Class.ifazTbl->java_io_Serializable_methodTbl->toString = java_lang_ArrayIndexOutOfBoundsException_MethodTbl.toString;
  java_lang_ArrayIndexOutOfBoundsException_Class.ifazTbl->java_io_Serializable_methodTbl->wait_long_int = java_lang_ArrayIndexOutOfBoundsException_MethodTbl.wait_long_int;
  java_lang_ArrayIndexOutOfBoundsException_Class.ifazTbl->java_io_Serializable_methodTbl->notifyAll = java_lang_ArrayIndexOutOfBoundsException_MethodTbl.notifyAll;
  java_lang_ArrayIndexOutOfBoundsException_Class.ifazTbl->java_io_Serializable_methodTbl->wait = java_lang_ArrayIndexOutOfBoundsException_MethodTbl.wait;
  java_lang_ArrayIndexOutOfBoundsException_Class.iface_size = 1;
  java_lang_ArrayIndexOutOfBoundsException_Class.iface_array[0] = JAVA_IO_SERIALIZABLE_INDEX;
  java_lang_ArrayIndexOutOfBoundsException_Class.classIndex = JAVA_LANG_ARRAYINDEXOUTOFBOUNDSEXCEPTION_INDEX;

  GC_PUSH_STATIC_ROOT(java_lang_NumberFormatException_LayoutStatic);
  GC_NEW_LAYOUT(java_lang_NumberFormatException_LayoutStatic,java_lang_NumberFormatException_ClassStatic,  0);

  GC_PUSH_STATIC_ROOT(java_lang_NumberFormatException_Layout);
  GC_NEW_LAYOUT(java_lang_NumberFormatException_Layout,java_lang_NumberFormatException,  3,  GC_LAYOUT_FIELD(java_lang_NumberFormatException,_java_lang_Throwable_detailMessage),  GC_LAYOUT_FIELD(java_lang_NumberFormatException,_java_lang_Throwable_cause),  GC_LAYOUT_FIELD(java_lang_NumberFormatException,_java_lang_Throwable_stackTrace));

  GC_PUSH_STATIC_ROOT(java_lang_NumberFormatException_Static);
  GC_NEW(java_lang_NumberFormatException_Static,java_lang_NumberFormatException_LayoutStatic);

  java_lang_NumberFormatException_Class.super = &java_lang_IllegalArgumentException_Class;
  java_lang_NumberFormatException_Class.methodTbl = &java_lang_NumberFormatException_MethodTbl;
  java_lang_NumberFormatException_MethodTbl.notifyAll = java_lang_Object_notifyAll;
  java_lang_NumberFormatException_MethodTbl.wait_long_int = java_lang_Object_wait_long_int;
  java_lang_NumberFormatException_MethodTbl.toString = java_lang_Throwable_toString;
  java_lang_NumberFormatException_MethodTbl.wait = java_lang_Object_wait;
  java_lang_NumberFormatException_MethodTbl.clone = java_lang_Object_clone;
  java_lang_NumberFormatException_MethodTbl.getMessage = java_lang_Throwable_getMessage;
  java_lang_NumberFormatException_MethodTbl.printStackTrace_java_io_PrintStream = java_lang_Throwable_printStackTrace_java_io_PrintStream;
  java_lang_NumberFormatException_MethodTbl.stackTraceString = java_lang_Throwable_stackTraceString;
  java_lang_NumberFormatException_MethodTbl.fillInStackTrace = java_lang_Throwable_fillInStackTrace;
  java_lang_NumberFormatException_Class.ifazTbl = &java_lang_NumberFormatException_ifazTbl;
  java_lang_NumberFormatException_Class.ifazTbl->java_io_Serializable_methodTbl = &java_lang_NumberFormatException_java_io_Serializable_MethodTblStruct;
  java_lang_NumberFormatException_Class.ifazTbl->java_io_Serializable_methodTbl->toString = java_lang_NumberFormatException_MethodTbl.toString;
  java_lang_NumberFormatException_Class.ifazTbl->java_io_Serializable_methodTbl->wait_long_int = java_lang_NumberFormatException_MethodTbl.wait_long_int;
  java_lang_NumberFormatException_Class.ifazTbl->java_io_Serializable_methodTbl->notifyAll = java_lang_NumberFormatException_MethodTbl.notifyAll;
  java_lang_NumberFormatException_Class.ifazTbl->java_io_Serializable_methodTbl->wait = java_lang_NumberFormatException_MethodTbl.wait;
  java_lang_NumberFormatException_Class.iface_size = 1;
  java_lang_NumberFormatException_Class.iface_array[0] = JAVA_IO_SERIALIZABLE_INDEX;
  java_lang_NumberFormatException_Class.classIndex = JAVA_LANG_NUMBERFORMATEXCEPTION_INDEX;

  GC_PUSH_STATIC_ROOT(java_lang_Error_LayoutStatic);
  GC_NEW_LAYOUT(java_lang_Error_LayoutStatic,java_lang_Error_ClassStatic,  0);

  GC_PUSH_STATIC_ROOT(java_lang_Error_Layout);
  GC_NEW_LAYOUT(java_lang_Error_Layout,java_lang_Error,  3,  GC_LAYOUT_FIELD(java_lang_Error,_java_lang_Throwable_detailMessage),  GC_LAYOUT_FIELD(java_lang_Error,_java_lang_Throwable_cause),  GC_LAYOUT_FIELD(java_lang_Error,_java_lang_Throwable_stackTrace));

  GC_PUSH_STATIC_ROOT(java_lang_Error_Static);
  GC_NEW(java_lang_Error_Static,java_lang_Error_LayoutStatic);

  java_lang_Error_Class.super = &java_lang_Throwable_Class;
  java_lang_Error_Class.methodTbl = &java_lang_Error_MethodTbl;
  java_lang_Error_MethodTbl.notifyAll = java_lang_Object_notifyAll;
  java_lang_Error_MethodTbl.wait_long_int = java_lang_Object_wait_long_int;
  java_lang_Error_MethodTbl.toString = java_lang_Throwable_toString;
  java_lang_Error_MethodTbl.wait = java_lang_Object_wait;
  java_lang_Error_MethodTbl.clone = java_lang_Object_clone;
  java_lang_Error_MethodTbl.getMessage = java_lang_Throwable_getMessage;
  java_lang_Error_MethodTbl.printStackTrace_java_io_PrintStream = java_lang_Throwable_printStackTrace_java_io_PrintStream;
  java_lang_Error_MethodTbl.stackTraceString = java_lang_Throwable_stackTraceString;
  java_lang_Error_MethodTbl.fillInStackTrace = java_lang_Throwable_fillInStackTrace;
  java_lang_Error_Class.ifazTbl = &java_lang_Error_ifazTbl;
  java_lang_Error_Class.ifazTbl->java_io_Serializable_methodTbl = &java_lang_Error_java_io_Serializable_MethodTblStruct;
  java_lang_Error_Class.ifazTbl->java_io_Serializable_methodTbl->toString = java_lang_Error_MethodTbl.toString;
  java_lang_Error_Class.ifazTbl->java_io_Serializable_methodTbl->wait_long_int = java_lang_Error_MethodTbl.wait_long_int;
  java_lang_Error_Class.ifazTbl->java_io_Serializable_methodTbl->notifyAll = java_lang_Error_MethodTbl.notifyAll;
  java_lang_Error_Class.ifazTbl->java_io_Serializable_methodTbl->wait = java_lang_Error_MethodTbl.wait;
  java_lang_Error_Class.iface_size = 1;
  java_lang_Error_Class.iface_array[0] = JAVA_IO_SERIALIZABLE_INDEX;
  java_lang_Error_Class.classIndex = JAVA_LANG_ERROR_INDEX;

  GC_PUSH_STATIC_ROOT(java_net_SocketAddress_LayoutStatic);
  GC_NEW_LAYOUT(java_net_SocketAddress_LayoutStatic,java_net_SocketAddress_ClassStatic,  0);

  GC_PUSH_STATIC_ROOT(java_net_SocketAddress_Layout);
  GC_NEW_LAYOUT(java_net_SocketAddress_Layout,java_net_SocketAddress,  0);

  GC_PUSH_STATIC_ROOT(java_net_SocketAddress_Static);
  GC_NEW(java_net_SocketAddress_Static,java_net_SocketAddress_LayoutStatic);

  java_net_SocketAddress_Class.super = &java_lang_Object_Class;
  java_net_SocketAddress_Class.classIndex = JAVA_NET_SOCKETADDRESS_INDEX;

  GC_PUSH_STATIC_ROOT(ToClient_t_LayoutStatic);
  GC_NEW_LAYOUT(ToClient_t_LayoutStatic,ToClient_t_ClassStatic,  0);

  GC_PUSH_STATIC_ROOT(ToClient_t_Layout);
  GC_NEW_LAYOUT(ToClient_t_Layout,ToClient_t,  4,  GC_LAYOUT_FIELD(ToClient_t,_java_lang_Thread_targetRun),  GC_LAYOUT_FIELD(ToClient_t,_java_lang_Thread_name),  GC_LAYOUT_FIELD(ToClient_t,_ToClient_t_mon),  GC_LAYOUT_FIELD(ToClient_t,_ToClient_t_os));

  GC_PUSH_STATIC_ROOT(ToClient_t_Static);
  GC_NEW(ToClient_t_Static,ToClient_t_LayoutStatic);

  ToClient_t_Class.super = &java_lang_Thread_Class;
  ToClient_t_Class.methodTbl = &ToClient_t_MethodTbl;
  ToClient_t_MethodTbl.notifyAll = java_lang_Object_notifyAll;
  ToClient_t_MethodTbl.wait_long_int = java_lang_Object_wait_long_int;
  ToClient_t_MethodTbl.toString = java_lang_Object_toString;
  ToClient_t_MethodTbl.wait = java_lang_Object_wait;
  ToClient_t_MethodTbl.clone = java_lang_Object_clone;
  ToClient_t_MethodTbl.inheritPriority = java_lang_Thread_inheritPriority;
  ToClient_t_MethodTbl.createThread = java_lang_Thread_createThread;
  ToClient_t_MethodTbl.start = java_lang_Thread_start;
  ToClient_t_MethodTbl.run = ToClient_t_run;
  ToClient_t_MethodTbl.isInterrupted = java_lang_Thread_isInterrupted;
  ToClient_t_MethodTbl.interrupt = java_lang_Thread_interrupt;
  ToClient_t_Class.ifazTbl = &ToClient_t_ifazTbl;
  ToClient_t_Class.ifazTbl->java_lang_Runnable_methodTbl = &ToClient_t_java_lang_Runnable_MethodTblStruct;
  ToClient_t_Class.ifazTbl->java_lang_Runnable_methodTbl->run = ToClient_t_MethodTbl.run;
  ToClient_t_Class.ifazTbl->java_lang_Runnable_methodTbl->toString = ToClient_t_MethodTbl.toString;
  ToClient_t_Class.ifazTbl->java_lang_Runnable_methodTbl->wait_long_int = ToClient_t_MethodTbl.wait_long_int;
  ToClient_t_Class.ifazTbl->java_lang_Runnable_methodTbl->notifyAll = ToClient_t_MethodTbl.notifyAll;
  ToClient_t_Class.ifazTbl->java_lang_Runnable_methodTbl->wait = ToClient_t_MethodTbl.wait;
  ToClient_t_Class.iface_size = 1;
  ToClient_t_Class.iface_array[0] = JAVA_LANG_RUNNABLE_INDEX;
  ToClient_t_Class.classIndex = TOCLIENT_T_INDEX;

  GC_PUSH_STATIC_ROOT(java_net_UnknownHostException_LayoutStatic);
  GC_NEW_LAYOUT(java_net_UnknownHostException_LayoutStatic,java_net_UnknownHostException_ClassStatic,  0);

  GC_PUSH_STATIC_ROOT(java_net_UnknownHostException_Layout);
  GC_NEW_LAYOUT(java_net_UnknownHostException_Layout,java_net_UnknownHostException,  3,  GC_LAYOUT_FIELD(java_net_UnknownHostException,_java_lang_Throwable_detailMessage),  GC_LAYOUT_FIELD(java_net_UnknownHostException,_java_lang_Throwable_cause),  GC_LAYOUT_FIELD(java_net_UnknownHostException,_java_lang_Throwable_stackTrace));

  GC_PUSH_STATIC_ROOT(java_net_UnknownHostException_Static);
  GC_NEW(java_net_UnknownHostException_Static,java_net_UnknownHostException_LayoutStatic);

  java_net_UnknownHostException_Class.super = &java_io_IOException_Class;
  java_net_UnknownHostException_Class.methodTbl = &java_net_UnknownHostException_MethodTbl;
  java_net_UnknownHostException_MethodTbl.notifyAll = java_lang_Object_notifyAll;
  java_net_UnknownHostException_MethodTbl.wait_long_int = java_lang_Object_wait_long_int;
  java_net_UnknownHostException_MethodTbl.toString = java_lang_Throwable_toString;
  java_net_UnknownHostException_MethodTbl.wait = java_lang_Object_wait;
  java_net_UnknownHostException_MethodTbl.clone = java_lang_Object_clone;
  java_net_UnknownHostException_MethodTbl.getMessage = java_lang_Throwable_getMessage;
  java_net_UnknownHostException_MethodTbl.printStackTrace_java_io_PrintStream = java_lang_Throwable_printStackTrace_java_io_PrintStream;
  java_net_UnknownHostException_MethodTbl.stackTraceString = java_lang_Throwable_stackTraceString;
  java_net_UnknownHostException_MethodTbl.fillInStackTrace = java_lang_Throwable_fillInStackTrace;
  java_net_UnknownHostException_Class.ifazTbl = &java_net_UnknownHostException_ifazTbl;
  java_net_UnknownHostException_Class.ifazTbl->java_io_Serializable_methodTbl = &java_net_UnknownHostException_java_io_Serializable_MethodTblStruct;
  java_net_UnknownHostException_Class.ifazTbl->java_io_Serializable_methodTbl->toString = java_net_UnknownHostException_MethodTbl.toString;
  java_net_UnknownHostException_Class.ifazTbl->java_io_Serializable_methodTbl->wait_long_int = java_net_UnknownHostException_MethodTbl.wait_long_int;
  java_net_UnknownHostException_Class.ifazTbl->java_io_Serializable_methodTbl->notifyAll = java_net_UnknownHostException_MethodTbl.notifyAll;
  java_net_UnknownHostException_Class.ifazTbl->java_io_Serializable_methodTbl->wait = java_net_UnknownHostException_MethodTbl.wait;
  java_net_UnknownHostException_Class.iface_size = 1;
  java_net_UnknownHostException_Class.iface_array[0] = JAVA_IO_SERIALIZABLE_INDEX;
  java_net_UnknownHostException_Class.classIndex = JAVA_NET_UNKNOWNHOSTEXCEPTION_INDEX;

  GC_PUSH_STATIC_ROOT(java_net_InetSocketAddress_LayoutStatic);
  GC_NEW_LAYOUT(java_net_InetSocketAddress_LayoutStatic,java_net_InetSocketAddress_ClassStatic,  0);

  GC_PUSH_STATIC_ROOT(java_net_InetSocketAddress_Layout);
  GC_NEW_LAYOUT(java_net_InetSocketAddress_Layout,java_net_InetSocketAddress,  2,  GC_LAYOUT_FIELD(java_net_InetSocketAddress,_java_net_InetSocketAddress_hostname),  GC_LAYOUT_FIELD(java_net_InetSocketAddress,_java_net_InetSocketAddress_addr));

  GC_PUSH_STATIC_ROOT(java_net_InetSocketAddress_Static);
  GC_NEW(java_net_InetSocketAddress_Static,java_net_InetSocketAddress_LayoutStatic);

  java_net_InetSocketAddress_Class.super = &java_net_SocketAddress_Class;
  java_net_InetSocketAddress_Class.methodTbl = &java_net_InetSocketAddress_MethodTbl;
  java_net_InetSocketAddress_MethodTbl.notifyAll = java_lang_Object_notifyAll;
  java_net_InetSocketAddress_MethodTbl.wait_long_int = java_lang_Object_wait_long_int;
  java_net_InetSocketAddress_MethodTbl.toString = java_net_InetSocketAddress_toString;
  java_net_InetSocketAddress_MethodTbl.wait = java_lang_Object_wait;
  java_net_InetSocketAddress_MethodTbl.clone = java_lang_Object_clone;
  java_net_InetSocketAddress_MethodTbl.getAddress = java_net_InetSocketAddress_getAddress;
  java_net_InetSocketAddress_MethodTbl.getPort = java_net_InetSocketAddress_getPort;
  java_net_InetSocketAddress_Class.classIndex = JAVA_NET_INETSOCKETADDRESS_INDEX;

  GC_PUSH_STATIC_ROOT(java_net_InetAddress_LayoutStatic);
  GC_NEW_LAYOUT(java_net_InetAddress_LayoutStatic,java_net_InetAddress_ClassStatic,  0);

  GC_PUSH_STATIC_ROOT(java_net_InetAddress_Layout);
  GC_NEW_LAYOUT(java_net_InetAddress_Layout,java_net_InetAddress,  2,  GC_LAYOUT_FIELD(java_net_InetAddress,_java_net_InetAddress_addr),  GC_LAYOUT_FIELD(java_net_InetAddress,_java_net_InetAddress_hostName));

  GC_PUSH_STATIC_ROOT(java_net_InetAddress_Static);
  GC_NEW(java_net_InetAddress_Static,java_net_InetAddress_LayoutStatic);

  java_net_InetAddress_Class.super = &java_lang_Object_Class;
  java_net_InetAddress_Class.methodTbl = &java_net_InetAddress_MethodTbl;
  java_net_InetAddress_MethodTbl.notifyAll = java_lang_Object_notifyAll;
  java_net_InetAddress_MethodTbl.wait_long_int = java_lang_Object_wait_long_int;
  java_net_InetAddress_MethodTbl.toString = java_net_InetAddress_toString;
  java_net_InetAddress_MethodTbl.wait = java_lang_Object_wait;
  java_net_InetAddress_MethodTbl.clone = java_lang_Object_clone;
  java_net_InetAddress_MethodTbl.isMulticastAddress = java_net_InetAddress_isMulticastAddress;
  java_net_InetAddress_MethodTbl.getHostName = java_net_InetAddress_getHostName;
  java_net_InetAddress_MethodTbl.getAddress = java_net_InetAddress_getAddress;
  java_net_InetAddress_MethodTbl.getHostAddress = java_net_InetAddress_getHostAddress;
  java_net_InetAddress_Class.classIndex = JAVA_NET_INETADDRESS_INDEX;

  GC_PUSH_STATIC_ROOT(java_io_SimpleTCPInputStream_LayoutStatic);
  GC_NEW_LAYOUT(java_io_SimpleTCPInputStream_LayoutStatic,java_io_SimpleTCPInputStream_ClassStatic,  0);

  GC_PUSH_STATIC_ROOT(java_io_SimpleTCPInputStream_Layout);
  GC_NEW_LAYOUT(java_io_SimpleTCPInputStream_Layout,java_io_SimpleTCPInputStream,  0);

  GC_PUSH_STATIC_ROOT(java_io_SimpleTCPInputStream_Static);
  GC_NEW(java_io_SimpleTCPInputStream_Static,java_io_SimpleTCPInputStream_LayoutStatic);

  java_io_SimpleTCPInputStream_Class.super = &java_io_InputStream_Class;
  java_io_SimpleTCPInputStream_Class.methodTbl = &java_io_SimpleTCPInputStream_MethodTbl;
  java_io_SimpleTCPInputStream_MethodTbl.notifyAll = java_lang_Object_notifyAll;
  java_io_SimpleTCPInputStream_MethodTbl.wait_long_int = java_lang_Object_wait_long_int;
  java_io_SimpleTCPInputStream_MethodTbl.toString = java_lang_Object_toString;
  java_io_SimpleTCPInputStream_MethodTbl.wait = java_lang_Object_wait;
  java_io_SimpleTCPInputStream_MethodTbl.clone = java_lang_Object_clone;
  java_io_SimpleTCPInputStream_MethodTbl.read = java_io_SimpleTCPInputStream_read;
  java_io_SimpleTCPInputStream_MethodTbl.read_byteA_int_int = java_io_SimpleTCPInputStream_read_byteA_int_int;
  java_io_SimpleTCPInputStream_Class.classIndex = JAVA_IO_SIMPLETCPINPUTSTREAM_INDEX;

  GC_PUSH_STATIC_ROOT(java_io_SimpleTCPOutputStream_LayoutStatic);
  GC_NEW_LAYOUT(java_io_SimpleTCPOutputStream_LayoutStatic,java_io_SimpleTCPOutputStream_ClassStatic,  0);

  GC_PUSH_STATIC_ROOT(java_io_SimpleTCPOutputStream_Layout);
  GC_NEW_LAYOUT(java_io_SimpleTCPOutputStream_Layout,java_io_SimpleTCPOutputStream,  0);

  GC_PUSH_STATIC_ROOT(java_io_SimpleTCPOutputStream_Static);
  GC_NEW(java_io_SimpleTCPOutputStream_Static,java_io_SimpleTCPOutputStream_LayoutStatic);

  java_io_SimpleTCPOutputStream_Class.super = &java_io_OutputStream_Class;
  java_io_SimpleTCPOutputStream_Class.methodTbl = &java_io_SimpleTCPOutputStream_MethodTbl;
  java_io_SimpleTCPOutputStream_MethodTbl.notifyAll = java_lang_Object_notifyAll;
  java_io_SimpleTCPOutputStream_MethodTbl.wait_long_int = java_lang_Object_wait_long_int;
  java_io_SimpleTCPOutputStream_MethodTbl.toString = java_lang_Object_toString;
  java_io_SimpleTCPOutputStream_MethodTbl.wait = java_lang_Object_wait;
  java_io_SimpleTCPOutputStream_MethodTbl.clone = java_lang_Object_clone;
  java_io_SimpleTCPOutputStream_MethodTbl.write_int = java_io_SimpleTCPOutputStream_write_int;
  java_io_SimpleTCPOutputStream_MethodTbl.write_byteA = java_io_SimpleTCPOutputStream_write_byteA;
  java_io_SimpleTCPOutputStream_MethodTbl.write_byteA_int_int = java_io_SimpleTCPOutputStream_write_byteA_int_int;
  java_io_SimpleTCPOutputStream_MethodTbl.flush = java_io_SimpleTCPOutputStream_flush;
  java_io_SimpleTCPOutputStream_MethodTbl.close = java_io_SimpleTCPOutputStream_close;
  java_io_SimpleTCPOutputStream_Class.classIndex = JAVA_IO_SIMPLETCPOUTPUTSTREAM_INDEX;

#if HAS_REFLECTION > 0

  clazzes[JAVA_LANG_OBJECT_INDEX].name = "java.lang.Object";
  GC_PUSH_STATIC_ROOT(clazzes[JAVA_LANG_OBJECT_INDEX].clazz);
  GC_ASSIGN_NULL(clazzes[JAVA_LANG_OBJECT_INDEX].clazz);
  clazzes[JAVA_LANG_STRING_INDEX].name = "java.lang.String";
  GC_PUSH_STATIC_ROOT(clazzes[JAVA_LANG_STRING_INDEX].clazz);
  GC_ASSIGN_NULL(clazzes[JAVA_LANG_STRING_INDEX].clazz);
  clazzes[JAVA_LANG_CLONEABLE_INDEX].name = "java.lang.Cloneable";
  GC_PUSH_STATIC_ROOT(clazzes[JAVA_LANG_CLONEABLE_INDEX].clazz);
  GC_ASSIGN_NULL(clazzes[JAVA_LANG_CLONEABLE_INDEX].clazz);
  clazzes[JAVA_IO_SERIALIZABLE_INDEX].name = "java.io.Serializable";
  GC_PUSH_STATIC_ROOT(clazzes[JAVA_IO_SERIALIZABLE_INDEX].clazz);
  GC_ASSIGN_NULL(clazzes[JAVA_IO_SERIALIZABLE_INDEX].clazz);
  clazzes[JAVA_LANG_THROWABLE_INDEX].name = "java.lang.Throwable";
  GC_PUSH_STATIC_ROOT(clazzes[JAVA_LANG_THROWABLE_INDEX].clazz);
  GC_ASSIGN_NULL(clazzes[JAVA_LANG_THROWABLE_INDEX].clazz);
  clazzes[JAVA_LANG_SYSTEM_INDEX].name = "java.lang.System";
  GC_PUSH_STATIC_ROOT(clazzes[JAVA_LANG_SYSTEM_INDEX].clazz);
  GC_ASSIGN_NULL(clazzes[JAVA_LANG_SYSTEM_INDEX].clazz);
  clazzes[JAVA_LANG_PHONYWRITER_INDEX].name = "java.lang.PhonyWriter";
  GC_PUSH_STATIC_ROOT(clazzes[JAVA_LANG_PHONYWRITER_INDEX].clazz);
  GC_ASSIGN_NULL(clazzes[JAVA_LANG_PHONYWRITER_INDEX].clazz);
  clazzes[JAVA_IO_PRINTSTREAM_INDEX].name = "java.io.PrintStream";
  GC_PUSH_STATIC_ROOT(clazzes[JAVA_IO_PRINTSTREAM_INDEX].clazz);
  GC_ASSIGN_NULL(clazzes[JAVA_IO_PRINTSTREAM_INDEX].clazz);
  clazzes[JAVA_IO_FILTEROUTPUTSTREAM_INDEX].name = "java.io.FilterOutputStream";
  GC_PUSH_STATIC_ROOT(clazzes[JAVA_IO_FILTEROUTPUTSTREAM_INDEX].clazz);
  GC_ASSIGN_NULL(clazzes[JAVA_IO_FILTEROUTPUTSTREAM_INDEX].clazz);
  clazzes[JAVA_IO_OUTPUTSTREAM_INDEX].name = "java.io.OutputStream";
  GC_PUSH_STATIC_ROOT(clazzes[JAVA_IO_OUTPUTSTREAM_INDEX].clazz);
  GC_ASSIGN_NULL(clazzes[JAVA_IO_OUTPUTSTREAM_INDEX].clazz);
  clazzes[JAVA_LANG_INTEGER_INDEX].name = "java.lang.Integer";
  GC_PUSH_STATIC_ROOT(clazzes[JAVA_LANG_INTEGER_INDEX].clazz);
  GC_ASSIGN_NULL(clazzes[JAVA_LANG_INTEGER_INDEX].clazz);
  clazzes[JAVA_LANG_NUMBER_INDEX].name = "java.lang.Number";
  GC_PUSH_STATIC_ROOT(clazzes[JAVA_LANG_NUMBER_INDEX].clazz);
  GC_ASSIGN_NULL(clazzes[JAVA_LANG_NUMBER_INDEX].clazz);
  clazzes[JAVA_LANG_COMPARABLE_INDEX].name = "java.lang.Comparable";
  GC_PUSH_STATIC_ROOT(clazzes[JAVA_LANG_COMPARABLE_INDEX].clazz);
  GC_ASSIGN_NULL(clazzes[JAVA_LANG_COMPARABLE_INDEX].clazz);
  clazzes[MONITOR_INDEX].name = "Monitor";
  GC_PUSH_STATIC_ROOT(clazzes[MONITOR_INDEX].clazz);
  GC_ASSIGN_NULL(clazzes[MONITOR_INDEX].clazz);
  clazzes[CAMTOMONITOR_T_INDEX].name = "CamToMonitor_t";
  GC_PUSH_STATIC_ROOT(clazzes[CAMTOMONITOR_T_INDEX].clazz);
  GC_ASSIGN_NULL(clazzes[CAMTOMONITOR_T_INDEX].clazz);
  clazzes[JAVA_LANG_THREAD_INDEX].name = "java.lang.Thread";
  GC_PUSH_STATIC_ROOT(clazzes[JAVA_LANG_THREAD_INDEX].clazz);
  GC_ASSIGN_NULL(clazzes[JAVA_LANG_THREAD_INDEX].clazz);
  clazzes[JAVA_LANG_RUNNABLE_INDEX].name = "java.lang.Runnable";
  GC_PUSH_STATIC_ROOT(clazzes[JAVA_LANG_RUNNABLE_INDEX].clazz);
  GC_ASSIGN_NULL(clazzes[JAVA_LANG_RUNNABLE_INDEX].clazz);
  clazzes[FROMCLIENT_T_INDEX].name = "FromClient_t";
  GC_PUSH_STATIC_ROOT(clazzes[FROMCLIENT_T_INDEX].clazz);
  GC_ASSIGN_NULL(clazzes[FROMCLIENT_T_INDEX].clazz);
  clazzes[JAVA_IO_IOEXCEPTION_INDEX].name = "java.io.IOException";
  GC_PUSH_STATIC_ROOT(clazzes[JAVA_IO_IOEXCEPTION_INDEX].clazz);
  GC_ASSIGN_NULL(clazzes[JAVA_IO_IOEXCEPTION_INDEX].clazz);
  clazzes[JAVA_IO_INPUTSTREAM_INDEX].name = "java.io.InputStream";
  GC_PUSH_STATIC_ROOT(clazzes[JAVA_IO_INPUTSTREAM_INDEX].clazz);
  GC_ASSIGN_NULL(clazzes[JAVA_IO_INPUTSTREAM_INDEX].clazz);
  clazzes[JAVA_NET_SERVERSOCKET_INDEX].name = "java.net.ServerSocket";
  GC_PUSH_STATIC_ROOT(clazzes[JAVA_NET_SERVERSOCKET_INDEX].clazz);
  GC_ASSIGN_NULL(clazzes[JAVA_NET_SERVERSOCKET_INDEX].clazz);
  clazzes[JAVA_NET_SOCKET_INDEX].name = "java.net.Socket";
  GC_PUSH_STATIC_ROOT(clazzes[JAVA_NET_SOCKET_INDEX].clazz);
  GC_ASSIGN_NULL(clazzes[JAVA_NET_SOCKET_INDEX].clazz);
  clazzes[HTTP_T_INDEX].name = "HTTP_t";
  GC_PUSH_STATIC_ROOT(clazzes[HTTP_T_INDEX].clazz);
  GC_ASSIGN_NULL(clazzes[HTTP_T_INDEX].clazz);
  clazzes[SE_LTH_CS_EDA040_REALCAMERA_AXISM3006V_INDEX].name = "se.lth.cs.eda040.realcamera.AxisM3006V";
  GC_PUSH_STATIC_ROOT(clazzes[SE_LTH_CS_EDA040_REALCAMERA_AXISM3006V_INDEX].clazz);
  GC_ASSIGN_NULL(clazzes[SE_LTH_CS_EDA040_REALCAMERA_AXISM3006V_INDEX].clazz);
  clazzes[JAVA_LANG_INTERRUPTEDEXCEPTION_INDEX].name = "java.lang.InterruptedException";
  GC_PUSH_STATIC_ROOT(clazzes[JAVA_LANG_INTERRUPTEDEXCEPTION_INDEX].clazz);
  GC_ASSIGN_NULL(clazzes[JAVA_LANG_INTERRUPTEDEXCEPTION_INDEX].clazz);
  clazzes[JAVA_LANG_EXCEPTION_INDEX].name = "java.lang.Exception";
  GC_PUSH_STATIC_ROOT(clazzes[JAVA_LANG_EXCEPTION_INDEX].clazz);
  GC_ASSIGN_NULL(clazzes[JAVA_LANG_EXCEPTION_INDEX].clazz);
  clazzes[JAVA_LANG_CHARSEQUENCE_INDEX].name = "java.lang.CharSequence";
  GC_PUSH_STATIC_ROOT(clazzes[JAVA_LANG_CHARSEQUENCE_INDEX].clazz);
  GC_ASSIGN_NULL(clazzes[JAVA_LANG_CHARSEQUENCE_INDEX].clazz);
  clazzes[JAVA_LANG_STRINGBUILDER_INDEX].name = "java.lang.StringBuilder";
  GC_PUSH_STATIC_ROOT(clazzes[JAVA_LANG_STRINGBUILDER_INDEX].clazz);
  GC_ASSIGN_NULL(clazzes[JAVA_LANG_STRINGBUILDER_INDEX].clazz);
  clazzes[JAVA_LANG_STRINGBUFFER_INDEX].name = "java.lang.StringBuffer";
  GC_PUSH_STATIC_ROOT(clazzes[JAVA_LANG_STRINGBUFFER_INDEX].clazz);
  GC_ASSIGN_NULL(clazzes[JAVA_LANG_STRINGBUFFER_INDEX].clazz);
  clazzes[JAVA_LANG_STRINGINDEXOUTOFBOUNDSEXCEPTION_INDEX].name = "java.lang.StringIndexOutOfBoundsException";
  GC_PUSH_STATIC_ROOT(clazzes[JAVA_LANG_STRINGINDEXOUTOFBOUNDSEXCEPTION_INDEX].clazz);
  GC_ASSIGN_NULL(clazzes[JAVA_LANG_STRINGINDEXOUTOFBOUNDSEXCEPTION_INDEX].clazz);
  clazzes[JAVA_LANG_INDEXOUTOFBOUNDSEXCEPTION_INDEX].name = "java.lang.IndexOutOfBoundsException";
  GC_PUSH_STATIC_ROOT(clazzes[JAVA_LANG_INDEXOUTOFBOUNDSEXCEPTION_INDEX].clazz);
  GC_ASSIGN_NULL(clazzes[JAVA_LANG_INDEXOUTOFBOUNDSEXCEPTION_INDEX].clazz);
  clazzes[JAVA_LANG_RUNTIMEEXCEPTION_INDEX].name = "java.lang.RuntimeException";
  GC_PUSH_STATIC_ROOT(clazzes[JAVA_LANG_RUNTIMEEXCEPTION_INDEX].clazz);
  GC_ASSIGN_NULL(clazzes[JAVA_LANG_RUNTIMEEXCEPTION_INDEX].clazz);
  clazzes[JAVA_LANG_CHARACTER_INDEX].name = "java.lang.Character";
  GC_PUSH_STATIC_ROOT(clazzes[JAVA_LANG_CHARACTER_INDEX].clazz);
  GC_ASSIGN_NULL(clazzes[JAVA_LANG_CHARACTER_INDEX].clazz);
  clazzes[JAVA_LANG_CHARACTER_SUBSET_INDEX].name = "java.lang.Character.Subset";
  GC_PUSH_STATIC_ROOT(clazzes[JAVA_LANG_CHARACTER_SUBSET_INDEX].clazz);
  GC_ASSIGN_NULL(clazzes[JAVA_LANG_CHARACTER_SUBSET_INDEX].clazz);
  clazzes[JAVA_LANG_MATH_INDEX].name = "java.lang.Math";
  GC_PUSH_STATIC_ROOT(clazzes[JAVA_LANG_MATH_INDEX].clazz);
  GC_ASSIGN_NULL(clazzes[JAVA_LANG_MATH_INDEX].clazz);
  clazzes[JAVA_LANG_LONG_INDEX].name = "java.lang.Long";
  GC_PUSH_STATIC_ROOT(clazzes[JAVA_LANG_LONG_INDEX].clazz);
  GC_ASSIGN_NULL(clazzes[JAVA_LANG_LONG_INDEX].clazz);
  clazzes[JAVA_LANG_FLOAT_INDEX].name = "java.lang.Float";
  GC_PUSH_STATIC_ROOT(clazzes[JAVA_LANG_FLOAT_INDEX].clazz);
  GC_ASSIGN_NULL(clazzes[JAVA_LANG_FLOAT_INDEX].clazz);
  clazzes[JAVA_LANG_DOUBLE_INDEX].name = "java.lang.Double";
  GC_PUSH_STATIC_ROOT(clazzes[JAVA_LANG_DOUBLE_INDEX].clazz);
  GC_ASSIGN_NULL(clazzes[JAVA_LANG_DOUBLE_INDEX].clazz);
  clazzes[JAVA_LANG_STACKTRACEELEMENT_INDEX].name = "java.lang.StackTraceElement";
  GC_PUSH_STATIC_ROOT(clazzes[JAVA_LANG_STACKTRACEELEMENT_INDEX].clazz);
  GC_ASSIGN_NULL(clazzes[JAVA_LANG_STACKTRACEELEMENT_INDEX].clazz);
  clazzes[JAVA_LANG_ILLEGALARGUMENTEXCEPTION_INDEX].name = "java.lang.IllegalArgumentException";
  GC_PUSH_STATIC_ROOT(clazzes[JAVA_LANG_ILLEGALARGUMENTEXCEPTION_INDEX].clazz);
  GC_ASSIGN_NULL(clazzes[JAVA_LANG_ILLEGALARGUMENTEXCEPTION_INDEX].clazz);
  clazzes[JAVA_LANG_ILLEGALSTATEEXCEPTION_INDEX].name = "java.lang.IllegalStateException";
  GC_PUSH_STATIC_ROOT(clazzes[JAVA_LANG_ILLEGALSTATEEXCEPTION_INDEX].clazz);
  GC_ASSIGN_NULL(clazzes[JAVA_LANG_ILLEGALSTATEEXCEPTION_INDEX].clazz);
  clazzes[JAVA_LANG_ERRWRITER_INDEX].name = "java.lang.ErrWriter";
  GC_PUSH_STATIC_ROOT(clazzes[JAVA_LANG_ERRWRITER_INDEX].clazz);
  GC_ASSIGN_NULL(clazzes[JAVA_LANG_ERRWRITER_INDEX].clazz);
  clazzes[JAVA_LANG_NULLPOINTEREXCEPTION_INDEX].name = "java.lang.NullPointerException";
  GC_PUSH_STATIC_ROOT(clazzes[JAVA_LANG_NULLPOINTEREXCEPTION_INDEX].clazz);
  GC_ASSIGN_NULL(clazzes[JAVA_LANG_NULLPOINTEREXCEPTION_INDEX].clazz);
  clazzes[JAVA_LANG_PHONYREADER_INDEX].name = "java.lang.PhonyReader";
  GC_PUSH_STATIC_ROOT(clazzes[JAVA_LANG_PHONYREADER_INDEX].clazz);
  GC_ASSIGN_NULL(clazzes[JAVA_LANG_PHONYREADER_INDEX].clazz);
  clazzes[JAVA_IO_INTERRUPTEDIOEXCEPTION_INDEX].name = "java.io.InterruptedIOException";
  GC_PUSH_STATIC_ROOT(clazzes[JAVA_IO_INTERRUPTEDIOEXCEPTION_INDEX].clazz);
  GC_ASSIGN_NULL(clazzes[JAVA_IO_INTERRUPTEDIOEXCEPTION_INDEX].clazz);
  clazzes[JAVA_LANG_ARRAYINDEXOUTOFBOUNDSEXCEPTION_INDEX].name = "java.lang.ArrayIndexOutOfBoundsException";
  GC_PUSH_STATIC_ROOT(clazzes[JAVA_LANG_ARRAYINDEXOUTOFBOUNDSEXCEPTION_INDEX].clazz);
  GC_ASSIGN_NULL(clazzes[JAVA_LANG_ARRAYINDEXOUTOFBOUNDSEXCEPTION_INDEX].clazz);
  clazzes[JAVA_LANG_NUMBERFORMATEXCEPTION_INDEX].name = "java.lang.NumberFormatException";
  GC_PUSH_STATIC_ROOT(clazzes[JAVA_LANG_NUMBERFORMATEXCEPTION_INDEX].clazz);
  GC_ASSIGN_NULL(clazzes[JAVA_LANG_NUMBERFORMATEXCEPTION_INDEX].clazz);
  clazzes[JAVA_LANG_ERROR_INDEX].name = "java.lang.Error";
  GC_PUSH_STATIC_ROOT(clazzes[JAVA_LANG_ERROR_INDEX].clazz);
  GC_ASSIGN_NULL(clazzes[JAVA_LANG_ERROR_INDEX].clazz);
  clazzes[JAVA_NET_SOCKETADDRESS_INDEX].name = "java.net.SocketAddress";
  GC_PUSH_STATIC_ROOT(clazzes[JAVA_NET_SOCKETADDRESS_INDEX].clazz);
  GC_ASSIGN_NULL(clazzes[JAVA_NET_SOCKETADDRESS_INDEX].clazz);
  clazzes[TOCLIENT_T_INDEX].name = "ToClient_t";
  GC_PUSH_STATIC_ROOT(clazzes[TOCLIENT_T_INDEX].clazz);
  GC_ASSIGN_NULL(clazzes[TOCLIENT_T_INDEX].clazz);
  clazzes[JAVA_NET_UNKNOWNHOSTEXCEPTION_INDEX].name = "java.net.UnknownHostException";
  GC_PUSH_STATIC_ROOT(clazzes[JAVA_NET_UNKNOWNHOSTEXCEPTION_INDEX].clazz);
  GC_ASSIGN_NULL(clazzes[JAVA_NET_UNKNOWNHOSTEXCEPTION_INDEX].clazz);
  clazzes[JAVA_NET_INETSOCKETADDRESS_INDEX].name = "java.net.InetSocketAddress";
  GC_PUSH_STATIC_ROOT(clazzes[JAVA_NET_INETSOCKETADDRESS_INDEX].clazz);
  GC_ASSIGN_NULL(clazzes[JAVA_NET_INETSOCKETADDRESS_INDEX].clazz);
  clazzes[JAVA_NET_INETADDRESS_INDEX].name = "java.net.InetAddress";
  GC_PUSH_STATIC_ROOT(clazzes[JAVA_NET_INETADDRESS_INDEX].clazz);
  GC_ASSIGN_NULL(clazzes[JAVA_NET_INETADDRESS_INDEX].clazz);
  clazzes[JAVA_IO_SIMPLETCPINPUTSTREAM_INDEX].name = "java.io.SimpleTCPInputStream";
  GC_PUSH_STATIC_ROOT(clazzes[JAVA_IO_SIMPLETCPINPUTSTREAM_INDEX].clazz);
  GC_ASSIGN_NULL(clazzes[JAVA_IO_SIMPLETCPINPUTSTREAM_INDEX].clazz);
  clazzes[JAVA_IO_SIMPLETCPOUTPUTSTREAM_INDEX].name = "java.io.SimpleTCPOutputStream";
  GC_PUSH_STATIC_ROOT(clazzes[JAVA_IO_SIMPLETCPOUTPUTSTREAM_INDEX].clazz);
  GC_ASSIGN_NULL(clazzes[JAVA_IO_SIMPLETCPOUTPUTSTREAM_INDEX].clazz);
#endif
  // Push a static null reference, declared in javatypes.h
  GC__IMPL_PUSH_STATIC_ROOT(nullRef);
  Fields_Init(__eFlag__);
}
