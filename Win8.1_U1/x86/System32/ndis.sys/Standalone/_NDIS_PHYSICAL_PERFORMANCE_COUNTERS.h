typedef struct _NDIS_PHYSICAL_PERFORMANCE_COUNTERS
{
  /* 0x0000 */ unsigned long DevicePowerState;
  /* 0x0008 */ unsigned __int64 TimeSuspended100ns;
  /* 0x0010 */ unsigned __int64 Uptime100ns;
  /* 0x0018 */ unsigned long LowPowerTransitions;
  /* 0x001c */ long __PADDING__[1];
} NDIS_PHYSICAL_PERFORMANCE_COUNTERS, *PNDIS_PHYSICAL_PERFORMANCE_COUNTERS; /* size: 0x0020 */

