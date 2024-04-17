typedef struct _MEMORY_PARTITION_NODE_PAGE_INFORMATION
{
  /* 0x0000 */ unsigned __int64 TotalPageCount;
  /* 0x0008 */ unsigned __int64 SmallFreePageCount;
  /* 0x0010 */ unsigned __int64 SmallZeroPageCount;
  /* 0x0018 */ unsigned __int64 MediumFreePageCount;
  /* 0x0020 */ unsigned __int64 MediumZeroPageCount;
  /* 0x0028 */ unsigned __int64 LargeFreePageCount;
  /* 0x0030 */ unsigned __int64 LargeZeroPageCount;
  /* 0x0038 */ unsigned __int64 HugeFreePageCount;
  /* 0x0040 */ unsigned __int64 HugeZeroPageCount;
} MEMORY_PARTITION_NODE_PAGE_INFORMATION, *PMEMORY_PARTITION_NODE_PAGE_INFORMATION; /* size: 0x0048 */

