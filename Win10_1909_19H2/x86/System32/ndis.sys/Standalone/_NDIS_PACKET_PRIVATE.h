typedef struct _NDIS_PACKET_PRIVATE
{
  /* 0x0000 */ unsigned int PhysicalCount;
  /* 0x0004 */ unsigned int TotalLength;
  /* 0x0008 */ struct _MDL* Head;
  /* 0x000c */ struct _MDL* Tail;
  /* 0x0010 */ void* Pool;
  /* 0x0014 */ unsigned int Count;
  /* 0x0018 */ unsigned long Flags;
  /* 0x001c */ unsigned char ValidCounts;
  /* 0x001d */ unsigned char NdisPacketFlags;
  /* 0x001e */ unsigned short NdisPacketOobOffset;
} NDIS_PACKET_PRIVATE, *PNDIS_PACKET_PRIVATE; /* size: 0x0020 */

