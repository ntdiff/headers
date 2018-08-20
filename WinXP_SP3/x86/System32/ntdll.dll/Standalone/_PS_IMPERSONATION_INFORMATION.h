typedef enum _SECURITY_IMPERSONATION_LEVEL
{
  SecurityAnonymous = 0,
  SecurityIdentification = 1,
  SecurityImpersonation = 2,
  SecurityDelegation = 3,
} SECURITY_IMPERSONATION_LEVEL, *PSECURITY_IMPERSONATION_LEVEL;

typedef struct _PS_IMPERSONATION_INFORMATION
{
  /* 0x0000 */ void* Token;
  /* 0x0004 */ unsigned char CopyOnOpen;
  /* 0x0005 */ unsigned char EffectiveOnly;
  /* 0x0008 */ enum _SECURITY_IMPERSONATION_LEVEL ImpersonationLevel;
} PS_IMPERSONATION_INFORMATION, *PPS_IMPERSONATION_INFORMATION; /* size: 0x000c */

