typedef struct _PO_MEMORY_RANGE
{
  /* 0x0000 */ unsigned long StartPage;
  /* 0x0004 */ unsigned long EndPage;
} PO_MEMORY_RANGE, *PPO_MEMORY_RANGE; /* size: 0x0008 */

typedef struct _PO_MEMORY_RANGE_TABLE
{
  /* 0x0000 */ struct _PO_MEMORY_RANGE_TABLE* Next;
  /* 0x0004 */ unsigned long NextTable;
  /* 0x0008 */ unsigned long EntryCount;
  /* 0x000c */ struct _PO_MEMORY_RANGE Range[1];
} PO_MEMORY_RANGE_TABLE, *PPO_MEMORY_RANGE_TABLE; /* size: 0x0014 */

