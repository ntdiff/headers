typedef struct _RTL_UMS_SCHEDULER_STARTUP_INFO
{
  /* 0x0000 */ unsigned long UmsVersion;
  /* 0x0004 */ struct _RTL_UMS_COMPLETION_LIST* CompletionList;
  /* 0x0008 */ void* SchedulerProc /* function */;
  /* 0x000c */ void* SchedulerParam;
} RTL_UMS_SCHEDULER_STARTUP_INFO, *PRTL_UMS_SCHEDULER_STARTUP_INFO; /* size: 0x0010 */

