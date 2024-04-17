typedef struct _ALPC_BASIC_INFORMATION
{
  /* 0x0000 */ unsigned long Flags;
  /* 0x0004 */ unsigned long SequenceNo;
  /* 0x0008 */ void* PortContext;
} ALPC_BASIC_INFORMATION, *PALPC_BASIC_INFORMATION; /* size: 0x000c */

