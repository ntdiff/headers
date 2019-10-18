typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0004 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0008 */

typedef struct _HALP_ALLOC_CONTEXT
{
  /* 0x0000 */ struct _LIST_ENTRY BufferList;
  /* 0x0008 */ unsigned long Lock;
} HALP_ALLOC_CONTEXT, *PHALP_ALLOC_CONTEXT; /* size: 0x000c */

