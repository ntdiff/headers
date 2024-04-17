typedef struct _STORAGE_HW_FIRMWARE_ACTIVATE
{
  /* 0x0000 */ unsigned long Version;
  /* 0x0004 */ unsigned long Size;
  /* 0x0008 */ unsigned long Flags;
  /* 0x000c */ unsigned char Slot;
  /* 0x000d */ unsigned char Reserved0[3];
} STORAGE_HW_FIRMWARE_ACTIVATE, *PSTORAGE_HW_FIRMWARE_ACTIVATE; /* size: 0x0010 */

