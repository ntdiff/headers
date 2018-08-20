typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0004 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0008 */

typedef struct _RTL_BITMAP
{
  /* 0x0000 */ unsigned long SizeOfBitMap;
  /* 0x0004 */ unsigned long* Buffer;
} RTL_BITMAP, *PRTL_BITMAP; /* size: 0x0008 */

typedef struct _ETW_REALTIME_CONSUMER
{
  /* 0x0000 */ struct _LIST_ENTRY Links;
  /* 0x0008 */ void* ProcessHandle;
  /* 0x000c */ struct _EPROCESS* ProcessObject;
  /* 0x0010 */ void* NextNotDelivered;
  /* 0x0014 */ void* RealtimeConnectContext;
  /* 0x0018 */ struct _KEVENT* DisconnectEvent;
  /* 0x001c */ struct _KEVENT* DataAvailableEvent;
  /* 0x0020 */ unsigned long* UserBufferCount;
  /* 0x0024 */ struct _SINGLE_LIST_ENTRY* UserBufferListHead;
  /* 0x0028 */ unsigned long BuffersLost;
  /* 0x002c */ unsigned long EmptyBuffersCount;
  /* 0x0030 */ unsigned long LoggerId;
  /* 0x0034 */ unsigned char ShutDownRequested;
  /* 0x0035 */ unsigned char NewBuffersLost;
  /* 0x0036 */ unsigned char Disconnected;
  /* 0x0038 */ struct _RTL_BITMAP ReservedBufferSpaceBitMap;
  /* 0x0040 */ unsigned char* ReservedBufferSpace;
  /* 0x0044 */ unsigned long ReservedBufferSpaceSize;
  /* 0x0048 */ unsigned long UserPagesAllocated;
  /* 0x004c */ unsigned long UserPagesReused;
} ETW_REALTIME_CONSUMER, *PETW_REALTIME_CONSUMER; /* size: 0x0050 */

