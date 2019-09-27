typedef struct _UNICODE_STRING
{
  /* 0x0000 */ unsigned short Length;
  /* 0x0002 */ unsigned short MaximumLength;
  /* 0x0008 */ wchar_t* Buffer;
} UNICODE_STRING, *PUNICODE_STRING; /* size: 0x0010 */

typedef struct _PO_POWER_PLANE_PROFILE
{
  /* 0x0000 */ unsigned long ExclusivePowerMw;
  /* 0x0004 */ unsigned long PeakPowerMw;
} PO_POWER_PLANE_PROFILE, *PPO_POWER_PLANE_PROFILE; /* size: 0x0008 */

typedef struct _POP_DEVICE_POWER_PROFILE
{
  /* 0x0000 */ struct _UNICODE_STRING DeviceId;
  /* 0x0010 */ struct _POP_POWER_PLANE* PowerPlane;
  /* 0x0018 */ struct _POP_FX_DEVICE* FxDevice;
  /* 0x0020 */ long PowerDrawMw;
  /* 0x0024 */ struct _PO_POWER_PLANE_PROFILE DxPower[4];
  /* 0x0048 */ unsigned __int64 ComponentCount;
  /* 0x0050 */ struct _POP_COMPONENT_POWER_PROFILE** Components;
} POP_DEVICE_POWER_PROFILE, *PPOP_DEVICE_POWER_PROFILE; /* size: 0x0058 */

