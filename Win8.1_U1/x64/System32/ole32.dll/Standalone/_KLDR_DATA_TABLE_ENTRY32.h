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

typedef struct _KLDR_DATA_TABLE_ENTRY32
{
  /* 0x0000 */ struct LIST_ENTRY32 InLoadOrderLinks;
  /* 0x0008 */ unsigned long __Undefined1;
  /* 0x000c */ unsigned long __Undefined2;
  /* 0x0010 */ unsigned long __Undefined3;
  /* 0x0014 */ unsigned long NonPagedDebugInfo;
  /* 0x0018 */ unsigned long DllBase;
  /* 0x001c */ unsigned long EntryPoint;
  /* 0x0020 */ unsigned long SizeOfImage;
  /* 0x0024 */ struct _STRING32 FullDllName;
  /* 0x002c */ struct _STRING32 BaseDllName;
  /* 0x0034 */ unsigned long Flags;
  /* 0x0038 */ unsigned short LoadCount;
  /* 0x003a */ unsigned short __Undefined5;
  /* 0x003c */ unsigned long __Undefined6;
  /* 0x0040 */ unsigned long CheckSum;
  /* 0x0044 */ unsigned long TimeDateStamp;
} KLDR_DATA_TABLE_ENTRY32, *PKLDR_DATA_TABLE_ENTRY32; /* size: 0x0048 */

