typedef struct _NDIS_OBJECT_HEADER
{
  /* 0x0000 */ unsigned char Type;
  /* 0x0001 */ unsigned char Revision;
  /* 0x0002 */ unsigned short Size;
} NDIS_OBJECT_HEADER, *PNDIS_OBJECT_HEADER; /* size: 0x0004 */

typedef enum _NDIS_PROCESSOR_VENDOR
{
  NdisProcessorVendorUnknown = 0,
  NdisProcessorVendorGenuinIntel = 1,
  NdisProcessorVendorGenuineIntel = 1,
  NdisProcessorVendorAuthenticAMD = 2,
} NDIS_PROCESSOR_VENDOR, *PNDIS_PROCESSOR_VENDOR;

typedef struct _NDIS_PROCESSOR_INFO
{
  /* 0x0000 */ unsigned long CpuNumber;
  /* 0x0004 */ unsigned long PhysicalPackageId;
  /* 0x0008 */ unsigned long CoreId;
  /* 0x000c */ unsigned long HyperThreadID;
} NDIS_PROCESSOR_INFO, *PNDIS_PROCESSOR_INFO; /* size: 0x0010 */

typedef struct _NDIS_SYSTEM_PROCESSOR_INFO
{
  /* 0x0000 */ struct _NDIS_OBJECT_HEADER Header;
  /* 0x0004 */ unsigned long Flags;
  /* 0x0008 */ enum _NDIS_PROCESSOR_VENDOR ProcessorVendor;
  /* 0x000c */ unsigned long NumPhysicalPackages;
  /* 0x0010 */ unsigned long NumCores;
  /* 0x0014 */ unsigned long NumCoresPerPhysicalPackage;
  /* 0x0018 */ unsigned long MaxHyperThreadingCpusPerCore;
  /* 0x001c */ unsigned long RssBaseCpu;
  /* 0x0020 */ unsigned long RssCpuCount;
  /* 0x0028 */ unsigned char* RssProcessors;
  /* 0x0030 */ struct _NDIS_PROCESSOR_INFO CpuInfo[64];
} NDIS_SYSTEM_PROCESSOR_INFO, *PNDIS_SYSTEM_PROCESSOR_INFO; /* size: 0x0430 */

