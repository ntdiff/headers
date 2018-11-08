typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

typedef struct _PTE_TRACKER
{
  /* 0x0000 */ struct _LIST_ENTRY ListEntry;
  /* 0x0010 */ struct _MDL* Mdl;
  /* 0x0018 */ unsigned __int64 Count;
  /* 0x0020 */ void* SystemVa;
  /* 0x0028 */ void* StartVa;
  /* 0x0030 */ unsigned long Offset;
  /* 0x0034 */ unsigned long Length;
  /* 0x0038 */ unsigned __int64 Page;
  struct /* bitfield */
  {
    /* 0x0040 */ unsigned long IoMapping : 1; /* bit position: 0 */
    /* 0x0040 */ unsigned long Matched : 1; /* bit position: 1 */
    /* 0x0040 */ unsigned long CacheAttribute : 2; /* bit position: 2 */
    /* 0x0040 */ unsigned long GuardPte : 1; /* bit position: 4 */
    /* 0x0040 */ unsigned long Spare : 27; /* bit position: 5 */
  }; /* bitfield */
  /* 0x0048 */ void* StackTrace[7];
} PTE_TRACKER, *PPTE_TRACKER; /* size: 0x0080 */

