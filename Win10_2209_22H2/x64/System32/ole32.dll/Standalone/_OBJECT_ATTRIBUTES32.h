typedef struct _OBJECT_ATTRIBUTES32
{
  /* 0x0000 */ unsigned long Length;
  /* 0x0004 */ unsigned long RootDirectory;
  /* 0x0008 */ unsigned long ObjectName;
  /* 0x000c */ unsigned long Attributes;
  /* 0x0010 */ unsigned long SecurityDescriptor;
  /* 0x0014 */ unsigned long SecurityQualityOfService;
} OBJECT_ATTRIBUTES32, *POBJECT_ATTRIBUTES32; /* size: 0x0018 */

