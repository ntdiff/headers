typedef struct _DOC_INFO_2W
{
  /* 0x0000 */ wchar_t* pDocName;
  /* 0x0008 */ wchar_t* pOutputFile;
  /* 0x0010 */ wchar_t* pDatatype;
  /* 0x0018 */ unsigned long dwMode;
  /* 0x001c */ unsigned long JobId;
} DOC_INFO_2W, *PDOC_INFO_2W; /* size: 0x0020 */

