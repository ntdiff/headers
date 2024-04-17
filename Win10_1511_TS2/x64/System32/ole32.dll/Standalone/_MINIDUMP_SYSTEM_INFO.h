typedef union _CPU_INFORMATION
{
  union
  {
    struct
    {
      /* 0x0000 */ unsigned int VendorId[3];
      /* 0x000c */ unsigned int VersionInformation;
      /* 0x0010 */ unsigned int FeatureInformation;
      /* 0x0014 */ unsigned int AMDExtendedCpuFeatures;
    } /* size: 0x0018 */ X86CpuInfo;
    struct
    {
      /* 0x0000 */ unsigned __int64 ProcessorFeatures[2];
    } /* size: 0x0010 */ OtherCpuInfo;
  }; /* size: 0x0018 */
} CPU_INFORMATION, *PCPU_INFORMATION; /* size: 0x0018 */

typedef struct _MINIDUMP_SYSTEM_INFO
{
  /* 0x0000 */ unsigned short ProcessorArchitecture;
  /* 0x0002 */ unsigned short ProcessorLevel;
  /* 0x0004 */ unsigned short ProcessorRevision;
  union
  {
    /* 0x0006 */ unsigned short Reserved0;
    struct
    {
      /* 0x0006 */ unsigned char NumberOfProcessors;
      /* 0x0007 */ unsigned char ProductType;
    }; /* size: 0x0002 */
  }; /* size: 0x0002 */
  /* 0x0008 */ unsigned int MajorVersion;
  /* 0x000c */ unsigned int MinorVersion;
  /* 0x0010 */ unsigned int BuildNumber;
  /* 0x0014 */ unsigned int PlatformId;
  /* 0x0018 */ unsigned long CSDVersionRva;
  union
  {
    /* 0x001c */ unsigned int Reserved1;
    struct
    {
      /* 0x001c */ unsigned short SuiteMask;
      /* 0x001e */ unsigned short Reserved2;
    }; /* size: 0x0004 */
  }; /* size: 0x0004 */
  /* 0x0020 */ union _CPU_INFORMATION Cpu;
} MINIDUMP_SYSTEM_INFO, *PMINIDUMP_SYSTEM_INFO; /* size: 0x0038 */

