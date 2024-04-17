typedef struct _MUICCENTRY
{
  /* 0x0000 */ unsigned int lCultureNameOffset;
  /* 0x0004 */ unsigned int ulCultureID;
  /* 0x0008 */ unsigned long ulLanguageType;
  /* 0x000c */ struct _MUICCENTRY* pNeutralCulture;
  /* 0x0010 */ struct _MUICCENTRY* lBaseLanguageIndices[4];
  /* 0x0020 */ int lParentLanguageIndices[4];
} MUICCENTRY, *PMUICCENTRY; /* size: 0x0030 */

