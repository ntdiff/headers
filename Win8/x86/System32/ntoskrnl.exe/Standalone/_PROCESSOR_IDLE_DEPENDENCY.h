typedef struct _PROCESSOR_NUMBER
{
  /* 0x0000 */ unsigned short Group;
  /* 0x0002 */ unsigned char Number;
  /* 0x0003 */ unsigned char Reserved;
} PROCESSOR_NUMBER, *PPROCESSOR_NUMBER; /* size: 0x0004 */

typedef struct _PROCESSOR_IDLE_DEPENDENCY
{
  /* 0x0000 */ struct _PROCESSOR_NUMBER Processor;
  /* 0x0004 */ unsigned char ExpectedState;
  /* 0x0005 */ char __PADDING__[1];
} PROCESSOR_IDLE_DEPENDENCY, *PPROCESSOR_IDLE_DEPENDENCY; /* size: 0x0006 */

