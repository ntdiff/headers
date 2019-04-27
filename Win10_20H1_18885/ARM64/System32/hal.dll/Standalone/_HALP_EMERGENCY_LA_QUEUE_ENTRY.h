typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

typedef enum _HALP_EMERGENCY_LA_QUEUE_TYPE
{
  HalpDmaLegacyLaQueueEntry = 0,
  HalpDmaThinLaQueueEntry = 1,
  HalpDmaLaQueueEntryMax = 2,
} HALP_EMERGENCY_LA_QUEUE_TYPE, *PHALP_EMERGENCY_LA_QUEUE_TYPE;

typedef struct _HALP_EMERGENCY_LA_QUEUE_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY ListEntry;
  /* 0x0010 */ enum _HALP_EMERGENCY_LA_QUEUE_TYPE EntryType;
  /* 0x0014 */ long __PADDING__[1];
} HALP_EMERGENCY_LA_QUEUE_ENTRY, *PHALP_EMERGENCY_LA_QUEUE_ENTRY; /* size: 0x0018 */

