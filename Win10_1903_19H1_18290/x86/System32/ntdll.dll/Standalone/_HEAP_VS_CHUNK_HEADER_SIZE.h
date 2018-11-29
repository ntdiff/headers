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

