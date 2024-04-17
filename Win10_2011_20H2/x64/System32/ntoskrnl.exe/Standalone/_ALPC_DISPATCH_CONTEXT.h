typedef union _KALPC_DIRECT_EVENT
{
  union
  {
    /* 0x0000 */ unsigned __int64 Value;
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned __int64 DirectType : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned __int64 EventReferenced : 1; /* bit position: 1 */
      /* 0x0000 */ unsigned __int64 EventObjectBits : 62; /* bit position: 2 */
    }; /* bitfield */
  }; /* size: 0x0008 */
} KALPC_DIRECT_EVENT, *PKALPC_DIRECT_EVENT; /* size: 0x0008 */

typedef struct _ALPC_DISPATCH_CONTEXT
{
  /* 0x0000 */ struct _ALPC_PORT* PortObject;
  /* 0x0008 */ struct _KALPC_MESSAGE* Message;
  /* 0x0010 */ struct _ALPC_COMMUNICATION_INFO* CommunicationInfo;
  /* 0x0018 */ struct _ETHREAD* TargetThread;
  /* 0x0020 */ struct _ALPC_PORT* TargetPort;
  /* 0x0028 */ union _KALPC_DIRECT_EVENT DirectEvent;
  /* 0x0030 */ unsigned long Flags;
  /* 0x0034 */ unsigned short TotalLength;
  /* 0x0036 */ unsigned short Type;
  /* 0x0038 */ unsigned short DataInfoOffset;
  /* 0x003a */ unsigned char SignalCompletion;
  /* 0x003b */ unsigned char PostedToCompletionList;
  /* 0x003c */ long __PADDING__[1];
} ALPC_DISPATCH_CONTEXT, *PALPC_DISPATCH_CONTEXT; /* size: 0x0040 */

