typedef struct _SYSTEM_HYPERVISOR_QUERY_INFORMATION
{
  /* 0x0000 */ unsigned char HypervisorConnected;
  /* 0x0001 */ unsigned char Spare0[7];
  /* 0x0008 */ unsigned __int64 EnabledAddressSpaceEnlightenments;
} SYSTEM_HYPERVISOR_QUERY_INFORMATION, *PSYSTEM_HYPERVISOR_QUERY_INFORMATION; /* size: 0x0010 */

