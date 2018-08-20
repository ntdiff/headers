typedef struct _PS_JOB_TOKEN_FILTER
{
  /* 0x0000 */ unsigned long CapturedSidCount;
  /* 0x0004 */ struct _SID_AND_ATTRIBUTES* CapturedSids;
  /* 0x0008 */ unsigned long CapturedSidsLength;
  /* 0x000c */ unsigned long CapturedGroupCount;
  /* 0x0010 */ struct _SID_AND_ATTRIBUTES* CapturedGroups;
  /* 0x0014 */ unsigned long CapturedGroupsLength;
  /* 0x0018 */ unsigned long CapturedPrivilegeCount;
  /* 0x001c */ struct _LUID_AND_ATTRIBUTES* CapturedPrivileges;
  /* 0x0020 */ unsigned long CapturedPrivilegesLength;
} PS_JOB_TOKEN_FILTER, *PPS_JOB_TOKEN_FILTER; /* size: 0x0024 */

