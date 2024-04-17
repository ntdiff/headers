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

