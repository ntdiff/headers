typedef struct _STACK_INDEX
{
  /* 0x0000 */ unsigned long XferDataIndex;
  /* 0x0004 */ unsigned long Index;
} STACK_INDEX, *PSTACK_INDEX; /* size: 0x0008 */

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

typedef struct _NDIS_PACKET
{
  /* 0x0000 */ struct _NDIS_PACKET_PRIVATE Private;
  union
  {
    struct
    {
      /* 0x0020 */ unsigned char MiniportReserved[8];
      /* 0x0028 */ unsigned char WrapperReserved[8];
    }; /* size: 0x0010 */
    struct
    {
      /* 0x0020 */ unsigned char MiniportReservedEx[12];
      /* 0x002c */ unsigned char WrapperReservedEx[4];
    }; /* size: 0x0010 */
    /* 0x0020 */ unsigned char MacReserved[16];
  }; /* size: 0x0010 */
  /* 0x0030 */ unsigned long Reserved[2];
  /* 0x0038 */ unsigned char ProtocolReserved[1];
  /* 0x0039 */ char __PADDING__[3];
} NDIS_PACKET, *PNDIS_PACKET; /* size: 0x003c */

typedef struct _NDIS_PACKET_WRAPPER
{
  union
  {
    /* 0x0000 */ unsigned __int64 Padding;
    /* 0x0000 */ unsigned long PvtFlags;
  }; /* size: 0x0008 */
  /* 0x0008 */ struct _STACK_INDEX StackIndex;
  /* 0x0010 */ struct _NDIS_PACKET Packet;
  /* 0x004c */ long __PADDING__[1];
} NDIS_PACKET_WRAPPER, *PNDIS_PACKET_WRAPPER; /* size: 0x0050 */

