typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

typedef struct _LPCP_PORT_QUEUE
{
  /* 0x0000 */ struct _LPCP_NONPAGED_PORT_QUEUE* NonPagedPortQueue;
  /* 0x0008 */ struct _KSEMAPHORE* Semaphore;
  /* 0x0010 */ struct _LIST_ENTRY ReceiveHead;
} LPCP_PORT_QUEUE, *PLPCP_PORT_QUEUE; /* size: 0x0020 */

