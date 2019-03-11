typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0004 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0008 */

typedef struct _PTE_TRACKER
{
  /* 0x0000 */ struct _LIST_ENTRY ListEntry;
  /* 0x0008 */ struct _MDL* Mdl;
  /* 0x000c */ unsigned long Count;
  /* 0x0010 */ void* SystemVa;
  /* 0x0014 */ void* StartVa;
  /* 0x0018 */ unsigned long Offset;
  /* 0x001c */ unsigned long Length;
  /* 0x0020 */ unsigned long Page;
  struct /* bitfield */
  {
    /* 0x0024 */ unsigned long IoMapping : 1; /* bit position: 0 */
    /* 0x0024 */ unsigned long Matched : 1; /* bit position: 1 */
    /* 0x0024 */ unsigned long CacheAttribute : 2; /* bit position: 2 */
    /* 0x0024 */ unsigned long GuardPte : 1; /* bit position: 4 */
    /* 0x0024 */ unsigned long Spare : 27; /* bit position: 5 */
  }; /* bitfield */
  /* 0x0028 */ void* StackTrace[7];
} PTE_TRACKER, *PPTE_TRACKER; /* size: 0x0044 */

