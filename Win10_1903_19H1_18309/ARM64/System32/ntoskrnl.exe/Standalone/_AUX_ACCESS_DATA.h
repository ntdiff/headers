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
  /* 0x0008 */ struct _GENERIC_MAPPING GenericMapping;
  /* 0x0018 */ unsigned long AccessesToAudit;
  /* 0x001c */ unsigned long MaximumAuditMask;
  /* 0x0020 */ struct _GUID TransactionId;
  /* 0x0030 */ void* NewSecurityDescriptor;
  /* 0x0038 */ void* ExistingSecurityDescriptor;
  /* 0x0040 */ void* ParentSecurityDescriptor;
  /* 0x0048 */ void* DeRefSecurityDescriptor /* function */;
  /* 0x0050 */ void* SDLock;
  /* 0x0058 */ struct _ACCESS_REASONS AccessReasons;
  /* 0x00d8 */ unsigned char GenerateStagingEvents;
  /* 0x00d9 */ char __PADDING__[7];
} AUX_ACCESS_DATA, *PAUX_ACCESS_DATA; /* size: 0x00e0 */

