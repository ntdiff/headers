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

typedef struct _CM_KEY_BODY
{
  /* 0x0000 */ unsigned long Type;
  /* 0x0008 */ struct _CM_KEY_CONTROL_BLOCK* KeyControlBlock;
  /* 0x0010 */ struct _CM_NOTIFY_BLOCK* NotifyBlock;
  /* 0x0018 */ void* ProcessID;
  /* 0x0020 */ struct _LIST_ENTRY KeyBodyList;
  /* 0x0030 */ unsigned long Flags;
  /* 0x0038 */ void* KtmTrans;
  /* 0x0040 */ struct _GUID* KtmUow;
  /* 0x0048 */ struct _EX_PUSH_LOCK KeyBodyLock;
  /* 0x0050 */ struct _LIST_ENTRY ContextListHead;
} CM_KEY_BODY, *PCM_KEY_BODY; /* size: 0x0060 */

