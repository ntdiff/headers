typedef struct _NDIS_OBJECT_HEADER
{
  /* 0x0000 */ unsigned char Type;
  /* 0x0001 */ unsigned char Revision;
  /* 0x0002 */ unsigned short Size;
} NDIS_OBJECT_HEADER, *PNDIS_OBJECT_HEADER; /* size: 0x0004 */

typedef struct _NDIS_GFT_VPORT_PARAMETERS
{
  /* 0x0000 */ struct _NDIS_OBJECT_HEADER Header;
  /* 0x0004 */ unsigned long Flags;
  /* 0x0008 */ unsigned long VPortId;
  /* 0x000c */ unsigned long ExceptionVPortId;
  /* 0x0010 */ unsigned long SamplingRate;
  /* 0x0018 */ unsigned __int64 DscpMask;
  /* 0x0020 */ unsigned long NumDscpMaskCounterObjects;
  /* 0x0024 */ unsigned long DscpMaskCounterIdArray[64];
  /* 0x0128 */ unsigned __int64 PriorityMask;
  /* 0x0130 */ unsigned long NumPriorityMaskCounterObjects;
  /* 0x0134 */ unsigned long PriorityMaskCounterIdArray[8];
  /* 0x0154 */ unsigned short VxLanSrcPortBase;
  /* 0x0156 */ unsigned short VxLanSrcPortRange;
  /* 0x0158 */ unsigned long DscpFlags;
  /* 0x015c */ long __PADDING__[1];
} NDIS_GFT_VPORT_PARAMETERS, *PNDIS_GFT_VPORT_PARAMETERS; /* size: 0x0160 */

