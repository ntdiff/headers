typedef struct _SE_ACCESS_REQUEST
{
  /* 0x0000 */ unsigned long Size;
  /* 0x0004 */ struct _SE_SECURITY_DESCRIPTOR* SeSecurityDescriptor;
  /* 0x0008 */ unsigned long DesiredAccess;
  /* 0x000c */ unsigned long PreviouslyGrantedAccess;
  /* 0x0010 */ void* PrincipalSelfSid;
  /* 0x0014 */ struct _GENERIC_MAPPING* GenericMapping;
  /* 0x0018 */ unsigned long ObjectTypeListCount;
  /* 0x001c */ struct _OBJECT_TYPE_LIST* ObjectTypeList;
} SE_ACCESS_REQUEST, *PSE_ACCESS_REQUEST; /* size: 0x0020 */

