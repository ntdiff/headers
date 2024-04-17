typedef struct _RTL_PROCESS_VERIFIER_OPTIONS
{
  /* 0x0000 */ unsigned long SizeStruct;
  /* 0x0004 */ unsigned long Option;
  /* 0x0008 */ unsigned char OptionData[1];
  /* 0x0009 */ char __PADDING__[3];
} RTL_PROCESS_VERIFIER_OPTIONS, *PRTL_PROCESS_VERIFIER_OPTIONS; /* size: 0x000c */

