typedef struct _PROCESSOR_IDLE_STATE
{
  /* 0x0000 */ unsigned char StateType;
  /* 0x0004 */ unsigned long StateFlags;
  /* 0x0008 */ unsigned long HardwareLatency;
  /* 0x000c */ unsigned long Power;
  /* 0x0010 */ unsigned __int64 Context;
  /* 0x0018 */ void* Handler /* function */;
} PROCESSOR_IDLE_STATE, *PPROCESSOR_IDLE_STATE; /* size: 0x0020 */

typedef struct _PROCESSOR_IDLE_STATES
{
  /* 0x0000 */ unsigned long Size;
  /* 0x0004 */ unsigned long Revision;
  /* 0x0008 */ unsigned long Count;
  /* 0x000c */ unsigned long Type;
  /* 0x0010 */ unsigned __int64 TargetProcessors;
  /* 0x0018 */ struct _PROCESSOR_IDLE_STATE State[1];
} PROCESSOR_IDLE_STATES, *PPROCESSOR_IDLE_STATES; /* size: 0x0038 */

