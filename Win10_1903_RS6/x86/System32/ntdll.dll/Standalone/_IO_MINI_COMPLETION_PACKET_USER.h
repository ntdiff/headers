typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0004 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0008 */

typedef struct _IO_MINI_COMPLETION_PACKET_USER
{
  /* 0x0000 */ struct _LIST_ENTRY ListEntry;
  /* 0x0008 */ unsigned long PacketType;
  /* 0x000c */ void* KeyContext;
  /* 0x0010 */ void* ApcContext;
  /* 0x0014 */ long IoStatus;
  /* 0x0018 */ unsigned long IoStatusInformation;
  /* 0x001c */ void* MiniPacketCallback /* function */;
  /* 0x0020 */ void* Context;
  /* 0x0024 */ unsigned char Allocated;
  /* 0x0025 */ char __PADDING__[3];
} IO_MINI_COMPLETION_PACKET_USER, *PIO_MINI_COMPLETION_PACKET_USER; /* size: 0x0028 */

