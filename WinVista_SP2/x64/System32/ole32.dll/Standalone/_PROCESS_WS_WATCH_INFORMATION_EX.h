typedef struct _PROCESS_WS_WATCH_INFORMATION
{
  /* 0x0000 */ void* FaultingPc;
  /* 0x0008 */ void* FaultingVa;
} PROCESS_WS_WATCH_INFORMATION, *PPROCESS_WS_WATCH_INFORMATION; /* size: 0x0010 */

typedef struct _PROCESS_WS_WATCH_INFORMATION_EX
{
  /* 0x0000 */ struct _PROCESS_WS_WATCH_INFORMATION BasicInfo;
  /* 0x0010 */ unsigned __int64 FaultingThreadId;
  /* 0x0018 */ unsigned __int64 Flags;
} PROCESS_WS_WATCH_INFORMATION_EX, *PPROCESS_WS_WATCH_INFORMATION_EX; /* size: 0x0020 */

