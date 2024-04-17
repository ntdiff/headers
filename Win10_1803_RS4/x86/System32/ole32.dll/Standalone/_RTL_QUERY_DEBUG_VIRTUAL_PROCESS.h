typedef struct _RTL_QUERY_DEBUG_VIRTUAL_PROCESS
{
  /* 0x0000 */ void* Context;
  /* 0x0004 */ void* ReadMemoryRoutine /* function */;
  /* 0x0008 */ void* QueryInformationRoutine /* function */;
} RTL_QUERY_DEBUG_VIRTUAL_PROCESS, *PRTL_QUERY_DEBUG_VIRTUAL_PROCESS; /* size: 0x000c */

