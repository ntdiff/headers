typedef struct _EFI_DRIVER_ENTRY
{
  /* 0x0000 */ unsigned long Version;
  /* 0x0004 */ unsigned long Length;
  /* 0x0008 */ unsigned long Id;
  /* 0x000c */ unsigned long FriendlyNameOffset;
  /* 0x0010 */ unsigned long DriverFilePathOffset;
} EFI_DRIVER_ENTRY, *PEFI_DRIVER_ENTRY; /* size: 0x0014 */

typedef struct _EFI_DRIVER_ENTRY_LIST
{
  /* 0x0000 */ unsigned long NextEntryOffset;
  /* 0x0004 */ struct _EFI_DRIVER_ENTRY DriverEntry;
} EFI_DRIVER_ENTRY_LIST, *PEFI_DRIVER_ENTRY_LIST; /* size: 0x0018 */

