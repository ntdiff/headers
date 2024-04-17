typedef struct _STORAGE_DEVICE_ID_DESCRIPTOR
{
  /* 0x0000 */ unsigned long Version;
  /* 0x0004 */ unsigned long Size;
  /* 0x0008 */ unsigned long NumberOfIdentifiers;
  /* 0x000c */ unsigned char Identifiers[1];
  /* 0x000d */ char __PADDING__[3];
} STORAGE_DEVICE_ID_DESCRIPTOR, *PSTORAGE_DEVICE_ID_DESCRIPTOR; /* size: 0x0010 */

