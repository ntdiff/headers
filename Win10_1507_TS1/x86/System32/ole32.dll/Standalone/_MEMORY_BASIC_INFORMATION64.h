typedef struct _MEMORY_BASIC_INFORMATION64
{
  /* 0x0000 */ unsigned __int64 BaseAddress;
  /* 0x0008 */ unsigned __int64 AllocationBase;
  /* 0x0010 */ unsigned long AllocationProtect;
  /* 0x0014 */ unsigned long __alignment1;
  /* 0x0018 */ unsigned __int64 RegionSize;
  /* 0x0020 */ unsigned long State;
  /* 0x0024 */ unsigned long Protect;
  /* 0x0028 */ unsigned long Type;
  /* 0x002c */ unsigned long __alignment2;
} MEMORY_BASIC_INFORMATION64, *PMEMORY_BASIC_INFORMATION64; /* size: 0x0030 */

