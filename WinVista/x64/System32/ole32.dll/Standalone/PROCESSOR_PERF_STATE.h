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

