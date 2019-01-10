typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0004 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0008 */

typedef struct _FAST_OWNER_ENTRY_INTERNAL
{
  /* 0x0000 */ struct _LIST_ENTRY ListEntry;
  /* 0x0008 */ unsigned char AbLockHandle;
  struct /* bitfield */
  {
    /* 0x0009 */ unsigned char Disowned : 1; /* bit position: 0 */
    /* 0x0009 */ unsigned char DynamicallyAllocated : 1; /* bit position: 1 */
    /* 0x0009 */ unsigned char CallerExclusive : 1; /* bit position: 2 */
  }; /* bitfield */
  /* 0x000a */ unsigned char IsSublistHead;
  /* 0x000b */ unsigned char IsWaiting;
  /* 0x000c */ void* LockAddress;
  /* 0x0010 */ void* ThreadAddress;
  /* 0x0014 */ struct _LIST_ENTRY SublistHead;
  /* 0x001c */ struct _LIST_ENTRY LockListEntry;
} FAST_OWNER_ENTRY_INTERNAL, *PFAST_OWNER_ENTRY_INTERNAL; /* size: 0x0024 */

