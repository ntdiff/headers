typedef struct _PEP_WORK_COMPLETE_PERF_STATE
{
  /* 0x0000 */ struct POHANDLE__* DeviceHandle;
  /* 0x0004 */ unsigned long Component;
  /* 0x0008 */ unsigned char Succeeded;
  /* 0x0009 */ char __PADDING__[3];
} PEP_WORK_COMPLETE_PERF_STATE, *PPEP_WORK_COMPLETE_PERF_STATE; /* size: 0x000c */

