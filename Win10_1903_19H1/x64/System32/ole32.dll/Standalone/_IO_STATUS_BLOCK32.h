typedef struct _IO_STATUS_BLOCK32
{
  /* 0x0000 */ long Status;
  /* 0x0004 */ unsigned long Information;
} IO_STATUS_BLOCK32, *PIO_STATUS_BLOCK32; /* size: 0x0008 */

