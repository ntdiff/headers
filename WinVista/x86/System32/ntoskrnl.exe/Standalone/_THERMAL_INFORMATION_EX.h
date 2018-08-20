typedef struct _THERMAL_INFORMATION_EX
{
  /* 0x0000 */ unsigned long ThermalStamp;
  /* 0x0004 */ unsigned long ThermalConstant1;
  /* 0x0008 */ unsigned long ThermalConstant2;
  /* 0x000c */ unsigned long Processors;
  /* 0x0010 */ unsigned long SamplingPeriod;
  /* 0x0014 */ unsigned long CurrentTemperature;
  /* 0x0018 */ unsigned long PassiveTripPoint;
  /* 0x001c */ unsigned long CriticalTripPoint;
  /* 0x0020 */ unsigned char ActiveTripPointCount;
  /* 0x0024 */ unsigned long ActiveTripPoint[10];
  /* 0x004c */ unsigned long S4TransitionTripPoint;
} THERMAL_INFORMATION_EX, *PTHERMAL_INFORMATION_EX; /* size: 0x0050 */

