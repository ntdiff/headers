typedef struct _UNICODE_STRING
{
  /* 0x0000 */ unsigned short Length;
  /* 0x0002 */ unsigned short MaximumLength;
  /* 0x0008 */ wchar_t* Buffer;
} UNICODE_STRING, *PUNICODE_STRING; /* size: 0x0010 */

typedef struct _ASSEMBLY_STORAGE_MAP_RESOLUTION_CALLBACK_DATA_RESOLUTION_BEGINNING
{
  /* 0x0000 */ const void* Data;
  /* 0x0008 */ unsigned long AssemblyRosterIndex;
  /* 0x0010 */ void* ResolutionContext;
  /* 0x0018 */ struct _UNICODE_STRING Root;
  /* 0x0028 */ unsigned char KnownRoot;
  /* 0x0030 */ unsigned __int64 RootCount;
  /* 0x0038 */ unsigned char CancelResolution;
  /* 0x0039 */ char __PADDING__[7];
} ASSEMBLY_STORAGE_MAP_RESOLUTION_CALLBACK_DATA_RESOLUTION_BEGINNING, *PASSEMBLY_STORAGE_MAP_RESOLUTION_CALLBACK_DATA_RESOLUTION_BEGINNING; /* size: 0x0040 */

