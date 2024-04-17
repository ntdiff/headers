typedef struct _SE_ACCESS_REPLY
{
  /* 0x0000 */ unsigned long Size;
  /* 0x0004 */ unsigned long ResultListCount;
  /* 0x0008 */ unsigned long* GrantedAccess;
  /* 0x000c */ unsigned long* AccessStatus;
  /* 0x0010 */ struct _ACCESS_REASONS* AccessReason;
  /* 0x0014 */ struct _PRIVILEGE_SET** Privileges;
} SE_ACCESS_REPLY, *PSE_ACCESS_REPLY; /* size: 0x0018 */

