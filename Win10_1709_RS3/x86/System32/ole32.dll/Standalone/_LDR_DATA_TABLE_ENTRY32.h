struct LIST_ENTRY32
{
  /* 0x0000 */ unsigned long Flink;
  /* 0x0004 */ unsigned long Blink;
}; /* size: 0x0008 */

typedef struct _STRING32
{
  /* 0x0000 */ unsigned short Length;
  /* 0x0002 */ unsigned short MaximumLength;
  /* 0x0004 */ unsigned long Buffer;
} STRING32, *PSTRING32; /* size: 0x0008 */

typedef struct _LDR_DATA_TABLE_ENTRY32
{
  /* 0x0000 */ struct LIST_ENTRY32 InLoadOrderLinks;
  /* 0x0008 */ struct LIST_ENTRY32 InMemoryOrderLinks;
  /* 0x0010 */ struct LIST_ENTRY32 InInitializationOrderLinks;
  /* 0x0018 */ unsigned long DllBase;
  /* 0x001c */ unsigned long EntryPoint;
  /* 0x0020 */ unsigned long SizeOfImage;
  /* 0x0024 */ struct _STRING32 FullDllName;
  /* 0x002c */ struct _STRING32 BaseDllName;
  /* 0x0034 */ unsigned long Flags;
  /* 0x0038 */ unsigned short LoadCount;
  /* 0x003a */ unsigned short TlsIndex;
  union
  {
    /* 0x003c */ struct LIST_ENTRY32 HashLinks;
    struct
    {
      /* 0x003c */ unsigned long SectionPointer;
      /* 0x0040 */ unsigned long CheckSum;
    }; /* size: 0x0008 */
  }; /* size: 0x0008 */
  union
  {
    /* 0x0044 */ unsigned long TimeDateStamp;
    /* 0x0044 */ unsigned long LoadedImports;
  }; /* size: 0x0004 */
} LDR_DATA_TABLE_ENTRY32, *PLDR_DATA_TABLE_ENTRY32; /* size: 0x0048 */

