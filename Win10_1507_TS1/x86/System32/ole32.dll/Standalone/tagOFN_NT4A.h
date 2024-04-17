struct tagOFN_NT4A
{
  /* 0x0000 */ unsigned long lStructSize;
  /* 0x0004 */ struct HWND__* hwndOwner;
  /* 0x0008 */ struct HINSTANCE__* hInstance;
  /* 0x000c */ const char* lpstrFilter;
  /* 0x0010 */ char* lpstrCustomFilter;
  /* 0x0014 */ unsigned long nMaxCustFilter;
  /* 0x0018 */ unsigned long nFilterIndex;
  /* 0x001c */ char* lpstrFile;
  /* 0x0020 */ unsigned long nMaxFile;
  /* 0x0024 */ char* lpstrFileTitle;
  /* 0x0028 */ unsigned long nMaxFileTitle;
  /* 0x002c */ const char* lpstrInitialDir;
  /* 0x0030 */ const char* lpstrTitle;
  /* 0x0034 */ unsigned long Flags;
  /* 0x0038 */ unsigned short nFileOffset;
  /* 0x003a */ unsigned short nFileExtension;
  /* 0x003c */ const char* lpstrDefExt;
  /* 0x0040 */ long lCustData;
  /* 0x0044 */ void* lpfnHook /* function */;
  /* 0x0048 */ const char* lpTemplateName;
}; /* size: 0x004c */

