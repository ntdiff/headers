struct tagSIZE
{
  /* 0x0000 */ long cx;
  /* 0x0004 */ long cy;
}; /* size: 0x0008 */

struct tagPROPPAGEINFO
{
  /* 0x0000 */ unsigned long cb;
  /* 0x0008 */ wchar_t* pszTitle;
  /* 0x0010 */ struct tagSIZE size;
  /* 0x0018 */ wchar_t* pszDocString;
  /* 0x0020 */ wchar_t* pszHelpFile;
  /* 0x0028 */ unsigned long dwHelpContext;
  /* 0x002c */ long __PADDING__[1];
}; /* size: 0x0030 */

