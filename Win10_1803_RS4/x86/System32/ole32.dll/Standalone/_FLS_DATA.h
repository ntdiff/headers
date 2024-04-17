typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0004 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0008 */

typedef struct _FLS_DATA
{
  /* 0x0000 */ struct _LIST_ENTRY Entry;
  /* 0x0008 */ void* Slots[128];
} FLS_DATA, *PFLS_DATA; /* size: 0x0208 */

