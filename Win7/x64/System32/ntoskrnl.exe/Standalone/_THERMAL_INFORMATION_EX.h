typedef struct _KAFFINITY_EX
{
  /* 0x0000 */ unsigned short Count;
  /* 0x0002 */ unsigned short Size;
  /* 0x0004 */ unsigned long Reserved;
  /* 0x0008 */ unsigned __int64 Bitmap[4];
} KAFFINITY_EX, *PKAFFINITY_EX; /* size: 0x0028 */

typedef struct _THERMAL_INFORMATION_EX
{
  /* 0x0000 */ unsigned long ThermalStamp;
  /* 0x0004 */ unsigned long ThermalConstant1;
  /* 0x0008 */ unsigned long ThermalConstant2;
  /* 0x0010 */ struct _KAFFINITY_EX Processors;
  /* 0x0038 */ unsigned long SamplingPeriod;
  /* 0x003c */ unsigned long CurrentTemperature;
  /* 0x0040 */ unsigned long PassiveTripPoint;
  /* 0x0044 */ unsigned long CriticalTripPoint;
  /* 0x0048 */ unsigned char ActiveTripPointCount;
  /* 0x004c */ unsigned long ActiveTripPoint[10];
  /* 0x0074 */ unsigned long S4TransitionTripPoint;
} THERMAL_INFORMATION_EX, *PTHERMAL_INFORMATION_EX; /* size: 0x0078 */

