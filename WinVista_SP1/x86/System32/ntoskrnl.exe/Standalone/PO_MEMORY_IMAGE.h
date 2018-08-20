typedef union _LARGE_INTEGER
{
  union
  {
    struct
    {
      /* 0x0000 */ unsigned long LowPart;
      /* 0x0004 */ long HighPart;
    }; /* size: 0x0008 */
    struct // _TAG_UNNAMED_1
    {
      /* 0x0000 */ unsigned long LowPart;
      /* 0x0004 */ long HighPart;
    } /* size: 0x0008 */ u;
    /* 0x0000 */ __int64 QuadPart;
  }; /* size: 0x0008 */
} LARGE_INTEGER, *PLARGE_INTEGER; /* size: 0x0008 */

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

struct PO_MEMORY_IMAGE
{
  /* 0x0000 */ unsigned long Signature;
  /* 0x0004 */ unsigned long ImageType;
  /* 0x0008 */ unsigned long CheckSum;
  /* 0x000c */ unsigned long LengthSelf;
  /* 0x0010 */ unsigned long PageSelf;
  /* 0x0014 */ unsigned long PageSize;
  /* 0x0018 */ union _LARGE_INTEGER SystemTime;
  /* 0x0020 */ unsigned __int64 InterruptTime;
  /* 0x0028 */ unsigned long FeatureFlags;
  /* 0x002c */ unsigned char HiberFlags;
  /* 0x002d */ unsigned char spare[3];
  /* 0x0030 */ unsigned long NoHiberPtes;
  /* 0x0034 */ unsigned long HiberVa;
  /* 0x0038 */ union _LARGE_INTEGER HiberPte;
  /* 0x0040 */ unsigned long NoFreePages;
  /* 0x0044 */ unsigned long FreeMapCheck;
  /* 0x0048 */ unsigned long WakeCheck;
  /* 0x004c */ unsigned long TotalPages;
  /* 0x0050 */ unsigned long FirstTablePage;
  /* 0x0054 */ unsigned long LastFilePage;
  /* 0x0058 */ struct _PO_HIBER_PERF PerfInfo;
  /* 0x00b8 */ unsigned long FirmwareRuntimeInformationPages;
  /* 0x00bc */ unsigned long FirmwareRuntimeInformation[1];
  /* 0x00c0 */ unsigned long NoBootLoaderLogPages;
  /* 0x00c4 */ unsigned long BootLoaderLogPages[8];
  /* 0x00e4 */ unsigned long NotUsed;
  /* 0x00e8 */ unsigned long ResumeContextCheck;
  /* 0x00ec */ unsigned long ResumeContextPages;
}; /* size: 0x00f0 */

