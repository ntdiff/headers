typedef struct _RTL_RETPOLINE_BINARY_INFO
{
  /* 0x0000 */ long RetpolineStubsStartRva;
  /* 0x0004 */ unsigned long CfgDispatchFunctionPtrRva;
} RTL_RETPOLINE_BINARY_INFO, *PRTL_RETPOLINE_BINARY_INFO; /* size: 0x0008 */

typedef struct _MI_RETPOLINE_RELOCATION_INFORMATION
{
  /* 0x0000 */ struct _RTL_RETPOLINE_BINARY_INFO BinaryInfo;
  /* 0x0008 */ void* RelocationBuffer;
  /* 0x000c */ struct _RTL_RETPOLINE_RELOCATION_INDEX* Index[1];
} MI_RETPOLINE_RELOCATION_INFORMATION, *PMI_RETPOLINE_RELOCATION_INFORMATION; /* size: 0x0010 */

