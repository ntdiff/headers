typedef struct _DOCINFOW
{
  /* 0x0000 */ int cbSize;
  /* 0x0004 */ const wchar_t* lpszDocName;
  /* 0x0008 */ const wchar_t* lpszOutput;
  /* 0x000c */ const wchar_t* lpszDatatype;
  /* 0x0010 */ unsigned long fwType;
} DOCINFOW, *PDOCINFOW; /* size: 0x0014 */

