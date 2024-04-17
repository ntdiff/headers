struct tagOleMenuGroupWidths
{
  /* 0x0000 */ long width[6];
}; /* size: 0x0018 */

struct tagOLEMENUITEM
{
  /* 0x0000 */ unsigned int item;
  /* 0x0004 */ unsigned short fwPopup;
  /* 0x0008 */ int fObjectMenu;
}; /* size: 0x000c */

struct tagOLEMENU
{
  /* 0x0000 */ unsigned short wSignature;
  /* 0x0004 */ unsigned long hwndFrame;
  /* 0x0008 */ unsigned long hmenuCombined;
  /* 0x000c */ struct tagOleMenuGroupWidths MenuWidths;
  /* 0x0024 */ long lMenuCnt;
  /* 0x0028 */ struct tagOLEMENUITEM menuitem[1];
}; /* size: 0x0034 */

