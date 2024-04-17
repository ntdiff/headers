typedef enum _HARDWARE_COUNTER_TYPE
{
  PMCCounter = 0,
  MaxHardwareCounterType = 1,
} HARDWARE_COUNTER_TYPE, *PHARDWARE_COUNTER_TYPE;

typedef struct _HARDWARE_COUNTER_DATA
{
  /* 0x0000 */ enum _HARDWARE_COUNTER_TYPE Type;
  /* 0x0004 */ unsigned long Reserved;
  /* 0x0008 */ unsigned __int64 Value;
} HARDWARE_COUNTER_DATA, *PHARDWARE_COUNTER_DATA; /* size: 0x0010 */

typedef struct _PERFORMANCE_DATA
{
  /* 0x0000 */ unsigned short Size;
  /* 0x0002 */ unsigned char Version;
  /* 0x0003 */ unsigned char HwCountersCount;
  /* 0x0004 */ unsigned long ContextSwitchCount;
  /* 0x0008 */ unsigned __int64 WaitReasonBitMap;
  /* 0x0010 */ unsigned __int64 CycleTime;
  /* 0x0018 */ unsigned long RetryCount;
  /* 0x001c */ unsigned long Reserved;
  /* 0x0020 */ struct _HARDWARE_COUNTER_DATA HwCounters[16];
} PERFORMANCE_DATA, *PPERFORMANCE_DATA; /* size: 0x0120 */

