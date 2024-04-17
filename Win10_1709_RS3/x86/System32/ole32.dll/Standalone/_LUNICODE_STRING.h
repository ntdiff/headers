typedef struct _LUNICODE_STRING
{
  /* 0x0000 */ unsigned long Length;
  /* 0x0004 */ unsigned long MaximumLength;
  /* 0x0008 */ wchar_t* Buffer;
} LUNICODE_STRING, *PLUNICODE_STRING; /* size: 0x000c */

