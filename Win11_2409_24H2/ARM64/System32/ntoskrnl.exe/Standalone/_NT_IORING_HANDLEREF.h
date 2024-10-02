typedef union _NT_IORING_HANDLEREF
{
  union
  {
    /* 0x0000 */ void* Handle;
    /* 0x0000 */ unsigned int HandleIndex;
  }; /* size: 0x0008 */
} NT_IORING_HANDLEREF, *PNT_IORING_HANDLEREF; /* size: 0x0008 */

