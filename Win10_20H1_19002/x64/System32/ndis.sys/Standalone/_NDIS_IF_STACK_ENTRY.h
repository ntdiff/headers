typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

typedef struct _NDIS_IF_STACK_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY Link;
  /* 0x0010 */ unsigned long HigherLayerIfIndex;
  /* 0x0014 */ unsigned long LowerLayerIfIndex;
  /* 0x0018 */ struct _NDIS_IF_BLOCK* HigherLayerIf;
  /* 0x0020 */ struct _NDIS_IF_BLOCK* LowerLayerIf;
} NDIS_IF_STACK_ENTRY, *PNDIS_IF_STACK_ENTRY; /* size: 0x0028 */

