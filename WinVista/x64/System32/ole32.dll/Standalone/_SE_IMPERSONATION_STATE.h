typedef enum _SECURITY_IMPERSONATION_LEVEL
{
  SecurityAnonymous = 0,
  SecurityIdentification = 1,
  SecurityImpersonation = 2,
  SecurityDelegation = 3,
} SECURITY_IMPERSONATION_LEVEL, *PSECURITY_IMPERSONATION_LEVEL;

typedef struct _SE_IMPERSONATION_STATE
{
  /* 0x0000 */ void* Token;
  /* 0x0008 */ unsigned char CopyOnOpen;
  /* 0x0009 */ unsigned char EffectiveOnly;
  /* 0x000c */ enum _SECURITY_IMPERSONATION_LEVEL Level;
} SE_IMPERSONATION_STATE, *PSE_IMPERSONATION_STATE; /* size: 0x0010 */

