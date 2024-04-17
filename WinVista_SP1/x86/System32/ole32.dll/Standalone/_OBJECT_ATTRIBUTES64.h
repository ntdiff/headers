typedef struct _OBJECT_ATTRIBUTES64
{
  /* 0x0000 */ unsigned long Length;
  /* 0x0008 */ unsigned __int64 RootDirectory;
  /* 0x0010 */ unsigned __int64 ObjectName;
  /* 0x0018 */ unsigned long Attributes;
  /* 0x0020 */ unsigned __int64 SecurityDescriptor;
  /* 0x0028 */ unsigned __int64 SecurityQualityOfService;
} OBJECT_ATTRIBUTES64, *POBJECT_ATTRIBUTES64; /* size: 0x0030 */

