typedef struct _TRIPLE_LIST_ITERATOR
{
  /* 0x0000 */ struct _TRIPLE_LIST* List;
  /* 0x0004 */ struct _TRIPLE_LIST_ENTRY* NextEntry;
  /* 0x0008 */ unsigned char ActiveList;
  /* 0x0009 */ unsigned char ProbeReads;
  /* 0x000a */ unsigned char ReturnDataOffset;
  /* 0x000b */ unsigned char Wow64List;
} TRIPLE_LIST_ITERATOR, *PTRIPLE_LIST_ITERATOR; /* size: 0x000c */

