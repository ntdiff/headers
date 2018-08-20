typedef struct _HEAP_DESCRIPTOR_KEY
{
  union
  {
    /* 0x0000 */ unsigned short Key;
    struct
    {
      /* 0x0000 */ unsigned char EncodedCommitCount;
      /* 0x0001 */ unsigned char PageCount;
    }; /* size: 0x0002 */
  }; /* size: 0x0002 */
} HEAP_DESCRIPTOR_KEY, *PHEAP_DESCRIPTOR_KEY; /* size: 0x0002 */

