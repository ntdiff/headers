struct tagPOINT
{
  /* 0x0000 */ long x;
  /* 0x0004 */ long y;
}; /* size: 0x0008 */

struct tagRECT
{
  /* 0x0000 */ long left;
  /* 0x0004 */ long top;
  /* 0x0008 */ long right;
  /* 0x000c */ long bottom;
}; /* size: 0x0010 */

struct tagPSDW
{
  /* 0x0000 */ unsigned long lStructSize;
  /* 0x0008 */ struct HWND__* hwndOwner;
  /* 0x0010 */ void* hDevMode;
  /* 0x0018 */ void* hDevNames;
  /* 0x0020 */ unsigned long Flags;
  /* 0x0024 */ struct tagPOINT ptPaperSize;
  /* 0x002c */ struct tagRECT rtMinMargin;
  /* 0x003c */ struct tagRECT rtMargin;
  /* 0x0050 */ struct HINSTANCE__* hInstance;
  /* 0x0058 */ __int64 lCustData;
  /* 0x0060 */ void* lpfnPageSetupHook /* function */;
  /* 0x0068 */ void* lpfnPagePaintHook /* function */;
  /* 0x0070 */ const wchar_t* lpPageSetupTemplateName;
  /* 0x0078 */ void* hPageSetupTemplate;
}; /* size: 0x0080 */

