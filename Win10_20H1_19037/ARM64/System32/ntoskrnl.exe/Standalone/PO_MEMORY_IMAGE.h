typedef union _LARGE_INTEGER
{
  union
  {
    struct
    {
      /* 0x0000 */ unsigned long LowPart;
      /* 0x0004 */ long HighPart;
    }; /* size: 0x0008 */
    struct
    {
      /* 0x0000 */ unsigned long LowPart;
      /* 0x0004 */ long HighPart;
    } /* size: 0x0008 */ u;
    /* 0x0000 */ __int64 QuadPart;
  }; /* size: 0x0008 */
} LARGE_INTEGER, *PLARGE_INTEGER; /* size: 0x0008 */

typedef struct _PO_HIBER_PERF
{
  /* 0x0000 */ unsigned __int64 HiberIoTicks;
  /* 0x0008 */ unsigned __int64 HiberIoCpuTicks;
  /* 0x0010 */ unsigned __int64 HiberInitTicks;
  /* 0x0018 */ unsigned __int64 HiberHiberFileTicks;
  /* 0x0020 */ unsigned __int64 HiberCompressTicks;
  /* 0x0028 */ unsigned __int64 HiberSharedBufferTicks;
  /* 0x0030 */ unsigned __int64 HiberChecksumTicks;
  /* 0x0038 */ unsigned __int64 HiberChecksumIoTicks;
  /* 0x0040 */ union _LARGE_INTEGER TotalHibernateTime;
  /* 0x0048 */ union _LARGE_INTEGER HibernateCompleteTimestamp;
  /* 0x0050 */ unsigned long POSTTime;
  /* 0x0054 */ unsigned long ResumeBootMgrTime;
  /* 0x0058 */ unsigned long BootmgrUserInputTime;
  /* 0x0060 */ unsigned __int64 ResumeAppTicks;
  /* 0x0068 */ unsigned __int64 ResumeAppStartTimestamp;
  /* 0x0070 */ unsigned __int64 ResumeLibraryInitTicks;
  /* 0x0078 */ unsigned __int64 ResumeInitTicks;
  /* 0x0080 */ unsigned __int64 ResumeRestoreImageStartTimestamp;
  /* 0x0088 */ unsigned __int64 ResumeHiberFileTicks;
  /* 0x0090 */ unsigned __int64 ResumeIoTicks;
  /* 0x0098 */ unsigned __int64 ResumeDecompressTicks;
  /* 0x00a0 */ unsigned __int64 ResumeAllocateTicks;
  /* 0x00a8 */ unsigned __int64 ResumeUserInOutTicks;
  /* 0x00b0 */ unsigned __int64 ResumeMapTicks;
  /* 0x00b8 */ unsigned __int64 ResumeUnmapTicks;
  /* 0x00c0 */ unsigned __int64 ResumeChecksumTicks;
  /* 0x00c8 */ unsigned __int64 ResumeChecksumIoTicks;
  /* 0x00d0 */ unsigned __int64 ResumeKernelSwitchTimestamp;
  /* 0x00d8 */ unsigned __int64 CyclesPerMs;
  /* 0x00e0 */ unsigned __int64 WriteLogDataTimestamp;
  /* 0x00e8 */ unsigned __int64 KernelReturnFromHandler;
  /* 0x00f0 */ unsigned __int64 TimeStampCounterAtSwitchTime;
  /* 0x00f8 */ unsigned __int64 HalTscOffset;
  /* 0x0100 */ unsigned __int64 HvlTscOffset;
  /* 0x0108 */ unsigned __int64 SleeperThreadEnd;
  /* 0x0110 */ unsigned __int64 PostCmosUpdateTimestamp;
  /* 0x0118 */ unsigned __int64 KernelReturnSystemPowerStateTimestamp;
  /* 0x0120 */ unsigned __int64 IoBoundedness;
  /* 0x0128 */ unsigned __int64 KernelDecompressTicks;
  /* 0x0130 */ unsigned __int64 KernelIoTicks;
  /* 0x0138 */ unsigned __int64 KernelCopyTicks;
  /* 0x0140 */ unsigned __int64 ReadCheckCount;
  /* 0x0148 */ unsigned __int64 KernelInitTicks;
  /* 0x0150 */ unsigned __int64 KernelResumeHiberFileTicks;
  /* 0x0158 */ unsigned __int64 KernelIoCpuTicks;
  /* 0x0160 */ unsigned __int64 KernelSharedBufferTicks;
  /* 0x0168 */ unsigned __int64 KernelAnimationTicks;
  /* 0x0170 */ unsigned __int64 KernelChecksumTicks;
  /* 0x0178 */ unsigned __int64 KernelChecksumIoTicks;
  /* 0x0180 */ union _LARGE_INTEGER AnimationStart;
  /* 0x0188 */ union _LARGE_INTEGER AnimationStop;
  /* 0x0190 */ unsigned long DeviceResumeTime;
  /* 0x0198 */ unsigned __int64 SecurePagesProcessed;
  /* 0x01a0 */ unsigned __int64 BootPagesProcessed;
  /* 0x01a8 */ unsigned __int64 KernelPagesProcessed;
  /* 0x01b0 */ unsigned __int64 BootBytesWritten;
  /* 0x01b8 */ unsigned __int64 KernelBytesWritten;
  /* 0x01c0 */ unsigned __int64 BootPagesWritten;
  /* 0x01c8 */ unsigned __int64 KernelPagesWritten;
  /* 0x01d0 */ unsigned __int64 BytesWritten;
  /* 0x01d8 */ unsigned long PagesWritten;
  /* 0x01dc */ unsigned long FileRuns;
  /* 0x01e0 */ unsigned long NoMultiStageResumeReason;
  /* 0x01e4 */ unsigned long MaxHuffRatio;
  /* 0x01e8 */ unsigned __int64 AdjustedTotalResumeTime;
  /* 0x01f0 */ unsigned __int64 ResumeCompleteTimestamp;
} PO_HIBER_PERF, *PPO_HIBER_PERF; /* size: 0x01f8 */

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
  /* 0x0035 */ unsigned char HiberSimulateFlags;
  /* 0x0036 */ unsigned char spare[2];
  /* 0x0038 */ unsigned long NoHiberPtes;
  /* 0x0040 */ unsigned __int64 HiberVa;
  /* 0x0048 */ unsigned long NoFreePages;
  /* 0x004c */ unsigned long FreeMapCheck;
  /* 0x0050 */ unsigned long WakeCheck;
  /* 0x0058 */ unsigned __int64 NumPagesForLoader;
  /* 0x0060 */ unsigned __int64 FirstSecureRestorePage;
  /* 0x0068 */ unsigned __int64 FirstBootRestorePage;
  /* 0x0070 */ unsigned __int64 FirstKernelRestorePage;
  /* 0x0078 */ unsigned __int64 FirstChecksumRestorePage;
  /* 0x0080 */ unsigned __int64 NoChecksumEntries;
  /* 0x0088 */ struct _PO_HIBER_PERF PerfInfo;
  /* 0x0280 */ unsigned long FirmwareRuntimeInformationPages;
  /* 0x0288 */ unsigned __int64 FirmwareRuntimeInformation[1];
  /* 0x0290 */ unsigned long SpareUlong;
  /* 0x0294 */ unsigned long NoBootLoaderLogPages;
  /* 0x0298 */ unsigned __int64 BootLoaderLogPages[24];
  /* 0x0358 */ unsigned long NotUsed;
  /* 0x035c */ unsigned long ResumeContextCheck;
  /* 0x0360 */ unsigned long ResumeContextPages;
  /* 0x0364 */ unsigned char Hiberboot;
  /* 0x0365 */ unsigned char SecureLaunched;
  /* 0x0366 */ unsigned char SecureBoot;
  /* 0x0368 */ unsigned __int64 HvPageTableRoot;
  /* 0x0370 */ unsigned __int64 HvEntryPoint;
  /* 0x0378 */ unsigned __int64 HvReservedTransitionAddress;
  /* 0x0380 */ unsigned __int64 HvReservedTransitionAddressSize;
  /* 0x0388 */ unsigned __int64 BootFlags;
  /* 0x0390 */ unsigned __int64 RestoreProcessorStateRoutine;
  /* 0x0398 */ unsigned __int64 HighestPhysicalPage;
  /* 0x03a0 */ unsigned __int64 BitlockerKeyPfns[4];
  /* 0x03c0 */ unsigned long HardwareSignature;
  /* 0x03c8 */ union _LARGE_INTEGER SMBiosTablePhysicalAddress;
  /* 0x03d0 */ unsigned long SMBiosTableLength;
  /* 0x03d4 */ unsigned char SMBiosMajorVersion;
  /* 0x03d5 */ unsigned char SMBiosMinorVersion;
  /* 0x03d6 */ unsigned char HiberResumeXhciHandoffSkip;
  /* 0x03d7 */ unsigned char InitializeUSBCore;
  /* 0x03d8 */ unsigned char ValidUSBCoreId;
  /* 0x03d9 */ unsigned char USBCoreId;
  /* 0x03da */ unsigned char SkipMemoryMapValidation;
  /* 0x03db */ char __PADDING__[5];
}; /* size: 0x03e0 */

