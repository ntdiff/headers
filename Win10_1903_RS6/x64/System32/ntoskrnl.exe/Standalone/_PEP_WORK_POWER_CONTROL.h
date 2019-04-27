typedef struct _PEP_WORK_POWER_CONTROL
{
  /* 0x0000 */ struct POHANDLE__* DeviceHandle;
  /* 0x0008 */ const struct _GUID* PowerControlCode;
  /* 0x0010 */ void* RequestContext;
  /* 0x0018 */ void* InBuffer;
  /* 0x0020 */ unsigned __int64 InBufferSize;
  /* 0x0028 */ void* OutBuffer;
  /* 0x0030 */ unsigned __int64 OutBufferSize;
} PEP_WORK_POWER_CONTROL, *PPEP_WORK_POWER_CONTROL; /* size: 0x0038 */

