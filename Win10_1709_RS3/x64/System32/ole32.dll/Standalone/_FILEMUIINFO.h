typedef struct _FILEMUIINFO
{
  /* 0x0000 */ unsigned long dwSize;
  /* 0x0004 */ unsigned long dwVersion;
  /* 0x0008 */ unsigned long dwFileType;
  /* 0x000c */ unsigned char pChecksum[16];
  /* 0x001c */ unsigned char pServiceChecksum[16];
  /* 0x002c */ unsigned long dwLanguageNameOffset;
  /* 0x0030 */ unsigned long dwTypeIDMainSize;
  /* 0x0034 */ unsigned long dwTypeIDMainOffset;
  /* 0x0038 */ unsigned long dwTypeNameMainOffset;
  /* 0x003c */ unsigned long dwTypeIDMUISize;
  /* 0x0040 */ unsigned long dwTypeIDMUIOffset;
  /* 0x0044 */ unsigned long dwTypeNameMUIOffset;
  /* 0x0048 */ unsigned char abBuffer[8];
} FILEMUIINFO, *PFILEMUIINFO; /* size: 0x0050 */

