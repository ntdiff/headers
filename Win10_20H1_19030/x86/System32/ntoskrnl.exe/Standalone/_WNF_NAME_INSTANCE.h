typedef struct _WNF_NODE_HEADER
{
  /* 0x0000 */ unsigned short NodeTypeCode;
  /* 0x0002 */ unsigned short NodeByteSize;
} WNF_NODE_HEADER, *PWNF_NODE_HEADER; /* size: 0x0004 */

typedef struct _EX_RUNDOWN_REF
{
  union
  {
    /* 0x0000 */ unsigned long Count;
    /* 0x0000 */ void* Ptr;
  }; /* size: 0x0004 */
} EX_RUNDOWN_REF, *PEX_RUNDOWN_REF; /* size: 0x0004 */

typedef struct _RTL_BALANCED_NODE
{
  union
  {
    /* 0x0000 */ struct _RTL_BALANCED_NODE* Children[2];
    struct
    {
      /* 0x0000 */ struct _RTL_BALANCED_NODE* Left;
      /* 0x0004 */ struct _RTL_BALANCED_NODE* Right;
    }; /* size: 0x0008 */
  }; /* size: 0x0008 */
  union
  {
    /* 0x0008 */ unsigned char Red : 1; /* bit position: 0 */
    /* 0x0008 */ unsigned char Balance : 2; /* bit position: 0 */
    /* 0x0008 */ unsigned long ParentValue;
  }; /* size: 0x0004 */
} RTL_BALANCED_NODE, *PRTL_BALANCED_NODE; /* size: 0x000c */

typedef struct _WNF_STATE_NAME_STRUCT
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned __int64 Version : 4; /* bit position: 0 */
    /* 0x0000 */ unsigned __int64 NameLifetime : 2; /* bit position: 4 */
    /* 0x0000 */ unsigned __int64 DataScope : 4; /* bit position: 6 */
    /* 0x0000 */ unsigned __int64 PermanentData : 1; /* bit position: 10 */
    /* 0x0000 */ unsigned __int64 Sequence : 53; /* bit position: 11 */
  }; /* bitfield */
} WNF_STATE_NAME_STRUCT, *PWNF_STATE_NAME_STRUCT; /* size: 0x0008 */

typedef struct _WNF_STATE_NAME_REGISTRATION
{
  /* 0x0000 */ unsigned long MaxStateSize;
  /* 0x0004 */ const struct _WNF_TYPE_ID* TypeId;
  /* 0x0008 */ struct _SECURITY_DESCRIPTOR* SecurityDescriptor;
} WNF_STATE_NAME_REGISTRATION, *PWNF_STATE_NAME_REGISTRATION; /* size: 0x000c */

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

typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0004 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0008 */

typedef struct _WNF_NAME_INSTANCE
{
  /* 0x0000 */ struct _WNF_NODE_HEADER Header;
  /* 0x0004 */ struct _EX_RUNDOWN_REF RunRef;
  /* 0x0008 */ struct _RTL_BALANCED_NODE TreeLinks;
  /* 0x0018 */ struct _WNF_STATE_NAME_STRUCT StateName;
  /* 0x0020 */ struct _WNF_SCOPE_INSTANCE* ScopeInstance;
  /* 0x0024 */ struct _WNF_STATE_NAME_REGISTRATION StateNameInfo;
  /* 0x0030 */ struct _WNF_LOCK StateDataLock;
  /* 0x0034 */ struct _WNF_STATE_DATA* StateData;
  /* 0x0038 */ unsigned long CurrentChangeStamp;
  /* 0x003c */ void* PermanentDataStore;
  /* 0x0040 */ struct _WNF_LOCK StateSubscriptionListLock;
  /* 0x0044 */ struct _LIST_ENTRY StateSubscriptionListHead;
  /* 0x004c */ struct _LIST_ENTRY TemporaryNameListEntry;
  /* 0x0054 */ struct _EPROCESS* CreatorProcess;
  /* 0x0058 */ long DataSubscribersCount;
  /* 0x005c */ long CurrentDeliveryCount;
} WNF_NAME_INSTANCE, *PWNF_NAME_INSTANCE; /* size: 0x0060 */

