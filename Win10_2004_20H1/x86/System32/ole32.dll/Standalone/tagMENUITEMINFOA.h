struct tagMENUITEMINFOA
{
  /* 0x0000 */ unsigned int cbSize;
  /* 0x0004 */ unsigned int fMask;
  /* 0x0008 */ unsigned int fType;
  /* 0x000c */ unsigned int fState;
  /* 0x0010 */ unsigned int wID;
  /* 0x0014 */ struct HMENU__* hSubMenu;
  /* 0x0018 */ struct HBITMAP__* hbmpChecked;
  /* 0x001c */ struct HBITMAP__* hbmpUnchecked;
  /* 0x0020 */ unsigned long dwItemData;
  /* 0x0024 */ char* dwTypeData;
  /* 0x0028 */ unsigned int cch;
  /* 0x002c */ struct HBITMAP__* hbmpItem;
}; /* size: 0x0030 */

