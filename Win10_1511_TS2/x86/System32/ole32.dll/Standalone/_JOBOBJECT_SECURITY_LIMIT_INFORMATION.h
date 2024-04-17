typedef struct _JOBOBJECT_SECURITY_LIMIT_INFORMATION
{
  /* 0x0000 */ unsigned long SecurityLimitFlags;
  /* 0x0004 */ void* JobToken;
  /* 0x0008 */ struct _TOKEN_GROUPS* SidsToDisable;
  /* 0x000c */ struct _TOKEN_PRIVILEGES* PrivilegesToDelete;
  /* 0x0010 */ struct _TOKEN_GROUPS* RestrictedSids;
} JOBOBJECT_SECURITY_LIMIT_INFORMATION, *PJOBOBJECT_SECURITY_LIMIT_INFORMATION; /* size: 0x0014 */

