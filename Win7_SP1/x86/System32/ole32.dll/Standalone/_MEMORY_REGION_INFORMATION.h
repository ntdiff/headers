typedef struct _MEMORY_REGION_INFORMATION
{
  /* 0x0000 */ void* AllocationBase;
  /* 0x0004 */ unsigned long AllocationProtect;
  /* 0x0008 */ unsigned long RegionType;
  /* 0x000c */ unsigned long RegionSize;
} MEMORY_REGION_INFORMATION, *PMEMORY_REGION_INFORMATION; /* size: 0x0010 */

