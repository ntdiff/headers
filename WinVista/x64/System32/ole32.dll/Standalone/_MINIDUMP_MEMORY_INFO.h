typedef struct _MINIDUMP_MEMORY_INFO
{
  /* 0x0000 */ unsigned __int64 BaseAddress;
  /* 0x0008 */ unsigned __int64 AllocationBase;
  /* 0x0010 */ unsigned int AllocationProtect;
  /* 0x0014 */ unsigned int __alignment1;
  /* 0x0018 */ unsigned __int64 RegionSize;
  /* 0x0020 */ unsigned int State;
  /* 0x0024 */ unsigned int Protect;
  /* 0x0028 */ unsigned int Type;
  /* 0x002c */ unsigned int __alignment2;
} MINIDUMP_MEMORY_INFO, *PMINIDUMP_MEMORY_INFO; /* size: 0x0030 */

