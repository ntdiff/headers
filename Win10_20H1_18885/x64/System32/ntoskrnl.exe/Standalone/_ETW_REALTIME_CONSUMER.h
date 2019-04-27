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
  /* 0x0058 */ unsigned short LoggerId;
  union
  {
    /* 0x005a */ unsigned char Flags;
    struct /* bitfield */
    {
      /* 0x005a */ unsigned char ShutDownRequested : 1; /* bit position: 0 */
      /* 0x005a */ unsigned char NewBuffersLost : 1; /* bit position: 1 */
      /* 0x005a */ unsigned char Disconnected : 1; /* bit position: 2 */
      /* 0x005a */ unsigned char Notified : 1; /* bit position: 3 */
      /* 0x005a */ unsigned char Wow : 1; /* bit position: 4 */
    }; /* bitfield */
  }; /* size: 0x0001 */
  /* 0x0060 */ struct _RTL_BITMAP ReservedBufferSpaceBitMap;
  /* 0x0070 */ unsigned char* ReservedBufferSpace;
  /* 0x0078 */ unsigned long ReservedBufferSpaceSize;
  /* 0x007c */ unsigned long UserPagesAllocated;
  /* 0x0080 */ unsigned long UserPagesReused;
  /* 0x0088 */ unsigned long* EventsLostCount;
  /* 0x0090 */ unsigned long* BuffersLostCount;
  /* 0x0098 */ struct _ETW_SILODRIVERSTATE* SiloState;
} ETW_REALTIME_CONSUMER, *PETW_REALTIME_CONSUMER; /* size: 0x00a0 */

