typedef struct _PROCESSOR_IDLE_DEPENDENCY
{
  /* 0x0000 */ unsigned long ProcessorIndex;
  /* 0x0004 */ unsigned char ExpectedState;
  /* 0x0005 */ unsigned char AllowDeeperStates;
  /* 0x0006 */ unsigned char LooseDependency;
  /* 0x0007 */ char __PADDING__[1];
} PROCESSOR_IDLE_DEPENDENCY, *PPROCESSOR_IDLE_DEPENDENCY; /* size: 0x0008 */

