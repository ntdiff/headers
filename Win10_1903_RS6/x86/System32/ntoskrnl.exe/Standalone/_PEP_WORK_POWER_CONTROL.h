typedef struct _PEP_WORK_POWER_CONTROL
{
  /* 0x0000 */ struct POHANDLE__* DeviceHandle;
  /* 0x0004 */ const struct _GUID* PowerControlCode;
  /* 0x0008 */ void* RequestContext;
  /* 0x000c */ void* InBuffer;
  /* 0x0010 */ unsigned long InBufferSize;
  /* 0x0014 */ void* OutBuffer;
  /* 0x0018 */ unsigned long OutBufferSize;
} PEP_WORK_POWER_CONTROL, *PPEP_WORK_POWER_CONTROL; /* size: 0x001c */

