struct tagFINDREPLACEW
{
  /* 0x0000 */ unsigned long lStructSize;
  /* 0x0008 */ struct HWND__* hwndOwner;
  /* 0x0010 */ struct HINSTANCE__* hInstance;
  /* 0x0018 */ unsigned long Flags;
  /* 0x0020 */ wchar_t* lpstrFindWhat;
  /* 0x0028 */ wchar_t* lpstrReplaceWith;
  /* 0x0030 */ unsigned short wFindWhatLen;
  /* 0x0032 */ unsigned short wReplaceWithLen;
  /* 0x0038 */ __int64 lCustData;
  /* 0x0040 */ void* lpfnHook /* function */;
  /* 0x0048 */ const wchar_t* lpTemplateName;
}; /* size: 0x0050 */

