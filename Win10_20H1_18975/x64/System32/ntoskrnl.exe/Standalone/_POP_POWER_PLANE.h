typedef struct _UNICODE_STRING
{
  /* 0x0000 */ unsigned short Length;
  /* 0x0002 */ unsigned short MaximumLength;
  /* 0x0008 */ wchar_t* Buffer;
} UNICODE_STRING, *PUNICODE_STRING; /* size: 0x0010 */

typedef struct _POP_POWER_PLANE
{
  /* 0x0000 */ struct _UNICODE_STRING PowerPlaneId;
  /* 0x0010 */ unsigned __int64 Lock;
  /* 0x0018 */ unsigned char OldIrql;
  /* 0x001c */ volatile long DevicePowerMw;
  /* 0x0020 */ void* PmaxHandle;
  /* 0x0028 */ void* NotifyDevicePowerDraw /* function */;
  /* 0x0030 */ unsigned __int64 DeviceCount;
  /* 0x0038 */ struct _POP_DEVICE_POWER_PROFILE** Devices;
} POP_POWER_PLANE, *PPOP_POWER_PLANE; /* size: 0x0040 */

