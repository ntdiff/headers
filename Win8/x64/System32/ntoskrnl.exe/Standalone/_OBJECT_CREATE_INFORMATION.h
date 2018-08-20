typedef enum _SECURITY_IMPERSONATION_LEVEL
{
  SecurityAnonymous = 0,
  SecurityIdentification = 1,
  SecurityImpersonation = 2,
  SecurityDelegation = 3,
} SECURITY_IMPERSONATION_LEVEL, *PSECURITY_IMPERSONATION_LEVEL;

typedef struct _SECURITY_QUALITY_OF_SERVICE
{
  /* 0x0000 */ unsigned long Length;
  /* 0x0004 */ enum _SECURITY_IMPERSONATION_LEVEL ImpersonationLevel;
  /* 0x0008 */ unsigned char ContextTrackingMode;
  /* 0x0009 */ unsigned char EffectiveOnly;
  /* 0x000a */ char __PADDING__[2];
} SECURITY_QUALITY_OF_SERVICE, *PSECURITY_QUALITY_OF_SERVICE; /* size: 0x000c */

typedef struct _OBJECT_CREATE_INFORMATION
{
  /* 0x0000 */ unsigned long Attributes;
  /* 0x0008 */ void* RootDirectory;
  /* 0x0010 */ char ProbeMode;
  /* 0x0014 */ unsigned long PagedPoolCharge;
  /* 0x0018 */ unsigned long NonPagedPoolCharge;
  /* 0x001c */ unsigned long SecurityDescriptorCharge;
  /* 0x0020 */ void* SecurityDescriptor;
  /* 0x0028 */ struct _SECURITY_QUALITY_OF_SERVICE* SecurityQos;
  /* 0x0030 */ struct _SECURITY_QUALITY_OF_SERVICE SecurityQualityOfService;
  /* 0x003c */ long __PADDING__[1];
} OBJECT_CREATE_INFORMATION, *POBJECT_CREATE_INFORMATION; /* size: 0x0040 */

