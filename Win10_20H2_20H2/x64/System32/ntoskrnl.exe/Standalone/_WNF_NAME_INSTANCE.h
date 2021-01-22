typedef struct _WNF_NODE_HEADER
{
  /* 0x0000 */ unsigned short NodeTypeCode;
  /* 0x0002 */ unsigned short NodeByteSize;
} WNF_NODE_HEADER, *PWNF_NODE_HEADER; /* size: 0x0004 */

typedef struct _EX_RUNDOWN_REF
{
  union
  {
    /* 0x0000 */ unsigned __int64 Count;
    /* 0x0000 */ void* Ptr;
  }; /* size: 0x0008 */
} EX_RUNDOWN_REF, *PEX_RUNDOWN_REF; /* size: 0x0008 */

typedef struct _RTL_BALANCED_NODE
{
  union
  {
    /* 0x0000 */ struct _RTL_BALANCED_NODE* Children[2];
    struct
    {
      /* 0x0000 */ struct _RTL_BALANCED_NODE* Left;
      /* 0x0008 */ struct _RTL_BALANCED_NODE* Right;
    }; /* size: 0x0010 */
  }; /* size: 0x0010 */
  union
  {
    /* 0x0010 */ unsigned char Red : 1; /* bit position: 0 */
    /* 0x0010 */ unsigned char Balance : 2; /* bit position: 0 */
    /* 0x0010 */ unsigned __int64 ParentValue;
  }; /* size: 0x0008 */
} RTL_BALANCED_NODE, *PRTL_BALANCED_NODE; /* size: 0x0018 */

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
  /* 0x0008 */ const struct _WNF_TYPE_ID* TypeId;
  /* 0x0010 */ struct _SECURITY_DESCRIPTOR* SecurityDescriptor;
} WNF_STATE_NAME_REGISTRATION, *PWNF_STATE_NAME_REGISTRATION; /* size: 0x0018 */

typedef struct _EX_PUSH_LOCK
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned __int64 Locked : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned __int64 Waiting : 1; /* bit position: 1 */
      /* 0x0000 */ unsigned __int64 Waking : 1; /* bit position: 2 */
      /* 0x0000 */ unsigned __int64 MultipleShared : 1; /* bit position: 3 */
      /* 0x0000 */ unsigned __int64 Shared : 60; /* bit position: 4 */
    }; /* bitfield */
    /* 0x0000 */ unsigned __int64 Value;
    /* 0x0000 */ void* Ptr;
  }; /* size: 0x0008 */
} EX_PUSH_LOCK, *PEX_PUSH_LOCK; /* size: 0x0008 */

typedef struct _WNF_LOCK
{
  /* 0x0000 */ struct _EX_PUSH_LOCK PushLock;
} WNF_LOCK, *PWNF_LOCK; /* size: 0x0008 */

typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

typedef struct _WNF_NAME_INSTANCE
{
  /* 0x0000 */ struct _WNF_NODE_HEADER Header;
  /* 0x0008 */ struct _EX_RUNDOWN_REF RunRef;
  /* 0x0010 */ struct _RTL_BALANCED_NODE TreeLinks;
  /* 0x0028 */ struct _WNF_STATE_NAME_STRUCT StateName;
  /* 0x0030 */ struct _WNF_SCOPE_INSTANCE* ScopeInstance;
  /* 0x0038 */ struct _WNF_STATE_NAME_REGISTRATION StateNameInfo;
  /* 0x0050 */ struct _WNF_LOCK StateDataLock;
  /* 0x0058 */ struct _WNF_STATE_DATA* StateData;
  /* 0x0060 */ unsigned long CurrentChangeStamp;
  /* 0x0068 */ void* PermanentDataStore;
  /* 0x0070 */ struct _WNF_LOCK StateSubscriptionListLock;
  /* 0x0078 */ struct _LIST_ENTRY StateSubscriptionListHead;
  /* 0x0088 */ struct _LIST_ENTRY TemporaryNameListEntry;
  /* 0x0098 */ struct _EPROCESS* CreatorProcess;
  /* 0x00a0 */ long DataSubscribersCount;
  /* 0x00a4 */ long CurrentDeliveryCount;
} WNF_NAME_INSTANCE, *PWNF_NAME_INSTANCE; /* size: 0x00a8 */

