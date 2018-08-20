typedef struct _PO_MEMORY_RANGE_ARRAY_RANGE
{
  /* 0x0000 */ unsigned long PageNo;
  /* 0x0004 */ unsigned long StartPage;
  /* 0x0008 */ unsigned long EndPage;
  /* 0x000c */ unsigned long CheckSum;
} PO_MEMORY_RANGE_ARRAY_RANGE, *PPO_MEMORY_RANGE_ARRAY_RANGE; /* size: 0x0010 */

typedef struct _PO_MEMORY_RANGE_ARRAY_LINK
{
  /* 0x0000 */ struct _PO_MEMORY_RANGE_ARRAY* Next;
  /* 0x0004 */ unsigned long NextTable;
  /* 0x0008 */ unsigned long CheckSum;
  /* 0x000c */ unsigned long EntryCount;
} PO_MEMORY_RANGE_ARRAY_LINK, *PPO_MEMORY_RANGE_ARRAY_LINK; /* size: 0x0010 */

typedef struct _PO_MEMORY_RANGE_ARRAY
{
  union
  {
    /* 0x0000 */ struct _PO_MEMORY_RANGE_ARRAY_RANGE Range;
    /* 0x0000 */ struct _PO_MEMORY_RANGE_ARRAY_LINK Link;
  }; /* size: 0x0010 */
} PO_MEMORY_RANGE_ARRAY, *PPO_MEMORY_RANGE_ARRAY; /* size: 0x0010 */

