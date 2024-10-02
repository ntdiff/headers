typedef struct _MEMORY_PARTITION_DEDICATED_MEMORY_INFORMATION
{
  /* 0x0000 */ unsigned long NextEntryOffset;
  /* 0x0004 */ unsigned long SizeOfInformation;
  /* 0x0008 */ unsigned long Flags;
  /* 0x000c */ unsigned long AttributesOffset;
  /* 0x0010 */ unsigned long AttributeCount;
  /* 0x0014 */ unsigned long Reserved;
  /* 0x0018 */ unsigned __int64 TypeId;
} MEMORY_PARTITION_DEDICATED_MEMORY_INFORMATION, *PMEMORY_PARTITION_DEDICATED_MEMORY_INFORMATION; /* size: 0x0020 */

