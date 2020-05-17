typedef enum _SEP_CACHED_HANDLES_ENTRY_TYPE
{
  SepCachedHandlesEntryLowbox = 0,
  SepCachedHandlesEntryBnoIsolation = 1,
} SEP_CACHED_HANDLES_ENTRY_TYPE, *PSEP_CACHED_HANDLES_ENTRY_TYPE;

typedef struct _UNICODE_STRING
{
  /* 0x0000 */ unsigned short Length;
  /* 0x0002 */ unsigned short MaximumLength;
  /* 0x0004 */ wchar_t* Buffer;
} UNICODE_STRING, *PUNICODE_STRING; /* size: 0x0008 */

typedef struct _SEP_CACHED_HANDLES_ENTRY_DESCRIPTOR
{
  /* 0x0000 */ enum _SEP_CACHED_HANDLES_ENTRY_TYPE DescriptorType;
  union
  {
    /* 0x0004 */ void* PackageSid;
    /* 0x0004 */ struct _UNICODE_STRING IsolationPrefix;
  }; /* size: 0x0008 */
} SEP_CACHED_HANDLES_ENTRY_DESCRIPTOR, *PSEP_CACHED_HANDLES_ENTRY_DESCRIPTOR; /* size: 0x000c */

