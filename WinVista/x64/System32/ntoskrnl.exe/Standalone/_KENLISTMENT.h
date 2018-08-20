typedef struct _RTL_BALANCED_LINKS
{
  /* 0x0000 */ struct _RTL_BALANCED_LINKS* Parent;
  /* 0x0008 */ struct _RTL_BALANCED_LINKS* LeftChild;
  /* 0x0010 */ struct _RTL_BALANCED_LINKS* RightChild;
  /* 0x0018 */ char Balance;
  /* 0x0019 */ unsigned char Reserved[3];
  /* 0x001c */ long __PADDING__[1];
} RTL_BALANCED_LINKS, *PRTL_BALANCED_LINKS; /* size: 0x0020 */

typedef struct _KTMOBJECT_NAMESPACE_LINK
{
  /* 0x0000 */ struct _RTL_BALANCED_LINKS Links;
  /* 0x0020 */ unsigned char Expired;
  /* 0x0021 */ char __PADDING__[7];
} KTMOBJECT_NAMESPACE_LINK, *PKTMOBJECT_NAMESPACE_LINK; /* size: 0x0028 */

typedef struct _GUID
{
  /* 0x0000 */ unsigned long Data1;
  /* 0x0004 */ unsigned short Data2;
  /* 0x0006 */ unsigned short Data3;
  /* 0x0008 */ unsigned char Data4[8];
} GUID, *PGUID; /* size: 0x0010 */

typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

typedef struct _DISPATCHER_HEADER
{
  union
  {
    struct
    {
      /* 0x0000 */ unsigned char Type;
      union
      {
        /* 0x0001 */ unsigned char Abandoned;
        /* 0x0001 */ unsigned char Absolute;
        /* 0x0001 */ unsigned char NpxIrql;
        struct
        {
          /* 0x0001 */ unsigned char Signalling;
          union
          {
            /* 0x0002 */ unsigned char Size;
            struct
            {
              /* 0x0002 */ unsigned char Hand;
              union
              {
                /* 0x0003 */ unsigned char Inserted;
                /* 0x0003 */ unsigned char DebugActive;
                /* 0x0003 */ unsigned char DpcActive;
              }; /* size: 0x0001 */
            }; /* size: 0x0002 */
          }; /* size: 0x0002 */
        }; /* size: 0x0003 */
      }; /* size: 0x0003 */
    }; /* size: 0x0004 */
    /* 0x0000 */ volatile long Lock;
  }; /* size: 0x0004 */
  /* 0x0004 */ long SignalState;
  /* 0x0008 */ struct _LIST_ENTRY WaitListHead;
} DISPATCHER_HEADER, *PDISPATCHER_HEADER; /* size: 0x0018 */

typedef struct _KMUTANT
{
  /* 0x0000 */ struct _DISPATCHER_HEADER Header;
  /* 0x0018 */ struct _LIST_ENTRY MutantListEntry;
  /* 0x0028 */ struct _KTHREAD* OwnerThread;
  /* 0x0030 */ unsigned char Abandoned;
  /* 0x0031 */ unsigned char ApcDisable;
  /* 0x0032 */ char __PADDING__[6];
} KMUTANT, *PKMUTANT; /* size: 0x0038 */

typedef enum _KENLISTMENT_STATE
{
  KEnlistmentUninitialized = 0,
  KEnlistmentActive = 256,
  KEnlistmentPreparing = 257,
  KEnlistmentPrepared = 258,
  KEnlistmentInDoubt = 259,
  KEnlistmentCommitted = 260,
  KEnlistmentCommittedNotify = 261,
  KEnlistmentCommitRequested = 262,
  KEnlistmentAborted = 263,
  KEnlistmentDelegated = 264,
  KEnlistmentDelegatedDisconnected = 265,
  KEnlistmentPrePreparing = 266,
  KEnlistmentForgotten = 267,
  KEnlistmentRecovering = 268,
  KEnlistmentSavepointing = 269,
  KEnlistmentAborting = 270,
  KEnlistmentReadOnly = 271,
  KEnlistmentOutcomeUnavailable = 272,
  KEnlistmentOffline = 273,
  KEnlistmentPrePrepared = 274,
  KEnlistmentInitialized = 275,
} KENLISTMENT_STATE, *PKENLISTMENT_STATE;

typedef struct _KENLISTMENT_HISTORY
{
  /* 0x0000 */ unsigned long Notification;
  /* 0x0004 */ enum _KENLISTMENT_STATE NewState;
} KENLISTMENT_HISTORY, *PKENLISTMENT_HISTORY; /* size: 0x0008 */

typedef struct _KENLISTMENT
{
  /* 0x0000 */ unsigned long cookie;
  /* 0x0008 */ struct _KTMOBJECT_NAMESPACE_LINK NamespaceLink;
  /* 0x0030 */ struct _GUID EnlistmentId;
  /* 0x0040 */ struct _KMUTANT Mutex;
  /* 0x0078 */ struct _LIST_ENTRY NextSameTx;
  /* 0x0088 */ struct _LIST_ENTRY NextSameRm;
  /* 0x0098 */ struct _KRESOURCEMANAGER* ResourceManager;
  /* 0x00a0 */ struct _KTRANSACTION* Transaction;
  /* 0x00a8 */ enum _KENLISTMENT_STATE State;
  /* 0x00ac */ unsigned long Flags;
  /* 0x00b0 */ unsigned long NotificationMask;
  /* 0x00b8 */ void* Key;
  /* 0x00c0 */ unsigned long KeyRefCount;
  /* 0x00c8 */ void* RecoveryInformation;
  /* 0x00d0 */ unsigned long RecoveryInformationLength;
  /* 0x00d8 */ void* DynamicNameInformation;
  /* 0x00e0 */ unsigned long DynamicNameInformationLength;
  /* 0x00e8 */ struct _KTMNOTIFICATION_PACKET* FinalNotification;
  /* 0x00f0 */ struct _KENLISTMENT* SupSubEnlistment;
  /* 0x00f8 */ void* SupSubEnlHandle;
  /* 0x0100 */ void* SubordinateTxHandle;
  /* 0x0108 */ struct _GUID CrmEnlistmentEnId;
  /* 0x0118 */ struct _GUID CrmEnlistmentTmId;
  /* 0x0128 */ struct _GUID CrmEnlistmentRmId;
  /* 0x0138 */ unsigned long NextHistory;
  /* 0x013c */ struct _KENLISTMENT_HISTORY History[20];
  /* 0x01dc */ long __PADDING__[1];
} KENLISTMENT, *PKENLISTMENT; /* size: 0x01e0 */

