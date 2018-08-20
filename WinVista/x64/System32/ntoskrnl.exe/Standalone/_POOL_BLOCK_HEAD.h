typedef struct _POOL_HEADER
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned long PreviousSize : 8; /* bit position: 0 */
      /* 0x0000 */ unsigned long PoolIndex : 8; /* bit position: 8 */
      /* 0x0000 */ unsigned long BlockSize : 8; /* bit position: 16 */
      /* 0x0000 */ unsigned long PoolType : 8; /* bit position: 24 */
    }; /* bitfield */
    /* 0x0000 */ unsigned long Ulong1;
  }; /* size: 0x0004 */
  /* 0x0004 */ unsigned long PoolTag;
  union
  {
    /* 0x0008 */ struct _EPROCESS* ProcessBilled;
    struct
    {
      /* 0x0008 */ unsigned short AllocatorBackTraceIndex;
      /* 0x000a */ unsigned short PoolTagHash;
      /* 0x000c */ long __PADDING__[1];
    }; /* size: 0x0008 */
  }; /* size: 0x0008 */
} POOL_HEADER, *PPOOL_HEADER; /* size: 0x0010 */

typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

typedef struct _POOL_BLOCK_HEAD
{
  /* 0x0000 */ struct _POOL_HEADER Header;
  /* 0x0010 */ struct _LIST_ENTRY List;
} POOL_BLOCK_HEAD, *PPOOL_BLOCK_HEAD; /* size: 0x0020 */

