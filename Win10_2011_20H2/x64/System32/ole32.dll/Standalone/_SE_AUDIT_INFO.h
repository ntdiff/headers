typedef enum _AUDIT_EVENT_TYPE
{
  AuditEventObjectAccess = 0,
  AuditEventDirectoryServiceAccess = 1,
} AUDIT_EVENT_TYPE, *PAUDIT_EVENT_TYPE;

typedef enum _SE_AUDIT_OPERATION
{
  AuditPrivilegeObject = 0,
  AuditPrivilegeService = 1,
  AuditAccessCheck = 2,
  AuditOpenObject = 3,
  AuditOpenObjectWithTransaction = 4,
  AuditCloseObject = 5,
  AuditDeleteObject = 6,
  AuditOpenObjectForDelete = 7,
  AuditOpenObjectForDeleteWithTransaction = 8,
  AuditCloseNonObject = 9,
  AuditOpenNonObject = 10,
  AuditObjectReference = 11,
  AuditHandleCreation = 12,
} SE_AUDIT_OPERATION, *PSE_AUDIT_OPERATION;

typedef struct _UNICODE_STRING
{
  /* 0x0000 */ unsigned short Length;
  /* 0x0002 */ unsigned short MaximumLength;
  /* 0x0008 */ wchar_t* Buffer;
} UNICODE_STRING, *PUNICODE_STRING; /* size: 0x0010 */

typedef struct _SE_AUDIT_INFO
{
  /* 0x0000 */ unsigned long Size;
  /* 0x0004 */ enum _AUDIT_EVENT_TYPE AuditType;
  /* 0x0008 */ enum _SE_AUDIT_OPERATION AuditOperation;
  /* 0x000c */ unsigned long AuditFlags;
  /* 0x0010 */ struct _UNICODE_STRING SubsystemName;
  /* 0x0020 */ struct _UNICODE_STRING ObjectTypeName;
  /* 0x0030 */ struct _UNICODE_STRING ObjectName;
  /* 0x0040 */ void* HandleId;
  /* 0x0048 */ struct _GUID* TransactionId;
  /* 0x0050 */ struct _LUID* OperationId;
  /* 0x0058 */ unsigned char ObjectCreation;
  /* 0x0059 */ unsigned char GenerateOnClose;
  /* 0x005a */ char __PADDING__[6];
} SE_AUDIT_INFO, *PSE_AUDIT_INFO; /* size: 0x0060 */

