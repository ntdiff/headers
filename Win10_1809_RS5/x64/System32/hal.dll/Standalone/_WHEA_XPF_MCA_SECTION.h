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
    struct // _TAG_UNNAMED_3
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

typedef union _MCI_STATUS
{
  union
  {
    struct
    {
      /* 0x0000 */ unsigned short McaErrorCode;
      /* 0x0002 */ unsigned short ModelErrorCode;
      struct /* bitfield */
      {
        /* 0x0004 */ unsigned long OtherInformation : 23; /* bit position: 0 */
        /* 0x0004 */ unsigned long ActionRequired : 1; /* bit position: 23 */
        /* 0x0004 */ unsigned long Signalling : 1; /* bit position: 24 */
        /* 0x0004 */ unsigned long ContextCorrupt : 1; /* bit position: 25 */
        /* 0x0004 */ unsigned long AddressValid : 1; /* bit position: 26 */
        /* 0x0004 */ unsigned long MiscValid : 1; /* bit position: 27 */
        /* 0x0004 */ unsigned long ErrorEnabled : 1; /* bit position: 28 */
        /* 0x0004 */ unsigned long UncorrectedError : 1; /* bit position: 29 */
        /* 0x0004 */ unsigned long StatusOverFlow : 1; /* bit position: 30 */
        /* 0x0004 */ unsigned long Valid : 1; /* bit position: 31 */
      }; /* bitfield */
    }; /* size: 0x0008 */
    /* 0x0000 */ unsigned __int64 QuadPart;
  }; /* size: 0x0008 */
} MCI_STATUS, *PMCI_STATUS; /* size: 0x0008 */

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
  /* 0x0048 */ unsigned __int64 ExtendedRegisters[24];
} WHEA_XPF_MCA_SECTION, *PWHEA_XPF_MCA_SECTION; /* size: 0x0108 */

