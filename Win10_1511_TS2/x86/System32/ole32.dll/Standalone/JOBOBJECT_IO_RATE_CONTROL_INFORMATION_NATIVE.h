enum JOB_OBJECT_IO_RATE_CONTROL_FLAGS
{
  JOB_OBJECT_IO_RATE_CONTROL_ENABLE = 1,
  JOB_OBJECT_IO_RATE_CONTROL_VALID_FLAGS = 1,
};

struct JOBOBJECT_IO_RATE_CONTROL_INFORMATION_NATIVE
{
  /* 0x0000 */ __int64 MaxIops;
  /* 0x0008 */ __int64 MaxBandwidth;
  /* 0x0010 */ __int64 ReservationIops;
  /* 0x0018 */ wchar_t* VolumeName;
  /* 0x001c */ unsigned long BaseIoSize;
  /* 0x0020 */ enum JOB_OBJECT_IO_RATE_CONTROL_FLAGS ControlFlags;
  /* 0x0024 */ unsigned short VolumeNameLength;
  /* 0x0026 */ char __PADDING__[2];
}; /* size: 0x0028 */

