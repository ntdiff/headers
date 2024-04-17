typedef struct _MUILANGCFGNODE
{
  /* 0x0000 */ short LangSpec;
  /* 0x0002 */ unsigned short FallbackTypes;
  /* 0x0004 */ unsigned short Reserved;
  /* 0x0006 */ short FallbackSpecs[3];
} MUILANGCFGNODE, *PMUILANGCFGNODE; /* size: 0x000c */

