typedef struct _SID_AND_ATTRIBUTES_HASH
{
  /* 0x0000 */ unsigned long SidCount;
  /* 0x0004 */ struct _SID_AND_ATTRIBUTES* SidAttr;
  /* 0x0008 */ unsigned long Hash[32];
} SID_AND_ATTRIBUTES_HASH, *PSID_AND_ATTRIBUTES_HASH; /* size: 0x0088 */

typedef struct _AUTHZBASEP_CLAIM_ATTRIBUTES_COLLECTION
{
  /* 0x0000 */ unsigned long DeviceGroupsCount;
  /* 0x0004 */ struct _SID_AND_ATTRIBUTES* pDeviceGroups;
  /* 0x0008 */ unsigned long RestrictedDeviceGroupsCount;
  /* 0x000c */ struct _SID_AND_ATTRIBUTES* pRestrictedDeviceGroups;
  /* 0x0010 */ struct _SID_AND_ATTRIBUTES_HASH DeviceGroupsHash;
  /* 0x0098 */ struct _SID_AND_ATTRIBUTES_HASH RestrictedDeviceGroupsHash;
  /* 0x0120 */ struct _AUTHZBASEP_SECURITY_ATTRIBUTES_INFORMATION* pUserSecurityAttributes;
  /* 0x0124 */ struct _AUTHZBASEP_SECURITY_ATTRIBUTES_INFORMATION* pDeviceSecurityAttributes;
  /* 0x0128 */ struct _AUTHZBASEP_SECURITY_ATTRIBUTES_INFORMATION* pRestrictedUserSecurityAttributes;
  /* 0x012c */ struct _AUTHZBASEP_SECURITY_ATTRIBUTES_INFORMATION* pRestrictedDeviceSecurityAttributes;
} AUTHZBASEP_CLAIM_ATTRIBUTES_COLLECTION, *PAUTHZBASEP_CLAIM_ATTRIBUTES_COLLECTION; /* size: 0x0130 */

