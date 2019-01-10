typedef struct _LUID
{
  /* 0x0000 */ unsigned long LowPart;
  /* 0x0004 */ long HighPart;
} LUID, *PLUID; /* size: 0x0008 */

typedef enum _SECURITY_IMPERSONATION_LEVEL
{
  SecurityAnonymous = 0,
  SecurityIdentification = 1,
  SecurityImpersonation = 2,
  SecurityDelegation = 3,
} SECURITY_IMPERSONATION_LEVEL, *PSECURITY_IMPERSONATION_LEVEL;

typedef struct _SECURITY_SUBJECT_CONTEXT
{
  /* 0x0000 */ void* ClientToken;
  /* 0x0004 */ enum _SECURITY_IMPERSONATION_LEVEL ImpersonationLevel;
  /* 0x0008 */ void* PrimaryToken;
  /* 0x000c */ void* ProcessAuditId;
} SECURITY_SUBJECT_CONTEXT, *PSECURITY_SUBJECT_CONTEXT; /* size: 0x0010 */

typedef struct _LUID_AND_ATTRIBUTES
{
  /* 0x0000 */ struct _LUID Luid;
  /* 0x0008 */ unsigned long Attributes;
} LUID_AND_ATTRIBUTES, *PLUID_AND_ATTRIBUTES; /* size: 0x000c */

typedef struct _INITIAL_PRIVILEGE_SET
{
  /* 0x0000 */ unsigned long PrivilegeCount;
  /* 0x0004 */ unsigned long Control;
  /* 0x0008 */ struct _LUID_AND_ATTRIBUTES Privilege[3];
} INITIAL_PRIVILEGE_SET, *PINITIAL_PRIVILEGE_SET; /* size: 0x002c */

typedef struct _PRIVILEGE_SET
{
  /* 0x0000 */ unsigned long PrivilegeCount;
  /* 0x0004 */ unsigned long Control;
  /* 0x0008 */ struct _LUID_AND_ATTRIBUTES Privilege[1];
} PRIVILEGE_SET, *PPRIVILEGE_SET; /* size: 0x0014 */

typedef struct _UNICODE_STRING
{
  /* 0x0000 */ unsigned short Length;
  /* 0x0002 */ unsigned short MaximumLength;
  /* 0x0004 */ unsigned short* Buffer;
} UNICODE_STRING, *PUNICODE_STRING; /* size: 0x0008 */

typedef struct _ACCESS_STATE
{
  /* 0x0000 */ struct _LUID OperationID;
  /* 0x0008 */ unsigned char SecurityEvaluated;
  /* 0x0009 */ unsigned char GenerateAudit;
  /* 0x000a */ unsigned char GenerateOnClose;
  /* 0x000b */ unsigned char PrivilegesAllocated;
  /* 0x000c */ unsigned long Flags;
  /* 0x0010 */ unsigned long RemainingDesiredAccess;
  /* 0x0014 */ unsigned long PreviouslyGrantedAccess;
  /* 0x0018 */ unsigned long OriginalDesiredAccess;
  /* 0x001c */ struct _SECURITY_SUBJECT_CONTEXT SubjectSecurityContext;
  /* 0x002c */ void* SecurityDescriptor;
  /* 0x0030 */ void* AuxData;
  union
  {
    union
    {
      /* 0x0034 */ struct _INITIAL_PRIVILEGE_SET InitialPrivilegeSet;
      /* 0x0034 */ struct _PRIVILEGE_SET PrivilegeSet;
    }; /* size: 0x002c */
  } /* size: 0x002c */ Privileges;
  /* 0x0060 */ unsigned char AuditPrivileges;
  /* 0x0064 */ struct _UNICODE_STRING ObjectName;
  /* 0x006c */ struct _UNICODE_STRING ObjectTypeName;
} ACCESS_STATE, *PACCESS_STATE; /* size: 0x0074 */

