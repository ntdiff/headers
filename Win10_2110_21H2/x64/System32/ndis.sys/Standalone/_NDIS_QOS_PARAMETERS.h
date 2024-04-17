typedef struct _NDIS_OBJECT_HEADER
{
  /* 0x0000 */ unsigned char Type;
  /* 0x0001 */ unsigned char Revision;
  /* 0x0002 */ unsigned short Size;
} NDIS_OBJECT_HEADER, *PNDIS_OBJECT_HEADER; /* size: 0x0004 */

typedef struct _NDIS_QOS_PARAMETERS
{
  /* 0x0000 */ struct _NDIS_OBJECT_HEADER Header;
  /* 0x0004 */ unsigned long Flags;
  /* 0x0008 */ unsigned long NumTrafficClasses;
  /* 0x000c */ unsigned char PriorityAssignmentTable[8];
  /* 0x0014 */ unsigned char TcBandwidthAssignmentTable[8];
  /* 0x001c */ unsigned char TsaAssignmentTable[8];
  /* 0x0024 */ unsigned long PfcEnable;
  /* 0x0028 */ unsigned long NumClassificationElements;
  /* 0x002c */ unsigned long ClassificationElementSize;
  /* 0x0030 */ unsigned long FirstClassificationElementOffset;
} NDIS_QOS_PARAMETERS, *PNDIS_QOS_PARAMETERS; /* size: 0x0034 */

