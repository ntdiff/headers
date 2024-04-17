typedef struct _MEMORY_PHYSICAL_CONTIGUITY_INFORMATION
{
  /* 0x0000 */ void* VirtualAddress;
  /* 0x0004 */ unsigned long Size;
  /* 0x0008 */ unsigned long ContiguityUnitSize;
  /* 0x000c */ unsigned long Flags;
  /* 0x0010 */ struct _MEMORY_PHYSICAL_CONTIGUITY_UNIT_INFORMATION* ContiguityUnitInformation;
} MEMORY_PHYSICAL_CONTIGUITY_INFORMATION, *PMEMORY_PHYSICAL_CONTIGUITY_INFORMATION; /* size: 0x0014 */

