typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

typedef struct _ETW_BOOT_CONFIG
{
  /* 0x0000 */ unsigned long MaxLoggers;
  /* 0x0008 */ struct _LIST_ENTRY BootLoggersList;
} ETW_BOOT_CONFIG, *PETW_BOOT_CONFIG; /* size: 0x0018 */

