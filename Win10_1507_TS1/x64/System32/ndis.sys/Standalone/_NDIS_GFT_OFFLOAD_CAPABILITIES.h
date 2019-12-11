typedef struct _NDIS_OBJECT_HEADER
{
  /* 0x0000 */ unsigned char Type;
  /* 0x0001 */ unsigned char Revision;
  /* 0x0002 */ unsigned short Size;
} NDIS_OBJECT_HEADER, *PNDIS_OBJECT_HEADER; /* size: 0x0004 */

typedef struct _NDIS_GFT_OFFLOAD_CAPABILITIES
{
  /* 0x0000 */ struct _NDIS_OBJECT_HEADER Header;
  /* 0x0004 */ unsigned long Flags;
  /* 0x0008 */ unsigned long CounterCapabilities;
  /* 0x000c */ unsigned long SupportedTableTypes;
  /* 0x0010 */ unsigned long SupportedEncapsulationTypes;
  /* 0x0014 */ unsigned long SupportedIngressExactMatchTableActions;
  /* 0x0018 */ unsigned long SupportedEgressExactMatchTableActions;
  /* 0x001c */ unsigned long SoftwareSupportedIngressExactMatchTableActions;
  /* 0x0020 */ unsigned long SoftwareSupportedEgressExactMatchTableActions;
  /* 0x0024 */ unsigned long SupportedIngressWildcardMatchTableActions;
  /* 0x0028 */ unsigned long SupportedEgressWildcardMatchTableActions;
  /* 0x002c */ unsigned long SoftwareSupportedIngressWildcardMatchTableActions;
  /* 0x0030 */ unsigned long SoftwareSupportedEgressWildcardMatchTableActions;
  /* 0x0034 */ unsigned long NumPacketCounterObjects;
  /* 0x0038 */ unsigned long NumByteCounterObjects;
  /* 0x003c */ unsigned long NumPacketAndByteCounterObjects;
  /* 0x0040 */ unsigned long NumCounterObjectsPerIngressExactMatchFlowEntry;
  /* 0x0044 */ unsigned long NumCounterObjectsPerEgressExactMatchFlowEntry;
  /* 0x0048 */ unsigned long NumCounterObjectsPerIngressWildcardMatchFlowEntry;
  /* 0x004c */ unsigned long NumCounterObjectsPerEgressWildcardMatchFlowEntry;
} NDIS_GFT_OFFLOAD_CAPABILITIES, *PNDIS_GFT_OFFLOAD_CAPABILITIES; /* size: 0x0050 */

