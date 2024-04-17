typedef struct _MEMORY_BASIC_INFORMATION32
{
  /* 0x0000 */ unsigned long BaseAddress;
  /* 0x0004 */ unsigned long AllocationBase;
  /* 0x0008 */ unsigned long AllocationProtect;
  /* 0x000c */ unsigned long RegionSize;
  /* 0x0010 */ unsigned long State;
  /* 0x0014 */ unsigned long Protect;
  /* 0x0018 */ unsigned long Type;
} MEMORY_BASIC_INFORMATION32, *PMEMORY_BASIC_INFORMATION32; /* size: 0x001c */

