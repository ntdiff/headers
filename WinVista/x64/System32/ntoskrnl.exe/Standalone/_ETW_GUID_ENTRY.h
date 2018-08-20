typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

typedef struct _GUID
{
  /* 0x0000 */ unsigned long Data1;
  /* 0x0004 */ unsigned short Data2;
  /* 0x0006 */ unsigned short Data3;
  /* 0x0008 */ unsigned char Data4[8];
} GUID, *PGUID; /* size: 0x0010 */

typedef struct _TRACE_ENABLE_CONTEXT
{
  /* 0x0000 */ unsigned short LoggerId;
  /* 0x0002 */ unsigned char Level;
  /* 0x0003 */ unsigned char InternalFlag;
  /* 0x0004 */ unsigned long EnableFlags;
} TRACE_ENABLE_CONTEXT, *PTRACE_ENABLE_CONTEXT; /* size: 0x0008 */

typedef struct _TRACE_ENABLE_INFO
{
  /* 0x0000 */ unsigned long IsEnabled;
  /* 0x0004 */ unsigned char Level;
  /* 0x0005 */ unsigned char Reserved1;
  /* 0x0006 */ unsigned short LoggerId;
  /* 0x0008 */ unsigned long EnableProperty;
  /* 0x000c */ unsigned long Reserved2;
  /* 0x0010 */ unsigned __int64 MatchAnyKeyword;
  /* 0x0018 */ unsigned __int64 MatchAllKeyword;
} TRACE_ENABLE_INFO, *PTRACE_ENABLE_INFO; /* size: 0x0020 */

typedef struct _ETW_GUID_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY GuidList;
  /* 0x0010 */ volatile long RefCount;
  /* 0x0014 */ struct _GUID Guid;
  /* 0x0028 */ struct _LIST_ENTRY RegListHead;
  /* 0x0038 */ void* SecurityDescriptor;
  /* 0x0040 */ struct _TRACE_ENABLE_CONTEXT LegacyEnableContext;
  /* 0x0048 */ unsigned long LegacyProviderEnabled;
  /* 0x0050 */ struct _TRACE_ENABLE_INFO ProviderEnableInfo;
  /* 0x0070 */ struct _TRACE_ENABLE_INFO EnableInfo[8];
} ETW_GUID_ENTRY, *PETW_GUID_ENTRY; /* size: 0x0170 */

