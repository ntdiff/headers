typedef struct _HV_DETAILS
{
  /* 0x0000 */ unsigned long Data[4];
} HV_DETAILS, *PHV_DETAILS; /* size: 0x0010 */

typedef struct _SYSTEM_HYPERVISOR_DETAIL_INFORMATION
{
  /* 0x0000 */ struct _HV_DETAILS HvVendorAndMaxFunction;
  /* 0x0010 */ struct _HV_DETAILS HypervisorInterface;
  /* 0x0020 */ struct _HV_DETAILS HypervisorVersion;
  /* 0x0030 */ struct _HV_DETAILS HvFeatures;
  /* 0x0040 */ struct _HV_DETAILS HwFeatures;
  /* 0x0050 */ struct _HV_DETAILS EnlightenmentInfo;
  /* 0x0060 */ struct _HV_DETAILS ImplementationLimits;
} SYSTEM_HYPERVISOR_DETAIL_INFORMATION, *PSYSTEM_HYPERVISOR_DETAIL_INFORMATION; /* size: 0x0070 */

