typedef struct _ACL
{
  /* 0x0000 */ unsigned char AclRevision;
  /* 0x0001 */ unsigned char Sbz1;
  /* 0x0002 */ unsigned short AclSize;
  /* 0x0004 */ unsigned short AceCount;
  /* 0x0006 */ unsigned short Sbz2;
} ACL, *PACL; /* size: 0x0008 */

