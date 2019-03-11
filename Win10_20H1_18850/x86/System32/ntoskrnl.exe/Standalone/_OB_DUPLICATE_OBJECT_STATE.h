typedef struct _HANDLE_TABLE_ENTRY_INFO
{
  /* 0x0000 */ unsigned long AuditMask;
  /* 0x0004 */ unsigned long MaxRelativeAccessMask;
} HANDLE_TABLE_ENTRY_INFO, *PHANDLE_TABLE_ENTRY_INFO; /* size: 0x0008 */

typedef struct _OB_DUPLICATE_OBJECT_STATE
{
  /* 0x0000 */ struct _EPROCESS* SourceProcess;
  /* 0x0004 */ void* SourceHandle;
  /* 0x0008 */ void* Object;
  /* 0x000c */ unsigned long TargetAccess;
  /* 0x0010 */ struct _HANDLE_TABLE_ENTRY_INFO ObjectInfo;
  /* 0x0018 */ unsigned long HandleAttributes;
} OB_DUPLICATE_OBJECT_STATE, *POB_DUPLICATE_OBJECT_STATE; /* size: 0x001c */

