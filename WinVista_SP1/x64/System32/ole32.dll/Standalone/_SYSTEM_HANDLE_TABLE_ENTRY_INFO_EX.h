typedef struct _SYSTEM_HANDLE_TABLE_ENTRY_INFO_EX
{
  /* 0x0000 */ void* Object;
  /* 0x0008 */ unsigned __int64 UniqueProcessId;
  /* 0x0010 */ unsigned __int64 HandleValue;
  /* 0x0018 */ unsigned long GrantedAccess;
  /* 0x001c */ unsigned short CreatorBackTraceIndex;
  /* 0x001e */ unsigned short ObjectTypeIndex;
  /* 0x0020 */ unsigned long HandleAttributes;
  /* 0x0024 */ unsigned long Reserved;
} SYSTEM_HANDLE_TABLE_ENTRY_INFO_EX, *PSYSTEM_HANDLE_TABLE_ENTRY_INFO_EX; /* size: 0x0028 */

