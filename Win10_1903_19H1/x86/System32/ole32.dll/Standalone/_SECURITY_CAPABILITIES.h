typedef struct _SECURITY_CAPABILITIES
{
  /* 0x0000 */ void* AppContainerSid;
  /* 0x0004 */ struct _SID_AND_ATTRIBUTES* Capabilities;
  /* 0x0008 */ unsigned long CapabilityCount;
  /* 0x000c */ unsigned long Reserved;
} SECURITY_CAPABILITIES, *PSECURITY_CAPABILITIES; /* size: 0x0010 */

