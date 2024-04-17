struct tagMENUITEMINFOA
{
  /* 0x0000 */ unsigned int cbSize;
  /* 0x0004 */ unsigned int fMask;
  /* 0x0008 */ unsigned int fType;
  /* 0x000c */ unsigned int fState;
  /* 0x0010 */ unsigned int wID;
  /* 0x0018 */ struct HMENU__* hSubMenu;
  /* 0x0020 */ struct HBITMAP__* hbmpChecked;
  /* 0x0028 */ struct HBITMAP__* hbmpUnchecked;
  /* 0x0030 */ unsigned __int64 dwItemData;
  /* 0x0038 */ char* dwTypeData;
  /* 0x0040 */ unsigned int cch;
  /* 0x0048 */ struct HBITMAP__* hbmpItem;
}; /* size: 0x0050 */

