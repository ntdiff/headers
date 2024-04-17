struct OPENCARDNAME_EXA
{
  /* 0x0000 */ unsigned long dwStructSize;
  /* 0x0008 */ unsigned __int64 hSCardContext;
  /* 0x0010 */ struct HWND__* hwndOwner;
  /* 0x0018 */ unsigned long dwFlags;
  /* 0x0020 */ const char* lpstrTitle;
  /* 0x0028 */ const char* lpstrSearchDesc;
  /* 0x0030 */ struct HICON__* hIcon;
  /* 0x0038 */ struct OPENCARD_SEARCH_CRITERIAA* pOpenCardSearchCriteria;
  /* 0x0040 */ void* lpfnConnect /* function */;
  /* 0x0048 */ void* pvUserData;
  /* 0x0050 */ unsigned long dwShareMode;
  /* 0x0054 */ unsigned long dwPreferredProtocols;
  /* 0x0058 */ char* lpstrRdr;
  /* 0x0060 */ unsigned long nMaxRdr;
  /* 0x0068 */ char* lpstrCard;
  /* 0x0070 */ unsigned long nMaxCard;
  /* 0x0074 */ unsigned long dwActiveProtocol;
  /* 0x0078 */ unsigned __int64 hCardHandle;
}; /* size: 0x0080 */

