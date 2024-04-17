typedef struct _DOC_INFO_2W
{
  /* 0x0000 */ wchar_t* pDocName;
  /* 0x0004 */ wchar_t* pOutputFile;
  /* 0x0008 */ wchar_t* pDatatype;
  /* 0x000c */ unsigned long dwMode;
  /* 0x0010 */ unsigned long JobId;
} DOC_INFO_2W, *PDOC_INFO_2W; /* size: 0x0014 */

