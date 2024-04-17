typedef struct _MEMORY_REGION_INFORMATION
{
  /* 0x0000 */ void* AllocationBase;
  /* 0x0008 */ unsigned long AllocationProtect;
  /* 0x000c */ unsigned long RegionType;
  /* 0x0010 */ unsigned __int64 RegionSize;
} MEMORY_REGION_INFORMATION, *PMEMORY_REGION_INFORMATION; /* size: 0x0018 */

