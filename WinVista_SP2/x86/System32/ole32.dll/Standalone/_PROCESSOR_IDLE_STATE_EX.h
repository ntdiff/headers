typedef struct _PROCESSOR_IDLE_STATE_EX
{
  /* 0x0000 */ unsigned char StateType;
  /* 0x0004 */ unsigned long StateFlags;
  /* 0x0008 */ unsigned long HardwareLatency;
  /* 0x000c */ unsigned long Power;
  /* 0x0010 */ void* Context;
  /* 0x0014 */ void* Handler /* function */;
} PROCESSOR_IDLE_STATE_EX, *PPROCESSOR_IDLE_STATE_EX; /* size: 0x0018 */

