typedef struct _LUNICODE_STRING
{
  /* 0x0000 */ unsigned __int64 Length;
  /* 0x0008 */ unsigned __int64 MaximumLength;
  /* 0x0010 */ wchar_t* Buffer;
} LUNICODE_STRING, *PLUNICODE_STRING; /* size: 0x0018 */

