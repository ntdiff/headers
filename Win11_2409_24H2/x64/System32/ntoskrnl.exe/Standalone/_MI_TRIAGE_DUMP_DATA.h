typedef union _MI_FLAGS
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned __int64 VerifierEnabled : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned __int64 KernelVerifierEnabled : 1; /* bit position: 1 */
      /* 0x0000 */ unsigned __int64 LargePageKernel : 1; /* bit position: 2 */
      /* 0x0000 */ unsigned __int64 StopOn4d : 1; /* bit position: 3 */
      /* 0x0000 */ unsigned __int64 InitializationPhase : 2; /* bit position: 4 */
      /* 0x0000 */ unsigned __int64 PageKernelStacks : 1; /* bit position: 6 */
      /* 0x0000 */ unsigned __int64 CheckZeroPages : 1; /* bit position: 7 */
      /* 0x0000 */ unsigned __int64 ProcessorPrewalks : 1; /* bit position: 8 */
      /* 0x0000 */ unsigned __int64 ProcessorPostwalks : 1; /* bit position: 9 */
      /* 0x0000 */ unsigned __int64 CoverageBuild : 1; /* bit position: 10 */
      /* 0x0000 */ unsigned __int64 CheckExecute : 1; /* bit position: 11 */
      /* 0x0000 */ unsigned __int64 ProtectedPagesEnabled : 1; /* bit position: 12 */
      /* 0x0000 */ unsigned __int64 SecureRelocations : 1; /* bit position: 13 */
      /* 0x0000 */ unsigned __int64 StrongPageIdentity : 1; /* bit position: 14 */
      /* 0x0000 */ unsigned __int64 StrongCodeGuarantees : 1; /* bit position: 15 */
      /* 0x0000 */ unsigned __int64 HardCodeGuarantees : 1; /* bit position: 16 */
      /* 0x0000 */ unsigned __int64 ExecutePagePrivilegeRequired : 1; /* bit position: 17 */
      /* 0x0000 */ unsigned __int64 SecureKernelCfgEnabled : 1; /* bit position: 18 */
      /* 0x0000 */ unsigned __int64 FullHvci : 1; /* bit position: 19 */
      /* 0x0000 */ unsigned __int64 BootDebuggerActive : 1; /* bit position: 20 */
      /* 0x0000 */ unsigned __int64 KvaShadow : 2; /* bit position: 21 */
      /* 0x0000 */ unsigned __int64 ExceptionHandlingReady : 1; /* bit position: 23 */
      /* 0x0000 */ unsigned __int64 ShadowStacksSupported : 1; /* bit position: 24 */
      /* 0x0000 */ unsigned __int64 AccessBitFenceRequired : 1; /* bit position: 25 */
      /* 0x0000 */ unsigned __int64 AccessBitReplacementCapability : 2; /* bit position: 26 */
      /* 0x0000 */ unsigned __int64 PfnDatabaseExists : 1; /* bit position: 28 */
      /* 0x0000 */ unsigned __int64 PfnDatabaseGapsFilled : 1; /* bit position: 29 */
      /* 0x0000 */ unsigned __int64 SystemPtesReady : 1; /* bit position: 30 */
      /* 0x0000 */ unsigned __int64 BootImageUnprivilegedPagesUnregistered : 1; /* bit position: 31 */
      /* 0x0000 */ unsigned __int64 ImageProtectedSlabExecutableOnly : 1; /* bit position: 32 */
      /* 0x0000 */ unsigned __int64 SpecialReadOnlyProtectedSlabPages : 1; /* bit position: 33 */
      /* 0x0000 */ unsigned __int64 SlabAllocatorsReady : 1; /* bit position: 34 */
      /* 0x0000 */ unsigned __int64 KasanEnabled : 1; /* bit position: 35 */
      /* 0x0000 */ unsigned __int64 HvptEnabled : 1; /* bit position: 36 */
      /* 0x0000 */ unsigned __int64 HvptVisible : 1; /* bit position: 37 */
      /* 0x0000 */ unsigned __int64 ProcessorsConfigured : 1; /* bit position: 38 */
      /* 0x0000 */ unsigned __int64 GlobalBitsInitialized : 1; /* bit position: 39 */
      /* 0x0000 */ unsigned __int64 GlobalBitsChanging : 1; /* bit position: 40 */
      /* 0x0000 */ unsigned __int64 ProcessorSupportsShadowStacks : 1; /* bit position: 41 */
    }; /* bitfield */
    /* 0x0000 */ unsigned __int64 EntireField;
  }; /* size: 0x0008 */
} MI_FLAGS, *PMI_FLAGS; /* size: 0x0008 */

typedef struct _MI_TRIAGE_DUMP_DATA
{
  /* 0x0000 */ unsigned __int64 BadPageCount;
  /* 0x0008 */ unsigned long BadPagesDetected;
  /* 0x000c */ long ZeroedPageSingleBitErrorsDetected;
  /* 0x0010 */ long ScrubPasses;
  /* 0x0014 */ long ScrubBadPagesFound;
  /* 0x0018 */ unsigned long PageHashErrors;
  /* 0x0020 */ unsigned __int64 FeatureBits;
  /* 0x0028 */ unsigned long TimeZoneId;
  /* 0x0030 */ union _MI_FLAGS Flags;
  /* 0x0038 */ void* VsmConnection;
} MI_TRIAGE_DUMP_DATA, *PMI_TRIAGE_DUMP_DATA; /* size: 0x0040 */

