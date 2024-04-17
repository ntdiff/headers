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

