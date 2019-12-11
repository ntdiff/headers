typedef struct _KSYSTEM_TIME
{
  /* 0x0000 */ unsigned long LowPart;
  /* 0x0004 */ long High1Time;
  /* 0x0008 */ long High2Time;
} KSYSTEM_TIME, *PKSYSTEM_TIME; /* size: 0x000c */

typedef enum _NT_PRODUCT_TYPE
{
  NtProductWinNt = 1,
  NtProductLanManNt = 2,
  NtProductServer = 3,
} NT_PRODUCT_TYPE, *PNT_PRODUCT_TYPE;

typedef enum _ALTERNATIVE_ARCHITECTURE_TYPE
{
  StandardDesign = 0,
  NEC98x86 = 1,
  EndAlternatives = 2,
} ALTERNATIVE_ARCHITECTURE_TYPE, *PALTERNATIVE_ARCHITECTURE_TYPE;

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

typedef struct _XSTATE_FEATURE
{
  /* 0x0000 */ unsigned long Offset;
  /* 0x0004 */ unsigned long Size;
} XSTATE_FEATURE, *PXSTATE_FEATURE; /* size: 0x0008 */

typedef struct _XSTATE_CONFIGURATION
{
  /* 0x0000 */ unsigned __int64 EnabledFeatures;
  /* 0x0008 */ unsigned __int64 EnabledVolatileFeatures;
  /* 0x0010 */ unsigned long Size;
  union
  {
    /* 0x0014 */ unsigned long ControlFlags;
    struct /* bitfield */
    {
      /* 0x0014 */ unsigned long OptimizedSave : 1; /* bit position: 0 */
      /* 0x0014 */ unsigned long CompactionEnabled : 1; /* bit position: 1 */
    }; /* bitfield */
  }; /* size: 0x0004 */
  /* 0x0018 */ struct _XSTATE_FEATURE Features[64];
  /* 0x0218 */ unsigned __int64 EnabledSupervisorFeatures;
  /* 0x0220 */ unsigned __int64 AlignedFeatures;
  /* 0x0228 */ unsigned long AllFeatureSize;
  /* 0x022c */ unsigned long AllFeatures[64];
  /* 0x032c */ long __PADDING__[1];
} XSTATE_CONFIGURATION, *PXSTATE_CONFIGURATION; /* size: 0x0330 */

typedef struct _KUSER_SHARED_DATA
{
  /* 0x0000 */ unsigned long TickCountLowDeprecated;
  /* 0x0004 */ unsigned long TickCountMultiplier;
  /* 0x0008 */ volatile struct _KSYSTEM_TIME InterruptTime;
  /* 0x0014 */ volatile struct _KSYSTEM_TIME SystemTime;
  /* 0x0020 */ volatile struct _KSYSTEM_TIME TimeZoneBias;
  /* 0x002c */ unsigned short ImageNumberLow;
  /* 0x002e */ unsigned short ImageNumberHigh;
  /* 0x0030 */ wchar_t NtSystemRoot[260];
  /* 0x0238 */ unsigned long MaxStackTraceDepth;
  /* 0x023c */ unsigned long CryptoExponent;
  /* 0x0240 */ unsigned long TimeZoneId;
  /* 0x0244 */ unsigned long LargePageMinimum;
  /* 0x0248 */ unsigned long AitSamplingValue;
  /* 0x024c */ unsigned long AppCompatFlag;
  /* 0x0250 */ unsigned __int64 RNGSeedVersion;
  /* 0x0258 */ unsigned long GlobalValidationRunlevel;
  /* 0x025c */ volatile long TimeZoneBiasStamp;
  /* 0x0260 */ unsigned long NtBuildNumber;
  /* 0x0264 */ enum _NT_PRODUCT_TYPE NtProductType;
  /* 0x0268 */ unsigned char ProductTypeIsValid;
  /* 0x0269 */ unsigned char Reserved0[1];
  /* 0x026a */ unsigned short NativeProcessorArchitecture;
  /* 0x026c */ unsigned long NtMajorVersion;
  /* 0x0270 */ unsigned long NtMinorVersion;
  /* 0x0274 */ unsigned char ProcessorFeatures[64];
  /* 0x02b4 */ unsigned long Reserved1;
  /* 0x02b8 */ unsigned long Reserved3;
  /* 0x02bc */ volatile unsigned long TimeSlip;
  /* 0x02c0 */ enum _ALTERNATIVE_ARCHITECTURE_TYPE AlternativeArchitecture;
  /* 0x02c4 */ unsigned long BootId;
  /* 0x02c8 */ union _LARGE_INTEGER SystemExpirationDate;
  /* 0x02d0 */ unsigned long SuiteMask;
  /* 0x02d4 */ unsigned char KdDebuggerEnabled;
  union
  {
    /* 0x02d5 */ unsigned char MitigationPolicies;
    struct /* bitfield */
    {
      /* 0x02d5 */ unsigned char NXSupportPolicy : 2; /* bit position: 0 */
      /* 0x02d5 */ unsigned char SEHValidationPolicy : 2; /* bit position: 2 */
      /* 0x02d5 */ unsigned char CurDirDevicesSkippedForDlls : 2; /* bit position: 4 */
      /* 0x02d5 */ unsigned char Reserved : 2; /* bit position: 6 */
    }; /* bitfield */
  }; /* size: 0x0001 */
  /* 0x02d6 */ unsigned char Reserved6[2];
  /* 0x02d8 */ volatile unsigned long ActiveConsoleId;
  /* 0x02dc */ volatile unsigned long DismountCount;
  /* 0x02e0 */ unsigned long ComPlusPackage;
  /* 0x02e4 */ unsigned long LastSystemRITEventTickCount;
  /* 0x02e8 */ unsigned long NumberOfPhysicalPages;
  /* 0x02ec */ unsigned char SafeBootMode;
  /* 0x02ed */ unsigned char VirtualizationFlags;
  /* 0x02ee */ unsigned char Reserved12[2];
  union
  {
    /* 0x02f0 */ unsigned long SharedDataFlags;
    struct /* bitfield */
    {
      /* 0x02f0 */ unsigned long DbgErrorPortPresent : 1; /* bit position: 0 */
      /* 0x02f0 */ unsigned long DbgElevationEnabled : 1; /* bit position: 1 */
      /* 0x02f0 */ unsigned long DbgVirtEnabled : 1; /* bit position: 2 */
      /* 0x02f0 */ unsigned long DbgInstallerDetectEnabled : 1; /* bit position: 3 */
      /* 0x02f0 */ unsigned long DbgLkgEnabled : 1; /* bit position: 4 */
      /* 0x02f0 */ unsigned long DbgDynProcessorEnabled : 1; /* bit position: 5 */
      /* 0x02f0 */ unsigned long DbgConsoleBrokerEnabled : 1; /* bit position: 6 */
      /* 0x02f0 */ unsigned long DbgSecureBootEnabled : 1; /* bit position: 7 */
      /* 0x02f0 */ unsigned long DbgMultiSessionSku : 1; /* bit position: 8 */
      /* 0x02f0 */ unsigned long DbgMultiUsersInSessionSku : 1; /* bit position: 9 */
      /* 0x02f0 */ unsigned long DbgStateSeparationEnabled : 1; /* bit position: 10 */
      /* 0x02f0 */ unsigned long SpareBits : 21; /* bit position: 11 */
    }; /* bitfield */
  }; /* size: 0x0004 */
  /* 0x02f4 */ unsigned long DataFlagsPad[1];
  /* 0x02f8 */ unsigned __int64 TestRetInstruction;
  /* 0x0300 */ __int64 QpcFrequency;
  /* 0x0308 */ unsigned long SystemCall;
  /* 0x030c */ unsigned long SystemCallPad0;
  /* 0x0310 */ unsigned __int64 SystemCallPad[2];
  union
  {
    /* 0x0320 */ volatile struct _KSYSTEM_TIME TickCount;
    /* 0x0320 */ volatile unsigned __int64 TickCountQuad;
    /* 0x0320 */ unsigned long ReservedTickCountOverlay[3];
  }; /* size: 0x000c */
  /* 0x032c */ unsigned long TickCountPad[1];
  /* 0x0330 */ unsigned long Cookie;
  /* 0x0334 */ unsigned long CookiePad[1];
  /* 0x0338 */ __int64 ConsoleSessionForegroundProcessId;
  /* 0x0340 */ unsigned __int64 TimeUpdateLock;
  /* 0x0348 */ unsigned __int64 BaselineSystemTimeQpc;
  /* 0x0350 */ unsigned __int64 BaselineInterruptTimeQpc;
  /* 0x0358 */ unsigned __int64 QpcSystemTimeIncrement;
  /* 0x0360 */ unsigned __int64 QpcInterruptTimeIncrement;
  /* 0x0368 */ unsigned char QpcSystemTimeIncrementShift;
  /* 0x0369 */ unsigned char QpcInterruptTimeIncrementShift;
  /* 0x036a */ unsigned short UnparkedProcessorCount;
  /* 0x036c */ unsigned long EnclaveFeatureMask[4];
  /* 0x037c */ unsigned long TelemetryCoverageRound;
  /* 0x0380 */ unsigned short UserModeGlobalLogger[16];
  /* 0x03a0 */ unsigned long ImageFileExecutionOptions;
  /* 0x03a4 */ unsigned long LangGenerationCount;
  /* 0x03a8 */ unsigned __int64 Reserved4;
  /* 0x03b0 */ volatile unsigned __int64 InterruptTimeBias;
  /* 0x03b8 */ volatile unsigned __int64 QpcBias;
  /* 0x03c0 */ unsigned long ActiveProcessorCount;
  /* 0x03c4 */ volatile unsigned char ActiveGroupCount;
  /* 0x03c5 */ unsigned char Reserved9;
  union
  {
    /* 0x03c6 */ unsigned short QpcData;
    struct
    {
      /* 0x03c6 */ volatile unsigned char QpcBypassEnabled;
      /* 0x03c7 */ unsigned char QpcShift;
    }; /* size: 0x0002 */
  }; /* size: 0x0002 */
  /* 0x03c8 */ union _LARGE_INTEGER TimeZoneBiasEffectiveStart;
  /* 0x03d0 */ union _LARGE_INTEGER TimeZoneBiasEffectiveEnd;
  /* 0x03d8 */ struct _XSTATE_CONFIGURATION XState;
} KUSER_SHARED_DATA, *PKUSER_SHARED_DATA; /* size: 0x0708 */

