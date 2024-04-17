typedef struct _MUILANGINFO
{
  /* 0x0000 */ unsigned short Flags;
  /* 0x0002 */ unsigned short Reserved;
  /* 0x0004 */ unsigned short LangId;
  /* 0x0006 */ short LangNameIndex;
  /* 0x0008 */ unsigned short FallbackTypes;
  /* 0x000a */ short NeutralLangSpec;
  /* 0x000c */ short FallbackSpecs[4];
  /* 0x0014 */ short AlternateCodePage[4];
} MUILANGINFO, *PMUILANGINFO; /* size: 0x001c */

