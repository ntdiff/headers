struct PROCESSOR_PERF_STATE
{
  /* 0x0000 */ unsigned long Frequency;
  /* 0x0004 */ unsigned long Power;
  /* 0x0008 */ unsigned short Latency;
  /* 0x000a */ unsigned char Type;
  /* 0x000b */ unsigned char Spare;
  /* 0x0010 */ unsigned __int64 Control;
  /* 0x0018 */ unsigned __int64 Status;
}; /* size: 0x0020 */

struct PROCESSOR_PERF_STATES
{
  /* 0x0000 */ unsigned long Size;
  /* 0x0004 */ unsigned short Revision;
  /* 0x0006 */ unsigned short Type;
  /* 0x0008 */ unsigned long Count;
  /* 0x000c */ unsigned long MaxFrequency;
  /* 0x0010 */ unsigned long CurrentState;
  /* 0x0018 */ unsigned __int64 TargetProcessors;
  /* 0x0020 */ void* PStateHandler /* function */;
  /* 0x0028 */ unsigned __int64 PStateContext;
  /* 0x0030 */ void* TStateHandler /* function */;
  /* 0x0038 */ unsigned __int64 TStateContext;
  /* 0x0040 */ void* FeedbackHandler /* function */;
  /* 0x0048 */ struct PROCESSOR_PERF_STATE State[1];
}; /* size: 0x0068 */

