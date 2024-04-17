typedef struct _UNICODE_STRING
{
  /* 0x0000 */ unsigned short Length;
  /* 0x0002 */ unsigned short MaximumLength;
  /* 0x0008 */ wchar_t* Buffer;
} UNICODE_STRING, *PUNICODE_STRING; /* size: 0x0010 */

typedef struct _ASSEMBLY_STORAGE_MAP_RESOLUTION_CALLBACK_DATA_GET_ROOT
{
  /* 0x0000 */ void* ResolutionContext;
  /* 0x0008 */ unsigned __int64 RootIndex;
  /* 0x0010 */ unsigned char CancelResolution;
  /* 0x0011 */ unsigned char NoMoreEntries;
  /* 0x0018 */ struct _UNICODE_STRING Root;
} ASSEMBLY_STORAGE_MAP_RESOLUTION_CALLBACK_DATA_GET_ROOT, *PASSEMBLY_STORAGE_MAP_RESOLUTION_CALLBACK_DATA_GET_ROOT; /* size: 0x0028 */

