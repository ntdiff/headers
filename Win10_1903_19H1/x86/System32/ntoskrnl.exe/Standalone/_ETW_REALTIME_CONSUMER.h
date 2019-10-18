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
  /* 0x0030 */ unsigned short LoggerId;
  union
  {
    /* 0x0032 */ unsigned char Flags;
    struct /* bitfield */
    {
      /* 0x0032 */ unsigned char ShutDownRequested : 1; /* bit position: 0 */
      /* 0x0032 */ unsigned char NewBuffersLost : 1; /* bit position: 1 */
      /* 0x0032 */ unsigned char Disconnected : 1; /* bit position: 2 */
      /* 0x0032 */ unsigned char Notified : 1; /* bit position: 3 */
    }; /* bitfield */
  }; /* size: 0x0001 */
  /* 0x0034 */ struct _RTL_BITMAP ReservedBufferSpaceBitMap;
  /* 0x003c */ unsigned char* ReservedBufferSpace;
  /* 0x0040 */ unsigned long ReservedBufferSpaceSize;
  /* 0x0044 */ unsigned long UserPagesAllocated;
  /* 0x0048 */ unsigned long UserPagesReused;
  /* 0x004c */ unsigned long* EventsLostCount;
  /* 0x0050 */ unsigned long* BuffersLostCount;
  /* 0x0054 */ struct _ETW_SILODRIVERSTATE* SiloState;
} ETW_REALTIME_CONSUMER, *PETW_REALTIME_CONSUMER; /* size: 0x0058 */

