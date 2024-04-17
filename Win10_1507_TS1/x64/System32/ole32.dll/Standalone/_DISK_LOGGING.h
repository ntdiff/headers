typedef struct _DISK_LOGGING
{
  /* 0x0000 */ unsigned char Function;
  /* 0x0008 */ void* BufferAddress;
  /* 0x0010 */ unsigned long BufferSize;
  /* 0x0014 */ long __PADDING__[1];
} DISK_LOGGING, *PDISK_LOGGING; /* size: 0x0018 */

