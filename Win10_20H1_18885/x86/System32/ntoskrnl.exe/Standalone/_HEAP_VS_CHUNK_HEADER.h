typedef union _HEAP_VS_CHUNK_HEADER_SIZE
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned long MemoryCost : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned long UnsafeSize : 15; /* bit position: 1 */
      /* 0x0000 */ unsigned long UnsafePrevSize : 15; /* bit position: 16 */
      /* 0x0000 */ unsigned long Allocated : 1; /* bit position: 31 */
    }; /* bitfield */
    /* 0x0000 */ unsigned short KeyUShort;
    /* 0x0000 */ unsigned long KeyULong;
    /* 0x0000 */ unsigned long HeaderBits;
  }; /* size: 0x0004 */
} HEAP_VS_CHUNK_HEADER_SIZE, *PHEAP_VS_CHUNK_HEADER_SIZE; /* size: 0x0004 */

typedef struct _HEAP_VS_CHUNK_HEADER
{
  /* 0x0000 */ union _HEAP_VS_CHUNK_HEADER_SIZE Sizes;
  union
  {
    struct /* bitfield */
    {
      /* 0x0004 */ unsigned long EncodedSegmentPageOffset : 8; /* bit position: 0 */
      /* 0x0004 */ unsigned long UnusedBytes : 1; /* bit position: 8 */
      /* 0x0004 */ unsigned long SkipDuringWalk : 1; /* bit position: 9 */
      /* 0x0004 */ unsigned long Spare : 22; /* bit position: 10 */
    }; /* bitfield */
    /* 0x0004 */ unsigned long AllocatedChunkBits;
  }; /* size: 0x0004 */
} HEAP_VS_CHUNK_HEADER, *PHEAP_VS_CHUNK_HEADER; /* size: 0x0008 */

