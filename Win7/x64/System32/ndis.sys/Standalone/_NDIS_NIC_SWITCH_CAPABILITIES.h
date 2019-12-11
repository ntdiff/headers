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
} NDIS_NIC_SWITCH_CAPABILITIES, *PNDIS_NIC_SWITCH_CAPABILITIES; /* size: 0x0020 */

