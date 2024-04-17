typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

typedef struct _NDR_ALLOCA_CONTEXT
{
  /* 0x0000 */ unsigned char* pBlockPointer;
  /* 0x0008 */ struct _LIST_ENTRY MemoryList;
  /* 0x0018 */ unsigned __int64 BytesRemaining;
  /* 0x0020 */ unsigned char PreAllocatedBlock[512];
} NDR_ALLOCA_CONTEXT, *PNDR_ALLOCA_CONTEXT; /* size: 0x0220 */

