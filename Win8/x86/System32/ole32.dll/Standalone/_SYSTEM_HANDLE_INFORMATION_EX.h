typedef struct _SYSTEM_HANDLE_TABLE_ENTRY_INFO_EX
{
  /* 0x0000 */ void* Object;
  /* 0x0004 */ unsigned long UniqueProcessId;
  /* 0x0008 */ unsigned long HandleValue;
  /* 0x000c */ unsigned long GrantedAccess;
  /* 0x0010 */ unsigned short CreatorBackTraceIndex;
  /* 0x0012 */ unsigned short ObjectTypeIndex;
  /* 0x0014 */ unsigned long HandleAttributes;
  /* 0x0018 */ unsigned long Reserved;
} SYSTEM_HANDLE_TABLE_ENTRY_INFO_EX, *PSYSTEM_HANDLE_TABLE_ENTRY_INFO_EX; /* size: 0x001c */

typedef struct _SYSTEM_HANDLE_INFORMATION_EX
{
  /* 0x0000 */ unsigned long NumberOfHandles;
  /* 0x0004 */ unsigned long Reserved;
  /* 0x0008 */ struct _SYSTEM_HANDLE_TABLE_ENTRY_INFO_EX Handles[1];
} SYSTEM_HANDLE_INFORMATION_EX, *PSYSTEM_HANDLE_INFORMATION_EX; /* size: 0x0024 */

