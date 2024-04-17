typedef struct _MINIDUMP_STRING
{
  /* 0x0000 */ unsigned int Length;
  /* 0x0004 */ wchar_t* Buffer /* zero-length array */;
} MINIDUMP_STRING, *PMINIDUMP_STRING; /* size: 0x0004 */

