typedef struct _OBJECT_ATTRIBUTES
{
  /* 0x0000 */ unsigned long Length;
  /* 0x0008 */ void* RootDirectory;
  /* 0x0010 */ struct _UNICODE_STRING* ObjectName;
  /* 0x0018 */ unsigned long Attributes;
  /* 0x0020 */ void* SecurityDescriptor;
  /* 0x0028 */ void* SecurityQualityOfService;
} OBJECT_ATTRIBUTES, *POBJECT_ATTRIBUTES; /* size: 0x0030 */

