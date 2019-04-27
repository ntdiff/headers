typedef struct _SECURITY_DESCRIPTOR_RELATIVE
{
  /* 0x0000 */ unsigned char Revision;
  /* 0x0001 */ unsigned char Sbz1;
  /* 0x0002 */ unsigned short Control;
  /* 0x0004 */ unsigned long Owner;
  /* 0x0008 */ unsigned long Group;
  /* 0x000c */ unsigned long Sacl;
  /* 0x0010 */ unsigned long Dacl;
} SECURITY_DESCRIPTOR_RELATIVE, *PSECURITY_DESCRIPTOR_RELATIVE; /* size: 0x0014 */

typedef struct _CM_KEY_SECURITY
{
  /* 0x0000 */ unsigned short Signature;
  /* 0x0002 */ unsigned short Reserved;
  /* 0x0004 */ unsigned long Flink;
  /* 0x0008 */ unsigned long Blink;
  /* 0x000c */ unsigned long ReferenceCount;
  /* 0x0010 */ unsigned long DescriptorLength;
  /* 0x0014 */ struct _SECURITY_DESCRIPTOR_RELATIVE Descriptor;
} CM_KEY_SECURITY, *PCM_KEY_SECURITY; /* size: 0x0028 */

