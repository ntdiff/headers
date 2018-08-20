typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

typedef struct _RTL_BITMAP
{
  /* 0x0000 */ unsigned long SizeOfBitMap;
  /* 0x0008 */ unsigned long* Buffer;
} RTL_BITMAP, *PRTL_BITMAP; /* size: 0x0010 */

typedef struct _ETW_REALTIME_CONSUMER
{
  /* 0x0000 */ struct _LIST_ENTRY Links;
  /* 0x0010 */ void* ProcessHandle;
  /* 0x0018 */ struct _EPROCESS* ProcessObject;
  /* 0x0020 */ void* NextNotDelivered;
  /* 0x0028 */ void* RealtimeConnectContext;
  /* 0x0030 */ struct _KEVENT* DisconnectEvent;
  /* 0x0038 */ struct _KEVENT* DataAvailableEvent;
  /* 0x0040 */ unsigned long* UserBufferCount;
  /* 0x0048 */ struct _SINGLE_LIST_ENTRY* UserBufferListHead;
  /* 0x0050 */ unsigned long BuffersLost;
  /* 0x0054 */ unsigned long EmptyBuffersCount;
  /* 0x0058 */ unsigned long LoggerId;
  /* 0x005c */ unsigned char ShutDownRequested;
  /* 0x005d */ unsigned char NewBuffersLost;
  /* 0x005e */ unsigned char Disconnected;
  /* 0x0060 */ struct _RTL_BITMAP ReservedBufferSpaceBitMap;
  /* 0x0070 */ unsigned char* ReservedBufferSpace;
  /* 0x0078 */ unsigned long ReservedBufferSpaceSize;
  /* 0x007c */ unsigned long UserPagesAllocated;
  /* 0x0080 */ unsigned long UserPagesReused;
  /* 0x0084 */ unsigned char Wow;
  /* 0x0085 */ char __PADDING__[3];
} ETW_REALTIME_CONSUMER, *PETW_REALTIME_CONSUMER; /* size: 0x0088 */

