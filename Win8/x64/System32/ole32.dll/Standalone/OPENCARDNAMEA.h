struct OPENCARDNAMEA
{
  /* 0x0000 */ unsigned long dwStructSize;
  /* 0x0008 */ struct HWND__* hwndOwner;
  /* 0x0010 */ unsigned __int64 hSCardContext;
  /* 0x0018 */ char* lpstrGroupNames;
  /* 0x0020 */ unsigned long nMaxGroupNames;
  /* 0x0028 */ char* lpstrCardNames;
  /* 0x0030 */ unsigned long nMaxCardNames;
  /* 0x0038 */ const struct _GUID* rgguidInterfaces;
  /* 0x0040 */ unsigned long cguidInterfaces;
  /* 0x0048 */ char* lpstrRdr;
  /* 0x0050 */ unsigned long nMaxRdr;
  /* 0x0058 */ char* lpstrCard;
  /* 0x0060 */ unsigned long nMaxCard;
  /* 0x0068 */ const char* lpstrTitle;
  /* 0x0070 */ unsigned long dwFlags;
  /* 0x0078 */ void* pvUserData;
  /* 0x0080 */ unsigned long dwShareMode;
  /* 0x0084 */ unsigned long dwPreferredProtocols;
  /* 0x0088 */ unsigned long dwActiveProtocol;
  /* 0x0090 */ void* lpfnConnect /* function */;
  /* 0x0098 */ void* lpfnCheck /* function */;
  /* 0x00a0 */ void* lpfnDisconnect /* function */;
  /* 0x00a8 */ unsigned __int64 hCardHandle;
}; /* size: 0x00b0 */

