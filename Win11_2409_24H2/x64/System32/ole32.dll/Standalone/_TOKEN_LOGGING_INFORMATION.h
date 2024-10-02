typedef enum _TOKEN_TYPE
{
  TokenPrimary = 1,
  TokenImpersonation = 2,
} TOKEN_TYPE, *PTOKEN_TYPE;

typedef struct _TOKEN_ELEVATION
{
  /* 0x0000 */ unsigned long TokenIsElevated;
} TOKEN_ELEVATION, *PTOKEN_ELEVATION; /* size: 0x0004 */

typedef enum _TOKEN_ELEVATION_TYPE
{
  TokenElevationTypeDefault = 1,
  TokenElevationTypeFull = 2,
  TokenElevationTypeLimited = 3,
} TOKEN_ELEVATION_TYPE, *PTOKEN_ELEVATION_TYPE;

typedef enum _SECURITY_IMPERSONATION_LEVEL
{
  SecurityAnonymous = 0,
  SecurityIdentification = 1,
  SecurityImpersonation = 2,
  SecurityDelegation = 3,
} SECURITY_IMPERSONATION_LEVEL, *PSECURITY_IMPERSONATION_LEVEL;

typedef struct _SID_AND_ATTRIBUTES
{
  /* 0x0000 */ void* Sid;
  /* 0x0008 */ unsigned long Attributes;
  /* 0x000c */ long __PADDING__[1];
} SID_AND_ATTRIBUTES, *PSID_AND_ATTRIBUTES; /* size: 0x0010 */

typedef struct _LUID
{
  /* 0x0000 */ unsigned long LowPart;
  /* 0x0004 */ long HighPart;
} LUID, *PLUID; /* size: 0x0008 */

typedef struct _TOKEN_LOGGING_INFORMATION
{
  /* 0x0000 */ enum _TOKEN_TYPE TokenType;
  /* 0x0004 */ struct _TOKEN_ELEVATION TokenElevation;
  /* 0x0008 */ enum _TOKEN_ELEVATION_TYPE TokenElevationType;
  /* 0x000c */ enum _SECURITY_IMPERSONATION_LEVEL ImpersonationLevel;
  /* 0x0010 */ unsigned long IntegrityLevel;
  /* 0x0018 */ struct _SID_AND_ATTRIBUTES User;
  /* 0x0028 */ void* TrustLevelSid;
  /* 0x0030 */ unsigned long SessionId;
  /* 0x0034 */ unsigned long AppContainerNumber;
  /* 0x0038 */ struct _LUID AuthenticationId;
  /* 0x0040 */ unsigned long GroupCount;
  /* 0x0044 */ unsigned long GroupsLength;
  /* 0x0048 */ struct _SID_AND_ATTRIBUTES* Groups;
} TOKEN_LOGGING_INFORMATION, *PTOKEN_LOGGING_INFORMATION; /* size: 0x0050 */

