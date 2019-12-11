typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0004 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0008 */

typedef union _LARGE_INTEGER
{
  union
  {
    struct
    {
      /* 0x0000 */ unsigned long LowPart;
      /* 0x0004 */ long HighPart;
    }; /* size: 0x0008 */
    struct
    {
      /* 0x0000 */ unsigned long LowPart;
      /* 0x0004 */ long HighPart;
    } /* size: 0x0008 */ u;
    /* 0x0000 */ __int64 QuadPart;
  }; /* size: 0x0008 */
} LARGE_INTEGER, *PLARGE_INTEGER; /* size: 0x0008 */

typedef struct _NDIS_PKT_POOL
{
  /* 0x0000 */ unsigned long Tag;
  /* 0x0004 */ unsigned short PacketLength;
  /* 0x0006 */ unsigned short PktsPerBlock;
  /* 0x0008 */ unsigned short MaxBlocks;
  /* 0x000a */ unsigned short StackSize;
  /* 0x000c */ long BlocksAllocated;
  /* 0x0010 */ unsigned long ProtocolId;
  /* 0x0014 */ unsigned long BlockSize;
  /* 0x0018 */ void* Allocator;
  /* 0x001c */ unsigned long Lock;
  /* 0x0020 */ struct _LIST_ENTRY FreeBlocks;
  /* 0x0028 */ struct _LIST_ENTRY UsedBlocks;
  /* 0x0030 */ struct _LIST_ENTRY AgingBlocks;
  /* 0x0038 */ struct _LIST_ENTRY GlobalPacketPoolList;
  /* 0x0040 */ union _LARGE_INTEGER NextScavengeTick;
} NDIS_PKT_POOL, *PNDIS_PKT_POOL; /* size: 0x0048 */

