typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0004 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0008 */

typedef enum _SECURITY_IMPERSONATION_LEVEL
{
  SecurityAnonymous = 0,
  SecurityIdentification = 1,
  SecurityImpersonation = 2,
  SecurityDelegation = 3,
} SECURITY_IMPERSONATION_LEVEL, *PSECURITY_IMPERSONATION_LEVEL;

typedef struct _SECURITY_QUALITY_OF_SERVICE
{
  /* 0x0000 */ unsigned long Length;
  /* 0x0004 */ enum _SECURITY_IMPERSONATION_LEVEL ImpersonationLevel;
  /* 0x0008 */ unsigned char ContextTrackingMode;
  /* 0x0009 */ unsigned char EffectiveOnly;
  /* 0x000a */ char __PADDING__[2];
} SECURITY_QUALITY_OF_SERVICE, *PSECURITY_QUALITY_OF_SERVICE; /* size: 0x000c */

typedef struct _LUID
{
  /* 0x0000 */ unsigned long LowPart;
  /* 0x0004 */ long HighPart;
} LUID, *PLUID; /* size: 0x0008 */

typedef struct _TOKEN_SOURCE
{
  /* 0x0000 */ char SourceName[8];
  /* 0x0008 */ struct _LUID SourceIdentifier;
} TOKEN_SOURCE, *PTOKEN_SOURCE; /* size: 0x0010 */

typedef struct _TOKEN_CONTROL
{
  /* 0x0000 */ struct _LUID TokenId;
  /* 0x0008 */ struct _LUID AuthenticationId;
  /* 0x0010 */ struct _LUID ModifiedId;
  /* 0x0018 */ struct _TOKEN_SOURCE TokenSource;
} TOKEN_CONTROL, *PTOKEN_CONTROL; /* size: 0x0028 */

typedef struct _SECURITY_CLIENT_CONTEXT
{
  /* 0x0000 */ struct _SECURITY_QUALITY_OF_SERVICE SecurityQos;
  /* 0x000c */ void* ClientToken;
  /* 0x0010 */ unsigned char DirectlyAccessClientToken;
  /* 0x0011 */ unsigned char DirectAccessEffectiveOnly;
  /* 0x0012 */ unsigned char ServerIsRemote;
  /* 0x0014 */ struct _TOKEN_CONTROL ClientTokenControl;
} SECURITY_CLIENT_CONTEXT, *PSECURITY_CLIENT_CONTEXT; /* size: 0x003c */

typedef struct _EX_PUSH_LOCK
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned long Locked : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned long Waiting : 1; /* bit position: 1 */
      /* 0x0000 */ unsigned long Waking : 1; /* bit position: 2 */
      /* 0x0000 */ unsigned long MultipleShared : 1; /* bit position: 3 */
      /* 0x0000 */ unsigned long Shared : 28; /* bit position: 4 */
    }; /* bitfield */
    /* 0x0000 */ unsigned long Value;
    /* 0x0000 */ void* Ptr;
  }; /* size: 0x0004 */
} EX_PUSH_LOCK, *PEX_PUSH_LOCK; /* size: 0x0004 */

typedef struct _ALPC_PORT_ATTRIBUTES
{
  /* 0x0000 */ unsigned long Flags;
  /* 0x0004 */ struct _SECURITY_QUALITY_OF_SERVICE SecurityQos;
  /* 0x0010 */ unsigned long MaxMessageLength;
  /* 0x0014 */ unsigned long MemoryBandwidth;
  /* 0x0018 */ unsigned long MaxPoolUsage;
  /* 0x001c */ unsigned long MaxSectionSize;
  /* 0x0020 */ unsigned long MaxViewSize;
  /* 0x0024 */ unsigned long MaxTotalSectionSize;
  /* 0x0028 */ unsigned long DupObjectTypes;
} ALPC_PORT_ATTRIBUTES, *PALPC_PORT_ATTRIBUTES; /* size: 0x002c */

typedef struct _ALPC_PORT
{
  /* 0x0000 */ struct _LIST_ENTRY PortListEntry;
  /* 0x0008 */ struct _ALPC_COMMUNICATION_INFO* CommunicationInfo;
  /* 0x000c */ struct _EPROCESS* OwnerProcess;
  /* 0x0010 */ void* CompletionPort;
  /* 0x0014 */ void* CompletionKey;
  /* 0x0018 */ struct _ALPC_COMPLETION_PACKET_LOOKASIDE* CompletionPacketLookaside;
  /* 0x001c */ void* PortContext;
  /* 0x0020 */ struct _SECURITY_CLIENT_CONTEXT StaticSecurity;
  /* 0x005c */ struct _EX_PUSH_LOCK IncomingQueueLock;
  /* 0x0060 */ struct _LIST_ENTRY MainQueue;
  /* 0x0068 */ struct _LIST_ENTRY LargeMessageQueue;
  /* 0x0070 */ struct _EX_PUSH_LOCK PendingQueueLock;
  /* 0x0074 */ struct _LIST_ENTRY PendingQueue;
  /* 0x007c */ struct _EX_PUSH_LOCK DirectQueueLock;
  /* 0x0080 */ struct _LIST_ENTRY DirectQueue;
  /* 0x0088 */ struct _EX_PUSH_LOCK WaitQueueLock;
  /* 0x008c */ struct _LIST_ENTRY WaitQueue;
  union
  {
    /* 0x0094 */ struct _KSEMAPHORE* Semaphore;
    /* 0x0094 */ struct _KEVENT* DummyEvent;
  }; /* size: 0x0004 */
  /* 0x0098 */ struct _ALPC_PORT_ATTRIBUTES PortAttributes;
  /* 0x00c4 */ struct _EX_PUSH_LOCK ResourceListLock;
  /* 0x00c8 */ struct _LIST_ENTRY ResourceListHead;
  /* 0x00d0 */ struct _EX_PUSH_LOCK PortObjectLock;
  /* 0x00d4 */ struct _ALPC_COMPLETION_LIST* CompletionList;
  /* 0x00d8 */ struct _CALLBACK_OBJECT* CallbackObject;
  /* 0x00dc */ void* CallbackContext;
  /* 0x00e0 */ struct _LIST_ENTRY CanceledQueue;
  /* 0x00e8 */ long SequenceNo;
  /* 0x00ec */ long ReferenceNo;
  /* 0x00f0 */ struct _PALPC_PORT_REFERENCE_WAIT_BLOCK* ReferenceNoWait;
  union
  {
    union
    {
      struct
      {
        struct /* bitfield */
        {
          /* 0x00f4 */ unsigned long Initialized : 1; /* bit position: 0 */
          /* 0x00f4 */ unsigned long Type : 2; /* bit position: 1 */
          /* 0x00f4 */ unsigned long ConnectionPending : 1; /* bit position: 3 */
          /* 0x00f4 */ unsigned long ConnectionRefused : 1; /* bit position: 4 */
          /* 0x00f4 */ unsigned long Disconnected : 1; /* bit position: 5 */
          /* 0x00f4 */ unsigned long Closed : 1; /* bit position: 6 */
          /* 0x00f4 */ unsigned long NoFlushOnClose : 1; /* bit position: 7 */
          /* 0x00f4 */ unsigned long ReturnExtendedInfo : 1; /* bit position: 8 */
          /* 0x00f4 */ unsigned long Waitable : 1; /* bit position: 9 */
          /* 0x00f4 */ unsigned long DynamicSecurity : 1; /* bit position: 10 */
          /* 0x00f4 */ unsigned long Wow64CompletionList : 1; /* bit position: 11 */
          /* 0x00f4 */ unsigned long Lpc : 1; /* bit position: 12 */
          /* 0x00f4 */ unsigned long LpcToLpc : 1; /* bit position: 13 */
          /* 0x00f4 */ unsigned long HasCompletionList : 1; /* bit position: 14 */
          /* 0x00f4 */ unsigned long HadCompletionList : 1; /* bit position: 15 */
          /* 0x00f4 */ unsigned long EnableCompletionList : 1; /* bit position: 16 */
        }; /* bitfield */
      } /* size: 0x0004 */ s1;
      /* 0x00f4 */ unsigned long State;
    }; /* size: 0x0004 */
  } /* size: 0x0004 */ u1;
  /* 0x00f8 */ struct _ALPC_PORT* TargetQueuePort;
  /* 0x00fc */ struct _ALPC_PORT* TargetSequencePort;
  /* 0x0100 */ struct _KALPC_MESSAGE* CachedMessage;
  /* 0x0104 */ unsigned long MainQueueLength;
  /* 0x0108 */ unsigned long LargeMessageQueueLength;
  /* 0x010c */ unsigned long PendingQueueLength;
  /* 0x0110 */ unsigned long DirectQueueLength;
  /* 0x0114 */ unsigned long CanceledQueueLength;
  /* 0x0118 */ unsigned long WaitQueueLength;
} ALPC_PORT, *PALPC_PORT; /* size: 0x011c */

