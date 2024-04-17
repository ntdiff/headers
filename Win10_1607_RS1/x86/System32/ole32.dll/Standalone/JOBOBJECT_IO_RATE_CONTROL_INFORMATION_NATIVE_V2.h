enum JOB_OBJECT_IO_RATE_CONTROL_FLAGS
{
  JOB_OBJECT_IO_RATE_CONTROL_ENABLE = 1,
  JOB_OBJECT_IO_RATE_CONTROL_STANDALONE_VOLUME = 2,
  JOB_OBJECT_IO_RATE_CONTROL_VALID_FLAGS = 3,
};

struct JOBOBJECT_IO_RATE_CONTROL_INFORMATION_NATIVE_V2
{
  /* 0x0000 */ __int64 MaxIops;
  /* 0x0008 */ __int64 MaxBandwidth;
  /* 0x0010 */ __int64 ReservationIops;
  /* 0x0018 */ wchar_t* VolumeName;
  /* 0x001c */ unsigned long BaseIoSize;
  /* 0x0020 */ enum JOB_OBJECT_IO_RATE_CONTROL_FLAGS ControlFlags;
  /* 0x0024 */ unsigned short VolumeNameLength;
  /* 0x0028 */ __int64 CriticalReservationIops;
  /* 0x0030 */ __int64 ReservationBandwidth;
  /* 0x0038 */ __int64 CriticalReservationBandwidth;
  /* 0x0040 */ __int64 MaxTimePercent;
  /* 0x0048 */ __int64 ReservationTimePercent;
  /* 0x0050 */ __int64 CriticalReservationTimePercent;
}; /* size: 0x0058 */

