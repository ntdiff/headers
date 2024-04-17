typedef struct _EFI_DRIVER_ENTRY
{
  /* 0x0000 */ unsigned long Version;
  /* 0x0004 */ unsigned long Length;
  /* 0x0008 */ unsigned long Id;
  /* 0x000c */ unsigned long FriendlyNameOffset;
  /* 0x0010 */ unsigned long DriverFilePathOffset;
} EFI_DRIVER_ENTRY, *PEFI_DRIVER_ENTRY; /* size: 0x0014 */

