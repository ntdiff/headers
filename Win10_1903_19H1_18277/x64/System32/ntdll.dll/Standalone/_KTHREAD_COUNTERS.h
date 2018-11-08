typedef enum _HARDWARE_COUNTER_TYPE
{
  PMCCounter = 0,
  MaxHardwareCounterType = 1,
} HARDWARE_COUNTER_TYPE, *PHARDWARE_COUNTER_TYPE;

typedef struct _COUNTER_READING
{
  /* 0x0000 */ enum _HARDWARE_COUNTER_TYPE Type;
  /* 0x0004 */ unsigned long Index;
  /* 0x0008 */ unsigned __int64 Start;
  /* 0x0010 */ unsigned __int64 Total;
} COUNTER_READING, *PCOUNTER_READING; /* size: 0x0018 */

typedef struct _KTHREAD_COUNTERS
{
  /* 0x0000 */ unsigned __int64 WaitReasonBitMap;
  /* 0x0008 */ struct _THREAD_PERFORMANCE_DATA* UserData;
  /* 0x0010 */ unsigned long Flags;
  /* 0x0014 */ unsigned long ContextSwitches;
  /* 0x0018 */ unsigned __int64 CycleTimeBias;
  /* 0x0020 */ unsigned __int64 HardwareCounters;
  /* 0x0028 */ struct _COUNTER_READING HwCounter[16];
} KTHREAD_COUNTERS, *PKTHREAD_COUNTERS; /* size: 0x01a8 */

