typedef struct _NDIS_OBJECT_HEADER
{
  /* 0x0000 */ unsigned char Type;
  /* 0x0001 */ unsigned char Revision;
  /* 0x0002 */ unsigned short Size;
} NDIS_OBJECT_HEADER, *PNDIS_OBJECT_HEADER; /* size: 0x0004 */

typedef struct _NDIS_QOS_OFFLOAD_CAPABILITIES
{
  /* 0x0000 */ struct _NDIS_OBJECT_HEADER Header;
  /* 0x0004 */ unsigned long Flags;
  /* 0x0008 */ unsigned long SupportedSqTypes;
  /* 0x000c */ unsigned char TransmitCapSupported[8];
  /* 0x0014 */ unsigned char TransmitReservationSupported[8];
  /* 0x001c */ unsigned char ReceiveCapSupported[8];
  /* 0x0024 */ unsigned char TransmitGftCapSupported[8];
  /* 0x002c */ unsigned char ReceiveGftCapSupported[8];
  /* 0x0034 */ unsigned char TcSupportedTable[8];
  /* 0x003c */ unsigned long NumStandardSqsSupported;
  /* 0x0040 */ unsigned long NumGftSqsSupported;
  /* 0x0044 */ unsigned long ReservationGranularitySupported;
  /* 0x0048 */ unsigned long MaxNumSqInputs;
} NDIS_QOS_OFFLOAD_CAPABILITIES, *PNDIS_QOS_OFFLOAD_CAPABILITIES; /* size: 0x004c */

