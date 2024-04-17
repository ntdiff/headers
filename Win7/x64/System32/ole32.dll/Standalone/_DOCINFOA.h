typedef struct _DOCINFOA
{
  /* 0x0000 */ int cbSize;
  /* 0x0008 */ const char* lpszDocName;
  /* 0x0010 */ const char* lpszOutput;
  /* 0x0018 */ const char* lpszDatatype;
  /* 0x0020 */ unsigned long fwType;
  /* 0x0024 */ long __PADDING__[1];
} DOCINFOA, *PDOCINFOA; /* size: 0x0028 */

