typedef struct _SID_AND_ATTRIBUTES_HASH
{
  /* 0x0000 */ unsigned long SidCount;
  /* 0x0008 */ struct _SID_AND_ATTRIBUTES* SidAttr;
  /* 0x0010 */ unsigned __int64 Hash[32];
} SID_AND_ATTRIBUTES_HASH, *PSID_AND_ATTRIBUTES_HASH; /* size: 0x0110 */

typedef struct _AUTHZBASEP_CLAIM_ATTRIBUTES_COLLECTION
{
  /* 0x0000 */ unsigned long DeviceGroupsCount;
  /* 0x0008 */ struct _SID_AND_ATTRIBUTES* pDeviceGroups;
  /* 0x0010 */ unsigned long RestrictedDeviceGroupsCount;
  /* 0x0018 */ struct _SID_AND_ATTRIBUTES* pRestrictedDeviceGroups;
  /* 0x0020 */ struct _SID_AND_ATTRIBUTES_HASH DeviceGroupsHash;
  /* 0x0130 */ struct _SID_AND_ATTRIBUTES_HASH RestrictedDeviceGroupsHash;
  /* 0x0240 */ struct _AUTHZBASEP_SECURITY_ATTRIBUTES_INFORMATION* pUserSecurityAttributes;
  /* 0x0248 */ struct _AUTHZBASEP_SECURITY_ATTRIBUTES_INFORMATION* pDeviceSecurityAttributes;
  /* 0x0250 */ struct _AUTHZBASEP_SECURITY_ATTRIBUTES_INFORMATION* pRestrictedUserSecurityAttributes;
  /* 0x0258 */ struct _AUTHZBASEP_SECURITY_ATTRIBUTES_INFORMATION* pRestrictedDeviceSecurityAttributes;
} AUTHZBASEP_CLAIM_ATTRIBUTES_COLLECTION, *PAUTHZBASEP_CLAIM_ATTRIBUTES_COLLECTION; /* size: 0x0260 */

