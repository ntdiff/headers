typedef struct _IMAGE_ARM64EC_METADATA
{
  /* 0x0000 */ unsigned long Version;
  /* 0x0004 */ unsigned long CodeMap;
  /* 0x0008 */ unsigned long CodeMapCount;
  /* 0x000c */ unsigned long CodeRangesToEntryPoints;
  /* 0x0010 */ unsigned long RedirectionMetadata;
  /* 0x0014 */ unsigned long tbd__os_arm64x_dispatch_call_no_redirect;
  /* 0x0018 */ unsigned long tbd__os_arm64x_dispatch_ret;
  /* 0x001c */ unsigned long tbd__os_arm64x_dispatch_call;
  /* 0x0020 */ unsigned long tbd__os_arm64x_dispatch_icall;
  /* 0x0024 */ unsigned long tbd__os_arm64x_dispatch_icall_cfg;
  /* 0x0028 */ unsigned long AlternateEntryPoint;
  /* 0x002c */ unsigned long AuxiliaryIAT;
  /* 0x0030 */ unsigned long CodeRangesToEntryPointsCount;
  /* 0x0034 */ unsigned long RedirectionMetadataCount;
  /* 0x0038 */ unsigned long GetX64InformationFunctionPointer;
  /* 0x003c */ unsigned long SetX64InformationFunctionPointer;
  /* 0x0040 */ unsigned long ExtraRFETable;
  /* 0x0044 */ unsigned long ExtraRFETableSize;
  /* 0x0048 */ unsigned long __os_arm64x_dispatch_fptr;
  /* 0x004c */ unsigned long AuxiliaryIATCopy;
} IMAGE_ARM64EC_METADATA, *PIMAGE_ARM64EC_METADATA; /* size: 0x0050 */

