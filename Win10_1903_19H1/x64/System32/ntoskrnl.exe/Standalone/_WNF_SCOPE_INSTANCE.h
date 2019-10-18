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

typedef enum _WNF_DATA_SCOPE
{
  WnfDataScopeSystem = 0,
  WnfDataScopeSession = 1,
  WnfDataScopeUser = 2,
  WnfDataScopeProcess = 3,
  WnfDataScopeMachine = 4,
} WNF_DATA_SCOPE, *PWNF_DATA_SCOPE;

typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

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

typedef struct _RTL_AVL_TREE
{
  /* 0x0000 */ struct _RTL_BALANCED_NODE* Root;
} RTL_AVL_TREE, *PRTL_AVL_TREE; /* size: 0x0008 */

typedef struct _WNF_SCOPE_INSTANCE
{
  /* 0x0000 */ struct _WNF_NODE_HEADER Header;
  /* 0x0008 */ struct _EX_RUNDOWN_REF RunRef;
  /* 0x0010 */ enum _WNF_DATA_SCOPE DataScope;
  /* 0x0014 */ unsigned long InstanceIdSize;
  /* 0x0018 */ void* InstanceIdData;
  /* 0x0020 */ struct _LIST_ENTRY ResolverListEntry;
  /* 0x0030 */ struct _WNF_LOCK NameSetLock;
  /* 0x0038 */ struct _RTL_AVL_TREE NameSet;
  /* 0x0040 */ void* PermanentDataStore;
  /* 0x0048 */ void* VolatilePermanentDataStore;
} WNF_SCOPE_INSTANCE, *PWNF_SCOPE_INSTANCE; /* size: 0x0050 */

