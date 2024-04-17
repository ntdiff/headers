typedef struct _SECURITY_DESCRIPTOR
{
  /* 0x0000 */ unsigned char Revision;
  /* 0x0001 */ unsigned char Sbz1;
  /* 0x0002 */ unsigned short Control;
  /* 0x0008 */ void* Owner;
  /* 0x0010 */ void* Group;
  /* 0x0018 */ struct _ACL* Sacl;
  /* 0x0020 */ struct _ACL* Dacl;
} SECURITY_DESCRIPTOR, *PSECURITY_DESCRIPTOR; /* size: 0x0028 */

class CWorldSecurityDescriptor
{
  /* 0x0000 */ struct _SECURITY_DESCRIPTOR _sd;
  /* 0x0028 */ unsigned __int64 _acl[13];
}; /* size: 0x0090 */

