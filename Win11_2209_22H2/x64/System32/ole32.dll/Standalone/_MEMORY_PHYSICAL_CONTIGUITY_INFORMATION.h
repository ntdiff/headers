typedef struct _MEMORY_PHYSICAL_CONTIGUITY_INFORMATION
{
  /* 0x0000 */ void* VirtualAddress;
  /* 0x0008 */ unsigned __int64 Size;
  /* 0x0010 */ unsigned __int64 ContiguityUnitSize;
  /* 0x0018 */ unsigned long Flags;
  /* 0x0020 */ struct _MEMORY_PHYSICAL_CONTIGUITY_UNIT_INFORMATION* ContiguityUnitInformation;
} MEMORY_PHYSICAL_CONTIGUITY_INFORMATION, *PMEMORY_PHYSICAL_CONTIGUITY_INFORMATION; /* size: 0x0028 */

