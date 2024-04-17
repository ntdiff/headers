typedef enum _SECURITY_IMPERSONATION_LEVEL
{
  SecurityAnonymous = 0,
  SecurityIdentification = 1,
  SecurityImpersonation = 2,
  SecurityDelegation = 3,
} SECURITY_IMPERSONATION_LEVEL, *PSECURITY_IMPERSONATION_LEVEL;

typedef struct _SECURITY_ADVANCED_QUALITY_OF_SERVICE
{
  /* 0x0000 */ unsigned long Length;
  /* 0x0004 */ enum _SECURITY_IMPERSONATION_LEVEL ImpersonationLevel;
  /* 0x0008 */ unsigned char ContextTrackingMode;
  /* 0x0009 */ unsigned char EffectiveOnly;
  /* 0x0010 */ struct _SECURITY_TOKEN_PROXY_DATA* ProxyData;
  /* 0x0018 */ struct _SECURITY_TOKEN_AUDIT_DATA* AuditData;
} SECURITY_ADVANCED_QUALITY_OF_SERVICE, *PSECURITY_ADVANCED_QUALITY_OF_SERVICE; /* size: 0x0020 */

