typedef struct _SYSTEM_CONTEXT_SWITCH_INFORMATION
{
  /* 0x0000 */ unsigned long ContextSwitches;
  /* 0x0004 */ unsigned long FindAny;
  /* 0x0008 */ unsigned long FindLast;
  /* 0x000c */ unsigned long FindIdeal;
  /* 0x0010 */ unsigned long IdleAny;
  /* 0x0014 */ unsigned long IdleCurrent;
  /* 0x0018 */ unsigned long IdleLast;
  /* 0x001c */ unsigned long IdleIdeal;
  /* 0x0020 */ unsigned long PreemptAny;
  /* 0x0024 */ unsigned long PreemptCurrent;
  /* 0x0028 */ unsigned long PreemptLast;
  /* 0x002c */ unsigned long SwitchToIdle;
} SYSTEM_CONTEXT_SWITCH_INFORMATION, *PSYSTEM_CONTEXT_SWITCH_INFORMATION; /* size: 0x0030 */

