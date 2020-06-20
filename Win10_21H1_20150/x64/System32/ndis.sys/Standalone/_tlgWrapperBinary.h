typedef struct _tlgWrapperBinary
{
  union
  {
    /* 0x0000 */ const unsigned int DataDescCount;
    /* 0x0000 */ const void* const Ptr;
  }; /* size: 0x0008 */
  /* 0x0008 */ const unsigned short Size;
  /* 0x000a */ char __PADDING__[6];
} tlgWrapperBinary, *PtlgWrapperBinary; /* size: 0x0010 */

