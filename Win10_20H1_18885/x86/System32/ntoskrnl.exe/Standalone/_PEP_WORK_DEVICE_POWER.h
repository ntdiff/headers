typedef struct _PEP_WORK_DEVICE_POWER
{
  /* 0x0000 */ struct POHANDLE__* DeviceHandle;
  /* 0x0004 */ unsigned char PowerRequired;
  /* 0x0005 */ char __PADDING__[3];
} PEP_WORK_DEVICE_POWER, *PPEP_WORK_DEVICE_POWER; /* size: 0x0008 */

