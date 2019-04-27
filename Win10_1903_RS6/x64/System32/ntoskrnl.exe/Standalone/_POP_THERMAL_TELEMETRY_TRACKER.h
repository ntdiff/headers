typedef struct _POP_THERMAL_TELEMETRY_TRACKER
{
  /* 0x0000 */ unsigned char AccountingDisabled;
  /* 0x0001 */ unsigned char ActiveLevels;
  /* 0x0008 */ unsigned __int64 LastPassiveUpdateTime;
  /* 0x0010 */ unsigned __int64 LastActiveUpdateTime;
  /* 0x0018 */ unsigned __int64 TotalPassiveTime[21];
  /* 0x00c0 */ unsigned __int64 PassiveTimeSnap[21];
  /* 0x0168 */ unsigned __int64 TotalActiveTime[10];
  /* 0x01b8 */ unsigned __int64 ActiveTimeSnap[10];
  /* 0x0208 */ unsigned __int64 TotalTime;
  /* 0x0210 */ unsigned __int64 TotalTimeSnap;
} POP_THERMAL_TELEMETRY_TRACKER, *PPOP_THERMAL_TELEMETRY_TRACKER; /* size: 0x0218 */

