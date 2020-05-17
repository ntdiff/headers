typedef struct _tlgWrapperPtrSizeType
{
  union
  {
    /* 0x0000 */ const unsigned int DataDescCount;
    /* 0x0000 */ const void* const Ptr;
  }; /* size: 0x0008 */
  /* 0x0008 */ const unsigned long Size;
  /* 0x000c */ const unsigned long Reserved;
} tlgWrapperPtrSizeType, *PtlgWrapperPtrSizeType; /* size: 0x0010 */

