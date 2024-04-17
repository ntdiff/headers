typedef struct _SECURITY_DESCRIPTOR
{
  /* 0x0000 */ unsigned char Revision;
  /* 0x0001 */ unsigned char Sbz1;
  /* 0x0002 */ unsigned short Control;
  /* 0x0004 */ void* Owner;
  /* 0x0008 */ void* Group;
  /* 0x000c */ struct _ACL* Sacl;
  /* 0x0010 */ struct _ACL* Dacl;
} SECURITY_DESCRIPTOR, *PSECURITY_DESCRIPTOR; /* size: 0x0014 */

typedef struct _SECURITY_ATTRIBUTES
{
  /* 0x0000 */ unsigned long nLength;
  /* 0x0004 */ void* lpSecurityDescriptor;
  /* 0x0008 */ int bInheritHandle;
} SECURITY_ATTRIBUTES, *PSECURITY_ATTRIBUTES; /* size: 0x000c */

class CGlobalSecurity
{
  /* 0x0000 */ unsigned char _acl[80];
  /* 0x0050 */ struct _SECURITY_DESCRIPTOR _sd;
  /* 0x0064 */ unsigned char _sdExt[200];
  /* 0x012c */ struct _SECURITY_ATTRIBUTES _sa;
}; /* size: 0x0138 */

