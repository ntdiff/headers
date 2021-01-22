typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

typedef struct _NDIS_WAN_PACKET
{
  /* 0x0000 */ struct _LIST_ENTRY WanPacketQueue;
  /* 0x0010 */ unsigned char* CurrentBuffer;
  /* 0x0018 */ unsigned long CurrentLength;
  /* 0x0020 */ unsigned char* StartBuffer;
  /* 0x0028 */ unsigned char* EndBuffer;
  /* 0x0030 */ void* ProtocolReserved1;
  /* 0x0038 */ void* ProtocolReserved2;
  /* 0x0040 */ void* ProtocolReserved3;
  /* 0x0048 */ void* ProtocolReserved4;
  /* 0x0050 */ void* MacReserved1;
  /* 0x0058 */ void* MacReserved2;
  /* 0x0060 */ void* MacReserved3;
  /* 0x0068 */ void* MacReserved4;
} NDIS_WAN_PACKET, *PNDIS_WAN_PACKET; /* size: 0x0070 */

