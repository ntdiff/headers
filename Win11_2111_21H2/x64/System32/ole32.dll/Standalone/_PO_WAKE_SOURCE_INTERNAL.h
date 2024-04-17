enum PO_WAKE_SOURCE_TYPE
{
  DeviceWakeSourceType = 0,
  FixedWakeSourceType = 1,
  TimerWakeSourceType = 2,
  TimerPresumedWakeSourceType = 3,
  InternalWakeSourceType = 4,
};

typedef struct _PO_WAKE_SOURCE_HEADER
{
  /* 0x0000 */ enum PO_WAKE_SOURCE_TYPE Type;
  /* 0x0004 */ unsigned long Size;
} PO_WAKE_SOURCE_HEADER, *PPO_WAKE_SOURCE_HEADER; /* size: 0x0008 */

enum PO_INTERNAL_WAKE_SOURCE_TYPE
{
  InternalWakeSourceDozeToHibernate = 0,
  InternalWakeSourcePredictedUserPresence = 1,
  InternalWakeSourceTimerOverride = 2,
};

typedef struct _PO_WAKE_SOURCE_INTERNAL
{
  /* 0x0000 */ struct _PO_WAKE_SOURCE_HEADER Header;
  /* 0x0008 */ enum PO_INTERNAL_WAKE_SOURCE_TYPE InternalWakeSourceType;
} PO_WAKE_SOURCE_INTERNAL, *PPO_WAKE_SOURCE_INTERNAL; /* size: 0x000c */

