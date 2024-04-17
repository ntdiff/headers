typedef struct _SECURITY_CAPABILITIES
{
  /* 0x0000 */ void* AppContainerSid;
  /* 0x0008 */ struct _SID_AND_ATTRIBUTES* Capabilities;
  /* 0x0010 */ unsigned long CapabilityCount;
  /* 0x0014 */ unsigned long Reserved;
} SECURITY_CAPABILITIES, *PSECURITY_CAPABILITIES; /* size: 0x0018 */

