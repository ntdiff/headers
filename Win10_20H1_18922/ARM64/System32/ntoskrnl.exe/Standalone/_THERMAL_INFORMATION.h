typedef struct _THERMAL_INFORMATION
{
  /* 0x0000 */ unsigned long ThermalStamp;
  /* 0x0004 */ unsigned long ThermalConstant1;
  /* 0x0008 */ unsigned long ThermalConstant2;
  /* 0x0010 */ unsigned __int64 Processors;
  /* 0x0018 */ unsigned long SamplingPeriod;
  /* 0x001c */ unsigned long CurrentTemperature;
  /* 0x0020 */ unsigned long PassiveTripPoint;
  /* 0x0024 */ unsigned long CriticalTripPoint;
  /* 0x0028 */ unsigned char ActiveTripPointCount;
  /* 0x002c */ unsigned long ActiveTripPoint[10];
  /* 0x0054 */ long __PADDING__[1];
} THERMAL_INFORMATION, *PTHERMAL_INFORMATION; /* size: 0x0058 */

