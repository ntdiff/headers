typedef struct _RC_CONFIG
{
  /* 0x0000 */ unsigned long dwSignature;
  /* 0x0004 */ unsigned long dwLength;
  /* 0x0008 */ unsigned long dwRCConfigVersion;
  /* 0x000c */ unsigned long dwFilePathType;
  /* 0x0010 */ unsigned long dwFileType;
  /* 0x0014 */ unsigned long dwSystemAttributes;
  /* 0x0018 */ unsigned long dwUltimateFallbackLocation;
  /* 0x001c */ unsigned long dwServiceCheckSum[4];
  /* 0x002c */ unsigned long dwChecksum[4];
  /* 0x003c */ unsigned long dwReserved1;
  /* 0x0040 */ unsigned long dwReserved2;
  /* 0x0044 */ unsigned long dwMUIFileNameOffset;
  /* 0x0048 */ unsigned long dwMUIFileNameLength;
  /* 0x004c */ unsigned long dwMUIFilePathOffset;
  /* 0x0050 */ unsigned long dwMUIFilePathLength;
  /* 0x0054 */ unsigned long dwMainResNameTypesOffset;
  /* 0x0058 */ unsigned long dwMainResNameTypesLength;
  /* 0x005c */ unsigned long dwMainResIDTypesOffset;
  /* 0x0060 */ unsigned long dwMainResIDTypesLength;
  /* 0x0064 */ unsigned long dwMUIResNameTypesOffset;
  /* 0x0068 */ unsigned long dwMUIResNameTypesLength;
  /* 0x006c */ unsigned long dwMUIResIDTypesOffset;
  /* 0x0070 */ unsigned long dwMUIResIDTypesLength;
  /* 0x0074 */ unsigned long dwLanguageOffset;
  /* 0x0078 */ unsigned long dwLanguageLength;
  /* 0x007c */ unsigned long dwUltimateFallbackLanguageOffset;
  /* 0x0080 */ unsigned long dwUltimateFallbackLanguageLength;
} RC_CONFIG, *PRC_CONFIG; /* size: 0x0084 */

