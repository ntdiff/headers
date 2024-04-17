typedef struct _tagCODEBASEHOLD
{
  /* 0x0000 */ unsigned long cbSize;
  /* 0x0008 */ wchar_t* szDistUnit;
  /* 0x0010 */ wchar_t* szCodeBase;
  /* 0x0018 */ unsigned long dwVersionMS;
  /* 0x001c */ unsigned long dwVersionLS;
  /* 0x0020 */ unsigned long dwStyle;
  /* 0x0024 */ long __PADDING__[1];
} tagCODEBASEHOLD, *PtagCODEBASEHOLD; /* size: 0x0028 */

