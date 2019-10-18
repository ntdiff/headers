typedef struct _IO_NMISOURCE
{
  /* 0x0000 */ unsigned char Type;
  /* 0x0001 */ unsigned char Length;
  /* 0x0002 */ unsigned short Flags;
  /* 0x0004 */ unsigned long GlobalSystemInterruptVector;
} IO_NMISOURCE, *PIO_NMISOURCE; /* size: 0x0008 */

