typedef struct _LUID
{
  /* 0x0000 */ unsigned long LowPart;
  /* 0x0004 */ long HighPart;
} LUID, *PLUID; /* size: 0x0008 */

typedef struct _TOKEN_GROUPS_AND_PRIVILEGES
{
  /* 0x0000 */ unsigned long SidCount;
  /* 0x0004 */ unsigned long SidLength;
  /* 0x0008 */ struct _SID_AND_ATTRIBUTES* Sids;
  /* 0x000c */ unsigned long RestrictedSidCount;
  /* 0x0010 */ unsigned long RestrictedSidLength;
  /* 0x0014 */ struct _SID_AND_ATTRIBUTES* RestrictedSids;
  /* 0x0018 */ unsigned long PrivilegeCount;
  /* 0x001c */ unsigned long PrivilegeLength;
  /* 0x0020 */ struct _LUID_AND_ATTRIBUTES* Privileges;
  /* 0x0024 */ struct _LUID AuthenticationId;
} TOKEN_GROUPS_AND_PRIVILEGES, *PTOKEN_GROUPS_AND_PRIVILEGES; /* size: 0x002c */

