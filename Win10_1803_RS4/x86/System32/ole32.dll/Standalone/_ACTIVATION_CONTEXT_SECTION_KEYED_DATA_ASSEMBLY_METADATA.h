typedef struct _ACTIVATION_CONTEXT_SECTION_KEYED_DATA_ASSEMBLY_METADATA
{
  /* 0x0000 */ struct _ACTIVATION_CONTEXT_DATA_ASSEMBLY_INFORMATION* Information;
  /* 0x0004 */ void* SectionBase;
  /* 0x0008 */ unsigned long SectionLength;
  /* 0x000c */ void* SectionGlobalDataBase;
  /* 0x0010 */ unsigned long SectionGlobalDataLength;
} ACTIVATION_CONTEXT_SECTION_KEYED_DATA_ASSEMBLY_METADATA, *PACTIVATION_CONTEXT_SECTION_KEYED_DATA_ASSEMBLY_METADATA; /* size: 0x0014 */

