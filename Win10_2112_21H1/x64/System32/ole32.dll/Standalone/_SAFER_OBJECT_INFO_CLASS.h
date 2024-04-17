typedef enum _SAFER_OBJECT_INFO_CLASS
{
  SaferObjectLevelId = 1,
  SaferObjectScopeId = 2,
  SaferObjectFriendlyName = 3,
  SaferObjectDescription = 4,
  SaferObjectBuiltin = 5,
  SaferObjectDisallowed = 6,
  SaferObjectDisableMaxPrivilege = 7,
  SaferObjectInvertDeletedPrivileges = 8,
  SaferObjectDeletedPrivileges = 9,
  SaferObjectDefaultOwner = 10,
  SaferObjectSidsToDisable = 11,
  SaferObjectRestrictedSidsInverted = 12,
  SaferObjectRestrictedSidsAdded = 13,
  SaferObjectAllIdentificationGuids = 14,
  SaferObjectSingleIdentification = 15,
  SaferObjectExtendedError = 16,
} SAFER_OBJECT_INFO_CLASS, *PSAFER_OBJECT_INFO_CLASS;

