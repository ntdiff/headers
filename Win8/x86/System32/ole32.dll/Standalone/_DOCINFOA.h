typedef struct _DOCINFOA
{
  /* 0x0000 */ int cbSize;
  /* 0x0004 */ const char* lpszDocName;
  /* 0x0008 */ const char* lpszOutput;
  /* 0x000c */ const char* lpszDatatype;
  /* 0x0010 */ unsigned long fwType;
} DOCINFOA, *PDOCINFOA; /* size: 0x0014 */

