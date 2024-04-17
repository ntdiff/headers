typedef struct _SYSDBG_VIRTUAL
{
  /* 0x0000 */ void* Address;
  /* 0x0008 */ void* Buffer;
  /* 0x0010 */ unsigned long Request;
  /* 0x0014 */ long __PADDING__[1];
} SYSDBG_VIRTUAL, *PSYSDBG_VIRTUAL; /* size: 0x0018 */

