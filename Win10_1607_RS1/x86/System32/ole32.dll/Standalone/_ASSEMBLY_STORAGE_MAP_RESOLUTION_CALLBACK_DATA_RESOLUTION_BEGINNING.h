typedef struct _UNICODE_STRING
{
  /* 0x0000 */ unsigned short Length;
  /* 0x0002 */ unsigned short MaximumLength;
  /* 0x0004 */ wchar_t* Buffer;
} UNICODE_STRING, *PUNICODE_STRING; /* size: 0x0008 */

typedef struct _ASSEMBLY_STORAGE_MAP_RESOLUTION_CALLBACK_DATA_RESOLUTION_BEGINNING
{
  /* 0x0000 */ const void* Data;
  /* 0x0004 */ unsigned long AssemblyRosterIndex;
  /* 0x0008 */ void* ResolutionContext;
  /* 0x000c */ struct _UNICODE_STRING Root;
  /* 0x0014 */ unsigned char KnownRoot;
  /* 0x0018 */ unsigned long RootCount;
  /* 0x001c */ unsigned char CancelResolution;
  /* 0x001d */ char __PADDING__[3];
} ASSEMBLY_STORAGE_MAP_RESOLUTION_CALLBACK_DATA_RESOLUTION_BEGINNING, *PASSEMBLY_STORAGE_MAP_RESOLUTION_CALLBACK_DATA_RESOLUTION_BEGINNING; /* size: 0x0020 */

