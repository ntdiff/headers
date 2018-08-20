typedef struct _KALPC_MESSAGE_ATTRIBUTES
{
  /* 0x0000 */ void* ClientContext;
  /* 0x0004 */ void* ServerContext;
  /* 0x0008 */ void* PortContext;
  /* 0x000c */ void* CancelPortContext;
  /* 0x0010 */ struct _KALPC_SECURITY_DATA* SecurityData;
  /* 0x0014 */ struct _KALPC_VIEW* View;
  /* 0x0018 */ struct _KALPC_HANDLE_DATA* HandleData;
} KALPC_MESSAGE_ATTRIBUTES, *PKALPC_MESSAGE_ATTRIBUTES; /* size: 0x001c */

