struct tagOFN_NT4A
{
  /* 0x0000 */ unsigned long lStructSize;
  /* 0x0008 */ struct HWND__* hwndOwner;
  /* 0x0010 */ struct HINSTANCE__* hInstance;
  /* 0x0018 */ const char* lpstrFilter;
  /* 0x0020 */ char* lpstrCustomFilter;
  /* 0x0028 */ unsigned long nMaxCustFilter;
  /* 0x002c */ unsigned long nFilterIndex;
  /* 0x0030 */ char* lpstrFile;
  /* 0x0038 */ unsigned long nMaxFile;
  /* 0x0040 */ char* lpstrFileTitle;
  /* 0x0048 */ unsigned long nMaxFileTitle;
  /* 0x0050 */ const char* lpstrInitialDir;
  /* 0x0058 */ const char* lpstrTitle;
  /* 0x0060 */ unsigned long Flags;
  /* 0x0064 */ unsigned short nFileOffset;
  /* 0x0066 */ unsigned short nFileExtension;
  /* 0x0068 */ const char* lpstrDefExt;
  /* 0x0070 */ __int64 lCustData;
  /* 0x0078 */ void* lpfnHook /* function */;
  /* 0x0080 */ const char* lpTemplateName;
}; /* size: 0x0088 */

