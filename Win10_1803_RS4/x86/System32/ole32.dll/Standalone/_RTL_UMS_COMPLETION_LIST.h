typedef struct _SINGLE_LIST_ENTRY
{
  /* 0x0000 */ struct _SINGLE_LIST_ENTRY* Next;
} SINGLE_LIST_ENTRY, *PSINGLE_LIST_ENTRY; /* size: 0x0004 */

typedef struct _RTL_UMS_COMPLETION_LIST
{
  /* 0x0000 */ struct _SINGLE_LIST_ENTRY* ThreadListHead;
  /* 0x0004 */ void* CompletionEvent;
  /* 0x0008 */ unsigned long CompletionFlags;
  /* 0x000c */ struct _SINGLE_LIST_ENTRY InternalListHead;
} RTL_UMS_COMPLETION_LIST, *PRTL_UMS_COMPLETION_LIST; /* size: 0x0010 */

