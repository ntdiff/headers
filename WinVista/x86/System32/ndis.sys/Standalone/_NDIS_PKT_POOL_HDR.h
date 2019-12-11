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

typedef struct _SINGLE_LIST_ENTRY
{
  /* 0x0000 */ struct _SINGLE_LIST_ENTRY* Next;
} SINGLE_LIST_ENTRY, *PSINGLE_LIST_ENTRY; /* size: 0x0004 */

typedef union _SLIST_HEADER
{
  union
  {
    /* 0x0000 */ unsigned __int64 Alignment;
    struct
    {
      /* 0x0000 */ struct _SINGLE_LIST_ENTRY Next;
      /* 0x0004 */ unsigned short Depth;
      /* 0x0006 */ unsigned short Sequence;
    }; /* size: 0x0008 */
  }; /* size: 0x0008 */
} SLIST_HEADER, *PSLIST_HEADER; /* size: 0x0008 */

typedef enum _POOL_BLOCK_TYPE
{
  NDIS_PACKET_POOL_BLOCK_FREE = 0,
  NDIS_PACKET_POOL_BLOCK_USED = 1,
  NDIS_PACKET_POOL_BLOCK_AGING = 2,
} POOL_BLOCK_TYPE, *PPOOL_BLOCK_TYPE;

typedef struct _NDIS_PKT_POOL_HDR
{
  /* 0x0000 */ struct _LIST_ENTRY List;
  /* 0x0008 */ union _LARGE_INTEGER TimeStamp;
  /* 0x0010 */ union _SLIST_HEADER FreeList;
  /* 0x0018 */ enum _POOL_BLOCK_TYPE State;
  /* 0x001c */ long __PADDING__[1];
} NDIS_PKT_POOL_HDR, *PNDIS_PKT_POOL_HDR; /* size: 0x0020 */

