typedef struct _NDIS_OBJECT_HEADER
{
  /* 0x0000 */ unsigned char Type;
  /* 0x0001 */ unsigned char Revision;
  /* 0x0002 */ unsigned short Size;
} NDIS_OBJECT_HEADER, *PNDIS_OBJECT_HEADER; /* size: 0x0004 */

typedef struct _NDIS_SWITCH_NIC_STATUS_INDICATION
{
  /* 0x0000 */ struct _NDIS_OBJECT_HEADER Header;
  /* 0x0004 */ unsigned long Flags;
  /* 0x0008 */ unsigned int SourcePortId;
  /* 0x000c */ unsigned short SourceNicIndex;
  /* 0x0010 */ unsigned int DestinationPortId;
  /* 0x0014 */ unsigned short DestinationNicIndex;
  /* 0x0018 */ struct _NDIS_STATUS_INDICATION* StatusIndication;
} NDIS_SWITCH_NIC_STATUS_INDICATION, *PNDIS_SWITCH_NIC_STATUS_INDICATION; /* size: 0x0020 */

