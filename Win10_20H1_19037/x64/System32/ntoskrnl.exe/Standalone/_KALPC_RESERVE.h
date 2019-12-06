typedef struct _KALPC_RESERVE
{
  /* 0x0000 */ struct _ALPC_PORT* OwnerPort;
  /* 0x0008 */ struct _ALPC_HANDLE_TABLE* HandleTable;
  /* 0x0010 */ void* Handle;
  /* 0x0018 */ struct _KALPC_MESSAGE* Message;
  /* 0x0020 */ unsigned __int64 Size;
  /* 0x0028 */ long Active;
  /* 0x002c */ long __PADDING__[1];
} KALPC_RESERVE, *PKALPC_RESERVE; /* size: 0x0030 */

