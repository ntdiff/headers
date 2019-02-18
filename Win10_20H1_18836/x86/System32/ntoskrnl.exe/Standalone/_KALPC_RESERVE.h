typedef struct _KALPC_RESERVE
{
  /* 0x0000 */ struct _ALPC_PORT* OwnerPort;
  /* 0x0004 */ struct _ALPC_HANDLE_TABLE* HandleTable;
  /* 0x0008 */ void* Handle;
  /* 0x000c */ struct _KALPC_MESSAGE* Message;
  /* 0x0010 */ long Active;
} KALPC_RESERVE, *PKALPC_RESERVE; /* size: 0x0014 */

