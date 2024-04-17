typedef struct _EXECUTION_CONTEXT_NOTIFY_PARAMETERS
{
  /* 0x0000 */ unsigned long Size;
  /* 0x0004 */ unsigned char Irql;
  /* 0x0005 */ unsigned char AllowContextStealing;
  /* 0x0006 */ char __PADDING__[2];
} EXECUTION_CONTEXT_NOTIFY_PARAMETERS, *PEXECUTION_CONTEXT_NOTIFY_PARAMETERS; /* size: 0x0008 */

