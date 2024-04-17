struct tagGCP_RESULTSW
{
  /* 0x0000 */ unsigned long lStructSize;
  /* 0x0004 */ wchar_t* lpOutString;
  /* 0x0008 */ unsigned int* lpOrder;
  /* 0x000c */ int* lpDx;
  /* 0x0010 */ int* lpCaretPos;
  /* 0x0014 */ char* lpClass;
  /* 0x0018 */ wchar_t* lpGlyphs;
  /* 0x001c */ unsigned int nGlyphs;
  /* 0x0020 */ int nMaxFit;
}; /* size: 0x0024 */

