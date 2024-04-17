typedef struct _ACTIVATION_CONTEXT_SECTION_KEYED_DATA_2600
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
} ACTIVATION_CONTEXT_SECTION_KEYED_DATA_2600, *PACTIVATION_CONTEXT_SECTION_KEYED_DATA_2600; /* size: 0x0048 */

