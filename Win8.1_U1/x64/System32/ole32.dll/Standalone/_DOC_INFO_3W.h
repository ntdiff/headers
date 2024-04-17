typedef struct _DOC_INFO_3W
{
  /* 0x0000 */ wchar_t* pDocName;
  /* 0x0008 */ wchar_t* pOutputFile;
  /* 0x0010 */ wchar_t* pDatatype;
  /* 0x0018 */ unsigned long dwFlags;
  /* 0x001c */ long __PADDING__[1];
} DOC_INFO_3W, *PDOC_INFO_3W; /* size: 0x0020 */

