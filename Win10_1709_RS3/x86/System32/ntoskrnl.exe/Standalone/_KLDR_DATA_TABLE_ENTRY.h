typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0004 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0008 */

typedef struct _UNICODE_STRING
{
  /* 0x0000 */ unsigned short Length;
  /* 0x0002 */ unsigned short MaximumLength;
  /* 0x0004 */ wchar_t* Buffer;
} UNICODE_STRING, *PUNICODE_STRING; /* size: 0x0008 */

typedef struct _KLDR_DATA_TABLE_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY InLoadOrderLinks;
  /* 0x0008 */ void* ExceptionTable;
  /* 0x000c */ unsigned long ExceptionTableSize;
  /* 0x0010 */ void* GpValue;
  /* 0x0014 */ struct _NON_PAGED_DEBUG_INFO* NonPagedDebugInfo;
  /* 0x0018 */ void* DllBase;
  /* 0x001c */ void* EntryPoint;
  /* 0x0020 */ unsigned long SizeOfImage;
  /* 0x0024 */ struct _UNICODE_STRING FullDllName;
  /* 0x002c */ struct _UNICODE_STRING BaseDllName;
  /* 0x0034 */ unsigned long Flags;
  /* 0x0038 */ unsigned short LoadCount;
  union
  {
    union
    {
      struct /* bitfield */
      {
        /* 0x003a */ unsigned short SignatureLevel : 4; /* bit position: 0 */
        /* 0x003a */ unsigned short SignatureType : 3; /* bit position: 4 */
        /* 0x003a */ unsigned short Unused : 9; /* bit position: 7 */
      }; /* bitfield */
      /* 0x003a */ unsigned short EntireField;
    }; /* size: 0x0002 */
  } /* size: 0x0002 */ u1;
  /* 0x003c */ void* SectionPointer;
  /* 0x0040 */ unsigned long CheckSum;
  /* 0x0044 */ unsigned long CoverageSectionSize;
  /* 0x0048 */ void* CoverageSection;
  /* 0x004c */ void* LoadedImports;
  /* 0x0050 */ void* Spare;
  /* 0x0054 */ unsigned long SizeOfImageNotRounded;
  /* 0x0058 */ unsigned long TimeDateStamp;
} KLDR_DATA_TABLE_ENTRY, *PKLDR_DATA_TABLE_ENTRY; /* size: 0x005c */

