typedef struct _PEP_WORK_COMPLETE_PERF_STATE
{
  /* 0x0000 */ struct POHANDLE__* DeviceHandle;
  /* 0x0008 */ unsigned long Component;
  /* 0x000c */ unsigned char Succeeded;
  /* 0x000d */ char __PADDING__[3];
} PEP_WORK_COMPLETE_PERF_STATE, *PPEP_WORK_COMPLETE_PERF_STATE; /* size: 0x0010 */

