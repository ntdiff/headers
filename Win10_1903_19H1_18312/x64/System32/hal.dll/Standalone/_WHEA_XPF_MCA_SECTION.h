typedef enum _WHEA_CPU_VENDOR
{
  WheaCpuVendorOther = 0,
  WheaCpuVendorIntel = 1,
  WheaCpuVendorAmd = 2,
} WHEA_CPU_VENDOR, *PWHEA_CPU_VENDOR;

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

typedef union _MCG_STATUS
{
  union
  {
    struct
    {
      struct /* bitfield */
      {
        /* 0x0000 */ unsigned long RestartIpValid : 1; /* bit position: 0 */
        /* 0x0000 */ unsigned long ErrorIpValid : 1; /* bit position: 1 */
        /* 0x0000 */ unsigned long MachineCheckInProgress : 1; /* bit position: 2 */
        /* 0x0000 */ unsigned long LocalMceValid : 1; /* bit position: 3 */
        /* 0x0000 */ unsigned long Reserved1 : 28; /* bit position: 4 */
      }; /* bitfield */
      /* 0x0004 */ unsigned long Reserved2;
    }; /* size: 0x0008 */
    /* 0x0000 */ unsigned __int64 QuadPart;
  }; /* size: 0x0008 */
} MCG_STATUS, *PMCG_STATUS; /* size: 0x0008 */

typedef struct _MCI_STATUS_BITS_COMMON
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned __int64 McaErrorCode : 16; /* bit position: 0 */
    /* 0x0000 */ unsigned __int64 ModelErrorCode : 16; /* bit position: 16 */
    /* 0x0000 */ unsigned __int64 Reserved : 25; /* bit position: 32 */
    /* 0x0000 */ unsigned __int64 ContextCorrupt : 1; /* bit position: 57 */
    /* 0x0000 */ unsigned __int64 AddressValid : 1; /* bit position: 58 */
    /* 0x0000 */ unsigned __int64 MiscValid : 1; /* bit position: 59 */
    /* 0x0000 */ unsigned __int64 ErrorEnabled : 1; /* bit position: 60 */
    /* 0x0000 */ unsigned __int64 UncorrectedError : 1; /* bit position: 61 */
    /* 0x0000 */ unsigned __int64 StatusOverFlow : 1; /* bit position: 62 */
    /* 0x0000 */ unsigned __int64 Valid : 1; /* bit position: 63 */
  }; /* bitfield */
} MCI_STATUS_BITS_COMMON, *PMCI_STATUS_BITS_COMMON; /* size: 0x0008 */

typedef struct _MCI_STATUS_AMD_BITS
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned __int64 McaErrorCode : 16; /* bit position: 0 */
    /* 0x0000 */ unsigned __int64 ModelErrorCode : 16; /* bit position: 16 */
    /* 0x0000 */ unsigned __int64 ImplementationSpecific2 : 11; /* bit position: 32 */
    /* 0x0000 */ unsigned __int64 Poison : 1; /* bit position: 43 */
    /* 0x0000 */ unsigned __int64 Deferred : 1; /* bit position: 44 */
    /* 0x0000 */ unsigned __int64 ImplementationSpecific1 : 12; /* bit position: 45 */
    /* 0x0000 */ unsigned __int64 ContextCorrupt : 1; /* bit position: 57 */
    /* 0x0000 */ unsigned __int64 AddressValid : 1; /* bit position: 58 */
    /* 0x0000 */ unsigned __int64 MiscValid : 1; /* bit position: 59 */
    /* 0x0000 */ unsigned __int64 ErrorEnabled : 1; /* bit position: 60 */
    /* 0x0000 */ unsigned __int64 UncorrectedError : 1; /* bit position: 61 */
    /* 0x0000 */ unsigned __int64 StatusOverFlow : 1; /* bit position: 62 */
    /* 0x0000 */ unsigned __int64 Valid : 1; /* bit position: 63 */
  }; /* bitfield */
} MCI_STATUS_AMD_BITS, *PMCI_STATUS_AMD_BITS; /* size: 0x0008 */

typedef struct _MCI_STATUS_INTEL_BITS
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned __int64 McaErrorCode : 16; /* bit position: 0 */
    /* 0x0000 */ unsigned __int64 ModelErrorCode : 16; /* bit position: 16 */
    /* 0x0000 */ unsigned __int64 OtherInfo : 5; /* bit position: 32 */
    /* 0x0000 */ unsigned __int64 FirmwareUpdateError : 1; /* bit position: 37 */
    /* 0x0000 */ unsigned __int64 CorrectedErrorCount : 15; /* bit position: 38 */
    /* 0x0000 */ unsigned __int64 ThresholdErrorStatus : 2; /* bit position: 53 */
    /* 0x0000 */ unsigned __int64 ActionRequired : 1; /* bit position: 55 */
    /* 0x0000 */ unsigned __int64 Signalling : 1; /* bit position: 56 */
    /* 0x0000 */ unsigned __int64 ContextCorrupt : 1; /* bit position: 57 */
    /* 0x0000 */ unsigned __int64 AddressValid : 1; /* bit position: 58 */
    /* 0x0000 */ unsigned __int64 MiscValid : 1; /* bit position: 59 */
    /* 0x0000 */ unsigned __int64 ErrorEnabled : 1; /* bit position: 60 */
    /* 0x0000 */ unsigned __int64 UncorrectedError : 1; /* bit position: 61 */
    /* 0x0000 */ unsigned __int64 StatusOverFlow : 1; /* bit position: 62 */
    /* 0x0000 */ unsigned __int64 Valid : 1; /* bit position: 63 */
  }; /* bitfield */
} MCI_STATUS_INTEL_BITS, *PMCI_STATUS_INTEL_BITS; /* size: 0x0008 */

typedef union _MCI_STATUS
{
  union
  {
    /* 0x0000 */ struct _MCI_STATUS_BITS_COMMON CommonBits;
    /* 0x0000 */ struct _MCI_STATUS_AMD_BITS AmdBits;
    /* 0x0000 */ struct _MCI_STATUS_INTEL_BITS IntelBits;
    /* 0x0000 */ unsigned __int64 QuadPart;
  }; /* size: 0x0008 */
} MCI_STATUS, *PMCI_STATUS; /* size: 0x0008 */

typedef struct _WHEA_AMD_EXTENDED_REGISTERS
{
  /* 0x0000 */ unsigned __int64 IPID;
  /* 0x0008 */ unsigned __int64 SYND;
  /* 0x0010 */ unsigned __int64 CONFIG;
  /* 0x0018 */ unsigned __int64 DESTAT;
  /* 0x0020 */ unsigned __int64 DEADDR;
  /* 0x0028 */ unsigned __int64 MISC1;
  /* 0x0030 */ unsigned __int64 MISC2;
  /* 0x0038 */ unsigned __int64 MISC3;
  /* 0x0040 */ unsigned __int64 MISC4;
  /* 0x0048 */ unsigned __int64 RasCap;
  /* 0x0050 */ unsigned __int64 Reserved[14];
} WHEA_AMD_EXTENDED_REGISTERS, *PWHEA_AMD_EXTENDED_REGISTERS; /* size: 0x00c0 */

typedef union _MCG_CAP
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned __int64 CountField : 8; /* bit position: 0 */
      /* 0x0000 */ unsigned __int64 ControlMsrPresent : 1; /* bit position: 8 */
      /* 0x0000 */ unsigned __int64 ExtendedMsrsPresent : 1; /* bit position: 9 */
      /* 0x0000 */ unsigned __int64 SignalingExtensionPresent : 1; /* bit position: 10 */
      /* 0x0000 */ unsigned __int64 ThresholdErrorStatusPresent : 1; /* bit position: 11 */
      /* 0x0000 */ unsigned __int64 Reserved : 4; /* bit position: 12 */
      /* 0x0000 */ unsigned __int64 ExtendedRegisterCount : 8; /* bit position: 16 */
      /* 0x0000 */ unsigned __int64 SoftwareErrorRecoverySupported : 1; /* bit position: 24 */
      /* 0x0000 */ unsigned __int64 EnhancedMachineCheckCapability : 1; /* bit position: 25 */
      /* 0x0000 */ unsigned __int64 ExtendedErrorLogging : 1; /* bit position: 26 */
      /* 0x0000 */ unsigned __int64 LocalMachineCheckException : 1; /* bit position: 27 */
    }; /* bitfield */
    /* 0x0000 */ unsigned __int64 QuadPart;
  }; /* size: 0x0008 */
} MCG_CAP, *PMCG_CAP; /* size: 0x0008 */

typedef struct _WHEA_XPF_MCA_SECTION
{
  /* 0x0000 */ unsigned long VersionNumber;
  /* 0x0004 */ enum _WHEA_CPU_VENDOR CpuVendor;
  /* 0x0008 */ union _LARGE_INTEGER Timestamp;
  /* 0x0010 */ unsigned long ProcessorNumber;
  /* 0x0014 */ union _MCG_STATUS GlobalStatus;
  /* 0x001c */ unsigned __int64 InstructionPointer;
  /* 0x0024 */ unsigned long BankNumber;
  /* 0x0028 */ union _MCI_STATUS Status;
  /* 0x0030 */ unsigned __int64 Address;
  /* 0x0038 */ unsigned __int64 Misc;
  /* 0x0040 */ unsigned long ExtendedRegisterCount;
  /* 0x0044 */ unsigned long ApicId;
  union
  {
    /* 0x0048 */ unsigned __int64 ExtendedRegisters[24];
    /* 0x0048 */ struct _WHEA_AMD_EXTENDED_REGISTERS AMDExtendedRegisters;
  }; /* size: 0x00c0 */
  /* 0x0108 */ union _MCG_CAP GlobalCapability;
} WHEA_XPF_MCA_SECTION, *PWHEA_XPF_MCA_SECTION; /* size: 0x0110 */

