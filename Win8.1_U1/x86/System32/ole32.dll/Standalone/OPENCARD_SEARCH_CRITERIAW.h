struct OPENCARD_SEARCH_CRITERIAW
{
  /* 0x0000 */ unsigned long dwStructSize;
  /* 0x0004 */ wchar_t* lpstrGroupNames;
  /* 0x0008 */ unsigned long nMaxGroupNames;
  /* 0x000c */ const struct _GUID* rgguidInterfaces;
  /* 0x0010 */ unsigned long cguidInterfaces;
  /* 0x0014 */ wchar_t* lpstrCardNames;
  /* 0x0018 */ unsigned long nMaxCardNames;
  /* 0x001c */ void* lpfnCheck /* function */;
  /* 0x0020 */ void* lpfnConnect /* function */;
  /* 0x0024 */ void* lpfnDisconnect /* function */;
  /* 0x0028 */ void* pvUserData;
  /* 0x002c */ unsigned long dwShareMode;
  /* 0x0030 */ unsigned long dwPreferredProtocols;
}; /* size: 0x0034 */

