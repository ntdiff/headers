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

