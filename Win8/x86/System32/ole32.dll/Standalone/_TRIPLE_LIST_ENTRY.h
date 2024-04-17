typedef struct _TRIPLE_LIST_ENTRY
{
  /* 0x0000 */ struct _TRIPLE_LIST_ENTRY* Flink[3];
  /* 0x000c */ struct _TRIPLE_LIST_ENTRY* Blink;
} TRIPLE_LIST_ENTRY, *PTRIPLE_LIST_ENTRY; /* size: 0x0010 */

