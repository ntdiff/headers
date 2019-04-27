typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

typedef struct _RTL_DYNAMIC_HASH_TABLE_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY Linkage;
  /* 0x0010 */ unsigned __int64 Signature;
} RTL_DYNAMIC_HASH_TABLE_ENTRY, *PRTL_DYNAMIC_HASH_TABLE_ENTRY; /* size: 0x0018 */

typedef enum _SEP_CACHED_HANDLES_ENTRY_TYPE
{
  SepCachedHandlesEntryLowbox = 0,
  SepCachedHandlesEntryBnoIsolation = 1,
} SEP_CACHED_HANDLES_ENTRY_TYPE, *PSEP_CACHED_HANDLES_ENTRY_TYPE;

typedef struct _UNICODE_STRING
{
  /* 0x0000 */ unsigned short Length;
  /* 0x0002 */ unsigned short MaximumLength;
  /* 0x0008 */ wchar_t* Buffer;
} UNICODE_STRING, *PUNICODE_STRING; /* size: 0x0010 */

typedef struct _SEP_CACHED_HANDLES_ENTRY_DESCRIPTOR
{
  /* 0x0000 */ enum _SEP_CACHED_HANDLES_ENTRY_TYPE DescriptorType;
  union
  {
    /* 0x0008 */ void* PackageSid;
    /* 0x0008 */ struct _UNICODE_STRING IsolationPrefix;
  }; /* size: 0x0010 */
} SEP_CACHED_HANDLES_ENTRY_DESCRIPTOR, *PSEP_CACHED_HANDLES_ENTRY_DESCRIPTOR; /* size: 0x0018 */

typedef struct _SEP_CACHED_HANDLES_ENTRY
{
  /* 0x0000 */ struct _RTL_DYNAMIC_HASH_TABLE_ENTRY HashEntry;
  /* 0x0018 */ __int64 ReferenceCount;
  /* 0x0020 */ struct _SEP_CACHED_HANDLES_ENTRY_DESCRIPTOR EntryDescriptor;
  /* 0x0038 */ unsigned long HandleCount;
  /* 0x0040 */ void** Handles;
} SEP_CACHED_HANDLES_ENTRY, *PSEP_CACHED_HANDLES_ENTRY; /* size: 0x0048 */

