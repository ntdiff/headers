typedef struct _UNICODE_STRING
{
  /* 0x0000 */ unsigned short Length;
  /* 0x0002 */ unsigned short MaximumLength;
  /* 0x0008 */ unsigned short* Buffer;
} UNICODE_STRING, *PUNICODE_STRING; /* size: 0x0010 */

typedef struct _RTL_RELATIVE_NAME_U
{
  /* 0x0000 */ struct _UNICODE_STRING RelativeName;
  /* 0x0010 */ void* ContainingDirectory;
  /* 0x0018 */ struct _RTLP_CURDIR_REF* CurDirRef;
} RTL_RELATIVE_NAME_U, *PRTL_RELATIVE_NAME_U; /* size: 0x0020 */

