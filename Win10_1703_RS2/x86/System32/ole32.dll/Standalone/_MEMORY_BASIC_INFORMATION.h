typedef struct _MEMORY_BASIC_INFORMATION
{
  /* 0x0000 */ void* BaseAddress;
  /* 0x0004 */ void* AllocationBase;
  /* 0x0008 */ unsigned long AllocationProtect;
  /* 0x000c */ unsigned long RegionSize;
  /* 0x0010 */ unsigned long State;
  /* 0x0014 */ unsigned long Protect;
  /* 0x0018 */ unsigned long Type;
} MEMORY_BASIC_INFORMATION, *PMEMORY_BASIC_INFORMATION; /* size: 0x001c */

