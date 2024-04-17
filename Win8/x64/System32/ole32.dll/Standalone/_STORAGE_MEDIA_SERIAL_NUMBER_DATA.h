typedef struct _STORAGE_MEDIA_SERIAL_NUMBER_DATA
{
  /* 0x0000 */ unsigned short Reserved;
  /* 0x0002 */ unsigned short SerialNumberLength;
  /* 0x0004 */ unsigned char* SerialNumber /* zero-length array */;
} STORAGE_MEDIA_SERIAL_NUMBER_DATA, *PSTORAGE_MEDIA_SERIAL_NUMBER_DATA; /* size: 0x0004 */

