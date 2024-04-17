typedef struct _DISK_LOGGING
{
  /* 0x0000 */ unsigned char Function;
  /* 0x0004 */ void* BufferAddress;
  /* 0x0008 */ unsigned long BufferSize;
} DISK_LOGGING, *PDISK_LOGGING; /* size: 0x000c */

