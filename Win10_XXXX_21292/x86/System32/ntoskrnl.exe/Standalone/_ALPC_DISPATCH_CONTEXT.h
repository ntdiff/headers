typedef union _KALPC_DIRECT_EVENT
{
  union
  {
    /* 0x0000 */ unsigned long Value;
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned long DirectType : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned long EventReferenced : 1; /* bit position: 1 */
      /* 0x0000 */ unsigned long EventObjectBits : 30; /* bit position: 2 */
    }; /* bitfield */
  }; /* size: 0x0004 */
} KALPC_DIRECT_EVENT, *PKALPC_DIRECT_EVENT; /* size: 0x0004 */

typedef struct _ALPC_DISPATCH_CONTEXT
{
  /* 0x0000 */ struct _ALPC_PORT* PortObject;
  /* 0x0004 */ struct _KALPC_MESSAGE* Message;
  /* 0x0008 */ struct _ALPC_COMMUNICATION_INFO* CommunicationInfo;
  /* 0x000c */ struct _ETHREAD* TargetThread;
  /* 0x0010 */ struct _ALPC_PORT* TargetPort;
  /* 0x0014 */ union _KALPC_DIRECT_EVENT DirectEvent;
  /* 0x0018 */ unsigned long Flags;
  /* 0x001c */ unsigned short TotalLength;
  /* 0x001e */ unsigned short Type;
  /* 0x0020 */ unsigned short DataInfoOffset;
  /* 0x0022 */ unsigned char SignalCompletion;
  /* 0x0023 */ unsigned char PostedToCompletionList;
} ALPC_DISPATCH_CONTEXT, *PALPC_DISPATCH_CONTEXT; /* size: 0x0024 */

