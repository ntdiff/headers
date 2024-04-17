struct tagPOINT
{
  /* 0x0000 */ long x;
  /* 0x0004 */ long y;
}; /* size: 0x0008 */

struct tagDROPSTRUCT
{
  /* 0x0000 */ struct HWND__* hwndSource;
  /* 0x0008 */ struct HWND__* hwndSink;
  /* 0x0010 */ unsigned long wFmt;
  /* 0x0018 */ unsigned __int64 dwData;
  /* 0x0020 */ struct tagPOINT ptDrop;
  /* 0x0028 */ unsigned long dwControlData;
  /* 0x002c */ long __PADDING__[1];
}; /* size: 0x0030 */

