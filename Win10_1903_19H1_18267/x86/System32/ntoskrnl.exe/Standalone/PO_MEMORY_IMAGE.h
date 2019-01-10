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
  /* 0x0010 */ unsigned long PageSelf;
  /* 0x0014 */ unsigned long PageSize;
  /* 0x0018 */ union _LARGE_INTEGER SystemTime;
  /* 0x0020 */ unsigned __int64 InterruptTime;
  /* 0x0028 */ unsigned __int64 FeatureFlags;
  /* 0x0030 */ unsigned char HiberFlags;
  /* 0x0031 */ unsigned char spare[3];
  /* 0x0034 */ unsigned long NoHiberPtes;
  /* 0x0038 */ unsigned long HiberVa;
  /* 0x003c */ unsigned long NoFreePages;
  /* 0x0040 */ unsigned long FreeMapCheck;
  /* 0x0044 */ unsigned long WakeCheck;
  /* 0x0048 */ unsigned __int64 NumPagesForLoader;
  /* 0x0050 */ unsigned long FirstBootRestorePage;
  /* 0x0054 */ unsigned long FirstKernelRestorePage;
  /* 0x0058 */ unsigned long FirstChecksumRestorePage;
  /* 0x0060 */ unsigned __int64 NoChecksumEntries;
  /* 0x0068 */ struct _PO_HIBER_PERF PerfInfo;
  /* 0x0260 */ unsigned long FirmwareRuntimeInformationPages;
  /* 0x0264 */ unsigned long FirmwareRuntimeInformation[1];
  /* 0x0268 */ unsigned long SpareUlong;
  /* 0x026c */ unsigned long NoBootLoaderLogPages;
  /* 0x0270 */ unsigned long BootLoaderLogPages[24];
  /* 0x02d0 */ unsigned long NotUsed;
  /* 0x02d4 */ unsigned long ResumeContextCheck;
  /* 0x02d8 */ unsigned long ResumeContextPages;
  /* 0x02dc */ unsigned char Hiberboot;
  /* 0x02dd */ unsigned char SecureLaunched;
  /* 0x02de */ unsigned char SecureBoot;
  /* 0x02e0 */ unsigned __int64 HvPageTableRoot;
  /* 0x02e8 */ unsigned __int64 HvEntryPoint;
  /* 0x02f0 */ unsigned __int64 HvReservedTransitionAddress;
  /* 0x02f8 */ unsigned __int64 HvReservedTransitionAddressSize;
  /* 0x0300 */ unsigned __int64 BootFlags;
  /* 0x0308 */ unsigned __int64 RestoreProcessorStateRoutine;
  /* 0x0310 */ unsigned long HighestPhysicalPage;
  /* 0x0314 */ unsigned long BitlockerKeyPfns[4];
  /* 0x0324 */ unsigned long HardwareSignature;
  /* 0x0328 */ union _LARGE_INTEGER SMBiosTablePhysicalAddress;
  /* 0x0330 */ unsigned long SMBiosTableLength;
  /* 0x0334 */ unsigned char SMBiosMajorVersion;
  /* 0x0335 */ unsigned char SMBiosMinorVersion;
  /* 0x0336 */ unsigned char HiberResumeXhciHandoffSkip;
  /* 0x0337 */ unsigned char InitializeUSBCore;
  /* 0x0338 */ unsigned char ValidUSBCoreId;
  /* 0x0339 */ unsigned char USBCoreId;
  /* 0x033a */ unsigned char SkipMemoryMapValidation;
  /* 0x033b */ char __PADDING__[5];
}; /* size: 0x0340 */

