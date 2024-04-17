typedef struct _RTL_RXACT_CONTEXT
{
  /* 0x0000 */ void* RootRegistryKey;
  /* 0x0004 */ void* RXactKey;
  /* 0x0008 */ unsigned char HandlesValid;
  /* 0x000c */ struct _RTL_RXACT_LOG* RXactLog;
} RTL_RXACT_CONTEXT, *PRTL_RXACT_CONTEXT; /* size: 0x0010 */

