typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

typedef struct _UNICODE_STRING
{
  /* 0x0000 */ unsigned short Length;
  /* 0x0002 */ unsigned short MaximumLength;
  /* 0x0008 */ unsigned short* Buffer;
} UNICODE_STRING, *PUNICODE_STRING; /* size: 0x0010 */

typedef union _LARGE_INTEGER
{
  union
  {
    struct
    {
      /* 0x0000 */ unsigned long LowPart;
      /* 0x0004 */ long HighPart;
    }; /* size: 0x0008 */
    struct // _TAG_UNNAMED_1
    {
      /* 0x0000 */ unsigned long LowPart;
      /* 0x0004 */ long HighPart;
    } /* size: 0x0008 */ u;
    /* 0x0000 */ __int64 QuadPart;
  }; /* size: 0x0008 */
} LARGE_INTEGER, *PLARGE_INTEGER; /* size: 0x0008 */

typedef struct _LDR_DATA_TABLE_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY InLoadOrderLinks;
  /* 0x0010 */ struct _LIST_ENTRY InMemoryOrderLinks;
  /* 0x0020 */ struct _LIST_ENTRY InInitializationOrderLinks;
  /* 0x0030 */ void* DllBase;
  /* 0x0038 */ void* EntryPoint;
  /* 0x0040 */ unsigned long SizeOfImage;
  /* 0x0048 */ struct _UNICODE_STRING FullDllName;
  /* 0x0058 */ struct _UNICODE_STRING BaseDllName;
  /* 0x0068 */ unsigned long Flags;
  /* 0x006c */ unsigned short LoadCount;
  /* 0x006e */ unsigned short TlsIndex;
  union
  {
    /* 0x0070 */ struct _LIST_ENTRY HashLinks;
    struct
    {
      /* 0x0070 */ void* SectionPointer;
      /* 0x0078 */ unsigned long CheckSum;
    }; /* size: 0x000c */
  }; /* size: 0x0010 */
  union
  {
    /* 0x0080 */ unsigned long TimeDateStamp;
    /* 0x0080 */ void* LoadedImports;
  }; /* size: 0x0008 */
  /* 0x0088 */ struct _ACTIVATION_CONTEXT* EntryPointActivationContext;
  /* 0x0090 */ void* PatchInformation;
  /* 0x0098 */ struct _LIST_ENTRY ForwarderLinks;
  /* 0x00a8 */ struct _LIST_ENTRY ServiceTagLinks;
  /* 0x00b8 */ struct _LIST_ENTRY StaticLinks;
  /* 0x00c8 */ void* ContextInformation;
  /* 0x00d0 */ unsigned __int64 OriginalBase;
  /* 0x00d8 */ union _LARGE_INTEGER LoadTime;
} LDR_DATA_TABLE_ENTRY, *PLDR_DATA_TABLE_ENTRY; /* size: 0x00e0 */

