typedef struct _ALPC_DISPATCH_CONTEXT
{
  /* 0x0000 */ struct _ALPC_PORT* PortObject;
  /* 0x0008 */ struct _KALPC_MESSAGE* Message;
  /* 0x0010 */ struct _ALPC_COMMUNICATION_INFO* CommunicationInfo;
  /* 0x0018 */ unsigned long Flags;
  /* 0x0020 */ struct _ETHREAD* TargetThread;
  /* 0x0028 */ struct _ALPC_PORT* TargetPort;
  /* 0x0030 */ unsigned short TotalLength;
  /* 0x0032 */ unsigned short Type;
  /* 0x0034 */ unsigned short DataInfoOffset;
  /* 0x0036 */ char __PADDING__[2];
} ALPC_DISPATCH_CONTEXT, *PALPC_DISPATCH_CONTEXT; /* size: 0x0038 */

