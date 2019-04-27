typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

typedef struct _HALP_ALLOC_CONTEXT
{
  /* 0x0000 */ struct _LIST_ENTRY BufferList;
  /* 0x0010 */ unsigned __int64 Lock;
} HALP_ALLOC_CONTEXT, *PHALP_ALLOC_CONTEXT; /* size: 0x0018 */

