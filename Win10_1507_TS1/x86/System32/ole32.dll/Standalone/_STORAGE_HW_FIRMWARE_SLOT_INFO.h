typedef struct _STORAGE_HW_FIRMWARE_SLOT_INFO
{
  /* 0x0000 */ unsigned long Version;
  /* 0x0004 */ unsigned long Size;
  /* 0x0008 */ unsigned char SlotNumber;
  struct /* bitfield */
  {
    /* 0x0009 */ unsigned char ReadOnly : 1; /* bit position: 0 */
    /* 0x0009 */ unsigned char Reserved0 : 7; /* bit position: 1 */
  }; /* bitfield */
  /* 0x000a */ unsigned char Reserved1[6];
  /* 0x0010 */ unsigned char Revision[16];
} STORAGE_HW_FIRMWARE_SLOT_INFO, *PSTORAGE_HW_FIRMWARE_SLOT_INFO; /* size: 0x0020 */

