struct tagIMEMENUITEMINFOW
{
  /* 0x0000 */ unsigned int cbSize;
  /* 0x0004 */ unsigned int fType;
  /* 0x0008 */ unsigned int fState;
  /* 0x000c */ unsigned int wID;
  /* 0x0010 */ struct HBITMAP__* hbmpChecked;
  /* 0x0018 */ struct HBITMAP__* hbmpUnchecked;
  /* 0x0020 */ unsigned long dwItemData;
  /* 0x0024 */ wchar_t szString[80];
  /* 0x00c8 */ struct HBITMAP__* hbmpItem;
}; /* size: 0x00d0 */

