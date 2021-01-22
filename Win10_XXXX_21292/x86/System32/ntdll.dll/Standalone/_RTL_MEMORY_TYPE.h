typedef enum _RTL_MEMORY_TYPE
{
  MemoryTypePaged = 0,
  MemoryTypeNonPaged = 1,
  MemoryType64KPage = 2,
  MemoryTypeLargePage = 3,
  MemoryTypeHugePage = 4,
  MemoryTypeMax = 5,
} RTL_MEMORY_TYPE, *PRTL_MEMORY_TYPE;

