typedef struct _ACTIVATION_CONTEXT_SECTION_KEYED_DATA_ASSEMBLY_METADATA
{
  /* 0x0000 */ struct _ACTIVATION_CONTEXT_DATA_ASSEMBLY_INFORMATION* Information;
  /* 0x0008 */ void* SectionBase;
  /* 0x0010 */ unsigned long SectionLength;
  /* 0x0018 */ void* SectionGlobalDataBase;
  /* 0x0020 */ unsigned long SectionGlobalDataLength;
  /* 0x0024 */ long __PADDING__[1];
} ACTIVATION_CONTEXT_SECTION_KEYED_DATA_ASSEMBLY_METADATA, *PACTIVATION_CONTEXT_SECTION_KEYED_DATA_ASSEMBLY_METADATA; /* size: 0x0028 */

