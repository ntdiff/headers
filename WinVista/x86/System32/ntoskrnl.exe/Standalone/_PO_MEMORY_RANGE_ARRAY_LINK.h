typedef struct _PO_MEMORY_RANGE_ARRAY_LINK
{
  /* 0x0000 */ struct _PO_MEMORY_RANGE_ARRAY* Next;
  /* 0x0004 */ unsigned long NextTable;
  /* 0x0008 */ unsigned long CheckSum;
  /* 0x000c */ unsigned long EntryCount;
} PO_MEMORY_RANGE_ARRAY_LINK, *PPO_MEMORY_RANGE_ARRAY_LINK; /* size: 0x0010 */

