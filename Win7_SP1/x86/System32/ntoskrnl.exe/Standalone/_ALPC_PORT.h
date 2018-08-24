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
  /* 0x005c */ struct _LIST_ENTRY MainQueue;
  /* 0x0064 */ struct _LIST_ENTRY PendingQueue;
  /* 0x006c */ struct _LIST_ENTRY LargeMessageQueue;
  /* 0x0074 */ struct _LIST_ENTRY WaitQueue;
  union
  {
    /* 0x007c */ struct _KSEMAPHORE* Semaphore;
    /* 0x007c */ struct _KEVENT* DummyEvent;
  }; /* size: 0x0004 */
  /* 0x0080 */ struct _ALPC_PORT_ATTRIBUTES PortAttributes;
  /* 0x00ac */ struct _EX_PUSH_LOCK Lock;
  /* 0x00b0 */ struct _EX_PUSH_LOCK ResourceListLock;
  /* 0x00b4 */ struct _LIST_ENTRY ResourceListHead;
  /* 0x00bc */ struct _ALPC_COMPLETION_LIST* CompletionList;
  /* 0x00c0 */ struct _ALPC_MESSAGE_ZONE* MessageZone;
  /* 0x00c4 */ struct _CALLBACK_OBJECT* CallbackObject;
  /* 0x00c8 */ void* CallbackContext;
  /* 0x00cc */ struct _LIST_ENTRY CanceledQueue;
  /* 0x00d4 */ volatile long SequenceNo;
  union // _TAG_UNNAMED_173
  {
    union
    {
      struct // _TAG_UNNAMED_174
      {
        struct /* bitfield */
        {
          /* 0x00d8 */ unsigned long Initialized : 1; /* bit position: 0 */
          /* 0x00d8 */ unsigned long Type : 2; /* bit position: 1 */
          /* 0x00d8 */ unsigned long ConnectionPending : 1; /* bit position: 3 */
          /* 0x00d8 */ unsigned long ConnectionRefused : 1; /* bit position: 4 */
          /* 0x00d8 */ unsigned long Disconnected : 1; /* bit position: 5 */
          /* 0x00d8 */ unsigned long Closed : 1; /* bit position: 6 */
          /* 0x00d8 */ unsigned long NoFlushOnClose : 1; /* bit position: 7 */
          /* 0x00d8 */ unsigned long ReturnExtendedInfo : 1; /* bit position: 8 */
          /* 0x00d8 */ unsigned long Waitable : 1; /* bit position: 9 */
          /* 0x00d8 */ unsigned long DynamicSecurity : 1; /* bit position: 10 */
          /* 0x00d8 */ unsigned long Wow64CompletionList : 1; /* bit position: 11 */
          /* 0x00d8 */ unsigned long Lpc : 1; /* bit position: 12 */
          /* 0x00d8 */ unsigned long LpcToLpc : 1; /* bit position: 13 */
          /* 0x00d8 */ unsigned long HasCompletionList : 1; /* bit position: 14 */
          /* 0x00d8 */ unsigned long HadCompletionList : 1; /* bit position: 15 */
          /* 0x00d8 */ unsigned long EnableCompletionList : 1; /* bit position: 16 */
        }; /* bitfield */
      } /* size: 0x0004 */ s1;
      /* 0x00d8 */ unsigned long State;
    }; /* size: 0x0004 */
  } /* size: 0x0004 */ u1;
  /* 0x00dc */ struct _ALPC_PORT* TargetQueuePort;
  /* 0x00e0 */ struct _ALPC_PORT* TargetSequencePort;
  /* 0x00e4 */ struct _KALPC_MESSAGE* volatile CachedMessage;
  /* 0x00e8 */ unsigned long MainQueueLength;
  /* 0x00ec */ unsigned long PendingQueueLength;
  /* 0x00f0 */ unsigned long LargeMessageQueueLength;
  /* 0x00f4 */ unsigned long CanceledQueueLength;
  /* 0x00f8 */ unsigned long WaitQueueLength;
} ALPC_PORT, *PALPC_PORT; /* size: 0x00fc */

