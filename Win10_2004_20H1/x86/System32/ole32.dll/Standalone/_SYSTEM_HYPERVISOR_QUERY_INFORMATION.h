typedef struct _SYSTEM_HYPERVISOR_QUERY_INFORMATION
{
  /* 0x0000 */ unsigned char HypervisorConnected;
  /* 0x0001 */ unsigned char HypervisorDebuggingEnabled;
  /* 0x0002 */ unsigned char HypervisorPresent;
  /* 0x0003 */ unsigned char HypervisorSchedulerType;
  /* 0x0004 */ unsigned char Spare0[4];
  /* 0x0008 */ unsigned __int64 EnabledEnlightenments;
} SYSTEM_HYPERVISOR_QUERY_INFORMATION, *PSYSTEM_HYPERVISOR_QUERY_INFORMATION; /* size: 0x0010 */

