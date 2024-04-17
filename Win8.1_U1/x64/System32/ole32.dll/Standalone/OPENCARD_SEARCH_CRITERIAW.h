struct OPENCARD_SEARCH_CRITERIAW
{
  /* 0x0000 */ unsigned long dwStructSize;
  /* 0x0008 */ wchar_t* lpstrGroupNames;
  /* 0x0010 */ unsigned long nMaxGroupNames;
  /* 0x0018 */ const struct _GUID* rgguidInterfaces;
  /* 0x0020 */ unsigned long cguidInterfaces;
  /* 0x0028 */ wchar_t* lpstrCardNames;
  /* 0x0030 */ unsigned long nMaxCardNames;
  /* 0x0038 */ void* lpfnCheck /* function */;
  /* 0x0040 */ void* lpfnConnect /* function */;
  /* 0x0048 */ void* lpfnDisconnect /* function */;
  /* 0x0050 */ void* pvUserData;
  /* 0x0058 */ unsigned long dwShareMode;
  /* 0x005c */ unsigned long dwPreferredProtocols;
}; /* size: 0x0060 */

