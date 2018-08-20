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

typedef struct _KEVENT
{
  /* 0x0000 */ struct _DISPATCHER_HEADER Header;
} KEVENT, *PKEVENT; /* size: 0x0018 */

typedef enum _KRESOURCEMANAGER_STATE
{
  KResourceManagerUninitialized = 0,
  KResourceManagerOffline = 1,
  KResourceManagerOnline = 2,
} KRESOURCEMANAGER_STATE, *PKRESOURCEMANAGER_STATE;

typedef struct _KMUTANT
{
  /* 0x0000 */ struct _DISPATCHER_HEADER Header;
  /* 0x0018 */ struct _LIST_ENTRY MutantListEntry;
  /* 0x0028 */ struct _KTHREAD* OwnerThread;
  /* 0x0030 */ unsigned char Abandoned;
  /* 0x0031 */ unsigned char ApcDisable;
  /* 0x0032 */ char __PADDING__[6];
} KMUTANT, *PKMUTANT; /* size: 0x0038 */

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

typedef struct _KQUEUE
{
  /* 0x0000 */ struct _DISPATCHER_HEADER Header;
  /* 0x0018 */ struct _LIST_ENTRY EntryListHead;
  /* 0x0028 */ unsigned long CurrentCount;
  /* 0x002c */ unsigned long MaximumCount;
  /* 0x0030 */ struct _LIST_ENTRY ThreadListHead;
} KQUEUE, *PKQUEUE; /* size: 0x0040 */

typedef struct _UNICODE_STRING
{
  /* 0x0000 */ unsigned short Length;
  /* 0x0002 */ unsigned short MaximumLength;
  /* 0x0008 */ unsigned short* Buffer;
} UNICODE_STRING, *PUNICODE_STRING; /* size: 0x0010 */

typedef struct _RTL_AVL_TABLE
{
  /* 0x0000 */ struct _RTL_BALANCED_LINKS BalancedRoot;
  /* 0x0020 */ void* OrderedPointer;
  /* 0x0028 */ unsigned long WhichOrderedElement;
  /* 0x002c */ unsigned long NumberGenericTableElements;
  /* 0x0030 */ unsigned long DepthOfTree;
  /* 0x0038 */ struct _RTL_BALANCED_LINKS* RestartKey;
  /* 0x0040 */ unsigned long DeleteCount;
  /* 0x0048 */ void* CompareRoutine /* function */;
  /* 0x0050 */ void* AllocateRoutine /* function */;
  /* 0x0058 */ void* FreeRoutine /* function */;
  /* 0x0060 */ void* TableContext;
} RTL_AVL_TABLE, *PRTL_AVL_TABLE; /* size: 0x0068 */

typedef struct _KTMOBJECT_NAMESPACE
{
  /* 0x0000 */ struct _RTL_AVL_TABLE Table;
  /* 0x0068 */ struct _KMUTANT Mutex;
  /* 0x00a0 */ unsigned short LinksOffset;
  /* 0x00a2 */ unsigned short GuidOffset;
  /* 0x00a4 */ unsigned char Expired;
  /* 0x00a5 */ char __PADDING__[3];
} KTMOBJECT_NAMESPACE, *PKTMOBJECT_NAMESPACE; /* size: 0x00a8 */

typedef struct _KRESOURCEMANAGER_COMPLETION_BINDING
{
  /* 0x0000 */ struct _LIST_ENTRY NotificationListHead;
  /* 0x0010 */ void* Port;
  /* 0x0018 */ unsigned __int64 Key;
  /* 0x0020 */ struct _EPROCESS* BindingProcess;
} KRESOURCEMANAGER_COMPLETION_BINDING, *PKRESOURCEMANAGER_COMPLETION_BINDING; /* size: 0x0028 */

typedef struct _KRESOURCEMANAGER
{
  /* 0x0000 */ struct _KEVENT NotificationAvailable;
  /* 0x0018 */ unsigned long cookie;
  /* 0x001c */ enum _KRESOURCEMANAGER_STATE State;
  /* 0x0020 */ unsigned long Flags;
  /* 0x0028 */ struct _KMUTANT Mutex;
  /* 0x0060 */ struct _KTMOBJECT_NAMESPACE_LINK NamespaceLink;
  /* 0x0088 */ struct _GUID RmId;
  /* 0x0098 */ struct _KQUEUE NotificationQueue;
  /* 0x00d8 */ struct _KMUTANT NotificationMutex;
  /* 0x0110 */ struct _LIST_ENTRY EnlistmentHead;
  /* 0x0120 */ unsigned long EnlistmentCount;
  /* 0x0128 */ void* NotificationRoutine /* function */;
  /* 0x0130 */ void* Key;
  /* 0x0138 */ struct _LIST_ENTRY ProtocolListHead;
  /* 0x0148 */ struct _LIST_ENTRY PendingPropReqListHead;
  /* 0x0158 */ struct _LIST_ENTRY CRMListEntry;
  /* 0x0168 */ struct _KTM* Tm;
  /* 0x0170 */ struct _UNICODE_STRING Description;
  /* 0x0180 */ struct _KTMOBJECT_NAMESPACE Enlistments;
  /* 0x0228 */ struct _KRESOURCEMANAGER_COMPLETION_BINDING CompletionBinding;
} KRESOURCEMANAGER, *PKRESOURCEMANAGER; /* size: 0x0250 */

