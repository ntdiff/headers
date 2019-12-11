typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

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

typedef union _SLIST_HEADER
{
  union
  {
    struct
    {
      /* 0x0000 */ unsigned __int64 Alignment;
      /* 0x0008 */ unsigned __int64 Region;
    }; /* size: 0x0010 */
    struct
    {
      struct /* bitfield */
      {
        /* 0x0000 */ unsigned __int64 Depth : 16; /* bit position: 0 */
        /* 0x0000 */ unsigned __int64 Sequence : 48; /* bit position: 16 */
      }; /* bitfield */
      struct /* bitfield */
      {
        /* 0x0008 */ unsigned __int64 Reserved : 4; /* bit position: 0 */
        /* 0x0008 */ unsigned __int64 NextEntry : 60; /* bit position: 4 */
      }; /* bitfield */
    } /* size: 0x0010 */ HeaderX64;
  }; /* size: 0x0010 */
} SLIST_HEADER, *PSLIST_HEADER; /* size: 0x0010 */

typedef enum _POOL_BLOCK_TYPE
{
  NDIS_PACKET_POOL_BLOCK_FREE = 0,
  NDIS_PACKET_POOL_BLOCK_USED = 1,
  NDIS_PACKET_POOL_BLOCK_AGING = 2,
} POOL_BLOCK_TYPE, *PPOOL_BLOCK_TYPE;

typedef struct _NDIS_PKT_POOL_HDR
{
  /* 0x0000 */ struct _LIST_ENTRY List;
  /* 0x0010 */ union _LARGE_INTEGER TimeStamp;
  /* 0x0020 */ union _SLIST_HEADER FreeList;
  /* 0x0030 */ enum _POOL_BLOCK_TYPE State;
  /* 0x0034 */ long __PADDING__[3];
} NDIS_PKT_POOL_HDR, *PNDIS_PKT_POOL_HDR; /* size: 0x0040 */

