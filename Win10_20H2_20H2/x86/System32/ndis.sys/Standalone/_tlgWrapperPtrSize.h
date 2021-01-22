typedef struct _tlgWrapperPtrSize
{
  union
  {
    /* 0x0000 */ const unsigned int DataDescCount;
    /* 0x0000 */ const void* const Ptr;
  }; /* size: 0x0004 */
  /* 0x0004 */ const unsigned long Size;
} tlgWrapperPtrSize, *PtlgWrapperPtrSize; /* size: 0x0008 */

