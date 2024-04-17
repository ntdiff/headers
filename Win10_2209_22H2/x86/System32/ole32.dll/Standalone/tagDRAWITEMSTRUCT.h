struct tagRECT
{
  /* 0x0000 */ long left;
  /* 0x0004 */ long top;
  /* 0x0008 */ long right;
  /* 0x000c */ long bottom;
}; /* size: 0x0010 */

struct tagDRAWITEMSTRUCT
{
  /* 0x0000 */ unsigned int CtlType;
  /* 0x0004 */ unsigned int CtlID;
  /* 0x0008 */ unsigned int itemID;
  /* 0x000c */ unsigned int itemAction;
  /* 0x0010 */ unsigned int itemState;
  /* 0x0014 */ struct HWND__* hwndItem;
  /* 0x0018 */ struct HDC__* hDC;
  /* 0x001c */ struct tagRECT rcItem;
  /* 0x002c */ unsigned long itemData;
}; /* size: 0x0030 */

