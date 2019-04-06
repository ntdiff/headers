typedef union _HEAP_VS_CHUNK_HEADER_SIZE
{
  union
  {
    struct
    {
      struct /* bitfield */
      {
        /* 0x0000 */ unsigned long MemoryCost : 16; /* bit position: 0 */
        /* 0x0000 */ unsigned long UnsafeSize : 16; /* bit position: 16 */
      }; /* bitfield */
      struct /* bitfield */
      {
        /* 0x0004 */ unsigned long UnsafePrevSize : 16; /* bit position: 0 */
        /* 0x0004 */ unsigned long Allocated : 8; /* bit position: 16 */
      }; /* bitfield */
    }; /* size: 0x0008 */
    /* 0x0000 */ unsigned short KeyUShort;
    /* 0x0000 */ unsigned long KeyULong;
    /* 0x0000 */ unsigned __int64 HeaderBits;
  }; /* size: 0x0008 */
} HEAP_VS_CHUNK_HEADER_SIZE, *PHEAP_VS_CHUNK_HEADER_SIZE; /* size: 0x0008 */

typedef struct _HEAP_VS_CHUNK_HEADER
{
  /* 0x0000 */ union _HEAP_VS_CHUNK_HEADER_SIZE Sizes;
  union
  {
    struct /* bitfield */
    {
      /* 0x0008 */ unsigned long EncodedSegmentPageOffset : 8; /* bit position: 0 */
      /* 0x0008 */ unsigned long UnusedBytes : 1; /* bit position: 8 */
      /* 0x0008 */ unsigned long SkipDuringWalk : 1; /* bit position: 9 */
      /* 0x0008 */ unsigned long Spare : 22; /* bit position: 10 */
    }; /* bitfield */
    /* 0x0008 */ unsigned long AllocatedChunkBits;
  }; /* size: 0x0004 */
  /* 0x000c */ long __PADDING__[1];
} HEAP_VS_CHUNK_HEADER, *PHEAP_VS_CHUNK_HEADER; /* size: 0x0010 */

