typedef struct _VACB_ARRAY_HEADER
{
  /* 0x0000 */ unsigned long VacbArrayIndex;
  /* 0x0004 */ unsigned long MappingCount;
  /* 0x0008 */ unsigned long HighestMappedIndex;
  /* 0x000c */ unsigned long Reserved;
} VACB_ARRAY_HEADER, *PVACB_ARRAY_HEADER; /* size: 0x0010 */

