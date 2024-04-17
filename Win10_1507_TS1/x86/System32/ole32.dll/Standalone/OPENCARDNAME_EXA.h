struct OPENCARDNAME_EXA
{
  /* 0x0000 */ unsigned long dwStructSize;
  /* 0x0004 */ unsigned long hSCardContext;
  /* 0x0008 */ struct HWND__* hwndOwner;
  /* 0x000c */ unsigned long dwFlags;
  /* 0x0010 */ const char* lpstrTitle;
  /* 0x0014 */ const char* lpstrSearchDesc;
  /* 0x0018 */ struct HICON__* hIcon;
  /* 0x001c */ struct OPENCARD_SEARCH_CRITERIAA* pOpenCardSearchCriteria;
  /* 0x0020 */ void* lpfnConnect /* function */;
  /* 0x0024 */ void* pvUserData;
  /* 0x0028 */ unsigned long dwShareMode;
  /* 0x002c */ unsigned long dwPreferredProtocols;
  /* 0x0030 */ char* lpstrRdr;
  /* 0x0034 */ unsigned long nMaxRdr;
  /* 0x0038 */ char* lpstrCard;
  /* 0x003c */ unsigned long nMaxCard;
  /* 0x0040 */ unsigned long dwActiveProtocol;
  /* 0x0044 */ unsigned long hCardHandle;
}; /* size: 0x0048 */

