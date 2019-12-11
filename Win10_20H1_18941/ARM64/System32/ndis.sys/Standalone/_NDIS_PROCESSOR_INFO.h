typedef struct _NDIS_PROCESSOR_INFO
{
  /* 0x0000 */ unsigned long CpuNumber;
  /* 0x0004 */ unsigned long PhysicalPackageId;
  /* 0x0008 */ unsigned long CoreId;
  /* 0x000c */ unsigned long HyperThreadID;
} NDIS_PROCESSOR_INFO, *PNDIS_PROCESSOR_INFO; /* size: 0x0010 */

