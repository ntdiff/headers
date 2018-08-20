typedef struct _KAFFINITY_EX
{
  /* 0x0000 */ unsigned short Count;
  /* 0x0002 */ unsigned short Size;
  /* 0x0004 */ unsigned long Reserved;
  /* 0x0008 */ unsigned long Bitmap[1];
} KAFFINITY_EX, *PKAFFINITY_EX; /* size: 0x000c */

typedef struct _THERMAL_INFORMATION_EX
{
  /* 0x0000 */ unsigned long ThermalStamp;
  /* 0x0004 */ unsigned long ThermalConstant1;
  /* 0x0008 */ unsigned long ThermalConstant2;
  /* 0x000c */ struct _KAFFINITY_EX Processors;
  /* 0x0018 */ unsigned long SamplingPeriod;
  /* 0x001c */ unsigned long CurrentTemperature;
  /* 0x0020 */ unsigned long PassiveTripPoint;
  /* 0x0024 */ unsigned long CriticalTripPoint;
  /* 0x0028 */ unsigned char ActiveTripPointCount;
  /* 0x002c */ unsigned long ActiveTripPoint[10];
  /* 0x0054 */ unsigned long S4TransitionTripPoint;
} THERMAL_INFORMATION_EX, *PTHERMAL_INFORMATION_EX; /* size: 0x0058 */

