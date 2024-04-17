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

typedef struct _KLDR_DATA_TABLE_ENTRY64
{
  /* 0x0000 */ struct LIST_ENTRY64 InLoadOrderLinks;
  /* 0x0010 */ unsigned __int64 __Undefined1;
  /* 0x0018 */ unsigned __int64 __Undefined2;
  /* 0x0020 */ unsigned __int64 __Undefined3;
  /* 0x0028 */ unsigned __int64 NonPagedDebugInfo;
  /* 0x0030 */ unsigned __int64 DllBase;
  /* 0x0038 */ unsigned __int64 EntryPoint;
  /* 0x0040 */ unsigned long SizeOfImage;
  /* 0x0048 */ struct _STRING64 FullDllName;
  /* 0x0058 */ struct _STRING64 BaseDllName;
  /* 0x0068 */ unsigned long Flags;
  /* 0x006c */ unsigned short LoadCount;
  /* 0x006e */ unsigned short __Undefined5;
  /* 0x0070 */ unsigned __int64 __Undefined6;
  /* 0x0078 */ unsigned long CheckSum;
  /* 0x007c */ unsigned long __padding1;
  /* 0x0080 */ unsigned long TimeDateStamp;
  /* 0x0084 */ unsigned long __padding2;
} KLDR_DATA_TABLE_ENTRY64, *PKLDR_DATA_TABLE_ENTRY64; /* size: 0x0088 */

