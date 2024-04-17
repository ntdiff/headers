typedef enum _ACCESS_REASON_TYPE
{
  AccessReasonNone = 0,
  AccessReasonAllowedAce = 0x10000,
  AccessReasonDeniedAce = 0x20000,
  AccessReasonAllowedParentAce = 0x30000,
  AccessReasonDeniedParentAce = 0x40000,
  AccessReasonNotGrantedByCape = 0x50000,
  AccessReasonNotGrantedByParentCape = 0x60000,
  AccessReasonNotGrantedToAppContainer = 0x70000,
  AccessReasonMissingPrivilege = 0x100000,
  AccessReasonFromPrivilege = 0x200000,
  AccessReasonIntegrityLevel = 0x300000,
  AccessReasonOwnership = 0x400000,
  AccessReasonNullDacl = 0x500000,
  AccessReasonEmptyDacl = 0x600000,
  AccessReasonNoSD = 0x700000,
  AccessReasonNoGrant = 0x800000,
} ACCESS_REASON_TYPE, *PACCESS_REASON_TYPE;

