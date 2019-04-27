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

