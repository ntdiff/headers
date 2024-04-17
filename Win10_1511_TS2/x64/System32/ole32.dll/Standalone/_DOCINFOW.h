typedef struct _DOCINFOW
{
  /* 0x0000 */ int cbSize;
  /* 0x0008 */ const wchar_t* lpszDocName;
  /* 0x0010 */ const wchar_t* lpszOutput;
  /* 0x0018 */ const wchar_t* lpszDatatype;
  /* 0x0020 */ unsigned long fwType;
  /* 0x0024 */ long __PADDING__[1];
} DOCINFOW, *PDOCINFOW; /* size: 0x0028 */

