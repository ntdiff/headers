typedef struct _SYSTEM_INTERRUPT_INFORMATION
{
  /* 0x0000 */ unsigned long ContextSwitches;
  /* 0x0004 */ unsigned long DpcCount;
  /* 0x0008 */ unsigned long DpcRate;
  /* 0x000c */ unsigned long TimeIncrement;
  /* 0x0010 */ unsigned long DpcBypassCount;
  /* 0x0014 */ unsigned long ApcBypassCount;
} SYSTEM_INTERRUPT_INFORMATION, *PSYSTEM_INTERRUPT_INFORMATION; /* size: 0x0018 */

