typedef struct _SYSTEM_PROCESSOR_INFORMATION
{
  /* 0x0000 */ unsigned short ProcessorArchitecture;
  /* 0x0002 */ unsigned short ProcessorLevel;
  /* 0x0004 */ unsigned short ProcessorRevision;
  /* 0x0006 */ unsigned short MaximumProcessors;
  /* 0x0008 */ unsigned long ProcessorFeatureBits;
} SYSTEM_PROCESSOR_INFORMATION, *PSYSTEM_PROCESSOR_INFORMATION; /* size: 0x000c */

