typedef struct _tagEDITBALLOONTIP
{
  /* 0x0000 */ unsigned long cbStruct;
  /* 0x0008 */ const wchar_t* pszTitle;
  /* 0x0010 */ const wchar_t* pszText;
  /* 0x0018 */ int ttiIcon;
  /* 0x001c */ long __PADDING__[1];
} tagEDITBALLOONTIP, *PtagEDITBALLOONTIP; /* size: 0x0020 */

