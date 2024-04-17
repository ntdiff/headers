typedef struct _BOOT_ENTRY
{
  /* 0x0000 */ unsigned long Version;
  /* 0x0004 */ unsigned long Length;
  /* 0x0008 */ unsigned long Id;
  /* 0x000c */ unsigned long Attributes;
  /* 0x0010 */ unsigned long FriendlyNameOffset;
  /* 0x0014 */ unsigned long BootFilePathOffset;
  /* 0x0018 */ unsigned long OsOptionsLength;
  /* 0x001c */ unsigned char OsOptions[1];
  /* 0x001d */ char __PADDING__[3];
} BOOT_ENTRY, *PBOOT_ENTRY; /* size: 0x0020 */

typedef struct _BOOT_ENTRY_LIST
{
  /* 0x0000 */ unsigned long NextEntryOffset;
  /* 0x0004 */ struct _BOOT_ENTRY BootEntry;
} BOOT_ENTRY_LIST, *PBOOT_ENTRY_LIST; /* size: 0x0024 */

