typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

typedef struct _HEAP_VS_SUBSEGMENT
{
  /* 0x0000 */ struct _LIST_ENTRY ListEntry;
  /* 0x0010 */ unsigned __int64 CommitBitmap;
  /* 0x0018 */ unsigned __int64 CommitLock;
  /* 0x0020 */ unsigned short Size;
  struct /* bitfield */
  {
    /* 0x0022 */ unsigned short Signature : 15; /* bit position: 0 */
    /* 0x0022 */ unsigned short FullCommit : 1; /* bit position: 15 */
  }; /* bitfield */
  /* 0x0024 */ long __PADDING__[1];
} HEAP_VS_SUBSEGMENT, *PHEAP_VS_SUBSEGMENT; /* size: 0x0028 */

