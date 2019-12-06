typedef struct _SINGLE_LIST_ENTRY
{
  /* 0x0000 */ struct _SINGLE_LIST_ENTRY* Next;
} SINGLE_LIST_ENTRY, *PSINGLE_LIST_ENTRY; /* size: 0x0008 */

typedef struct _ETW_BUFFER_QUEUE
{
  /* 0x0000 */ struct _SINGLE_LIST_ENTRY* QueueTail;
  /* 0x0008 */ struct _SINGLE_LIST_ENTRY QueueEntry;
} ETW_BUFFER_QUEUE, *PETW_BUFFER_QUEUE; /* size: 0x0010 */

