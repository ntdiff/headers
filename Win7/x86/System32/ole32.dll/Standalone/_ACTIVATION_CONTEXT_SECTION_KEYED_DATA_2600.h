typedef struct _ACTIVATION_CONTEXT_SECTION_KEYED_DATA_2600
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
} ACTIVATION_CONTEXT_SECTION_KEYED_DATA_2600, *PACTIVATION_CONTEXT_SECTION_KEYED_DATA_2600; /* size: 0x002c */

