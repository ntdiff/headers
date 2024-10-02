typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

typedef struct _FAST_OWNER_ENTRY_INTERNAL
{
  /* 0x0000 */ struct _LIST_ENTRY ListEntry;
  /* 0x0010 */ void* ThreadAddressAndDisowned;
  /* 0x0018 */ void* LockAddress;
  /* 0x0020 */ long RecursiveReferenceCount;
  /* 0x0024 */ unsigned char AbLockHandle;
  struct /* bitfield */
  {
    /* 0x0025 */ unsigned char DynamicallyAllocated : 1; /* bit position: 0 */
    /* 0x0025 */ unsigned char CallerExclusive : 1; /* bit position: 1 */
    /* 0x0025 */ unsigned char CurrentlyWaitingShared : 1; /* bit position: 2 */
  }; /* bitfield */
  /* 0x0026 */ unsigned char Reserved[2];
} FAST_OWNER_ENTRY_INTERNAL, *PFAST_OWNER_ENTRY_INTERNAL; /* size: 0x0028 */

