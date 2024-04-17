typedef struct _DPC_TEST_WATCHDOG_CONFIGURATION
{
  /* 0x0000 */ unsigned long DpcProfilingBufferSize;
  /* 0x0004 */ unsigned long DpcTimeLimitTicks;
  /* 0x0008 */ unsigned long DpcWatchdogPeriodTicks;
  /* 0x000c */ unsigned long SingleDpcSoftTimeLimitTicks;
  /* 0x0010 */ unsigned long CumulativeDpcSoftTimeLimitTicks;
  /* 0x0014 */ unsigned long DpcWatchdogProfileSingleDpcThresholdTicks;
  /* 0x0018 */ unsigned long DpcWatchdogProfileCumulativeDpcThresholdTicks;
  /* 0x0020 */ void** DpcWatchdogProfile;
} DPC_TEST_WATCHDOG_CONFIGURATION, *PDPC_TEST_WATCHDOG_CONFIGURATION; /* size: 0x0028 */

