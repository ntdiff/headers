typedef union _LARGE_INTEGER
{
  union
  {
    struct
    {
      /* 0x0000 */ unsigned long LowPart;
      /* 0x0004 */ long HighPart;
    }; /* size: 0x0008 */
    struct
    {
      /* 0x0000 */ unsigned long LowPart;
      /* 0x0004 */ long HighPart;
    } /* size: 0x0008 */ u;
    /* 0x0000 */ __int64 QuadPart;
  }; /* size: 0x0008 */
} LARGE_INTEGER, *PLARGE_INTEGER; /* size: 0x0008 */

typedef struct _CLIENT_ID
{
  /* 0x0000 */ void* UniqueProcess;
  /* 0x0004 */ void* UniqueThread;
} CLIENT_ID, *PCLIENT_ID; /* size: 0x0008 */

typedef struct _SYSTEM_THREAD_INFORMATION
{
  /* 0x0000 */ union _LARGE_INTEGER KernelTime;
  /* 0x0008 */ union _LARGE_INTEGER UserTime;
  /* 0x0010 */ union _LARGE_INTEGER CreateTime;
  /* 0x0018 */ unsigned long WaitTime;
  /* 0x001c */ void* StartAddress;
  /* 0x0020 */ struct _CLIENT_ID ClientId;
  /* 0x0028 */ long Priority;
  /* 0x002c */ long BasePriority;
  /* 0x0030 */ unsigned long ContextSwitches;
  /* 0x0034 */ unsigned long ThreadState;
  /* 0x0038 */ unsigned long WaitReason;
  /* 0x003c */ long __PADDING__[1];
} SYSTEM_THREAD_INFORMATION, *PSYSTEM_THREAD_INFORMATION; /* size: 0x0040 */

typedef struct _SYSTEM_EXTENDED_THREAD_INFORMATION
{
  /* 0x0000 */ struct _SYSTEM_THREAD_INFORMATION ThreadInfo;
  /* 0x0040 */ void* StackBase;
  /* 0x0044 */ void* StackLimit;
  /* 0x0048 */ void* Win32StartAddress;
  /* 0x004c */ void* TebBase;
  /* 0x0050 */ unsigned long Reserved2;
  /* 0x0054 */ unsigned long Reserved3;
  /* 0x0058 */ unsigned long Reserved4;
  /* 0x005c */ long __PADDING__[1];
} SYSTEM_EXTENDED_THREAD_INFORMATION, *PSYSTEM_EXTENDED_THREAD_INFORMATION; /* size: 0x0060 */

