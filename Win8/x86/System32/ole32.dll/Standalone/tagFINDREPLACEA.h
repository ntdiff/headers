struct tagFINDREPLACEA
{
  /* 0x0000 */ unsigned long lStructSize;
  /* 0x0004 */ struct HWND__* hwndOwner;
  /* 0x0008 */ struct HINSTANCE__* hInstance;
  /* 0x000c */ unsigned long Flags;
  /* 0x0010 */ char* lpstrFindWhat;
  /* 0x0014 */ char* lpstrReplaceWith;
  /* 0x0018 */ unsigned short wFindWhatLen;
  /* 0x001a */ unsigned short wReplaceWithLen;
  /* 0x001c */ long lCustData;
  /* 0x0020 */ void* lpfnHook /* function */;
  /* 0x0024 */ const char* lpTemplateName;
}; /* size: 0x0028 */

