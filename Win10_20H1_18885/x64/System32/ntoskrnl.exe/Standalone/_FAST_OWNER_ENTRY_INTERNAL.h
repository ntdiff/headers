typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

typedef struct _FAST_OWNER_ENTRY_INTERNAL
{
  /* 0x0000 */ struct _LIST_ENTRY ListEntry;
  /* 0x0010 */ unsigned char AbLockHandle;
  struct /* bitfield */
  {
    /* 0x0011 */ unsigned char Disowned : 1; /* bit position: 0 */
    /* 0x0011 */ unsigned char DynamicallyAllocated : 1; /* bit position: 1 */
    /* 0x0011 */ unsigned char CallerExclusive : 1; /* bit position: 2 */
  }; /* bitfield */
  /* 0x0012 */ unsigned char IsSublistHead;
  /* 0x0013 */ unsigned char IsWaiting;
  /* 0x0018 */ void* LockAddress;
  /* 0x0020 */ void* ThreadAddress;
  /* 0x0028 */ struct _LIST_ENTRY SublistHead;
  /* 0x0038 */ struct _LIST_ENTRY LockListEntry;
} FAST_OWNER_ENTRY_INTERNAL, *PFAST_OWNER_ENTRY_INTERNAL; /* size: 0x0048 */

