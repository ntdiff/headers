typedef struct _MUICCENTRY
{
  /* 0x0000 */ unsigned int lCultureNameOffset;
  /* 0x0004 */ unsigned int ulCultureID;
  /* 0x0008 */ unsigned long ulLanguageType;
  /* 0x0010 */ struct _MUICCENTRY* pNeutralCulture;
  /* 0x0018 */ struct _MUICCENTRY* lBaseLanguageIndices[4];
  /* 0x0038 */ int lParentLanguageIndices[4];
} MUICCENTRY, *PMUICCENTRY; /* size: 0x0048 */

