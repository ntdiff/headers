typedef struct _LUID
{
  /* 0x0000 */ unsigned long LowPart;
  /* 0x0004 */ long HighPart;
} LUID, *PLUID; /* size: 0x0008 */

typedef union _LARGE_INTEGER
{
  union
  {
    struct
    {
      /* 0x0000 */ unsigned long LowPart;
      /* 0x0004 */ long HighPart;
    }; /* size: 0x0008 */
    struct
    {
      /* 0x0000 */ unsigned long LowPart;
      /* 0x0004 */ long HighPart;
    } /* size: 0x0008 */ u;
    /* 0x0000 */ __int64 QuadPart;
  }; /* size: 0x0008 */
} LARGE_INTEGER, *PLARGE_INTEGER; /* size: 0x0008 */

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

typedef struct _TOKEN_STATISTICS
{
  /* 0x0000 */ struct _LUID TokenId;
  /* 0x0008 */ struct _LUID AuthenticationId;
  /* 0x0010 */ union _LARGE_INTEGER ExpirationTime;
  /* 0x0018 */ enum _TOKEN_TYPE TokenType;
  /* 0x001c */ enum _SECURITY_IMPERSONATION_LEVEL ImpersonationLevel;
  /* 0x0020 */ unsigned long DynamicCharged;
  /* 0x0024 */ unsigned long DynamicAvailable;
  /* 0x0028 */ unsigned long GroupCount;
  /* 0x002c */ unsigned long PrivilegeCount;
  /* 0x0030 */ struct _LUID ModifiedId;
} TOKEN_STATISTICS, *PTOKEN_STATISTICS; /* size: 0x0038 */

