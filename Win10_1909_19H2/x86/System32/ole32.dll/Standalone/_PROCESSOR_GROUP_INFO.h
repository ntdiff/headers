typedef struct _PROCESSOR_GROUP_INFO
{
  /* 0x0000 */ unsigned char MaximumProcessorCount;
  /* 0x0001 */ unsigned char ActiveProcessorCount;
  /* 0x0002 */ unsigned char Reserved[38];
  /* 0x0028 */ unsigned long ActiveProcessorMask;
} PROCESSOR_GROUP_INFO, *PPROCESSOR_GROUP_INFO; /* size: 0x002c */

