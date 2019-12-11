typedef struct _tlgWrapperPtrSize
{
  union
  {
    /* 0x0000 */ const unsigned int DataDescCount;
    /* 0x0000 */ const void* const Ptr;
  }; /* size: 0x0008 */
  /* 0x0008 */ const unsigned long Size;
  /* 0x000c */ long __PADDING__[1];
} tlgWrapperPtrSize, *PtlgWrapperPtrSize; /* size: 0x0010 */

