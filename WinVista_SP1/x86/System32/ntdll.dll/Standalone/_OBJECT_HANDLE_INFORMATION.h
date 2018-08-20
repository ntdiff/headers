typedef struct _OBJECT_HANDLE_INFORMATION
{
  /* 0x0000 */ unsigned long HandleAttributes;
  /* 0x0004 */ unsigned long GrantedAccess;
} OBJECT_HANDLE_INFORMATION, *POBJECT_HANDLE_INFORMATION; /* size: 0x0008 */

