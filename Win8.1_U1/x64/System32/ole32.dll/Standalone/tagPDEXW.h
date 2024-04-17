struct tagPDEXW
{
  /* 0x0000 */ unsigned long lStructSize;
  /* 0x0008 */ struct HWND__* hwndOwner;
  /* 0x0010 */ void* hDevMode;
  /* 0x0018 */ void* hDevNames;
  /* 0x0020 */ struct HDC__* hDC;
  /* 0x0028 */ unsigned long Flags;
  /* 0x002c */ unsigned long Flags2;
  /* 0x0030 */ unsigned long ExclusionFlags;
  /* 0x0034 */ unsigned long nPageRanges;
  /* 0x0038 */ unsigned long nMaxPageRanges;
  /* 0x0040 */ struct tagPRINTPAGERANGE* lpPageRanges;
  /* 0x0048 */ unsigned long nMinPage;
  /* 0x004c */ unsigned long nMaxPage;
  /* 0x0050 */ unsigned long nCopies;
  /* 0x0058 */ struct HINSTANCE__* hInstance;
  /* 0x0060 */ const wchar_t* lpPrintTemplateName;
  /* 0x0068 */ struct IUnknown* lpCallback;
  /* 0x0070 */ unsigned long nPropertyPages;
  /* 0x0078 */ struct _PSP** lphPropertyPages;
  /* 0x0080 */ unsigned long nStartPage;
  /* 0x0084 */ unsigned long dwResultAction;
}; /* size: 0x0088 */

