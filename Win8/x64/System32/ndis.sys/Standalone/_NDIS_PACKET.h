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

typedef struct _NDIS_PACKET
{
  /* 0x0000 */ struct _NDIS_PACKET_PRIVATE Private;
  union
  {
    struct
    {
      /* 0x0030 */ unsigned char MiniportReserved[16];
      /* 0x0040 */ unsigned char WrapperReserved[16];
    }; /* size: 0x0020 */
    struct
    {
      /* 0x0030 */ unsigned char MiniportReservedEx[24];
      /* 0x0048 */ unsigned char WrapperReservedEx[8];
    }; /* size: 0x0020 */
    /* 0x0030 */ unsigned char MacReserved[32];
  }; /* size: 0x0020 */
  /* 0x0050 */ unsigned __int64 Reserved[2];
  /* 0x0060 */ unsigned char ProtocolReserved[1];
  /* 0x0061 */ char __PADDING__[7];
} NDIS_PACKET, *PNDIS_PACKET; /* size: 0x0068 */

