struct tagPOINT
{
  /* 0x0000 */ long x;
  /* 0x0004 */ long y;
}; /* size: 0x0008 */

struct tagDROPSTRUCT
{
  /* 0x0000 */ struct HWND__* hwndSource;
  /* 0x0004 */ struct HWND__* hwndSink;
  /* 0x0008 */ unsigned long wFmt;
  /* 0x000c */ unsigned long dwData;
  /* 0x0010 */ struct tagPOINT ptDrop;
  /* 0x0018 */ unsigned long dwControlData;
}; /* size: 0x001c */

