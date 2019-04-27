typedef struct _IO_CLIENT_EXTENSION
{
  /* 0x0000 */ struct _IO_CLIENT_EXTENSION* NextExtension;
  /* 0x0004 */ void* ClientIdentificationAddress;
} IO_CLIENT_EXTENSION, *PIO_CLIENT_EXTENSION; /* size: 0x0008 */

