typedef struct _MEM_ADDRESS_REQUIREMENTS
{
  /* 0x0000 */ void* LowestStartingAddress;
  /* 0x0004 */ void* HighestEndingAddress;
  /* 0x0008 */ unsigned long Alignment;
} MEM_ADDRESS_REQUIREMENTS, *PMEM_ADDRESS_REQUIREMENTS; /* size: 0x000c */

