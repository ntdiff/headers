typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0004 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0008 */

typedef struct _HEAP_VS_SUBSEGMENT
{
  /* 0x0000 */ struct _LIST_ENTRY ListEntry;
  /* 0x0008 */ unsigned __int64 CommitBitmap;
  /* 0x0010 */ unsigned long CommitLock;
  /* 0x0014 */ unsigned short Size;
  struct /* bitfield */
  {
    /* 0x0016 */ unsigned short Signature : 15; /* bit position: 0 */
    /* 0x0016 */ unsigned short FullCommit : 1; /* bit position: 15 */
  }; /* bitfield */
} HEAP_VS_SUBSEGMENT, *PHEAP_VS_SUBSEGMENT; /* size: 0x0018 */

