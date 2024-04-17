struct tagSIZE
{
  /* 0x0000 */ long cx;
  /* 0x0004 */ long cy;
}; /* size: 0x0008 */

struct tagPROPPAGEINFO
{
  /* 0x0000 */ unsigned long cb;
  /* 0x0004 */ wchar_t* pszTitle;
  /* 0x0008 */ struct tagSIZE size;
  /* 0x0010 */ wchar_t* pszDocString;
  /* 0x0014 */ wchar_t* pszHelpFile;
  /* 0x0018 */ unsigned long dwHelpContext;
}; /* size: 0x001c */

