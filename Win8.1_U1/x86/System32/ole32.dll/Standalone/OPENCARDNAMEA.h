struct OPENCARDNAMEA
{
  /* 0x0000 */ unsigned long dwStructSize;
  /* 0x0004 */ struct HWND__* hwndOwner;
  /* 0x0008 */ unsigned long hSCardContext;
  /* 0x000c */ char* lpstrGroupNames;
  /* 0x0010 */ unsigned long nMaxGroupNames;
  /* 0x0014 */ char* lpstrCardNames;
  /* 0x0018 */ unsigned long nMaxCardNames;
  /* 0x001c */ const struct _GUID* rgguidInterfaces;
  /* 0x0020 */ unsigned long cguidInterfaces;
  /* 0x0024 */ char* lpstrRdr;
  /* 0x0028 */ unsigned long nMaxRdr;
  /* 0x002c */ char* lpstrCard;
  /* 0x0030 */ unsigned long nMaxCard;
  /* 0x0034 */ const char* lpstrTitle;
  /* 0x0038 */ unsigned long dwFlags;
  /* 0x003c */ void* pvUserData;
  /* 0x0040 */ unsigned long dwShareMode;
  /* 0x0044 */ unsigned long dwPreferredProtocols;
  /* 0x0048 */ unsigned long dwActiveProtocol;
  /* 0x004c */ void* lpfnConnect /* function */;
  /* 0x0050 */ void* lpfnCheck /* function */;
  /* 0x0054 */ void* lpfnDisconnect /* function */;
  /* 0x0058 */ unsigned long hCardHandle;
}; /* size: 0x005c */

