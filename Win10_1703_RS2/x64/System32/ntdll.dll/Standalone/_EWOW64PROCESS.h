typedef struct _EWOW64PROCESS
{
  /* 0x0000 */ void* Peb;
  /* 0x0008 */ unsigned short Machine;
  /* 0x000a */ char __PADDING__[6];
} EWOW64PROCESS, *PEWOW64PROCESS; /* size: 0x0010 */

