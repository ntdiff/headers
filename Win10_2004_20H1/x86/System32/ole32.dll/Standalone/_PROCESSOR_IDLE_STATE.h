typedef struct _PROCESSOR_IDLE_STATE
{
  /* 0x0000 */ unsigned char StateType;
  /* 0x0004 */ unsigned long StateFlags;
  /* 0x0008 */ unsigned long HardwareLatency;
  /* 0x000c */ unsigned long Power;
  /* 0x0010 */ unsigned long Context;
  /* 0x0014 */ void* Handler /* function */;
} PROCESSOR_IDLE_STATE, *PPROCESSOR_IDLE_STATE; /* size: 0x0018 */

