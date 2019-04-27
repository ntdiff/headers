typedef struct _LUID
{
  /* 0x0000 */ unsigned long LowPart;
  /* 0x0004 */ long HighPart;
} LUID, *PLUID; /* size: 0x0008 */

typedef enum _TOKEN_TYPE
{
  TokenPrimary = 1,
  TokenImpersonation = 2,
} TOKEN_TYPE, *PTOKEN_TYPE;

typedef enum _SECURITY_IMPERSONATION_LEVEL
{
  SecurityAnonymous = 0,
  SecurityIdentification = 1,
  SecurityImpersonation = 2,
  SecurityDelegation = 3,
} SECURITY_IMPERSONATION_LEVEL, *PSECURITY_IMPERSONATION_LEVEL;

typedef struct _TOKEN_MANDATORY_POLICY
{
  /* 0x0000 */ unsigned long Policy;
} TOKEN_MANDATORY_POLICY, *PTOKEN_MANDATORY_POLICY; /* size: 0x0004 */

typedef struct _TOKEN_ACCESS_INFORMATION
{
  /* 0x0000 */ struct _SID_AND_ATTRIBUTES_HASH* SidHash;
  /* 0x0008 */ struct _SID_AND_ATTRIBUTES_HASH* RestrictedSidHash;
  /* 0x0010 */ struct _TOKEN_PRIVILEGES* Privileges;
  /* 0x0018 */ struct _LUID AuthenticationId;
  /* 0x0020 */ enum _TOKEN_TYPE TokenType;
  /* 0x0024 */ enum _SECURITY_IMPERSONATION_LEVEL ImpersonationLevel;
  /* 0x0028 */ struct _TOKEN_MANDATORY_POLICY MandatoryPolicy;
  /* 0x002c */ unsigned long Flags;
  /* 0x0030 */ unsigned long AppContainerNumber;
  /* 0x0038 */ void* PackageSid;
  /* 0x0040 */ struct _SID_AND_ATTRIBUTES_HASH* CapabilitiesHash;
  /* 0x0048 */ void* TrustLevelSid;
  /* 0x0050 */ void* SecurityAttributes;
} TOKEN_ACCESS_INFORMATION, *PTOKEN_ACCESS_INFORMATION; /* size: 0x0058 */

