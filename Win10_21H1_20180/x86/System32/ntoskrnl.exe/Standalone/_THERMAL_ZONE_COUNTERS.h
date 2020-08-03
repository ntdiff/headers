typedef struct _THERMAL_ZONE_COUNTERS
{
  /* 0x0000 */ unsigned long Temperature;
  /* 0x0004 */ unsigned long ThrottleLimit;
  /* 0x0008 */ unsigned long ThrottleReasons;
  /* 0x000c */ unsigned long TemperatureHighPrecision;
} THERMAL_ZONE_COUNTERS, *PTHERMAL_ZONE_COUNTERS; /* size: 0x0010 */

