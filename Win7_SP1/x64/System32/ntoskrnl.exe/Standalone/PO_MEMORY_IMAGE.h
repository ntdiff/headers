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

struct PO_MEMORY_IMAGE
{
  /* 0x0000 */ unsigned long Signature;
  /* 0x0004 */ unsigned long ImageType;
  /* 0x0008 */ unsigned long CheckSum;
  /* 0x000c */ unsigned long LengthSelf;
  /* 0x0010 */ unsigned __int64 PageSelf;
  /* 0x0018 */ unsigned long PageSize;
  /* 0x0020 */ union _LARGE_INTEGER SystemTime;
  /* 0x0028 */ unsigned __int64 InterruptTime;
  /* 0x0030 */ unsigned long FeatureFlags;
  /* 0x0034 */ unsigned char HiberFlags;
  /* 0x0035 */ unsigned char spare[3];
  /* 0x0038 */ unsigned long NoHiberPtes;
  /* 0x0040 */ unsigned __int64 HiberVa;
  /* 0x0048 */ union _LARGE_INTEGER HiberPte;
  /* 0x0050 */ unsigned long NoFreePages;
  /* 0x0054 */ unsigned long FreeMapCheck;
  /* 0x0058 */ unsigned long WakeCheck;
  /* 0x0060 */ unsigned __int64 FirstTablePage;
  /* 0x0068 */ struct _PO_HIBER_PERF PerfInfo;
  /* 0x00c0 */ unsigned long FirmwareRuntimeInformationPages;
  /* 0x00c8 */ unsigned __int64 FirmwareRuntimeInformation[1];
  /* 0x00d0 */ unsigned long NoBootLoaderLogPages;
  /* 0x00d8 */ unsigned __int64 BootLoaderLogPages[8];
  /* 0x0118 */ unsigned long NotUsed;
  /* 0x011c */ unsigned long ResumeContextCheck;
  /* 0x0120 */ unsigned long ResumeContextPages;
  /* 0x0124 */ long __PADDING__[1];
}; /* size: 0x0128 */

