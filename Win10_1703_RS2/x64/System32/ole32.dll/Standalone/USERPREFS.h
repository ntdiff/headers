struct USERPREFS
{
  /* 0x0000 */ char signature[6];
  /* 0x0006 */ unsigned short version;
  /* 0x0008 */ unsigned short size;
  /* 0x0010 */ char* sourceFilename;
  /* 0x0018 */ void* sourceHandle;
  /* 0x0020 */ char* destinationFilename;
  /* 0x0028 */ unsigned char penPatternAction;
  /* 0x0029 */ unsigned char nonSquarePenAction;
  /* 0x002a */ unsigned char penModeAction;
  /* 0x002b */ unsigned char textModeAction;
  /* 0x002c */ unsigned char nonRectRegionAction;
  /* 0x0030 */ int optimizePP;
  /* 0x0034 */ unsigned short reserved[6];
}; /* size: 0x0040 */

