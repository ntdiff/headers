enum JOB_OBJECT_IO_RATE_CONTROL_FLAGS
{
  JOB_OBJECT_IO_RATE_CONTROL_ENABLE = 1,
  JOB_OBJECT_IO_RATE_CONTROL_STANDALONE_VOLUME = 2,
  JOB_OBJECT_IO_RATE_CONTROL_FORCE_UNIT_ACCESS_ALL = 4,
  JOB_OBJECT_IO_RATE_CONTROL_FORCE_UNIT_ACCESS_ON_SOFT_CAP = 8,
  JOB_OBJECT_IO_RATE_CONTROL_VALID_FLAGS = 15,
};

struct JOBOBJECT_IO_RATE_CONTROL_INFORMATION_NATIVE_V3
{
  /* 0x0000 */ __int64 MaxIops;
  /* 0x0008 */ __int64 MaxBandwidth;
  /* 0x0010 */ __int64 ReservationIops;
  /* 0x0018 */ wchar_t* VolumeName;
  /* 0x0020 */ unsigned long BaseIoSize;
  /* 0x0024 */ enum JOB_OBJECT_IO_RATE_CONTROL_FLAGS ControlFlags;
  /* 0x0028 */ unsigned short VolumeNameLength;
  /* 0x0030 */ __int64 CriticalReservationIops;
  /* 0x0038 */ __int64 ReservationBandwidth;
  /* 0x0040 */ __int64 CriticalReservationBandwidth;
  /* 0x0048 */ __int64 MaxTimePercent;
  /* 0x0050 */ __int64 ReservationTimePercent;
  /* 0x0058 */ __int64 CriticalReservationTimePercent;
  /* 0x0060 */ __int64 SoftMaxIops;
  /* 0x0068 */ __int64 SoftMaxBandwidth;
  /* 0x0070 */ __int64 SoftMaxTimePercent;
  /* 0x0078 */ __int64 LimitExcessNotifyIops;
  /* 0x0080 */ __int64 LimitExcessNotifyBandwidth;
  /* 0x0088 */ __int64 LimitExcessNotifyTimePercent;
}; /* size: 0x0090 */

