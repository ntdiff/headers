struct LIST_ENTRY64
{
  /* 0x0000 */ unsigned __int64 Flink;
  /* 0x0008 */ unsigned __int64 Blink;
}; /* size: 0x0010 */

typedef struct _STRING64
{
  /* 0x0000 */ unsigned short Length;
  /* 0x0002 */ unsigned short MaximumLength;
  /* 0x0008 */ unsigned __int64 Buffer;
} STRING64, *PSTRING64; /* size: 0x0010 */

typedef struct _LDR_DATA_TABLE_ENTRY64
{
  /* 0x0000 */ struct LIST_ENTRY64 InLoadOrderLinks;
  /* 0x0010 */ struct LIST_ENTRY64 InMemoryOrderLinks;
  /* 0x0020 */ struct LIST_ENTRY64 InInitializationOrderLinks;
  /* 0x0030 */ unsigned __int64 DllBase;
  /* 0x0038 */ unsigned __int64 EntryPoint;
  /* 0x0040 */ unsigned long SizeOfImage;
  /* 0x0048 */ struct _STRING64 FullDllName;
  /* 0x0058 */ struct _STRING64 BaseDllName;
  /* 0x0068 */ unsigned long Flags;
  /* 0x006c */ unsigned short LoadCount;
  /* 0x006e */ unsigned short TlsIndex;
  union
  {
    /* 0x0070 */ struct LIST_ENTRY64 HashLinks;
    struct
    {
      /* 0x0070 */ unsigned __int64 SectionPointer;
      /* 0x0078 */ unsigned long CheckSum;
    }; /* size: 0x000c */
  }; /* size: 0x0010 */
  union
  {
    /* 0x0080 */ unsigned long TimeDateStamp;
    /* 0x0080 */ unsigned __int64 LoadedImports;
  }; /* size: 0x0008 */
} LDR_DATA_TABLE_ENTRY64, *PLDR_DATA_TABLE_ENTRY64; /* size: 0x0088 */

