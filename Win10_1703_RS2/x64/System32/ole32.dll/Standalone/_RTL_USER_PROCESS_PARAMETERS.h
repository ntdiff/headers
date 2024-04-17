typedef struct _UNICODE_STRING
{
  /* 0x0000 */ unsigned short Length;
  /* 0x0002 */ unsigned short MaximumLength;
  /* 0x0008 */ wchar_t* Buffer;
} UNICODE_STRING, *PUNICODE_STRING; /* size: 0x0010 */

typedef struct _RTL_USER_PROCESS_PARAMETERS
{
  /* 0x0000 */ unsigned char Reserved1[16];
  /* 0x0010 */ void* Reserved2[10];
  /* 0x0060 */ struct _UNICODE_STRING ImagePathName;
  /* 0x0070 */ struct _UNICODE_STRING CommandLine;
} RTL_USER_PROCESS_PARAMETERS, *PRTL_USER_PROCESS_PARAMETERS; /* size: 0x0080 */

