typedef struct _ACTIVATION_CONTEXT_SECTION_KEYED_DATA_ASSEMBLY_METADATA
{
  /* 0x0000 */ struct _ACTIVATION_CONTEXT_DATA_ASSEMBLY_INFORMATION* Information;
  /* 0x0008 */ void* SectionBase;
  /* 0x0010 */ unsigned long SectionLength;
  /* 0x0018 */ void* SectionGlobalDataBase;
  /* 0x0020 */ unsigned long SectionGlobalDataLength;
  /* 0x0024 */ long __PADDING__[1];
} ACTIVATION_CONTEXT_SECTION_KEYED_DATA_ASSEMBLY_METADATA, *PACTIVATION_CONTEXT_SECTION_KEYED_DATA_ASSEMBLY_METADATA; /* size: 0x0028 */

typedef struct _ACTIVATION_CONTEXT_SECTION_KEYED_DATA
{
  /* 0x0000 */ unsigned long Size;
  /* 0x0004 */ unsigned long DataFormatVersion;
  /* 0x0008 */ void* Data;
  /* 0x0010 */ unsigned long Length;
  /* 0x0018 */ void* SectionGlobalData;
  /* 0x0020 */ unsigned long SectionGlobalDataLength;
  /* 0x0028 */ void* SectionBase;
  /* 0x0030 */ unsigned long SectionTotalLength;
  /* 0x0038 */ struct _ACTIVATION_CONTEXT* ActivationContext;
  /* 0x0040 */ unsigned long AssemblyRosterIndex;
  /* 0x0044 */ unsigned long Flags;
  /* 0x0048 */ struct _ACTIVATION_CONTEXT_SECTION_KEYED_DATA_ASSEMBLY_METADATA AssemblyMetadata;
} ACTIVATION_CONTEXT_SECTION_KEYED_DATA, *PACTIVATION_CONTEXT_SECTION_KEYED_DATA; /* size: 0x0070 */

