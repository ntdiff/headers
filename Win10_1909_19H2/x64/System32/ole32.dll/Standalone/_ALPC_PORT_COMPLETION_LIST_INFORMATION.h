typedef struct _ALPC_PORT_COMPLETION_LIST_INFORMATION
{
  /* 0x0000 */ void* Buffer;
  /* 0x0008 */ unsigned long Size;
  /* 0x000c */ unsigned long ConcurrencyCount;
  /* 0x0010 */ unsigned long AttributeFlags;
  /* 0x0014 */ long __PADDING__[1];
} ALPC_PORT_COMPLETION_LIST_INFORMATION, *PALPC_PORT_COMPLETION_LIST_INFORMATION; /* size: 0x0018 */

