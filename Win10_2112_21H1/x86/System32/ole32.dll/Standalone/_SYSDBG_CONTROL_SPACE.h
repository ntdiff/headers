typedef struct _SYSDBG_CONTROL_SPACE
{
  /* 0x0000 */ unsigned __int64 Address;
  /* 0x0008 */ void* Buffer;
  /* 0x000c */ unsigned long Request;
  /* 0x0010 */ unsigned long Processor;
  /* 0x0014 */ long __PADDING__[1];
} SYSDBG_CONTROL_SPACE, *PSYSDBG_CONTROL_SPACE; /* size: 0x0018 */

