typedef struct _PROCESS_HANDLE_TABLE_ENTRY_INFO
{
  /* 0x0000 */ void* HandleValue;
  /* 0x0004 */ unsigned long HandleCount;
  /* 0x0008 */ unsigned long PointerCount;
  /* 0x000c */ unsigned long GrantedAccess;
  /* 0x0010 */ unsigned long ObjectTypeIndex;
  /* 0x0014 */ unsigned long HandleAttributes;
  /* 0x0018 */ unsigned long Reserved;
} PROCESS_HANDLE_TABLE_ENTRY_INFO, *PPROCESS_HANDLE_TABLE_ENTRY_INFO; /* size: 0x001c */

