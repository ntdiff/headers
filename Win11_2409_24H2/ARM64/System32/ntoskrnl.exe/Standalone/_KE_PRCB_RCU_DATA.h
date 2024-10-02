typedef struct _KE_PRCB_RCU_DATA
{
  /* 0x0000 */ unsigned long NestingLevel;
  /* 0x0004 */ unsigned char DispatchPin;
  /* 0x0005 */ unsigned char GracePeriodNeeded;
  /* 0x0006 */ unsigned char ExpediteReporting;
  /* 0x0007 */ char IdleState;
  /* 0x0008 */ unsigned __int64 GraceSequenceQuiescent;
  /* 0x0010 */ unsigned __int64 GraceSequenceReported;
  /* 0x0018 */ struct _LIST_ENTRY* AwaitingCompletion;
} KE_PRCB_RCU_DATA, *PKE_PRCB_RCU_DATA; /* size: 0x0020 */

