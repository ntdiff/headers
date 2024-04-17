enum PO_WAKE_SOURCE_TYPE
{
  DeviceWakeSourceType = 0,
  FixedWakeSourceType = 1,
  TimerWakeSourceType = 2,
  TimerPresumedWakeSourceType = 3,
};

typedef struct _PO_WAKE_SOURCE_HEADER
{
  /* 0x0000 */ enum PO_WAKE_SOURCE_TYPE Type;
  /* 0x0004 */ unsigned long Size;
} PO_WAKE_SOURCE_HEADER, *PPO_WAKE_SOURCE_HEADER; /* size: 0x0008 */

enum PO_FIXED_WAKE_SOURCE_TYPE
{
  FixedWakeSourcePowerButton = 0,
  FixedWakeSourceSleepButton = 1,
  FixedWakeSourceRtc = 2,
  FixedWakeSourceDozeToHibernate = 3,
};

typedef struct _PO_WAKE_SOURCE_FIXED
{
  /* 0x0000 */ struct _PO_WAKE_SOURCE_HEADER Header;
  /* 0x0008 */ enum PO_FIXED_WAKE_SOURCE_TYPE FixedWakeSourceType;
} PO_WAKE_SOURCE_FIXED, *PPO_WAKE_SOURCE_FIXED; /* size: 0x000c */

