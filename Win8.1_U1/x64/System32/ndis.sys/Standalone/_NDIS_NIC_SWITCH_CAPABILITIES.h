typedef struct _NDIS_OBJECT_HEADER
{
  /* 0x0000 */ unsigned char Type;
  /* 0x0001 */ unsigned char Revision;
  /* 0x0002 */ unsigned short Size;
} NDIS_OBJECT_HEADER, *PNDIS_OBJECT_HEADER; /* size: 0x0004 */

typedef struct _NDIS_NIC_SWITCH_CAPABILITIES
{
  /* 0x0000 */ struct _NDIS_OBJECT_HEADER Header;
  /* 0x0004 */ unsigned long Flags;
  /* 0x0008 */ unsigned long NdisReserved1;
  /* 0x000c */ unsigned long NumTotalMacAddresses;
  /* 0x0010 */ unsigned long NumMacAddressesPerPort;
  /* 0x0014 */ unsigned long NumVlansPerPort;
  /* 0x0018 */ unsigned long NdisReserved2;
  /* 0x001c */ unsigned long NdisReserved3;
  /* 0x0020 */ unsigned long NicSwitchCapabilities;
  /* 0x0024 */ unsigned long MaxNumSwitches;
  /* 0x0028 */ unsigned long MaxNumVPorts;
  /* 0x002c */ unsigned long NdisReserved4;
  /* 0x0030 */ unsigned long MaxNumVFs;
  /* 0x0034 */ unsigned long MaxNumQueuePairs;
  /* 0x0038 */ unsigned long NdisReserved5;
  /* 0x003c */ unsigned long NdisReserved6;
  /* 0x0040 */ unsigned long NdisReserved7;
  /* 0x0044 */ unsigned long MaxNumQueuePairsPerNonDefaultVPort;
  /* 0x0048 */ unsigned long NdisReserved8;
  /* 0x004c */ unsigned long NdisReserved9;
  /* 0x0050 */ unsigned long NdisReserved10;
  /* 0x0054 */ unsigned long NdisReserved11;
  /* 0x0058 */ unsigned long NdisReserved12;
  /* 0x005c */ unsigned long MaxNumMacAddresses;
  /* 0x0060 */ unsigned long NdisReserved13;
  /* 0x0064 */ unsigned long NdisReserved14;
  /* 0x0068 */ unsigned long NdisReserved15;
  /* 0x006c */ unsigned long NdisReserved16;
  /* 0x0070 */ unsigned long NdisReserved17;
} NDIS_NIC_SWITCH_CAPABILITIES, *PNDIS_NIC_SWITCH_CAPABILITIES; /* size: 0x0074 */

