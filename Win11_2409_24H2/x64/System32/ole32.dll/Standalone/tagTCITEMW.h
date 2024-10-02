struct tagTCITEMW
{
  /* 0x0000 */ unsigned int mask;
  /* 0x0004 */ unsigned long dwState;
  /* 0x0008 */ unsigned long dwStateMask;
  /* 0x0010 */ wchar_t* pszText;
  /* 0x0018 */ int cchTextMax;
  /* 0x001c */ int iImage;
  /* 0x0020 */ __int64 lParam;
}; /* size: 0x0028 */

