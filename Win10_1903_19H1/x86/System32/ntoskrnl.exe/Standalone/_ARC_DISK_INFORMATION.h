typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0004 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0008 */

typedef struct _ARC_DISK_INFORMATION
{
  /* 0x0000 */ struct _LIST_ENTRY DiskSignatures;
} ARC_DISK_INFORMATION, *PARC_DISK_INFORMATION; /* size: 0x0008 */

