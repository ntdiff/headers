typedef struct _TTGETTITLE
{
  /* 0x0000 */ unsigned long dwSize;
  /* 0x0004 */ unsigned int uTitleBitmap;
  /* 0x0008 */ unsigned int cch;
  /* 0x0010 */ wchar_t* pszTitle;
} TTGETTITLE, *PTTGETTITLE; /* size: 0x0018 */

