typedef struct _MUILANGCFGLIST
{
  /* 0x0000 */ unsigned int TotalSize;
  /* 0x0004 */ unsigned short NumLanguages;
  /* 0x0006 */ unsigned short MaxNumLanguages;
  /* 0x0008 */ struct _MUILANGCFGNODE* LanguageConfigs;
} MUILANGCFGLIST, *PMUILANGCFGLIST; /* size: 0x0010 */

