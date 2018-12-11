typedef struct _POP_THERMAL_TELEMETRY_TRACKER
{
  /* 0x0000 */ unsigned char AccountingDisabled;
  /* 0x0008 */ unsigned __int64 LastPassiveUpdateTime;
  /* 0x0010 */ unsigned __int64 TotalPassiveTime[21];
  /* 0x00b8 */ unsigned __int64 PassiveTimeSnap[21];
} POP_THERMAL_TELEMETRY_TRACKER, *PPOP_THERMAL_TELEMETRY_TRACKER; /* size: 0x0160 */

