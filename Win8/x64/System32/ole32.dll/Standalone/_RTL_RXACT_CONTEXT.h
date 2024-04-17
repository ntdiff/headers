typedef struct _RTL_RXACT_CONTEXT
{
  /* 0x0000 */ void* RootRegistryKey;
  /* 0x0008 */ void* RXactKey;
  /* 0x0010 */ unsigned char HandlesValid;
  /* 0x0018 */ struct _RTL_RXACT_LOG* RXactLog;
} RTL_RXACT_CONTEXT, *PRTL_RXACT_CONTEXT; /* size: 0x0020 */

