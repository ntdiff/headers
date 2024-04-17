typedef struct _MUILANGUAGES
{
  /* 0x0000 */ unsigned int TotalSize;
  /* 0x0004 */ unsigned short MaxNumLanguages;
  /* 0x0006 */ unsigned short NumLanguages;
  /* 0x0008 */ unsigned short NumInstalledLanguages;
  /* 0x0010 */ struct _MUILANGINFO* LangInfos;
} MUILANGUAGES, *PMUILANGUAGES; /* size: 0x0018 */

