typedef struct _PO_MEMORY_RANGE
{
  /* 0x0000 */ unsigned __int64 StartPage;
  /* 0x0008 */ unsigned __int64 EndPage;
} PO_MEMORY_RANGE, *PPO_MEMORY_RANGE; /* size: 0x0010 */

typedef struct _PO_MEMORY_RANGE_TABLE
{
  /* 0x0000 */ struct _PO_MEMORY_RANGE_TABLE* Next;
  /* 0x0008 */ unsigned __int64 NextTable;
  /* 0x0010 */ unsigned long EntryCount;
  /* 0x0018 */ struct _PO_MEMORY_RANGE Range[1];
} PO_MEMORY_RANGE_TABLE, *PPO_MEMORY_RANGE_TABLE; /* size: 0x0028 */

