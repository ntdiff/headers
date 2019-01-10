typedef struct _CM_KEY_HASH
{
  /* 0x0000 */ unsigned long ConvKey;
  /* 0x0004 */ struct _CM_KEY_HASH* NextHash;
  /* 0x0008 */ struct _HHIVE* KeyHive;
  /* 0x000c */ unsigned long KeyCell;
} CM_KEY_HASH, *PCM_KEY_HASH; /* size: 0x0010 */

typedef struct _CACHED_CHILD_LIST
{
  /* 0x0000 */ unsigned long Count;
  union
  {
    /* 0x0004 */ unsigned long ValueList;
    /* 0x0004 */ struct _CM_KEY_CONTROL_BLOCK* RealKcb;
  }; /* size: 0x0004 */
} CACHED_CHILD_LIST, *PCACHED_CHILD_LIST; /* size: 0x0008 */

typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0004 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0008 */

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
  /* 0x0004 */ struct _CM_KCB_UOW** OwnerTable;
} CM_INTENT_LOCK, *PCM_INTENT_LOCK; /* size: 0x0008 */

typedef struct _CHILD_LIST
{
  /* 0x0000 */ unsigned long Count;
  /* 0x0004 */ unsigned long List;
} CHILD_LIST, *PCHILD_LIST; /* size: 0x0008 */

typedef struct _CM_KEY_CONTROL_BLOCK
{
  /* 0x0000 */ unsigned long RefCount;
  struct /* bitfield */
  {
    /* 0x0004 */ unsigned long ExtFlags : 8; /* bit position: 0 */
    /* 0x0004 */ unsigned long PrivateAlloc : 1; /* bit position: 8 */
    /* 0x0004 */ unsigned long Delete : 1; /* bit position: 9 */
    /* 0x0004 */ unsigned long DelayedCloseIndex : 12; /* bit position: 10 */
    /* 0x0004 */ unsigned long TotalLevels : 10; /* bit position: 22 */
  }; /* bitfield */
  union
  {
    /* 0x0008 */ struct _CM_KEY_HASH KeyHash;
    struct
    {
      /* 0x0008 */ unsigned long ConvKey;
      /* 0x000c */ struct _CM_KEY_HASH* NextHash;
      /* 0x0010 */ struct _HHIVE* KeyHive;
      /* 0x0014 */ unsigned long KeyCell;
    }; /* size: 0x0010 */
  }; /* size: 0x0010 */
  /* 0x0018 */ struct _CM_KEY_CONTROL_BLOCK* ParentKcb;
  /* 0x001c */ struct _CM_NAME_CONTROL_BLOCK* NameBlock;
  /* 0x0020 */ struct _CM_KEY_SECURITY_CACHE* CachedSecurity;
  /* 0x0024 */ struct _CACHED_CHILD_LIST ValueCache;
  union
  {
    /* 0x002c */ struct _CM_INDEX_HINT_BLOCK* IndexHint;
    /* 0x002c */ unsigned long HashKey;
    /* 0x002c */ unsigned long SubKeyCount;
  }; /* size: 0x0004 */
  union
  {
    /* 0x0030 */ struct _LIST_ENTRY KeyBodyListHead;
    /* 0x0030 */ struct _LIST_ENTRY FreeListEntry;
  }; /* size: 0x0008 */
  /* 0x0038 */ struct _CM_KEY_BODY* KeyBodyArray[4];
  /* 0x0048 */ void* DelayCloseEntry;
  /* 0x0050 */ union _LARGE_INTEGER KcbLastWriteTime;
  /* 0x0058 */ unsigned short KcbMaxNameLen;
  /* 0x005a */ unsigned short KcbMaxValueNameLen;
  /* 0x005c */ unsigned long KcbMaxValueDataLen;
  struct /* bitfield */
  {
    /* 0x0060 */ unsigned long KcbUserFlags : 4; /* bit position: 0 */
    /* 0x0060 */ unsigned long KcbVirtControlFlags : 4; /* bit position: 4 */
    /* 0x0060 */ unsigned long KcbDebug : 8; /* bit position: 8 */
    /* 0x0060 */ unsigned long Flags : 16; /* bit position: 16 */
  }; /* bitfield */
  /* 0x0064 */ struct _LIST_ENTRY KCBUoWListHead;
  /* 0x006c */ struct _CM_TRANS* TransKCBOwner;
  /* 0x0070 */ struct _CM_INTENT_LOCK KCBLock;
  /* 0x0078 */ struct _CM_INTENT_LOCK KeyLock;
  /* 0x0080 */ struct _CHILD_LIST TransValueCache;
  /* 0x0088 */ struct _CM_TRANS* TransValueListOwner;
  /* 0x008c */ struct _UNICODE_STRING* FullKCBName;
} CM_KEY_CONTROL_BLOCK, *PCM_KEY_CONTROL_BLOCK; /* size: 0x0090 */

