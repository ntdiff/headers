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

typedef struct _ALPC_PORT_ATTRIBUTES
{
  /* 0x0000 */ unsigned long Flags;
  /* 0x0004 */ struct _SECURITY_QUALITY_OF_SERVICE SecurityQos;
  /* 0x0010 */ unsigned long MaxMessageLength;
  /* 0x0014 */ unsigned long MemoryBandwidth;
  /* 0x0018 */ unsigned long MaxPoolUsage;
  /* 0x001c */ unsigned long MaxSectionSize;
  /* 0x0020 */ unsigned long MaxViewSize;
  /* 0x0024 */ unsigned long MaxTotalSectionSize;
  /* 0x0028 */ unsigned long DupObjectTypes;
} ALPC_PORT_ATTRIBUTES, *PALPC_PORT_ATTRIBUTES; /* size: 0x002c */

