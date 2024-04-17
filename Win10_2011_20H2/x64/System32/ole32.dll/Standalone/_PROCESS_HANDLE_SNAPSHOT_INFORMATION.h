typedef struct _PROCESS_HANDLE_TABLE_ENTRY_INFO
{
  /* 0x0000 */ void* HandleValue;
  /* 0x0008 */ unsigned __int64 HandleCount;
  /* 0x0010 */ unsigned __int64 PointerCount;
  /* 0x0018 */ unsigned long GrantedAccess;
  /* 0x001c */ unsigned long ObjectTypeIndex;
  /* 0x0020 */ unsigned long HandleAttributes;
  /* 0x0024 */ unsigned long Reserved;
} PROCESS_HANDLE_TABLE_ENTRY_INFO, *PPROCESS_HANDLE_TABLE_ENTRY_INFO; /* size: 0x0028 */

typedef struct _PROCESS_HANDLE_SNAPSHOT_INFORMATION
{
  /* 0x0000 */ unsigned __int64 NumberOfHandles;
  /* 0x0008 */ unsigned __int64 Reserved;
  /* 0x0010 */ struct _PROCESS_HANDLE_TABLE_ENTRY_INFO Handles[1];
} PROCESS_HANDLE_SNAPSHOT_INFORMATION, *PPROCESS_HANDLE_SNAPSHOT_INFORMATION; /* size: 0x0038 */

