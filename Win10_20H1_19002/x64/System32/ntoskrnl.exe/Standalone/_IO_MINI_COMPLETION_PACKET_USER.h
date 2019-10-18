typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

typedef struct _IO_MINI_COMPLETION_PACKET_USER
{
  /* 0x0000 */ struct _LIST_ENTRY ListEntry;
  /* 0x0010 */ unsigned long PacketType;
  /* 0x0018 */ void* KeyContext;
  /* 0x0020 */ void* ApcContext;
  /* 0x0028 */ long IoStatus;
  /* 0x0030 */ unsigned __int64 IoStatusInformation;
  /* 0x0038 */ void* MiniPacketCallback /* function */;
  /* 0x0040 */ void* Context;
  /* 0x0048 */ unsigned char Allocated;
  /* 0x0049 */ char __PADDING__[7];
} IO_MINI_COMPLETION_PACKET_USER, *PIO_MINI_COMPLETION_PACKET_USER; /* size: 0x0050 */

