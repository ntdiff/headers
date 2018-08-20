typedef struct _LUID
{
  /* 0x0000 */ unsigned long LowPart;
  /* 0x0004 */ long HighPart;
} LUID, *PLUID; /* size: 0x0008 */

typedef struct _TOKEN_SOURCE
{
  /* 0x0000 */ char SourceName[8];
  /* 0x0008 */ struct _LUID SourceIdentifier;
} TOKEN_SOURCE, *PTOKEN_SOURCE; /* size: 0x0010 */

typedef union _LARGE_INTEGER
{
  union
  {
    struct
    {
      /* 0x0000 */ unsigned long LowPart;
      /* 0x0004 */ long HighPart;
    }; /* size: 0x0008 */
    struct // _TAG_UNNAMED_1
    {
      /* 0x0000 */ unsigned long LowPart;
      /* 0x0004 */ long HighPart;
    } /* size: 0x0008 */ u;
    /* 0x0000 */ __int64 QuadPart;
  }; /* size: 0x0008 */
} LARGE_INTEGER, *PLARGE_INTEGER; /* size: 0x0008 */

typedef struct _SEP_TOKEN_PRIVILEGES
{
  /* 0x0000 */ unsigned __int64 Present;
  /* 0x0008 */ unsigned __int64 Enabled;
  /* 0x0010 */ unsigned __int64 EnabledByDefault;
} SEP_TOKEN_PRIVILEGES, *PSEP_TOKEN_PRIVILEGES; /* size: 0x0018 */

typedef struct _TOKEN_AUDIT_POLICY
{
  /* 0x0000 */ unsigned char PerUserPolicy[26];
} TOKEN_AUDIT_POLICY, *PTOKEN_AUDIT_POLICY; /* size: 0x001a */

typedef struct _SEP_AUDIT_POLICY
{
  /* 0x0000 */ struct _TOKEN_AUDIT_POLICY AdtTokenPolicy;
  /* 0x001a */ unsigned char PolicySetStatus;
} SEP_AUDIT_POLICY, *PSEP_AUDIT_POLICY; /* size: 0x001b */

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

typedef struct _SID_AND_ATTRIBUTES_HASH
{
  /* 0x0000 */ unsigned long SidCount;
  /* 0x0004 */ struct _SID_AND_ATTRIBUTES* SidAttr;
  /* 0x0008 */ unsigned long Hash[32];
} SID_AND_ATTRIBUTES_HASH, *PSID_AND_ATTRIBUTES_HASH; /* size: 0x0088 */

typedef struct _TOKEN
{
  /* 0x0000 */ struct _TOKEN_SOURCE TokenSource;
  /* 0x0010 */ struct _LUID TokenId;
  /* 0x0018 */ struct _LUID AuthenticationId;
  /* 0x0020 */ struct _LUID ParentTokenId;
  /* 0x0028 */ union _LARGE_INTEGER ExpirationTime;
  /* 0x0030 */ struct _ERESOURCE* TokenLock;
  /* 0x0034 */ struct _LUID ModifiedId;
  /* 0x0040 */ struct _SEP_TOKEN_PRIVILEGES Privileges;
  /* 0x0058 */ struct _SEP_AUDIT_POLICY AuditPolicy;
  /* 0x0074 */ unsigned long SessionId;
  /* 0x0078 */ unsigned long UserAndGroupCount;
  /* 0x007c */ unsigned long RestrictedSidCount;
  /* 0x0080 */ unsigned long VariableLength;
  /* 0x0084 */ unsigned long DynamicCharged;
  /* 0x0088 */ unsigned long DynamicAvailable;
  /* 0x008c */ unsigned long DefaultOwnerIndex;
  /* 0x0090 */ struct _SID_AND_ATTRIBUTES* UserAndGroups;
  /* 0x0094 */ struct _SID_AND_ATTRIBUTES* RestrictedSids;
  /* 0x0098 */ void* PrimaryGroup;
  /* 0x009c */ unsigned long* DynamicPart;
  /* 0x00a0 */ struct _ACL* DefaultDacl;
  /* 0x00a4 */ enum _TOKEN_TYPE TokenType;
  /* 0x00a8 */ enum _SECURITY_IMPERSONATION_LEVEL ImpersonationLevel;
  /* 0x00ac */ unsigned long TokenFlags;
  /* 0x00b0 */ unsigned char TokenInUse;
  /* 0x00b4 */ unsigned long IntegrityLevelIndex;
  /* 0x00b8 */ unsigned long MandatoryPolicy;
  /* 0x00bc */ struct _SECURITY_TOKEN_PROXY_DATA* ProxyData;
  /* 0x00c0 */ struct _SECURITY_TOKEN_AUDIT_DATA* AuditData;
  /* 0x00c4 */ struct _SEP_LOGON_SESSION_REFERENCES* LogonSession;
  /* 0x00c8 */ struct _LUID OriginatingLogonSession;
  /* 0x00d0 */ struct _SID_AND_ATTRIBUTES_HASH SidHash;
  /* 0x0158 */ struct _SID_AND_ATTRIBUTES_HASH RestrictedSidHash;
  /* 0x01e0 */ unsigned long VariablePart;
  /* 0x01e4 */ long __PADDING__[1];
} TOKEN, *PTOKEN; /* size: 0x01e8 */

