typedef struct _SYSTEM_HANDLE_TABLE_ENTRY_INFO
{
  /* 0x0000 */ unsigned short UniqueProcessId;
  /* 0x0002 */ unsigned short CreatorBackTraceIndex;
  /* 0x0004 */ unsigned char ObjectTypeIndex;
  /* 0x0005 */ unsigned char HandleAttributes;
  /* 0x0006 */ unsigned short HandleValue;
  /* 0x0008 */ void* Object;
  /* 0x0010 */ unsigned long GrantedAccess;
  /* 0x0014 */ long __PADDING__[1];
} SYSTEM_HANDLE_TABLE_ENTRY_INFO, *PSYSTEM_HANDLE_TABLE_ENTRY_INFO; /* size: 0x0018 */

