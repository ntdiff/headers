typedef struct _GUID
{
  /* 0x0000 */ unsigned long Data1;
  /* 0x0004 */ unsigned short Data2;
  /* 0x0006 */ unsigned short Data3;
  /* 0x0008 */ unsigned char Data4[8];
} GUID, *PGUID; /* size: 0x0010 */

typedef struct _PO_POWER_PLANE_PROFILE
{
  /* 0x0000 */ unsigned long ExclusivePowerMw;
  /* 0x0004 */ unsigned long PeakPowerMw;
} PO_POWER_PLANE_PROFILE, *PPO_POWER_PLANE_PROFILE; /* size: 0x0008 */

typedef struct _POP_COMPONENT_POWER_PROFILE
{
  /* 0x0000 */ struct _GUID ComponentGuid;
  /* 0x0010 */ struct _POP_DEVICE_POWER_PROFILE* Device;
  /* 0x0018 */ unsigned __int64 FxCount;
  /* 0x0020 */ struct _PO_POWER_PLANE_PROFILE FxPower[1];
} POP_COMPONENT_POWER_PROFILE, *PPOP_COMPONENT_POWER_PROFILE; /* size: 0x0028 */

