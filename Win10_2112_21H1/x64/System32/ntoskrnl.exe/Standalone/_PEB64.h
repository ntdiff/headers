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

typedef union _ULARGE_INTEGER
{
  union
  {
    struct
    {
      /* 0x0000 */ unsigned long LowPart;
      /* 0x0004 */ unsigned long HighPart;
    }; /* size: 0x0008 */
    struct
    {
      /* 0x0000 */ unsigned long LowPart;
      /* 0x0004 */ unsigned long HighPart;
    } /* size: 0x0008 */ u;
    /* 0x0000 */ unsigned __int64 QuadPart;
  }; /* size: 0x0008 */
} ULARGE_INTEGER, *PULARGE_INTEGER; /* size: 0x0008 */

typedef struct _STRING64
{
  /* 0x0000 */ unsigned short Length;
  /* 0x0002 */ unsigned short MaximumLength;
  /* 0x0008 */ unsigned __int64 Buffer;
} STRING64, *PSTRING64; /* size: 0x0010 */

struct LIST_ENTRY64
{
  /* 0x0000 */ unsigned __int64 Flink;
  /* 0x0008 */ unsigned __int64 Blink;
}; /* size: 0x0010 */

typedef struct _PEB64
{
  /* 0x0000 */ unsigned char InheritedAddressSpace;
  /* 0x0001 */ unsigned char ReadImageFileExecOptions;
  /* 0x0002 */ unsigned char BeingDebugged;
  union
  {
    /* 0x0003 */ unsigned char BitField;
    struct /* bitfield */
    {
      /* 0x0003 */ unsigned char ImageUsesLargePages : 1; /* bit position: 0 */
      /* 0x0003 */ unsigned char IsProtectedProcess : 1; /* bit position: 1 */
      /* 0x0003 */ unsigned char IsImageDynamicallyRelocated : 1; /* bit position: 2 */
      /* 0x0003 */ unsigned char SkipPatchingUser32Forwarders : 1; /* bit position: 3 */
      /* 0x0003 */ unsigned char IsPackagedProcess : 1; /* bit position: 4 */
      /* 0x0003 */ unsigned char IsAppContainer : 1; /* bit position: 5 */
      /* 0x0003 */ unsigned char IsProtectedProcessLight : 1; /* bit position: 6 */
      /* 0x0003 */ unsigned char IsLongPathAwareProcess : 1; /* bit position: 7 */
    }; /* bitfield */
  }; /* size: 0x0001 */
  /* 0x0004 */ unsigned char Padding0[4];
  /* 0x0008 */ unsigned __int64 Mutant;
  /* 0x0010 */ unsigned __int64 ImageBaseAddress;
  /* 0x0018 */ unsigned __int64 Ldr;
  /* 0x0020 */ unsigned __int64 ProcessParameters;
  /* 0x0028 */ unsigned __int64 SubSystemData;
  /* 0x0030 */ unsigned __int64 ProcessHeap;
  /* 0x0038 */ unsigned __int64 FastPebLock;
  /* 0x0040 */ unsigned __int64 AtlThunkSListPtr;
  /* 0x0048 */ unsigned __int64 IFEOKey;
  union
  {
    /* 0x0050 */ unsigned long CrossProcessFlags;
    struct /* bitfield */
    {
      /* 0x0050 */ unsigned long ProcessInJob : 1; /* bit position: 0 */
      /* 0x0050 */ unsigned long ProcessInitializing : 1; /* bit position: 1 */
      /* 0x0050 */ unsigned long ProcessUsingVEH : 1; /* bit position: 2 */
      /* 0x0050 */ unsigned long ProcessUsingVCH : 1; /* bit position: 3 */
      /* 0x0050 */ unsigned long ProcessUsingFTH : 1; /* bit position: 4 */
      /* 0x0050 */ unsigned long ProcessPreviouslyThrottled : 1; /* bit position: 5 */
      /* 0x0050 */ unsigned long ProcessCurrentlyThrottled : 1; /* bit position: 6 */
      /* 0x0050 */ unsigned long ProcessImagesHotPatched : 1; /* bit position: 7 */
      /* 0x0050 */ unsigned long ReservedBits0 : 24; /* bit position: 8 */
    }; /* bitfield */
  }; /* size: 0x0004 */
  /* 0x0054 */ unsigned char Padding1[4];
  union
  {
    /* 0x0058 */ unsigned __int64 KernelCallbackTable;
    /* 0x0058 */ unsigned __int64 UserSharedInfoPtr;
  }; /* size: 0x0008 */
  /* 0x0060 */ unsigned long SystemReserved;
  /* 0x0064 */ unsigned long AtlThunkSListPtr32;
  /* 0x0068 */ unsigned __int64 ApiSetMap;
  /* 0x0070 */ unsigned long TlsExpansionCounter;
  /* 0x0074 */ unsigned char Padding2[4];
  /* 0x0078 */ unsigned __int64 TlsBitmap;
  /* 0x0080 */ unsigned long TlsBitmapBits[2];
  /* 0x0088 */ unsigned __int64 ReadOnlySharedMemoryBase;
  /* 0x0090 */ unsigned __int64 SharedData;
  /* 0x0098 */ unsigned __int64 ReadOnlyStaticServerData;
  /* 0x00a0 */ unsigned __int64 AnsiCodePageData;
  /* 0x00a8 */ unsigned __int64 OemCodePageData;
  /* 0x00b0 */ unsigned __int64 UnicodeCaseTableData;
  /* 0x00b8 */ unsigned long NumberOfProcessors;
  /* 0x00bc */ unsigned long NtGlobalFlag;
  /* 0x00c0 */ union _LARGE_INTEGER CriticalSectionTimeout;
  /* 0x00c8 */ unsigned __int64 HeapSegmentReserve;
  /* 0x00d0 */ unsigned __int64 HeapSegmentCommit;
  /* 0x00d8 */ unsigned __int64 HeapDeCommitTotalFreeThreshold;
  /* 0x00e0 */ unsigned __int64 HeapDeCommitFreeBlockThreshold;
  /* 0x00e8 */ unsigned long NumberOfHeaps;
  /* 0x00ec */ unsigned long MaximumNumberOfHeaps;
  /* 0x00f0 */ unsigned __int64 ProcessHeaps;
  /* 0x00f8 */ unsigned __int64 GdiSharedHandleTable;
  /* 0x0100 */ unsigned __int64 ProcessStarterHelper;
  /* 0x0108 */ unsigned long GdiDCAttributeList;
  /* 0x010c */ unsigned char Padding3[4];
  /* 0x0110 */ unsigned __int64 LoaderLock;
  /* 0x0118 */ unsigned long OSMajorVersion;
  /* 0x011c */ unsigned long OSMinorVersion;
  /* 0x0120 */ unsigned short OSBuildNumber;
  /* 0x0122 */ unsigned short OSCSDVersion;
  /* 0x0124 */ unsigned long OSPlatformId;
  /* 0x0128 */ unsigned long ImageSubsystem;
  /* 0x012c */ unsigned long ImageSubsystemMajorVersion;
  /* 0x0130 */ unsigned long ImageSubsystemMinorVersion;
  /* 0x0134 */ unsigned char Padding4[4];
  /* 0x0138 */ unsigned __int64 ActiveProcessAffinityMask;
  /* 0x0140 */ unsigned long GdiHandleBuffer[60];
  /* 0x0230 */ unsigned __int64 PostProcessInitRoutine;
  /* 0x0238 */ unsigned __int64 TlsExpansionBitmap;
  /* 0x0240 */ unsigned long TlsExpansionBitmapBits[32];
  /* 0x02c0 */ unsigned long SessionId;
  /* 0x02c4 */ unsigned char Padding5[4];
  /* 0x02c8 */ union _ULARGE_INTEGER AppCompatFlags;
  /* 0x02d0 */ union _ULARGE_INTEGER AppCompatFlagsUser;
  /* 0x02d8 */ unsigned __int64 pShimData;
  /* 0x02e0 */ unsigned __int64 AppCompatInfo;
  /* 0x02e8 */ struct _STRING64 CSDVersion;
  /* 0x02f8 */ unsigned __int64 ActivationContextData;
  /* 0x0300 */ unsigned __int64 ProcessAssemblyStorageMap;
  /* 0x0308 */ unsigned __int64 SystemDefaultActivationContextData;
  /* 0x0310 */ unsigned __int64 SystemAssemblyStorageMap;
  /* 0x0318 */ unsigned __int64 MinimumStackCommit;
  /* 0x0320 */ unsigned __int64 SparePointers[4];
  /* 0x0340 */ unsigned long SpareUlongs[5];
  /* 0x0358 */ unsigned __int64 WerRegistrationData;
  /* 0x0360 */ unsigned __int64 WerShipAssertPtr;
  /* 0x0368 */ unsigned __int64 pUnused;
  /* 0x0370 */ unsigned __int64 pImageHeaderHash;
  union
  {
    /* 0x0378 */ unsigned long TracingFlags;
    struct /* bitfield */
    {
      /* 0x0378 */ unsigned long HeapTracingEnabled : 1; /* bit position: 0 */
      /* 0x0378 */ unsigned long CritSecTracingEnabled : 1; /* bit position: 1 */
      /* 0x0378 */ unsigned long LibLoaderTracingEnabled : 1; /* bit position: 2 */
      /* 0x0378 */ unsigned long SpareTracingBits : 29; /* bit position: 3 */
    }; /* bitfield */
  }; /* size: 0x0004 */
  /* 0x037c */ unsigned char Padding6[4];
  /* 0x0380 */ unsigned __int64 CsrServerReadOnlySharedMemoryBase;
  /* 0x0388 */ unsigned __int64 TppWorkerpListLock;
  /* 0x0390 */ struct LIST_ENTRY64 TppWorkerpList;
  /* 0x03a0 */ unsigned __int64 WaitOnAddressHashTable[128];
  /* 0x07a0 */ unsigned __int64 TelemetryCoverageHeader;
  /* 0x07a8 */ unsigned long CloudFileFlags;
  /* 0x07ac */ unsigned long CloudFileDiagFlags;
  /* 0x07b0 */ char PlaceholderCompatibilityMode;
  /* 0x07b1 */ char PlaceholderCompatibilityModeReserved[7];
  /* 0x07b8 */ unsigned __int64 LeapSecondData;
  union
  {
    /* 0x07c0 */ unsigned long LeapSecondFlags;
    struct /* bitfield */
    {
      /* 0x07c0 */ unsigned long SixtySecondEnabled : 1; /* bit position: 0 */
      /* 0x07c0 */ unsigned long Reserved : 31; /* bit position: 1 */
    }; /* bitfield */
  }; /* size: 0x0004 */
  /* 0x07c4 */ unsigned long NtGlobalFlag2;
} PEB64, *PPEB64; /* size: 0x07c8 */

