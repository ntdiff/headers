typedef struct _HANDLE_TABLE_ENTRY_INFO
{
  /* 0x0000 */ unsigned long AuditMask;
} HANDLE_TABLE_ENTRY_INFO, *PHANDLE_TABLE_ENTRY_INFO; /* size: 0x0004 */

typedef struct _OB_DUPLICATE_OBJECT_STATE
{
  /* 0x0000 */ struct _EPROCESS* SourceProcess;
  /* 0x0008 */ void* SourceHandle;
  /* 0x0010 */ void* Object;
  /* 0x0018 */ struct _OBJECT_TYPE* ObjectType;
  /* 0x0020 */ unsigned long TargetAccess;
  /* 0x0024 */ struct _HANDLE_TABLE_ENTRY_INFO ObjectInfo;
  /* 0x0028 */ unsigned long HandleAttributes;
  /* 0x002c */ long __PADDING__[1];
} OB_DUPLICATE_OBJECT_STATE, *POB_DUPLICATE_OBJECT_STATE; /* size: 0x0030 */

