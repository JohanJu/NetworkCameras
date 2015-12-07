#ifndef __CLASS_MONITOR_HEADER
#define __CLASS_MONITOR_HEADER

struct Monitor_ClassStruct {
  struct java_lang_Object_ClassStruct *super;
  struct Monitor_MethodTblStruct *methodTbl;
  struct ifaz_TblStruct *ifazTbl;
  int classIndex;
  int iface_size;
  int iface_array[0];
};

typedef GC_STRUCT_BEGIN(Monitor_ClassStatic)
  /* static fields go here, from this class and its ancestors */
  volatile GC_STRUCT_VAR(JByte,_Monitor_AUTO);
  volatile GC_STRUCT_VAR(JByte,_Monitor_MOVIE);
  volatile GC_STRUCT_VAR(JByte,_Monitor_IDLE);
GC_STRUCT_END(Monitor_ClassStatic) Monitor_ClassStatic;

typedef GC_STRUCT_BEGIN(Monitor)
  GC_STRUCT_VAR(struct Monitor_ClassStruct *,class);
  volatile GC_STRUCT_VAR(JBoolean,_java_lang_Object_interruptedFlag);
  volatile GC_STRUCT_REF(JByteArray,_Monitor_jpeg);
  volatile GC_STRUCT_VAR(JByte,_Monitor_mode);
  volatile GC_STRUCT_VAR(JLong,_Monitor_now);
GC_STRUCT_END(Monitor) Monitor;

struct Monitor_MethodTblStruct {
  /* Method pointers, static and non-static */
  void (*finalize)(void **__eFlag__, GC_PARAM(java_lang_Object,this));
  JInt (*hashCode)(void **__eFlag__, GC_PARAM(java_lang_Object,this));
  void (*notify)(void **__eFlag__, GC_PARAM(java_lang_Object,this));
  void (*notifyAll)(void **__eFlag__, GC_PARAM(java_lang_Object,this));
  void (*wait_long_int)(void **__eFlag__, GC_PARAM(java_lang_Object,this),JLong timeout,JInt nanos);
  JBoolean (*equals_java_lang_Object)(void **__eFlag__, GC_PARAM(java_lang_Object,this),GC_PARAM(java_lang_Object,obj));
  GC___REF(struct java_lang_String) (*toString)(void **__eFlag__, GC_PARAM(java_lang_Object,this));
  void (*wait)(void **__eFlag__, GC_PARAM(java_lang_Object,this));
  void (*wait_long)(void **__eFlag__, GC_PARAM(java_lang_Object,this),JLong timeout);
  GC___REF(struct java_lang_Object) (*clone)(void **__eFlag__, GC_PARAM(java_lang_Object,this));
  GC___REF(struct JByteArray) (*getJpeg_long)(void **__eFlag__, GC_PARAM(Monitor,this),JLong old);
  void (*setJpeg_byteA)(void **__eFlag__, GC_PARAM(Monitor,this),GC_PARAM(JByteArray,newJpeg));
  JByte (*getMode)(void **__eFlag__, GC_PARAM(Monitor,this));
  void (*setMode_byte)(void **__eFlag__, GC_PARAM(Monitor,this),JByte newMode);
  void (*testSetMode)(void **__eFlag__, GC_PARAM(Monitor,this));
  JLong (*timeMillisFromArray_byteA)(GC_PARAM(JByteArray,array));
};
extern struct Monitor_MethodTblStruct Monitor_MethodTbl ;

#endif
