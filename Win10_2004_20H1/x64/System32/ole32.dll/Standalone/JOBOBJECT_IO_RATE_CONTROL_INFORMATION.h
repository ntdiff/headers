struct JOBOBJECT_IO_RATE_CONTROL_INFORMATION
{
  /* 0x0000 */ __int64 MaxIops;
  /* 0x0008 */ __int64 MaxBandwidth;
  /* 0x0010 */ __int64 ReservationIops;
  /* 0x0018 */ const wchar_t* VolumeName;
  /* 0x0020 */ unsigned long BaseIoSize;
  /* 0x0024 */ unsigned long ControlFlags;
}; /* size: 0x0028 */

