typedef struct _ACL_SIZE_INFORMATION
{
  /* 0x0000 */ unsigned long AceCount;
  /* 0x0004 */ unsigned long AclBytesInUse;
  /* 0x0008 */ unsigned long AclBytesFree;
} ACL_SIZE_INFORMATION, *PACL_SIZE_INFORMATION; /* size: 0x000c */

