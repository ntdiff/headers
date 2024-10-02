typedef union _ARM64_NT_NEON128
{
  union
  {
    struct
    {
      /* 0x0000 */ unsigned __int64 Low;
      /* 0x0008 */ __int64 High;
    }; /* size: 0x0010 */
    /* 0x0000 */ double D[2];
    /* 0x0000 */ float S[4];
    /* 0x0000 */ unsigned short H[8];
    /* 0x0000 */ unsigned char B[16];
  }; /* size: 0x0010 */
} ARM64_NT_NEON128, *PARM64_NT_NEON128; /* size: 0x0010 */

typedef struct _CONTEXT
{
  /* 0x0000 */ unsigned long ContextFlags;
  /* 0x0004 */ unsigned long Cpsr;
  union
  {
    struct
    {
      /* 0x0008 */ unsigned __int64 X0;
      /* 0x0010 */ unsigned __int64 X1;
      /* 0x0018 */ unsigned __int64 X2;
      /* 0x0020 */ unsigned __int64 X3;
      /* 0x0028 */ unsigned __int64 X4;
      /* 0x0030 */ unsigned __int64 X5;
      /* 0x0038 */ unsigned __int64 X6;
      /* 0x0040 */ unsigned __int64 X7;
      /* 0x0048 */ unsigned __int64 X8;
      /* 0x0050 */ unsigned __int64 X9;
      /* 0x0058 */ unsigned __int64 X10;
      /* 0x0060 */ unsigned __int64 X11;
      /* 0x0068 */ unsigned __int64 X12;
      /* 0x0070 */ unsigned __int64 X13;
      /* 0x0078 */ unsigned __int64 X14;
      /* 0x0080 */ unsigned __int64 X15;
      /* 0x0088 */ unsigned __int64 X16;
      /* 0x0090 */ unsigned __int64 X17;
      /* 0x0098 */ unsigned __int64 X18;
      /* 0x00a0 */ unsigned __int64 X19;
      /* 0x00a8 */ unsigned __int64 X20;
      /* 0x00b0 */ unsigned __int64 X21;
      /* 0x00b8 */ unsigned __int64 X22;
      /* 0x00c0 */ unsigned __int64 X23;
      /* 0x00c8 */ unsigned __int64 X24;
      /* 0x00d0 */ unsigned __int64 X25;
      /* 0x00d8 */ unsigned __int64 X26;
      /* 0x00e0 */ unsigned __int64 X27;
      /* 0x00e8 */ unsigned __int64 X28;
      /* 0x00f0 */ unsigned __int64 Fp;
      /* 0x00f8 */ unsigned __int64 Lr;
    }; /* size: 0x00f8 */
    /* 0x0008 */ unsigned __int64 X[31];
  }; /* size: 0x00f8 */
  /* 0x0100 */ unsigned __int64 Sp;
  /* 0x0108 */ unsigned __int64 Pc;
  /* 0x0110 */ union _ARM64_NT_NEON128 V[32];
  /* 0x0310 */ unsigned long Fpcr;
  /* 0x0314 */ unsigned long Fpsr;
  /* 0x0318 */ unsigned long Bcr[8];
  /* 0x0338 */ unsigned __int64 Bvr[8];
  /* 0x0378 */ unsigned long Wcr[2];
  /* 0x0380 */ unsigned __int64 Wvr[2];
} CONTEXT, *PCONTEXT; /* size: 0x0390 */

typedef struct _MINIDUMP_THREAD_CALLBACK
{
  /* 0x0000 */ unsigned long ThreadId;
  /* 0x0004 */ void* ThreadHandle;
  /* 0x000c */ unsigned long Pad;
  /* 0x0010 */ struct _CONTEXT Context;
  /* 0x03a0 */ unsigned long SizeOfContext;
  /* 0x03a4 */ unsigned __int64 StackBase;
  /* 0x03ac */ unsigned __int64 StackEnd;
  /* 0x03b4 */ long __PADDING__[3];
} MINIDUMP_THREAD_CALLBACK, *PMINIDUMP_THREAD_CALLBACK; /* size: 0x03c0 */

typedef struct _MINIDUMP_THREAD_EX_CALLBACK
{
  /* 0x0000 */ unsigned long ThreadId;
  /* 0x0004 */ void* ThreadHandle;
  /* 0x000c */ unsigned long Pad;
  /* 0x0010 */ struct _CONTEXT Context;
  /* 0x03a0 */ unsigned long SizeOfContext;
  /* 0x03a4 */ unsigned __int64 StackBase;
  /* 0x03ac */ unsigned __int64 StackEnd;
  /* 0x03b4 */ unsigned __int64 BackingStoreBase;
  /* 0x03bc */ unsigned __int64 BackingStoreEnd;
  /* 0x03c4 */ long __PADDING__[3];
} MINIDUMP_THREAD_EX_CALLBACK, *PMINIDUMP_THREAD_EX_CALLBACK; /* size: 0x03d0 */

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
  /* 0x0008 */ unsigned __int64 BaseOfImage;
  /* 0x0010 */ unsigned long SizeOfImage;
  /* 0x0014 */ unsigned long CheckSum;
  /* 0x0018 */ unsigned long TimeDateStamp;
  /* 0x001c */ struct tagVS_FIXEDFILEINFO VersionInfo;
  /* 0x0050 */ void* CvRecord;
  /* 0x0058 */ unsigned long SizeOfCvRecord;
  /* 0x005c */ void* MiscRecord;
  /* 0x0064 */ unsigned long SizeOfMiscRecord;
} MINIDUMP_MODULE_CALLBACK, *PMINIDUMP_MODULE_CALLBACK; /* size: 0x0068 */

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
  /* 0x0008 */ unsigned __int64 Offset;
  /* 0x0010 */ void* Buffer;
  /* 0x0018 */ unsigned long BufferBytes;
} MINIDUMP_IO_CALLBACK, *PMINIDUMP_IO_CALLBACK; /* size: 0x001c */

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
  /* 0x0010 */ unsigned long Size;
} MINIDUMP_VM_PRE_READ_CALLBACK, *PMINIDUMP_VM_PRE_READ_CALLBACK; /* size: 0x0014 */

typedef struct _MINIDUMP_VM_POST_READ_CALLBACK
{
  /* 0x0000 */ unsigned __int64 Offset;
  /* 0x0008 */ void* Buffer;
  /* 0x0010 */ unsigned long Size;
  /* 0x0014 */ unsigned long Completed;
  /* 0x0018 */ HRESULT Status;
} MINIDUMP_VM_POST_READ_CALLBACK, *PMINIDUMP_VM_POST_READ_CALLBACK; /* size: 0x001c */

typedef struct _MINIDUMP_CALLBACK_INPUT
{
  /* 0x0000 */ unsigned long ProcessId;
  /* 0x0004 */ void* ProcessHandle;
  /* 0x000c */ unsigned long CallbackType;
  union
  {
    /* 0x0010 */ HRESULT Status;
    /* 0x0010 */ struct _MINIDUMP_THREAD_CALLBACK Thread;
    /* 0x0010 */ struct _MINIDUMP_THREAD_EX_CALLBACK ThreadEx;
    /* 0x0010 */ struct _MINIDUMP_MODULE_CALLBACK Module;
    /* 0x0010 */ struct _MINIDUMP_INCLUDE_THREAD_CALLBACK IncludeThread;
    /* 0x0010 */ struct _MINIDUMP_INCLUDE_MODULE_CALLBACK IncludeModule;
    /* 0x0010 */ struct _MINIDUMP_IO_CALLBACK Io;
    /* 0x0010 */ struct _MINIDUMP_READ_MEMORY_FAILURE_CALLBACK ReadMemoryFailure;
    /* 0x0010 */ unsigned long SecondaryFlags;
    /* 0x0010 */ struct _MINIDUMP_VM_QUERY_CALLBACK VmQuery;
    /* 0x0010 */ struct _MINIDUMP_VM_PRE_READ_CALLBACK VmPreRead;
    struct
    {
      /* 0x0010 */ struct _MINIDUMP_VM_POST_READ_CALLBACK VmPostRead;
      /* 0x002c */ long __PADDING__[237];
    }; /* size: 0x03d0 */
  }; /* size: 0x03d0 */
} MINIDUMP_CALLBACK_INPUT, *PMINIDUMP_CALLBACK_INPUT; /* size: 0x03e0 */

