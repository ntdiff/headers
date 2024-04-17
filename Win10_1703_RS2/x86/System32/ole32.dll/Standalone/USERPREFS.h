struct USERPREFS
{
  /* 0x0000 */ char signature[6];
  /* 0x0006 */ unsigned short version;
  /* 0x0008 */ unsigned short size;
  /* 0x000c */ char* sourceFilename;
  /* 0x0010 */ void* sourceHandle;
  /* 0x0014 */ char* destinationFilename;
  /* 0x0018 */ unsigned char penPatternAction;
  /* 0x0019 */ unsigned char nonSquarePenAction;
  /* 0x001a */ unsigned char penModeAction;
  /* 0x001b */ unsigned char textModeAction;
  /* 0x001c */ unsigned char nonRectRegionAction;
  /* 0x0020 */ int optimizePP;
  /* 0x0024 */ unsigned short reserved[6];
}; /* size: 0x0030 */

