typedef struct _PEP_WORK_ACTIVE_COMPLETE
{
  /* 0x0000 */ struct POHANDLE__* DeviceHandle;
  /* 0x0008 */ unsigned long Component;
  /* 0x000c */ long __PADDING__[1];
} PEP_WORK_ACTIVE_COMPLETE, *PPEP_WORK_ACTIVE_COMPLETE; /* size: 0x0010 */

