typedef struct _ALPC_MESSAGE_HANDLE_INFORMATION
{
  /* 0x0000 */ unsigned long Index;
  /* 0x0004 */ unsigned long Flags;
  /* 0x0008 */ unsigned long Handle;
  /* 0x000c */ unsigned long ObjectType;
  /* 0x0010 */ unsigned long GrantedAccess;
} ALPC_MESSAGE_HANDLE_INFORMATION, *PALPC_MESSAGE_HANDLE_INFORMATION; /* size: 0x0014 */

