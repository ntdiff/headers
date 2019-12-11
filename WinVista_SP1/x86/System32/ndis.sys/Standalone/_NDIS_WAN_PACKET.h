typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0004 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0008 */

typedef struct _NDIS_WAN_PACKET
{
  /* 0x0000 */ struct _LIST_ENTRY WanPacketQueue;
  /* 0x0008 */ unsigned char* CurrentBuffer;
  /* 0x000c */ unsigned long CurrentLength;
  /* 0x0010 */ unsigned char* StartBuffer;
  /* 0x0014 */ unsigned char* EndBuffer;
  /* 0x0018 */ void* ProtocolReserved1;
  /* 0x001c */ void* ProtocolReserved2;
  /* 0x0020 */ void* ProtocolReserved3;
  /* 0x0024 */ void* ProtocolReserved4;
  /* 0x0028 */ void* MacReserved1;
  /* 0x002c */ void* MacReserved2;
  /* 0x0030 */ void* MacReserved3;
  /* 0x0034 */ void* MacReserved4;
} NDIS_WAN_PACKET, *PNDIS_WAN_PACKET; /* size: 0x0038 */

