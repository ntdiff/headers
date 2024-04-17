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
  /* 0x0008 */ void* UniqueThread;
} CLIENT_ID, *PCLIENT_ID; /* size: 0x0010 */

typedef struct _SYSTEM_THREAD_INFORMATION
{
  /* 0x0000 */ union _LARGE_INTEGER KernelTime;
  /* 0x0008 */ union _LARGE_INTEGER UserTime;
  /* 0x0010 */ union _LARGE_INTEGER CreateTime;
  /* 0x0018 */ unsigned long WaitTime;
  /* 0x0020 */ void* StartAddress;
  /* 0x0028 */ struct _CLIENT_ID ClientId;
  /* 0x0038 */ long Priority;
  /* 0x003c */ long BasePriority;
  /* 0x0040 */ unsigned long ContextSwitches;
  /* 0x0044 */ unsigned long ThreadState;
  /* 0x0048 */ unsigned long WaitReason;
  /* 0x004c */ long __PADDING__[1];
} SYSTEM_THREAD_INFORMATION, *PSYSTEM_THREAD_INFORMATION; /* size: 0x0050 */

typedef struct _SYSTEM_EXTENDED_THREAD_INFORMATION
{
  /* 0x0000 */ struct _SYSTEM_THREAD_INFORMATION ThreadInfo;
  /* 0x0050 */ void* StackBase;
  /* 0x0058 */ void* StackLimit;
  /* 0x0060 */ void* Win32StartAddress;
  /* 0x0068 */ void* TebBase;
  /* 0x0070 */ unsigned __int64 Reserved2;
  /* 0x0078 */ unsigned __int64 Reserved3;
  /* 0x0080 */ unsigned __int64 Reserved4;
} SYSTEM_EXTENDED_THREAD_INFORMATION, *PSYSTEM_EXTENDED_THREAD_INFORMATION; /* size: 0x0088 */

