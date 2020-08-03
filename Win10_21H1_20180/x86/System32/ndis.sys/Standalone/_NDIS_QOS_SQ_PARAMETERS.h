typedef struct _NDIS_OBJECT_HEADER
{
  /* 0x0000 */ unsigned char Type;
  /* 0x0001 */ unsigned char Revision;
  /* 0x0002 */ unsigned short Size;
} NDIS_OBJECT_HEADER, *PNDIS_OBJECT_HEADER; /* size: 0x0004 */

typedef enum _NDIS_QOS_SQ_TYPE
{
  NdisQosSqTypeUndefined = 0,
  NdisQosSqTypeStandard = 1,
  NdisQosSqTypeGFT = 2,
  NdisQosSqTypeMax = 3,
} NDIS_QOS_SQ_TYPE, *PNDIS_QOS_SQ_TYPE;

typedef struct _NDIS_QOS_SQ_PARAMETERS
{
  /* 0x0000 */ struct _NDIS_OBJECT_HEADER Header;
  /* 0x0004 */ unsigned long Flags;
  /* 0x0008 */ unsigned long SqId;
  /* 0x000c */ enum _NDIS_QOS_SQ_TYPE SqType;
  /* 0x0010 */ unsigned char TcEnabledTable[8];
  /* 0x0018 */ unsigned long TcTransmitBandwidthCapTable[8];
  /* 0x0038 */ unsigned long TcTransmitBandwidthReservationTable[8];
  /* 0x0058 */ unsigned long TcReceiveBandwidthCapTable[8];
  /* 0x0078 */ unsigned long CrossTcTransmitBandwidthCap;
  /* 0x007c */ unsigned long MaxNumSqInputs;
} NDIS_QOS_SQ_PARAMETERS, *PNDIS_QOS_SQ_PARAMETERS; /* size: 0x0080 */

