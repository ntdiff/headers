typedef struct _PROCESSOR_NUMBER
{
  /* 0x0000 */ unsigned short Group;
  /* 0x0002 */ unsigned char Number;
  /* 0x0003 */ unsigned char Reserved;
} PROCESSOR_NUMBER, *PPROCESSOR_NUMBER; /* size: 0x0004 */

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

typedef struct _THREAD_PERFORMANCE_DATA
{
  /* 0x0000 */ unsigned short Size;
  /* 0x0002 */ unsigned short Version;
  /* 0x0004 */ struct _PROCESSOR_NUMBER ProcessorNumber;
  /* 0x0008 */ unsigned long ContextSwitches;
  /* 0x000c */ unsigned long HwCountersCount;
  /* 0x0010 */ volatile unsigned __int64 UpdateCount;
  /* 0x0018 */ unsigned __int64 WaitReasonBitMap;
  /* 0x0020 */ unsigned __int64 HardwareCounters;
  /* 0x0028 */ struct _COUNTER_READING CycleTime;
  /* 0x0040 */ struct _COUNTER_READING HwCounters[16];
} THREAD_PERFORMANCE_DATA, *PTHREAD_PERFORMANCE_DATA; /* size: 0x01c0 */

