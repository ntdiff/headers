typedef struct _GUID
{
  /* 0x0000 */ unsigned long Data1;
  /* 0x0004 */ unsigned short Data2;
  /* 0x0006 */ unsigned short Data3;
  /* 0x0008 */ unsigned char Data4[8];
} GUID, *PGUID; /* size: 0x0010 */

typedef struct _SYSTEM_SECUREBOOT_POLICY_INFORMATION
{
  /* 0x0000 */ struct _GUID PolicyPublisher;
  /* 0x0010 */ unsigned long PolicyVersion;
  /* 0x0014 */ unsigned long PolicyOptions;
} SYSTEM_SECUREBOOT_POLICY_INFORMATION, *PSYSTEM_SECUREBOOT_POLICY_INFORMATION; /* size: 0x0018 */

typedef struct _SYSTEM_SECUREBOOT_POLICY_FULL_INFORMATION
{
  /* 0x0000 */ struct _SYSTEM_SECUREBOOT_POLICY_INFORMATION PolicyInformation;
  /* 0x0018 */ unsigned long PolicySize;
  /* 0x001c */ unsigned char Policy[1];
  /* 0x001d */ char __PADDING__[3];
} SYSTEM_SECUREBOOT_POLICY_FULL_INFORMATION, *PSYSTEM_SECUREBOOT_POLICY_FULL_INFORMATION; /* size: 0x0020 */

