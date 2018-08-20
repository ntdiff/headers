typedef struct _HEAP_LFH_UNUSED_BYTES_INFO
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned short UnusedBytes : 14; /* bit position: 0 */
      /* 0x0000 */ unsigned short ExtraPresent : 1; /* bit position: 14 */
      /* 0x0000 */ unsigned short OneByteUnused : 1; /* bit position: 15 */
    }; /* bitfield */
    /* 0x0000 */ unsigned char Bytes[2];
  }; /* size: 0x0002 */
} HEAP_LFH_UNUSED_BYTES_INFO, *PHEAP_LFH_UNUSED_BYTES_INFO; /* size: 0x0002 */

