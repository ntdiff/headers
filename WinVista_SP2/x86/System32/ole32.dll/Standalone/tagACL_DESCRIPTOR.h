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

struct tagACL_DESCRIPTOR
{
  /* 0x0000 */ void* pACLBuffer;
  /* 0x0004 */ unsigned long ulACLBufferSize;
  /* 0x0008 */ unsigned long ulSIDSize;
  /* 0x000c */ int bDirtyACL;
  /* 0x0010 */ struct _SECURITY_DESCRIPTOR SecDesc;
}; /* size: 0x0024 */

