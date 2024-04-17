typedef struct _UMS_SCHEDULER_STARTUP_INFO
{
  /* 0x0000 */ unsigned long UmsVersion;
  /* 0x0008 */ void* CompletionList;
  /* 0x0010 */ void* SchedulerProc /* function */;
  /* 0x0018 */ void* SchedulerParam;
} UMS_SCHEDULER_STARTUP_INFO, *PUMS_SCHEDULER_STARTUP_INFO; /* size: 0x0020 */

