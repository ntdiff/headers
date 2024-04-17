typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

typedef struct _UNICODE_STRING
{
  /* 0x0000 */ unsigned short Length;
  /* 0x0002 */ unsigned short MaximumLength;
  /* 0x0008 */ wchar_t* Buffer;
} UNICODE_STRING, *PUNICODE_STRING; /* size: 0x0010 */

typedef struct _COVERAGE_UNLOADED_MODULE_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY NextEntry;
  /* 0x0010 */ struct _UNICODE_STRING BaseDllName;
  /* 0x0020 */ struct _UNICODE_STRING FullDllName;
  /* 0x0030 */ unsigned long CoverageSectionSize;
  /* 0x0038 */ void* CoverageSection;
} COVERAGE_UNLOADED_MODULE_ENTRY, *PCOVERAGE_UNLOADED_MODULE_ENTRY; /* size: 0x0040 */

