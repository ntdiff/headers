typedef struct _tlgWrapperBinary
{
  union
  {
    /* 0x0000 */ const unsigned int DataDescCount;
    /* 0x0000 */ const void* const Ptr;
  }; /* size: 0x0004 */
  /* 0x0004 */ const unsigned short Size;
  /* 0x0006 */ char __PADDING__[2];
} tlgWrapperBinary, *PtlgWrapperBinary; /* size: 0x0008 */

