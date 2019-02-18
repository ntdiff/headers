typedef struct _PEP_WORK_DEVICE_IDLE
{
  /* 0x0000 */ struct POHANDLE__* DeviceHandle;
  /* 0x0008 */ unsigned char IgnoreIdleTimeout;
  /* 0x0009 */ char __PADDING__[7];
} PEP_WORK_DEVICE_IDLE, *PPEP_WORK_DEVICE_IDLE; /* size: 0x0010 */

