typedef struct _POOL_HEADER
{
  union
  {
    struct
    {
      struct /* bitfield */
      {
        /* 0x0000 */ unsigned short PreviousSize : 8; /* bit position: 0 */
        /* 0x0000 */ unsigned short PoolIndex : 8; /* bit position: 8 */
      }; /* bitfield */
      struct /* bitfield */
      {
        /* 0x0002 */ unsigned short BlockSize : 8; /* bit position: 0 */
        /* 0x0002 */ unsigned short PoolType : 8; /* bit position: 8 */
      }; /* bitfield */
    }; /* size: 0x0004 */
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

