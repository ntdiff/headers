typedef struct _PO_HIBER_PERF
{
  /* 0x0000 */ unsigned __int64 IoTicks;
  /* 0x0008 */ unsigned __int64 InitTicks;
  /* 0x0010 */ unsigned __int64 CopyTicks;
  /* 0x0018 */ unsigned __int64 ElapsedTicks;
  /* 0x0020 */ unsigned __int64 CompressTicks;
  /* 0x0028 */ unsigned __int64 ResumeAppTime;
  /* 0x0030 */ unsigned __int64 HiberFileResumeTime;
  /* 0x0038 */ unsigned __int64 BytesCopied;
  /* 0x0040 */ unsigned __int64 PagesProcessed;
  /* 0x0048 */ unsigned long PagesWritten;
  /* 0x004c */ unsigned long DumpCount;
  /* 0x0050 */ unsigned long FileRuns;
  /* 0x0054 */ long __PADDING__[1];
} PO_HIBER_PERF, *PPO_HIBER_PERF; /* size: 0x0058 */

