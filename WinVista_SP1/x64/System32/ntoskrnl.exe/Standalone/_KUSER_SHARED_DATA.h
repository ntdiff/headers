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
    struct // _TAG_UNNAMED_1
    {
      /* 0x0000 */ unsigned long LowPart;
      /* 0x0004 */ long HighPart;
    } /* size: 0x0008 */ u;
    /* 0x0000 */ __int64 QuadPart;
  }; /* size: 0x0008 */
} LARGE_INTEGER, *PLARGE_INTEGER; /* size: 0x0008 */

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
  /* 0x0248 */ unsigned long Reserved2[7];
  /* 0x0264 */ enum _NT_PRODUCT_TYPE NtProductType;
  /* 0x0268 */ unsigned char ProductTypeIsValid;
  /* 0x026c */ unsigned long NtMajorVersion;
  /* 0x0270 */ unsigned long NtMinorVersion;
  /* 0x0274 */ unsigned char ProcessorFeatures[64];
  /* 0x02b4 */ unsigned long Reserved1;
  /* 0x02b8 */ unsigned long Reserved3;
  /* 0x02bc */ volatile unsigned long TimeSlip;
  /* 0x02c0 */ enum _ALTERNATIVE_ARCHITECTURE_TYPE AlternativeArchitecture;
  /* 0x02c8 */ union _LARGE_INTEGER SystemExpirationDate;
  /* 0x02d0 */ unsigned long SuiteMask;
  /* 0x02d4 */ unsigned char KdDebuggerEnabled;
  /* 0x02d5 */ unsigned char NXSupportPolicy;
  /* 0x02d8 */ volatile unsigned long ActiveConsoleId;
  /* 0x02dc */ volatile unsigned long DismountCount;
  /* 0x02e0 */ unsigned long ComPlusPackage;
  /* 0x02e4 */ unsigned long LastSystemRITEventTickCount;
  /* 0x02e8 */ unsigned long NumberOfPhysicalPages;
  /* 0x02ec */ unsigned char SafeBootMode;
  union
  {
    /* 0x02f0 */ unsigned long SharedDataFlags;
    struct /* bitfield */
    {
      /* 0x02f0 */ unsigned long DbgErrorPortPresent : 1; /* bit position: 0 */
      /* 0x02f0 */ unsigned long DbgElevationEnabled : 1; /* bit position: 1 */
      /* 0x02f0 */ unsigned long DbgVirtEnabled : 1; /* bit position: 2 */
      /* 0x02f0 */ unsigned long DbgInstallerDetectEnabled : 1; /* bit position: 3 */
      /* 0x02f0 */ unsigned long DbgSystemDllRelocated : 1; /* bit position: 4 */
      /* 0x02f0 */ unsigned long DbgDynProcessorEnabled : 1; /* bit position: 5 */
      /* 0x02f0 */ unsigned long DbgSEHValidationEnabled : 1; /* bit position: 6 */
      /* 0x02f0 */ unsigned long SpareBits : 25; /* bit position: 7 */
    }; /* bitfield */
  }; /* size: 0x0004 */
  /* 0x02f8 */ unsigned __int64 TestRetInstruction;
  /* 0x0300 */ unsigned long SystemCall;
  /* 0x0304 */ unsigned long SystemCallReturn;
  /* 0x0308 */ unsigned __int64 SystemCallPad[3];
  union
  {
    /* 0x0320 */ volatile struct _KSYSTEM_TIME TickCount;
    /* 0x0320 */ volatile unsigned __int64 TickCountQuad;
  }; /* size: 0x000c */
  /* 0x0330 */ unsigned long Cookie;
  /* 0x0338 */ __int64 ConsoleSessionForegroundProcessId;
  /* 0x0340 */ unsigned long Wow64SharedInformation[16];
  /* 0x0380 */ unsigned short UserModeGlobalLogger[8];
  /* 0x0390 */ unsigned long HeapTracingPid[2];
  /* 0x0398 */ unsigned long CritSecTracingPid[2];
  /* 0x03a0 */ unsigned long ImageFileExecutionOptions;
  /* 0x03a4 */ unsigned long LangGenerationCount;
  union
  {
    /* 0x03a8 */ unsigned __int64 AffinityPad;
    /* 0x03a8 */ unsigned __int64 ActiveProcessorAffinity;
  }; /* size: 0x0008 */
  /* 0x03b0 */ volatile unsigned __int64 InterruptTimeBias;
} KUSER_SHARED_DATA, *PKUSER_SHARED_DATA; /* size: 0x03b8 */

