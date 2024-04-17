typedef struct _ALPC_HANDLE_ATTR
{
  /* 0x0000 */ unsigned long Flags;
  /* 0x0004 */ void* Handle;
  /* 0x0008 */ unsigned long ObjectType;
  /* 0x000c */ unsigned long DesiredAccess;
} ALPC_HANDLE_ATTR, *PALPC_HANDLE_ATTR; /* size: 0x0010 */

