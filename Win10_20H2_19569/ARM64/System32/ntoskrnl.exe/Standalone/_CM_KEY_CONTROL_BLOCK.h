typedef struct _CM_PATH_HASH
{
  /* 0x0000 */ unsigned long Hash;
} CM_PATH_HASH, *PCM_PATH_HASH; /* size: 0x0004 */

typedef struct _CM_KEY_HASH
{
  /* 0x0000 */ struct _CM_PATH_HASH ConvKey;
  /* 0x0008 */ struct _CM_KEY_HASH* NextHash;
  /* 0x0010 */ struct _HHIVE* KeyHive;
  /* 0x0018 */ unsigned long KeyCell;
  /* 0x001c */ long __PADDING__[1];
} CM_KEY_HASH, *PCM_KEY_HASH; /* size: 0x0020 */

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

typedef struct _CHILD_LIST
{
  /* 0x0000 */ unsigned long Count;
  /* 0x0004 */ unsigned long List;
} CHILD_LIST, *PCHILD_LIST; /* size: 0x0008 */

typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

typedef union _LARGE_INTEGER
{
  union
  {
    struct
    {
      /* 0x0000 */ unsigned long LowPart;
      /* 0x0004 */ long HighPart;
    }; /* size: 0x0008 */
    struct
    {
      /* 0x0000 */ unsigned long LowPart;
      /* 0x0004 */ long HighPart;
    } /* size: 0x0008 */ u;
    /* 0x0000 */ __int64 QuadPart;
  }; /* size: 0x0008 */
} LARGE_INTEGER, *PLARGE_INTEGER; /* size: 0x0008 */

typedef struct _CM_INTENT_LOCK
{
  /* 0x0000 */ unsigned long OwnerCount;
  /* 0x0008 */ struct _CM_KCB_UOW** OwnerTable;
} CM_INTENT_LOCK, *PCM_INTENT_LOCK; /* size: 0x0010 */

typedef struct _CM_KEY_CONTROL_BLOCK
{
  /* 0x0000 */ unsigned __int64 RefCount;
  struct /* bitfield */
  {
    /* 0x0008 */ unsigned long ExtFlags : 16; /* bit position: 0 */
    /* 0x0008 */ unsigned long Freed : 1; /* bit position: 16 */
    /* 0x0008 */ unsigned long Discarded : 1; /* bit position: 17 */
    /* 0x0008 */ unsigned long HiveUnloaded : 1; /* bit position: 18 */
    /* 0x0008 */ unsigned long Decommissioned : 1; /* bit position: 19 */
    /* 0x0008 */ unsigned long SpareExtFlag : 1; /* bit position: 20 */
    /* 0x0008 */ unsigned long TotalLevels : 10; /* bit position: 21 */
  }; /* bitfield */
  union
  {
    /* 0x0010 */ struct _CM_KEY_HASH KeyHash;
    struct
    {
      /* 0x0010 */ struct _CM_PATH_HASH ConvKey;
      /* 0x0018 */ struct _CM_KEY_HASH* NextHash;
      /* 0x0020 */ struct _HHIVE* KeyHive;
      /* 0x0028 */ unsigned long KeyCell;
    }; /* size: 0x0018 */
  }; /* size: 0x0020 */
  /* 0x0030 */ struct _EX_PUSH_LOCK KcbPushlock;
  union
  {
    /* 0x0038 */ struct _KTHREAD* Owner;
    /* 0x0038 */ long SharedCount;
  }; /* size: 0x0008 */
  struct /* bitfield */
  {
    /* 0x0040 */ unsigned char DelayedDeref : 1; /* bit position: 0 */
    /* 0x0040 */ unsigned char DelayedClose : 1; /* bit position: 1 */
    /* 0x0040 */ unsigned char Parking : 1; /* bit position: 2 */
  }; /* bitfield */
  /* 0x0041 */ unsigned char LayerSemantics;
  /* 0x0042 */ short LayerHeight;
  /* 0x0044 */ unsigned long Spare1;
  /* 0x0048 */ struct _CM_KEY_CONTROL_BLOCK* ParentKcb;
  /* 0x0050 */ struct _CM_NAME_CONTROL_BLOCK* NameBlock;
  /* 0x0058 */ struct _CM_KEY_SECURITY_CACHE* CachedSecurity;
  /* 0x0060 */ struct _CHILD_LIST ValueList;
  /* 0x0068 */ struct _CM_KEY_CONTROL_BLOCK* LinkTarget;
  union
  {
    /* 0x0070 */ struct _CM_INDEX_HINT_BLOCK* IndexHint;
    /* 0x0070 */ unsigned long HashKey;
    /* 0x0070 */ unsigned long SubKeyCount;
  }; /* size: 0x0008 */
  union
  {
    /* 0x0078 */ struct _LIST_ENTRY KeyBodyListHead;
    /* 0x0078 */ struct _LIST_ENTRY ClonedListEntry;
  }; /* size: 0x0010 */
  /* 0x0088 */ struct _CM_KEY_BODY* KeyBodyArray[4];
  /* 0x00a8 */ union _LARGE_INTEGER KcbLastWriteTime;
  /* 0x00b0 */ unsigned short KcbMaxNameLen;
  /* 0x00b2 */ unsigned short KcbMaxValueNameLen;
  /* 0x00b4 */ unsigned long KcbMaxValueDataLen;
  struct /* bitfield */
  {
    /* 0x00b8 */ unsigned long KcbUserFlags : 4; /* bit position: 0 */
    /* 0x00b8 */ unsigned long KcbVirtControlFlags : 4; /* bit position: 4 */
    /* 0x00b8 */ unsigned long KcbDebug : 8; /* bit position: 8 */
    /* 0x00b8 */ unsigned long Flags : 16; /* bit position: 16 */
  }; /* bitfield */
  /* 0x00bc */ unsigned long Spare3;
  /* 0x00c0 */ struct _CM_KCB_LAYER_INFO* LayerInfo;
  /* 0x00c8 */ char* RealKeyName;
  /* 0x00d0 */ struct _LIST_ENTRY KCBUoWListHead;
  union
  {
    /* 0x00e0 */ struct _LIST_ENTRY DelayQueueEntry;
    /* 0x00e0 */ volatile unsigned char* Stolen;
  }; /* size: 0x0010 */
  /* 0x00f0 */ struct _CM_TRANS* TransKCBOwner;
  /* 0x00f8 */ struct _CM_INTENT_LOCK KCBLock;
  /* 0x0108 */ struct _CM_INTENT_LOCK KeyLock;
  /* 0x0118 */ struct _CHILD_LIST TransValueCache;
  /* 0x0120 */ struct _CM_TRANS* TransValueListOwner;
  union
  {
    /* 0x0128 */ struct _UNICODE_STRING* FullKCBName;
    struct /* bitfield */
    {
      /* 0x0128 */ unsigned __int64 FullKCBNameStale : 1; /* bit position: 0 */
      /* 0x0128 */ unsigned __int64 Reserved : 63; /* bit position: 1 */
    }; /* bitfield */
  }; /* size: 0x0008 */
  /* 0x0130 */ unsigned __int64 SequenceNumber;
} CM_KEY_CONTROL_BLOCK, *PCM_KEY_CONTROL_BLOCK; /* size: 0x0138 */

