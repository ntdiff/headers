typedef struct _NDIS_PACKET_PRIVATE
{
  /* 0x0000 */ unsigned int PhysicalCount;
  /* 0x0004 */ unsigned int TotalLength;
  /* 0x0008 */ struct _MDL* Head;
  /* 0x0010 */ struct _MDL* Tail;
  /* 0x0018 */ void* Pool;
  /* 0x0020 */ unsigned int Count;
  /* 0x0024 */ unsigned long Flags;
  /* 0x0028 */ unsigned char ValidCounts;
  /* 0x0029 */ unsigned char NdisPacketFlags;
  /* 0x002a */ unsigned short NdisPacketOobOffset;
  /* 0x002c */ long __PADDING__[1];
} NDIS_PACKET_PRIVATE, *PNDIS_PACKET_PRIVATE; /* size: 0x0030 */

