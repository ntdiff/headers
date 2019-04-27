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

