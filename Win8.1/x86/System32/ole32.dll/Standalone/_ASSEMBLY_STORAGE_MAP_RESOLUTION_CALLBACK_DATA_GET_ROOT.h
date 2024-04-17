typedef struct _UNICODE_STRING
{
  /* 0x0000 */ unsigned short Length;
  /* 0x0002 */ unsigned short MaximumLength;
  /* 0x0004 */ unsigned short* Buffer;
} UNICODE_STRING, *PUNICODE_STRING; /* size: 0x0008 */

typedef struct _ASSEMBLY_STORAGE_MAP_RESOLUTION_CALLBACK_DATA_GET_ROOT
{
  /* 0x0000 */ void* ResolutionContext;
  /* 0x0004 */ unsigned long RootIndex;
  /* 0x0008 */ unsigned char CancelResolution;
  /* 0x0009 */ unsigned char NoMoreEntries;
  /* 0x000c */ struct _UNICODE_STRING Root;
} ASSEMBLY_STORAGE_MAP_RESOLUTION_CALLBACK_DATA_GET_ROOT, *PASSEMBLY_STORAGE_MAP_RESOLUTION_CALLBACK_DATA_GET_ROOT; /* size: 0x0014 */

