typedef struct _MUICCHEADER
{
  /* 0x0000 */ unsigned int ulMaxStringsSize;
  /* 0x0004 */ unsigned int ulSizeStrings;
  /* 0x0008 */ unsigned int ulMaxNumInstalledCultures;
  /* 0x000c */ unsigned int ulNumInstalledCultures;
  /* 0x0010 */ unsigned int ulMaxNumUnverifiedCultures;
  /* 0x0014 */ unsigned int ulNumUnverifiedCultures;
} MUICCHEADER, *PMUICCHEADER; /* size: 0x0018 */

