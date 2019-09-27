typedef struct _RTL_RETPOLINE_BINARY_INFO
{
  /* 0x0000 */ long RetpolineStubsStartRva;
  /* 0x0004 */ unsigned long CfgDispatchFunctionPtrRva;
  /* 0x0008 */ unsigned long IATRva;
  /* 0x000c */ long* ImportRvas;
  /* 0x0010 */ unsigned long* IAT;
  /* 0x0014 */ void* ImageBase;
  /* 0x0018 */ void* CheckFunction /* function */;
} RTL_RETPOLINE_BINARY_INFO, *PRTL_RETPOLINE_BINARY_INFO; /* size: 0x001c */

typedef struct _MI_RETPOLINE_RELOCATION_INFORMATION
{
  /* 0x0000 */ struct _RTL_RETPOLINE_BINARY_INFO BinaryInfo;
  /* 0x001c */ void* RelocationBuffer;
  /* 0x0020 */ struct _RTL_RETPOLINE_RELOCATION_INDEX* Index[1];
} MI_RETPOLINE_RELOCATION_INFORMATION, *PMI_RETPOLINE_RELOCATION_INFORMATION; /* size: 0x0024 */

