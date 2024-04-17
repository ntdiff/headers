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

typedef struct _PO_WAKE_SOURCE_DEVICE
{
  /* 0x0000 */ struct _PO_WAKE_SOURCE_HEADER Header;
  /* 0x0008 */ wchar_t InstancePath[1];
  /* 0x000a */ char __PADDING__[2];
} PO_WAKE_SOURCE_DEVICE, *PPO_WAKE_SOURCE_DEVICE; /* size: 0x000c */

