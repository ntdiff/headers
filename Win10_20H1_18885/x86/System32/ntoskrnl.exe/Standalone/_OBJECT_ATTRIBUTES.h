typedef struct _OBJECT_ATTRIBUTES
{
  /* 0x0000 */ unsigned long Length;
  /* 0x0004 */ void* RootDirectory;
  /* 0x0008 */ struct _UNICODE_STRING* ObjectName;
  /* 0x000c */ unsigned long Attributes;
  /* 0x0010 */ void* SecurityDescriptor;
  /* 0x0014 */ void* SecurityQualityOfService;
} OBJECT_ATTRIBUTES, *POBJECT_ATTRIBUTES; /* size: 0x0018 */

