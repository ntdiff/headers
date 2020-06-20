typedef struct _LOADER_PARAMETER_HYPERVISOR_EXTENSION
{
  /* 0x0000 */ unsigned long InitialHypervisorCrashdumpAreaPageCount;
  /* 0x0004 */ unsigned long HypervisorCrashdumpAreaPageCount;
  /* 0x0008 */ unsigned __int64 InitialHypervisorCrashdumpAreaSpa;
  /* 0x0010 */ unsigned __int64 HypervisorCrashdumpAreaSpa;
  /* 0x0018 */ unsigned __int64 HypervisorLaunchStatus;
  /* 0x0020 */ unsigned __int64 HypervisorLaunchStatusArg1;
  /* 0x0028 */ unsigned __int64 HypervisorLaunchStatusArg2;
  /* 0x0030 */ unsigned __int64 HypervisorLaunchStatusArg3;
  /* 0x0038 */ unsigned __int64 HypervisorLaunchStatusArg4;
} LOADER_PARAMETER_HYPERVISOR_EXTENSION, *PLOADER_PARAMETER_HYPERVISOR_EXTENSION; /* size: 0x0040 */

