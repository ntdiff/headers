typedef struct _FLOATING_SAVE_AREA
{
  /* 0x0000 */ unsigned long ControlWord;
  /* 0x0004 */ unsigned long StatusWord;
  /* 0x0008 */ unsigned long TagWord;
  /* 0x000c */ unsigned long ErrorOffset;
  /* 0x0010 */ unsigned long ErrorSelector;
  /* 0x0014 */ unsigned long DataOffset;
  /* 0x0018 */ unsigned long DataSelector;
  /* 0x001c */ unsigned char RegisterArea[80];
  /* 0x006c */ unsigned long Spare0;
} FLOATING_SAVE_AREA, *PFLOATING_SAVE_AREA; /* size: 0x0070 */

typedef struct _CONTEXT
{
  /* 0x0000 */ unsigned long ContextFlags;
  /* 0x0004 */ unsigned long Dr0;
  /* 0x0008 */ unsigned long Dr1;
  /* 0x000c */ unsigned long Dr2;
  /* 0x0010 */ unsigned long Dr3;
  /* 0x0014 */ unsigned long Dr6;
  /* 0x0018 */ unsigned long Dr7;
  /* 0x001c */ struct _FLOATING_SAVE_AREA FloatSave;
  /* 0x008c */ unsigned long SegGs;
  /* 0x0090 */ unsigned long SegFs;
  /* 0x0094 */ unsigned long SegEs;
  /* 0x0098 */ unsigned long SegDs;
  /* 0x009c */ unsigned long Edi;
  /* 0x00a0 */ unsigned long Esi;
  /* 0x00a4 */ unsigned long Ebx;
  /* 0x00a8 */ unsigned long Edx;
  /* 0x00ac */ unsigned long Ecx;
  /* 0x00b0 */ unsigned long Eax;
  /* 0x00b4 */ unsigned long Ebp;
  /* 0x00b8 */ unsigned long Eip;
  /* 0x00bc */ unsigned long SegCs;
  /* 0x00c0 */ unsigned long EFlags;
  /* 0x00c4 */ unsigned long Esp;
  /* 0x00c8 */ unsigned long SegSs;
  /* 0x00cc */ unsigned char ExtendedRegisters[512];
} CONTEXT, *PCONTEXT; /* size: 0x02cc */

typedef struct _MINIDUMP_THREAD_CALLBACK
{
  /* 0x0000 */ unsigned long ThreadId;
  /* 0x0004 */ void* ThreadHandle;
  /* 0x0008 */ struct _CONTEXT Context;
  /* 0x02d4 */ unsigned long SizeOfContext;
  /* 0x02d8 */ unsigned __int64 StackBase;
  /* 0x02e0 */ unsigned __int64 StackEnd;
} MINIDUMP_THREAD_CALLBACK, *PMINIDUMP_THREAD_CALLBACK; /* size: 0x02e8 */

typedef struct _MINIDUMP_THREAD_EX_CALLBACK
{
  /* 0x0000 */ unsigned long ThreadId;
  /* 0x0004 */ void* ThreadHandle;
  /* 0x0008 */ struct _CONTEXT Context;
  /* 0x02d4 */ unsigned long SizeOfContext;
  /* 0x02d8 */ unsigned __int64 StackBase;
  /* 0x02e0 */ unsigned __int64 StackEnd;
  /* 0x02e8 */ unsigned __int64 BackingStoreBase;
  /* 0x02f0 */ unsigned __int64 BackingStoreEnd;
} MINIDUMP_THREAD_EX_CALLBACK, *PMINIDUMP_THREAD_EX_CALLBACK; /* size: 0x02f8 */

struct tagVS_FIXEDFILEINFO
{
  /* 0x0000 */ unsigned long dwSignature;
  /* 0x0004 */ unsigned long dwStrucVersion;
  /* 0x0008 */ unsigned long dwFileVersionMS;
  /* 0x000c */ unsigned long dwFileVersionLS;
  /* 0x0010 */ unsigned long dwProductVersionMS;
  /* 0x0014 */ unsigned long dwProductVersionLS;
  /* 0x0018 */ unsigned long dwFileFlagsMask;
  /* 0x001c */ unsigned long dwFileFlags;
  /* 0x0020 */ unsigned long dwFileOS;
  /* 0x0024 */ unsigned long dwFileType;
  /* 0x0028 */ unsigned long dwFileSubtype;
  /* 0x002c */ unsigned long dwFileDateMS;
  /* 0x0030 */ unsigned long dwFileDateLS;
}; /* size: 0x0034 */

typedef struct _MINIDUMP_MODULE_CALLBACK
{
  /* 0x0000 */ wchar_t* FullPath;
  /* 0x0004 */ unsigned __int64 BaseOfImage;
  /* 0x000c */ unsigned long SizeOfImage;
  /* 0x0010 */ unsigned long CheckSum;
  /* 0x0014 */ unsigned long TimeDateStamp;
  /* 0x0018 */ struct tagVS_FIXEDFILEINFO VersionInfo;
  /* 0x004c */ void* CvRecord;
  /* 0x0050 */ unsigned long SizeOfCvRecord;
  /* 0x0054 */ void* MiscRecord;
  /* 0x0058 */ unsigned long SizeOfMiscRecord;
} MINIDUMP_MODULE_CALLBACK, *PMINIDUMP_MODULE_CALLBACK; /* size: 0x005c */

typedef struct _MINIDUMP_INCLUDE_THREAD_CALLBACK
{
  /* 0x0000 */ unsigned long ThreadId;
} MINIDUMP_INCLUDE_THREAD_CALLBACK, *PMINIDUMP_INCLUDE_THREAD_CALLBACK; /* size: 0x0004 */

typedef struct _MINIDUMP_INCLUDE_MODULE_CALLBACK
{
  /* 0x0000 */ unsigned __int64 BaseOfImage;
} MINIDUMP_INCLUDE_MODULE_CALLBACK, *PMINIDUMP_INCLUDE_MODULE_CALLBACK; /* size: 0x0008 */

typedef struct _MINIDUMP_IO_CALLBACK
{
  /* 0x0000 */ void* Handle;
  /* 0x0004 */ unsigned __int64 Offset;
  /* 0x000c */ void* Buffer;
  /* 0x0010 */ unsigned long BufferBytes;
} MINIDUMP_IO_CALLBACK, *PMINIDUMP_IO_CALLBACK; /* size: 0x0014 */

typedef struct _MINIDUMP_READ_MEMORY_FAILURE_CALLBACK
{
  /* 0x0000 */ unsigned __int64 Offset;
  /* 0x0008 */ unsigned long Bytes;
  /* 0x000c */ HRESULT FailureStatus;
} MINIDUMP_READ_MEMORY_FAILURE_CALLBACK, *PMINIDUMP_READ_MEMORY_FAILURE_CALLBACK; /* size: 0x0010 */

typedef struct _MINIDUMP_VM_QUERY_CALLBACK
{
  /* 0x0000 */ unsigned __int64 Offset;
} MINIDUMP_VM_QUERY_CALLBACK, *PMINIDUMP_VM_QUERY_CALLBACK; /* size: 0x0008 */

typedef struct _MINIDUMP_VM_PRE_READ_CALLBACK
{
  /* 0x0000 */ unsigned __int64 Offset;
  /* 0x0008 */ void* Buffer;
  /* 0x000c */ unsigned long Size;
} MINIDUMP_VM_PRE_READ_CALLBACK, *PMINIDUMP_VM_PRE_READ_CALLBACK; /* size: 0x0010 */

typedef struct _MINIDUMP_VM_POST_READ_CALLBACK
{
  /* 0x0000 */ unsigned __int64 Offset;
  /* 0x0008 */ void* Buffer;
  /* 0x000c */ unsigned long Size;
  /* 0x0010 */ unsigned long Completed;
  /* 0x0014 */ HRESULT Status;
} MINIDUMP_VM_POST_READ_CALLBACK, *PMINIDUMP_VM_POST_READ_CALLBACK; /* size: 0x0018 */

typedef struct _MINIDUMP_CALLBACK_INPUT
{
  /* 0x0000 */ unsigned long ProcessId;
  /* 0x0004 */ void* ProcessHandle;
  /* 0x0008 */ unsigned long CallbackType;
  union
  {
    /* 0x000c */ HRESULT Status;
    /* 0x000c */ struct _MINIDUMP_THREAD_CALLBACK Thread;
    /* 0x000c */ struct _MINIDUMP_THREAD_EX_CALLBACK ThreadEx;
    /* 0x000c */ struct _MINIDUMP_MODULE_CALLBACK Module;
    /* 0x000c */ struct _MINIDUMP_INCLUDE_THREAD_CALLBACK IncludeThread;
    /* 0x000c */ struct _MINIDUMP_INCLUDE_MODULE_CALLBACK IncludeModule;
    /* 0x000c */ struct _MINIDUMP_IO_CALLBACK Io;
    /* 0x000c */ struct _MINIDUMP_READ_MEMORY_FAILURE_CALLBACK ReadMemoryFailure;
    /* 0x000c */ unsigned long SecondaryFlags;
    /* 0x000c */ struct _MINIDUMP_VM_QUERY_CALLBACK VmQuery;
    /* 0x000c */ struct _MINIDUMP_VM_PRE_READ_CALLBACK VmPreRead;
    struct
    {
      /* 0x000c */ struct _MINIDUMP_VM_POST_READ_CALLBACK VmPostRead;
      /* 0x0024 */ long __PADDING__[184];
    }; /* size: 0x02f8 */
  }; /* size: 0x02f8 */
} MINIDUMP_CALLBACK_INPUT, *PMINIDUMP_CALLBACK_INPUT; /* size: 0x0304 */

