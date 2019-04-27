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

typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

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

typedef enum _WNF_SUBSCRIPTION_STATE
{
  WNF_SUB_STATE_QUIESCENT = 0,
  WNF_SUB_STATE_READY_TO_DELIVER = 1,
  WNF_SUB_STATE_IN_DELIVERY = 2,
  WNF_SUB_STATE_RETRY = 3,
} WNF_SUBSCRIPTION_STATE, *PWNF_SUBSCRIPTION_STATE;

typedef struct _WNF_SUBSCRIPTION
{
  /* 0x0000 */ struct _WNF_NODE_HEADER Header;
  /* 0x0008 */ struct _EX_RUNDOWN_REF RunRef;
  /* 0x0010 */ unsigned __int64 SubscriptionId;
  /* 0x0018 */ struct _LIST_ENTRY ProcessSubscriptionListEntry;
  /* 0x0028 */ struct _EPROCESS* Process;
  /* 0x0030 */ struct _WNF_NAME_INSTANCE* NameInstance;
  /* 0x0038 */ struct _WNF_STATE_NAME_STRUCT StateName;
  /* 0x0040 */ struct _LIST_ENTRY StateSubscriptionListEntry;
  /* 0x0050 */ unsigned __int64 CallbackRoutine;
  /* 0x0058 */ void* CallbackContext;
  /* 0x0060 */ unsigned long CurrentChangeStamp;
  /* 0x0064 */ unsigned long SubscribedEventSet;
  /* 0x0068 */ struct _LIST_ENTRY PendingSubscriptionListEntry;
  /* 0x0078 */ enum _WNF_SUBSCRIPTION_STATE SubscriptionState;
  /* 0x007c */ unsigned long SignaledEventSet;
  /* 0x0080 */ unsigned long InDeliveryEventSet;
  /* 0x0084 */ long __PADDING__[1];
} WNF_SUBSCRIPTION, *PWNF_SUBSCRIPTION; /* size: 0x0088 */

