typedef struct _MEM_ADDRESS_REQUIREMENTS
{
  /* 0x0000 */ void* LowestStartingAddress;
  /* 0x0008 */ void* HighestEndingAddress;
  /* 0x0010 */ unsigned __int64 Alignment;
} MEM_ADDRESS_REQUIREMENTS, *PMEM_ADDRESS_REQUIREMENTS; /* size: 0x0018 */

