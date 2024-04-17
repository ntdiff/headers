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

typedef struct _STORAGE_HW_FIRMWARE_INFO
{
  /* 0x0000 */ unsigned long Version;
  /* 0x0004 */ unsigned long Size;
  struct /* bitfield */
  {
    /* 0x0008 */ unsigned char SupportUpgrade : 1; /* bit position: 0 */
    /* 0x0008 */ unsigned char Reserved0 : 7; /* bit position: 1 */
  }; /* bitfield */
  /* 0x0009 */ unsigned char SlotCount;
  /* 0x000a */ unsigned char ActiveSlot;
  /* 0x000b */ unsigned char PendingActivateSlot;
  /* 0x000c */ unsigned char FirmwareShared;
  /* 0x000d */ unsigned char Reserved[3];
  /* 0x0010 */ unsigned long ImagePayloadAlignment;
  /* 0x0014 */ unsigned long ImagePayloadMaxSize;
  /* 0x0018 */ struct _STORAGE_HW_FIRMWARE_SLOT_INFO Slot[1];
} STORAGE_HW_FIRMWARE_INFO, *PSTORAGE_HW_FIRMWARE_INFO; /* size: 0x0038 */

