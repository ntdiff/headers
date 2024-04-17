typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

struct NDIS_BIND_DRIVER_BASE
{
  /* 0x0000 */ BOOL DriverReady;
  /* 0x0001 */ BOOL NeedsBindCompleteEvent;
  /* 0x0008 */ struct _LIST_ENTRY BindLinks;
}; /* size: 0x0018 */

