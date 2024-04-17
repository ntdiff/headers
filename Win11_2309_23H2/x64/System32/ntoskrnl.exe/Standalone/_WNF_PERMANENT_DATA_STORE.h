typedef struct _WNF_NODE_HEADER
{
  /* 0x0000 */ unsigned short NodeTypeCode;
  /* 0x0002 */ unsigned short NodeByteSize;
} WNF_NODE_HEADER, *PWNF_NODE_HEADER; /* size: 0x0004 */

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

typedef enum _WNF_DATA_SCOPE
{
  WnfDataScopeSystem = 0,
  WnfDataScopeSession = 1,
  WnfDataScopeUser = 2,
  WnfDataScopeProcess = 3,
  WnfDataScopeMachine = 4,
  WnfDataScopePhysicalMachine = 5,
} WNF_DATA_SCOPE, *PWNF_DATA_SCOPE;

typedef struct _WNF_PERMANENT_DATA_STORE
{
  /* 0x0000 */ struct _WNF_NODE_HEADER Header;
  /* 0x0008 */ struct _WNF_LOCK Lock;
  /* 0x0010 */ void* Handle;
  /* 0x0018 */ struct _LIST_ENTRY Links;
  /* 0x0028 */ enum _WNF_DATA_SCOPE DataScopeType;
  /* 0x002c */ unsigned long ScopeInstanceIdSize;
} WNF_PERMANENT_DATA_STORE, *PWNF_PERMANENT_DATA_STORE; /* size: 0x0030 */

