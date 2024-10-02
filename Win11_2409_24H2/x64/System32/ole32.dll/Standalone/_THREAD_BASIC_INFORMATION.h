typedef struct _CLIENT_ID
{
  /* 0x0000 */ void* UniqueProcess;
  /* 0x0008 */ void* UniqueThread;
} CLIENT_ID, *PCLIENT_ID; /* size: 0x0010 */

typedef struct _THREAD_BASIC_INFORMATION
{
  /* 0x0000 */ long ExitStatus;
  /* 0x0008 */ struct _TEB* TebBaseAddress;
  /* 0x0010 */ struct _CLIENT_ID ClientId;
  /* 0x0020 */ unsigned __int64 AffinityMask;
  /* 0x0028 */ long Priority;
  /* 0x002c */ long BasePriority;
} THREAD_BASIC_INFORMATION, *PTHREAD_BASIC_INFORMATION; /* size: 0x0030 */

