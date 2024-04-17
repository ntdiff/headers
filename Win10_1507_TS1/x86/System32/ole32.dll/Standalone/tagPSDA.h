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

struct tagPSDA
{
  /* 0x0000 */ unsigned long lStructSize;
  /* 0x0004 */ struct HWND__* hwndOwner;
  /* 0x0008 */ void* hDevMode;
  /* 0x000c */ void* hDevNames;
  /* 0x0010 */ unsigned long Flags;
  /* 0x0014 */ struct tagPOINT ptPaperSize;
  /* 0x001c */ struct tagRECT rtMinMargin;
  /* 0x002c */ struct tagRECT rtMargin;
  /* 0x003c */ struct HINSTANCE__* hInstance;
  /* 0x0040 */ long lCustData;
  /* 0x0044 */ void* lpfnPageSetupHook /* function */;
  /* 0x0048 */ void* lpfnPagePaintHook /* function */;
  /* 0x004c */ const char* lpPageSetupTemplateName;
  /* 0x0050 */ void* hPageSetupTemplate;
}; /* size: 0x0054 */

