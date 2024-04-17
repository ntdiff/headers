typedef struct _IMAGE_HYBRID_METADATA_X86
{
  /* 0x0000 */ unsigned long Version;
  /* 0x0004 */ unsigned long WowA64ExceptionHandlerFunctionPointer;
  /* 0x0008 */ unsigned long WowA64DispatchCallFunctionPointer;
  /* 0x000c */ unsigned long WowA64DispatchIndirectCallFunctionPointer;
  /* 0x0010 */ unsigned long HybridCodeAddressRangeOffset;
  /* 0x0014 */ unsigned long HybridCodeAddressRangeCount;
} IMAGE_HYBRID_METADATA_X86, *PIMAGE_HYBRID_METADATA_X86; /* size: 0x0018 */

