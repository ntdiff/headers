typedef struct _RTL_RVA_LIST_ITERATOR
{
  /* 0x0000 */ unsigned long CurrentRva;
  /* 0x0004 */ unsigned long CurrentRvaIndex;
  /* 0x0008 */ unsigned long CompressedRvaDataOffset;
} RTL_RVA_LIST_ITERATOR, *PRTL_RVA_LIST_ITERATOR; /* size: 0x000c */

