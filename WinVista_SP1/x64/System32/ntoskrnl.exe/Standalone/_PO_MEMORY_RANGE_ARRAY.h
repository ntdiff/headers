typedef struct _PO_MEMORY_RANGE_ARRAY_RANGE
{
  /* 0x0000 */ unsigned __int64 PageNo;
  /* 0x0008 */ unsigned __int64 StartPage;
  /* 0x0010 */ unsigned __int64 EndPage;
  /* 0x0018 */ unsigned long CheckSum;
  /* 0x001c */ long __PADDING__[1];
} PO_MEMORY_RANGE_ARRAY_RANGE, *PPO_MEMORY_RANGE_ARRAY_RANGE; /* size: 0x0020 */

typedef struct _PO_MEMORY_RANGE_ARRAY_LINK
{
  /* 0x0000 */ struct _PO_MEMORY_RANGE_ARRAY* Next;
  /* 0x0008 */ unsigned __int64 NextTable;
  /* 0x0010 */ unsigned long CheckSum;
  /* 0x0014 */ unsigned long EntryCount;
} PO_MEMORY_RANGE_ARRAY_LINK, *PPO_MEMORY_RANGE_ARRAY_LINK; /* size: 0x0018 */

typedef struct _PO_MEMORY_RANGE_ARRAY
{
  union
  {
    /* 0x0000 */ struct _PO_MEMORY_RANGE_ARRAY_RANGE Range;
    struct
    {
      /* 0x0000 */ struct _PO_MEMORY_RANGE_ARRAY_LINK Link;
      /* 0x0018 */ long __PADDING__[2];
    }; /* size: 0x0020 */
  }; /* size: 0x0020 */
} PO_MEMORY_RANGE_ARRAY, *PPO_MEMORY_RANGE_ARRAY; /* size: 0x0020 */

