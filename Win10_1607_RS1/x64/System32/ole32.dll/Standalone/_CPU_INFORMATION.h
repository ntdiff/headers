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

