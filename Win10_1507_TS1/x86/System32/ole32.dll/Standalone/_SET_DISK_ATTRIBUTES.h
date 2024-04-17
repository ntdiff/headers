typedef struct _SET_DISK_ATTRIBUTES
{
  /* 0x0000 */ unsigned long Version;
  /* 0x0004 */ unsigned char Persist;
  /* 0x0005 */ unsigned char Reserved1[3];
  /* 0x0008 */ unsigned __int64 Attributes;
  /* 0x0010 */ unsigned __int64 AttributesMask;
  /* 0x0018 */ unsigned long Reserved2[4];
} SET_DISK_ATTRIBUTES, *PSET_DISK_ATTRIBUTES; /* size: 0x0028 */

