typedef enum _RTLP_HP_MEMORY_TYPE
{
  HeapMemoryPaged = 0,
  HeapMemoryNonPaged = 1,
  HeapMemory64KPage = 2,
  HeapMemoryLargePage = 3,
  HeapMemoryHugePage = 4,
  HeapMemoryTypeCustom = 5,
  HeapMemoryTypeMax = 6,
} RTLP_HP_MEMORY_TYPE, *PRTLP_HP_MEMORY_TYPE;

