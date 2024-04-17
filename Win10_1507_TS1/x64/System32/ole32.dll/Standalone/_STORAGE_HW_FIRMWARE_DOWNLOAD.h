typedef struct _STORAGE_HW_FIRMWARE_DOWNLOAD
{
  /* 0x0000 */ unsigned long Version;
  /* 0x0004 */ unsigned long Size;
  /* 0x0008 */ unsigned long Flags;
  /* 0x000c */ unsigned char Slot;
  /* 0x000d */ unsigned char Reserved[3];
  /* 0x0010 */ unsigned __int64 Offset;
  /* 0x0018 */ unsigned __int64 BufferSize;
  /* 0x0020 */ unsigned char ImageBuffer[1];
  /* 0x0021 */ char __PADDING__[7];
} STORAGE_HW_FIRMWARE_DOWNLOAD, *PSTORAGE_HW_FIRMWARE_DOWNLOAD; /* size: 0x0028 */

