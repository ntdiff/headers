typedef struct _M128A
{
  /* 0x0000 */ unsigned __int64 Low;
  /* 0x0008 */ __int64 High;
} M128A, *PM128A; /* size: 0x0010 */

typedef struct _XMM_SAVE_AREA32
{
  /* 0x0000 */ unsigned short ControlWord;
  /* 0x0002 */ unsigned short StatusWord;
  /* 0x0004 */ unsigned char TagWord;
  /* 0x0005 */ unsigned char Reserved1;
  /* 0x0006 */ unsigned short ErrorOpcode;
  /* 0x0008 */ unsigned long ErrorOffset;
  /* 0x000c */ unsigned short ErrorSelector;
  /* 0x000e */ unsigned short Reserved2;
  /* 0x0010 */ unsigned long DataOffset;
  /* 0x0014 */ unsigned short DataSelector;
  /* 0x0016 */ unsigned short Reserved3;
  /* 0x0018 */ unsigned long MxCsr;
  /* 0x001c */ unsigned long MxCsr_Mask;
  /* 0x0020 */ struct _M128A FloatRegisters[8];
  /* 0x00a0 */ struct _M128A XmmRegisters[16];
  /* 0x01a0 */ unsigned char Reserved4[96];
} XMM_SAVE_AREA32, *PXMM_SAVE_AREA32; /* size: 0x0200 */

typedef struct _CONTEXT
{
  /* 0x0000 */ unsigned __int64 P1Home;
  /* 0x0008 */ unsigned __int64 P2Home;
  /* 0x0010 */ unsigned __int64 P3Home;
  /* 0x0018 */ unsigned __int64 P4Home;
  /* 0x0020 */ unsigned __int64 P5Home;
  /* 0x0028 */ unsigned __int64 P6Home;
  /* 0x0030 */ unsigned long ContextFlags;
  /* 0x0034 */ unsigned long MxCsr;
  /* 0x0038 */ unsigned short SegCs;
  /* 0x003a */ unsigned short SegDs;
  /* 0x003c */ unsigned short SegEs;
  /* 0x003e */ unsigned short SegFs;
  /* 0x0040 */ unsigned short SegGs;
  /* 0x0042 */ unsigned short SegSs;
  /* 0x0044 */ unsigned long EFlags;
  /* 0x0048 */ unsigned __int64 Dr0;
  /* 0x0050 */ unsigned __int64 Dr1;
  /* 0x0058 */ unsigned __int64 Dr2;
  /* 0x0060 */ unsigned __int64 Dr3;
  /* 0x0068 */ unsigned __int64 Dr6;
  /* 0x0070 */ unsigned __int64 Dr7;
  /* 0x0078 */ unsigned __int64 Rax;
  /* 0x0080 */ unsigned __int64 Rcx;
  /* 0x0088 */ unsigned __int64 Rdx;
  /* 0x0090 */ unsigned __int64 Rbx;
  /* 0x0098 */ unsigned __int64 Rsp;
  /* 0x00a0 */ unsigned __int64 Rbp;
  /* 0x00a8 */ unsigned __int64 Rsi;
  /* 0x00b0 */ unsigned __int64 Rdi;
  /* 0x00b8 */ unsigned __int64 R8;
  /* 0x00c0 */ unsigned __int64 R9;
  /* 0x00c8 */ unsigned __int64 R10;
  /* 0x00d0 */ unsigned __int64 R11;
  /* 0x00d8 */ unsigned __int64 R12;
  /* 0x00e0 */ unsigned __int64 R13;
  /* 0x00e8 */ unsigned __int64 R14;
  /* 0x00f0 */ unsigned __int64 R15;
  /* 0x00f8 */ unsigned __int64 Rip;
  union
  {
    /* 0x0100 */ struct _XMM_SAVE_AREA32 FltSave;
    struct
    {
      /* 0x0100 */ struct _M128A Header[2];
      /* 0x0120 */ struct _M128A Legacy[8];
      /* 0x01a0 */ struct _M128A Xmm0;
      /* 0x01b0 */ struct _M128A Xmm1;
      /* 0x01c0 */ struct _M128A Xmm2;
      /* 0x01d0 */ struct _M128A Xmm3;
      /* 0x01e0 */ struct _M128A Xmm4;
      /* 0x01f0 */ struct _M128A Xmm5;
      /* 0x0200 */ struct _M128A Xmm6;
      /* 0x0210 */ struct _M128A Xmm7;
      /* 0x0220 */ struct _M128A Xmm8;
      /* 0x0230 */ struct _M128A Xmm9;
      /* 0x0240 */ struct _M128A Xmm10;
      /* 0x0250 */ struct _M128A Xmm11;
      /* 0x0260 */ struct _M128A Xmm12;
      /* 0x0270 */ struct _M128A Xmm13;
      /* 0x0280 */ struct _M128A Xmm14;
      /* 0x0290 */ struct _M128A Xmm15;
    }; /* size: 0x01a0 */
  }; /* size: 0x0200 */
  /* 0x0300 */ struct _M128A VectorRegister[26];
  /* 0x04a0 */ unsigned __int64 VectorControl;
  /* 0x04a8 */ unsigned __int64 DebugControl;
  /* 0x04b0 */ unsigned __int64 LastBranchToRip;
  /* 0x04b8 */ unsigned __int64 LastBranchFromRip;
  /* 0x04c0 */ unsigned __int64 LastExceptionToRip;
  /* 0x04c8 */ unsigned __int64 LastExceptionFromRip;
} CONTEXT, *PCONTEXT; /* size: 0x04d0 */

typedef struct _MINIDUMP_THREAD_CALLBACK
{
  /* 0x0000 */ unsigned long ThreadId;
  /* 0x0004 */ void* ThreadHandle;
  /* 0x0010 */ struct _CONTEXT Context;
  /* 0x04e0 */ unsigned long SizeOfContext;
  /* 0x04e4 */ unsigned __int64 StackBase;
  /* 0x04ec */ unsigned __int64 StackEnd;
  /* 0x04f4 */ long __PADDING__[3];
} MINIDUMP_THREAD_CALLBACK, *PMINIDUMP_THREAD_CALLBACK; /* size: 0x0500 */

typedef struct _MINIDUMP_THREAD_EX_CALLBACK
{
  /* 0x0000 */ unsigned long ThreadId;
  /* 0x0004 */ void* ThreadHandle;
  /* 0x0010 */ struct _CONTEXT Context;
  /* 0x04e0 */ unsigned long SizeOfContext;
  /* 0x04e4 */ unsigned __int64 StackBase;
  /* 0x04ec */ unsigned __int64 StackEnd;
  /* 0x04f4 */ unsigned __int64 BackingStoreBase;
  /* 0x04fc */ unsigned __int64 BackingStoreEnd;
  /* 0x0504 */ long __PADDING__[3];
} MINIDUMP_THREAD_EX_CALLBACK, *PMINIDUMP_THREAD_EX_CALLBACK; /* size: 0x0510 */

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
    struct
    {
      /* 0x0010 */ unsigned long SecondaryFlags;
      /* 0x0014 */ long __PADDING__[323];
    }; /* size: 0x0510 */
  }; /* size: 0x0510 */
} MINIDUMP_CALLBACK_INPUT, *PMINIDUMP_CALLBACK_INPUT; /* size: 0x0520 */

