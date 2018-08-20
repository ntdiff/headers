typedef struct _POP_THERMAL_TELEMETRY_TRACKER
{
  /* 0x0000 */ unsigned char AccountingDisabled;
  /* 0x0008 */ unsigned __int64 LastPassiveUpdateTime;
  /* 0x0010 */ unsigned __int64 TotalPassiveTime[20];
  /* 0x00b0 */ unsigned __int64 PassiveTimeSnap[20];
} POP_THERMAL_TELEMETRY_TRACKER, *PPOP_THERMAL_TELEMETRY_TRACKER; /* size: 0x0150 */

