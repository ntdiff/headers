typedef struct _TRIPLE_LIST_ITERATOR
{
  /* 0x0000 */ struct _TRIPLE_LIST* List;
  /* 0x0008 */ struct _TRIPLE_LIST_ENTRY* NextEntry;
  /* 0x0010 */ unsigned char ActiveList;
  /* 0x0011 */ unsigned char ProbeReads;
  /* 0x0012 */ unsigned char ReturnDataOffset;
  /* 0x0013 */ unsigned char Wow64List;
  /* 0x0014 */ long __PADDING__[1];
} TRIPLE_LIST_ITERATOR, *PTRIPLE_LIST_ITERATOR; /* size: 0x0018 */

