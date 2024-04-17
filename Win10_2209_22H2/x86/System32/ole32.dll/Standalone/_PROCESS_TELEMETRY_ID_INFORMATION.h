typedef struct _PROCESS_TELEMETRY_ID_INFORMATION
{
  /* 0x0000 */ unsigned long HeaderSize;
  /* 0x0004 */ unsigned long ProcessId;
  /* 0x0008 */ unsigned __int64 ProcessStartKey;
  /* 0x0010 */ unsigned __int64 CreateTime;
  /* 0x0018 */ unsigned __int64 CreateInterruptTime;
  /* 0x0020 */ unsigned __int64 CreateUnbiasedInterruptTime;
  /* 0x0028 */ unsigned __int64 ProcessSequenceNumber;
  /* 0x0030 */ unsigned __int64 SessionCreateTime;
  /* 0x0038 */ unsigned long SessionId;
  /* 0x003c */ unsigned long BootId;
  /* 0x0040 */ unsigned long ImageChecksum;
  /* 0x0044 */ unsigned long ImageTimeDateStamp;
  /* 0x0048 */ unsigned long UserSidOffset;
  /* 0x004c */ unsigned long ImagePathOffset;
  /* 0x0050 */ unsigned long PackageNameOffset;
  /* 0x0054 */ unsigned long RelativeAppNameOffset;
  /* 0x0058 */ unsigned long CommandLineOffset;
  /* 0x005c */ long __PADDING__[1];
} PROCESS_TELEMETRY_ID_INFORMATION, *PPROCESS_TELEMETRY_ID_INFORMATION; /* size: 0x0060 */

