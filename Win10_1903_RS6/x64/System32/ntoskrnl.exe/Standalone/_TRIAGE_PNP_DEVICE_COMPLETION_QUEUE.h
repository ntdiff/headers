typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

typedef struct _TRIAGE_PNP_DEVICE_COMPLETION_QUEUE
{
  /* 0x0000 */ struct _LIST_ENTRY DispatchedList;
} TRIAGE_PNP_DEVICE_COMPLETION_QUEUE, *PTRIAGE_PNP_DEVICE_COMPLETION_QUEUE; /* size: 0x0010 */

