typedef struct _PROCESS_WS_WATCH_INFORMATION
{
  /* 0x0000 */ void* FaultingPc;
  /* 0x0004 */ void* FaultingVa;
} PROCESS_WS_WATCH_INFORMATION, *PPROCESS_WS_WATCH_INFORMATION; /* size: 0x0008 */

typedef struct _PAGEFAULT_HISTORY
{
  /* 0x0000 */ unsigned long CurrentIndex;
  /* 0x0004 */ unsigned long MaxIndex;
  /* 0x0008 */ unsigned long SpinLock;
  /* 0x000c */ void* Reserved;
  /* 0x0010 */ struct _PROCESS_WS_WATCH_INFORMATION WatchInfo[1];
} PAGEFAULT_HISTORY, *PPAGEFAULT_HISTORY; /* size: 0x0018 */

