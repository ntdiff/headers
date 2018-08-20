typedef struct _ALPC_DISPATCH_CONTEXT
{
  /* 0x0000 */ struct _ALPC_PORT* PortObject;
  /* 0x0004 */ struct _KALPC_MESSAGE* Message;
  /* 0x0008 */ struct _ALPC_COMMUNICATION_INFO* CommunicationInfo;
  /* 0x000c */ unsigned long Flags;
  /* 0x0010 */ struct _ETHREAD* TargetThread;
  /* 0x0014 */ struct _ALPC_PORT* TargetPort;
  /* 0x0018 */ unsigned short TotalLength;
  /* 0x001a */ unsigned short Type;
  /* 0x001c */ unsigned short DataInfoOffset;
  /* 0x001e */ char __PADDING__[2];
} ALPC_DISPATCH_CONTEXT, *PALPC_DISPATCH_CONTEXT; /* size: 0x0020 */

