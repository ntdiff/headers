typedef struct _FILE_VOLUME_NAME_INFORMATION
{
  /* 0x0000 */ unsigned long DeviceNameLength;
  /* 0x0004 */ wchar_t DeviceName[1];
  /* 0x0006 */ char __PADDING__[2];
} FILE_VOLUME_NAME_INFORMATION, *PFILE_VOLUME_NAME_INFORMATION; /* size: 0x0008 */

