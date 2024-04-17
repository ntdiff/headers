typedef struct _IMAGE_CHPE_METADATA_X86
{
  /* 0x0000 */ unsigned long Version;
  /* 0x0004 */ unsigned long CHPECodeAddressRangeOffset;
  /* 0x0008 */ unsigned long CHPECodeAddressRangeCount;
  /* 0x000c */ unsigned long WowA64ExceptionHandlerFunctionPointer;
  /* 0x0010 */ unsigned long WowA64DispatchCallFunctionPointer;
  /* 0x0014 */ unsigned long WowA64DispatchIndirectCallFunctionPointer;
  /* 0x0018 */ unsigned long WowA64DispatchIndirectCallCfgFunctionPointer;
  /* 0x001c */ unsigned long WowA64DispatchRetFunctionPointer;
  /* 0x0020 */ unsigned long WowA64DispatchRetLeafFunctionPointer;
  /* 0x0024 */ unsigned long WowA64DispatchJumpFunctionPointer;
} IMAGE_CHPE_METADATA_X86, *PIMAGE_CHPE_METADATA_X86; /* size: 0x0028 */

