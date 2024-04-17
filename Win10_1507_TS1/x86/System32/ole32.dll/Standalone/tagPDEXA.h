struct tagPDEXA
{
  /* 0x0000 */ unsigned long lStructSize;
  /* 0x0004 */ struct HWND__* hwndOwner;
  /* 0x0008 */ void* hDevMode;
  /* 0x000c */ void* hDevNames;
  /* 0x0010 */ struct HDC__* hDC;
  /* 0x0014 */ unsigned long Flags;
  /* 0x0018 */ unsigned long Flags2;
  /* 0x001c */ unsigned long ExclusionFlags;
  /* 0x0020 */ unsigned long nPageRanges;
  /* 0x0024 */ unsigned long nMaxPageRanges;
  /* 0x0028 */ struct tagPRINTPAGERANGE* lpPageRanges;
  /* 0x002c */ unsigned long nMinPage;
  /* 0x0030 */ unsigned long nMaxPage;
  /* 0x0034 */ unsigned long nCopies;
  /* 0x0038 */ struct HINSTANCE__* hInstance;
  /* 0x003c */ const char* lpPrintTemplateName;
  /* 0x0040 */ struct IUnknown* lpCallback;
  /* 0x0044 */ unsigned long nPropertyPages;
  /* 0x0048 */ struct _PSP** lphPropertyPages;
  /* 0x004c */ unsigned long nStartPage;
  /* 0x0050 */ unsigned long dwResultAction;
}; /* size: 0x0054 */

