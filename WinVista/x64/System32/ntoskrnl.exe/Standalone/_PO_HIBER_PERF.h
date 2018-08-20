typedef struct _PO_HIBER_PERF
{
  /* 0x0000 */ unsigned __int64 IoTicks;
  /* 0x0008 */ unsigned __int64 InitTicks;
  /* 0x0010 */ unsigned __int64 CopyTicks;
  /* 0x0018 */ unsigned __int64 StartCount;
  /* 0x0020 */ unsigned long ElapsedTime;
  /* 0x0024 */ unsigned long IoTime;
  /* 0x0028 */ unsigned long CopyTime;
  /* 0x002c */ unsigned long InitTime;
  /* 0x0030 */ unsigned long PagesWritten;
  /* 0x0034 */ unsigned long PagesProcessed;
  /* 0x0038 */ unsigned long BytesCopied;
  /* 0x003c */ unsigned long DumpCount;
  /* 0x0040 */ unsigned long FileRuns;
  /* 0x0048 */ unsigned __int64 ResumeAppStartTime;
  /* 0x0050 */ unsigned __int64 ResumeAppEndTime;
  /* 0x0058 */ unsigned __int64 HiberFileResumeTime;
} PO_HIBER_PERF, *PPO_HIBER_PERF; /* size: 0x0060 */

