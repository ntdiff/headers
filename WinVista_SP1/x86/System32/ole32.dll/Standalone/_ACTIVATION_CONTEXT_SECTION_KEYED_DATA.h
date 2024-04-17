typedef struct _ACTIVATION_CONTEXT_SECTION_KEYED_DATA_ASSEMBLY_METADATA
{
  /* 0x0000 */ struct _ACTIVATION_CONTEXT_DATA_ASSEMBLY_INFORMATION* Information;
  /* 0x0004 */ void* SectionBase;
  /* 0x0008 */ unsigned long SectionLength;
  /* 0x000c */ void* SectionGlobalDataBase;
  /* 0x0010 */ unsigned long SectionGlobalDataLength;
} ACTIVATION_CONTEXT_SECTION_KEYED_DATA_ASSEMBLY_METADATA, *PACTIVATION_CONTEXT_SECTION_KEYED_DATA_ASSEMBLY_METADATA; /* size: 0x0014 */

typedef struct _ACTIVATION_CONTEXT_SECTION_KEYED_DATA
{
  /* 0x0000 */ unsigned long Size;
  /* 0x0004 */ unsigned long DataFormatVersion;
  /* 0x0008 */ void* Data;
  /* 0x000c */ unsigned long Length;
  /* 0x0010 */ void* SectionGlobalData;
  /* 0x0014 */ unsigned long SectionGlobalDataLength;
  /* 0x0018 */ void* SectionBase;
  /* 0x001c */ unsigned long SectionTotalLength;
  /* 0x0020 */ struct _ACTIVATION_CONTEXT* ActivationContext;
  /* 0x0024 */ unsigned long AssemblyRosterIndex;
  /* 0x0028 */ unsigned long Flags;
  /* 0x002c */ struct _ACTIVATION_CONTEXT_SECTION_KEYED_DATA_ASSEMBLY_METADATA AssemblyMetadata;
} ACTIVATION_CONTEXT_SECTION_KEYED_DATA, *PACTIVATION_CONTEXT_SECTION_KEYED_DATA; /* size: 0x0040 */

