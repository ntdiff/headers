typedef struct _WNF_NODE_HEADER
{
  /* 0x0000 */ unsigned short NodeTypeCode;
  /* 0x0002 */ unsigned short NodeByteSize;
} WNF_NODE_HEADER, *PWNF_NODE_HEADER; /* size: 0x0004 */

typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0004 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0008 */

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

typedef struct _WNF_LOCK
{
  /* 0x0000 */ struct _EX_PUSH_LOCK PushLock;
} WNF_LOCK, *PWNF_LOCK; /* size: 0x0004 */

typedef struct _WNF_PROCESS_CONTEXT
{
  /* 0x0000 */ struct _WNF_NODE_HEADER Header;
  /* 0x0004 */ struct _EPROCESS* Process;
  /* 0x0008 */ struct _LIST_ENTRY WnfProcessesListEntry;
  /* 0x0010 */ void* ImplicitScopeInstances[3];
  /* 0x001c */ struct _WNF_LOCK TemporaryNamesListLock;
  /* 0x0020 */ struct _LIST_ENTRY TemporaryNamesListHead;
  /* 0x0028 */ struct _WNF_LOCK ProcessSubscriptionListLock;
  /* 0x002c */ struct _LIST_ENTRY ProcessSubscriptionListHead;
  /* 0x0034 */ struct _WNF_LOCK DeliveryPendingListLock;
  /* 0x0038 */ struct _LIST_ENTRY DeliveryPendingListHead;
  /* 0x0040 */ struct _KEVENT* NotificationEvent;
} WNF_PROCESS_CONTEXT, *PWNF_PROCESS_CONTEXT; /* size: 0x0044 */

