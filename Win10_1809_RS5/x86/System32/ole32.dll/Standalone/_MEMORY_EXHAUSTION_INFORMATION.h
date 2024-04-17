typedef enum _MEMORY_EXHAUSTION_TYPE
{
  MemoryExhaustionTypeFailFastOnCommitFailure = 0,
  MemoryExhaustionTypeMax = 1,
} MEMORY_EXHAUSTION_TYPE, *PMEMORY_EXHAUSTION_TYPE;

typedef struct _MEMORY_EXHAUSTION_INFORMATION
{
  /* 0x0000 */ unsigned short Version;
  /* 0x0002 */ unsigned short Reserved;
  /* 0x0004 */ enum _MEMORY_EXHAUSTION_TYPE Type;
  /* 0x0008 */ unsigned long Value;
} MEMORY_EXHAUSTION_INFORMATION, *PMEMORY_EXHAUSTION_INFORMATION; /* size: 0x000c */

