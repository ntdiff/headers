typedef struct _UNICODE_STRING
{
  /* 0x0000 */ unsigned short Length;
  /* 0x0002 */ unsigned short MaximumLength;
  /* 0x0004 */ wchar_t* Buffer;
} UNICODE_STRING, *PUNICODE_STRING; /* size: 0x0008 */

typedef struct _POP_POWER_PLANE
{
  /* 0x0000 */ struct _UNICODE_STRING PowerPlaneId;
  /* 0x0008 */ unsigned long Lock;
  /* 0x000c */ unsigned char OldIrql;
  /* 0x0010 */ volatile long DevicePowerMw;
  /* 0x0014 */ void* PmaxHandle;
  /* 0x0018 */ void* NotifyDevicePowerDraw /* function */;
  /* 0x001c */ unsigned long DeviceCount;
  /* 0x0020 */ struct _POP_DEVICE_POWER_PROFILE** Devices;
} POP_POWER_PLANE, *PPOP_POWER_PLANE; /* size: 0x0024 */

