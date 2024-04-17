typedef struct _UNICODE_STRING
{
  /* 0x0000 */ unsigned short Length;
  /* 0x0002 */ unsigned short MaximumLength;
  /* 0x0008 */ wchar_t* Buffer;
} UNICODE_STRING, *PUNICODE_STRING; /* size: 0x0010 */

typedef struct _SE_SET_FILE_CACHE_INFORMATION
{
  /* 0x0000 */ unsigned long Size;
  /* 0x0008 */ struct _UNICODE_STRING CatalogDirectoryPath;
} SE_SET_FILE_CACHE_INFORMATION, *PSE_SET_FILE_CACHE_INFORMATION; /* size: 0x0018 */

