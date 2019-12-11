typedef struct _GENERIC_MAPPING
{
  /* 0x0000 */ unsigned long GenericRead;
  /* 0x0004 */ unsigned long GenericWrite;
  /* 0x0008 */ unsigned long GenericExecute;
  /* 0x000c */ unsigned long GenericAll;
} GENERIC_MAPPING, *PGENERIC_MAPPING; /* size: 0x0010 */

typedef struct _GUID
{
  /* 0x0000 */ unsigned long Data1;
  /* 0x0004 */ unsigned short Data2;
  /* 0x0006 */ unsigned short Data3;
  /* 0x0008 */ unsigned char Data4[8];
} GUID, *PGUID; /* size: 0x0010 */

typedef struct _ACCESS_REASONS
{
  /* 0x0000 */ unsigned long Data[32];
} ACCESS_REASONS, *PACCESS_REASONS; /* size: 0x0080 */

typedef struct _AUX_ACCESS_DATA
{
  /* 0x0000 */ struct _PRIVILEGE_SET* PrivilegesUsed;
  /* 0x0004 */ struct _GENERIC_MAPPING GenericMapping;
  /* 0x0014 */ unsigned long AccessesToAudit;
  /* 0x0018 */ unsigned long MaximumAuditMask;
  /* 0x001c */ struct _GUID TransactionId;
  /* 0x002c */ void* NewSecurityDescriptor;
  /* 0x0030 */ void* ExistingSecurityDescriptor;
  /* 0x0034 */ void* ParentSecurityDescriptor;
  /* 0x0038 */ void* DeRefSecurityDescriptor /* function */;
  /* 0x003c */ void* SDLock;
  /* 0x0040 */ struct _ACCESS_REASONS AccessReasons;
} AUX_ACCESS_DATA, *PAUX_ACCESS_DATA; /* size: 0x00c0 */

