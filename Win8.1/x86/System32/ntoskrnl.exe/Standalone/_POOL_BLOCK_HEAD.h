typedef struct _POOL_HEADER
{
  union
  {
    struct
    {
      struct /* bitfield */
      {
        /* 0x0000 */ unsigned short PreviousSize : 9; /* bit position: 0 */
        /* 0x0000 */ unsigned short PoolIndex : 7; /* bit position: 9 */
      }; /* bitfield */
      struct /* bitfield */
      {
        /* 0x0002 */ unsigned short BlockSize : 9; /* bit position: 0 */
        /* 0x0002 */ unsigned short PoolType : 7; /* bit position: 9 */
      }; /* bitfield */
    }; /* size: 0x0004 */
    /* 0x0000 */ unsigned long Ulong1;
  }; /* size: 0x0004 */
  union
  {
    /* 0x0004 */ unsigned long PoolTag;
    struct
    {
      /* 0x0004 */ unsigned short AllocatorBackTraceIndex;
      /* 0x0006 */ unsigned short PoolTagHash;
    }; /* size: 0x0004 */
  }; /* size: 0x0004 */
} POOL_HEADER, *PPOOL_HEADER; /* size: 0x0008 */

typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0004 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0008 */

typedef struct _POOL_BLOCK_HEAD
{
  /* 0x0000 */ struct _POOL_HEADER Header;
  /* 0x0008 */ struct _LIST_ENTRY List;
} POOL_BLOCK_HEAD, *PPOOL_BLOCK_HEAD; /* size: 0x0010 */

