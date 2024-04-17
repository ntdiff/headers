typedef struct _MEMORY_BASIC_INFORMATION
{
  /* 0x0000 */ void* BaseAddress;
  /* 0x0008 */ void* AllocationBase;
  /* 0x0010 */ unsigned long AllocationProtect;
  /* 0x0018 */ unsigned __int64 RegionSize;
  /* 0x0020 */ unsigned long State;
  /* 0x0024 */ unsigned long Protect;
  /* 0x0028 */ unsigned long Type;
  /* 0x002c */ long __PADDING__[1];
} MEMORY_BASIC_INFORMATION, *PMEMORY_BASIC_INFORMATION; /* size: 0x0030 */

