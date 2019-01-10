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

typedef struct _KLDR_DATA_TABLE_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY InLoadOrderLinks;
  /* 0x0010 */ void* ExceptionTable;
  /* 0x0018 */ unsigned long ExceptionTableSize;
  /* 0x0020 */ void* GpValue;
  /* 0x0028 */ struct _NON_PAGED_DEBUG_INFO* NonPagedDebugInfo;
  /* 0x0030 */ void* DllBase;
  /* 0x0038 */ void* EntryPoint;
  /* 0x0040 */ unsigned long SizeOfImage;
  /* 0x0048 */ struct _UNICODE_STRING FullDllName;
  /* 0x0058 */ struct _UNICODE_STRING BaseDllName;
  /* 0x0068 */ unsigned long Flags;
  /* 0x006c */ unsigned short LoadCount;
  union
  {
    union
    {
      struct /* bitfield */
      {
        /* 0x006e */ unsigned short SignatureLevel : 4; /* bit position: 0 */
        /* 0x006e */ unsigned short SignatureType : 3; /* bit position: 4 */
        /* 0x006e */ unsigned short Unused : 9; /* bit position: 7 */
      }; /* bitfield */
      /* 0x006e */ unsigned short EntireField;
    }; /* size: 0x0002 */
  } /* size: 0x0002 */ u1;
  /* 0x0070 */ void* SectionPointer;
  /* 0x0078 */ unsigned long CheckSum;
  /* 0x007c */ unsigned long CoverageSectionSize;
  /* 0x0080 */ void* CoverageSection;
  /* 0x0088 */ void* LoadedImports;
  /* 0x0090 */ void* Spare;
  /* 0x0098 */ unsigned long SizeOfImageNotRounded;
  /* 0x009c */ unsigned long TimeDateStamp;
} KLDR_DATA_TABLE_ENTRY, *PKLDR_DATA_TABLE_ENTRY; /* size: 0x00a0 */

