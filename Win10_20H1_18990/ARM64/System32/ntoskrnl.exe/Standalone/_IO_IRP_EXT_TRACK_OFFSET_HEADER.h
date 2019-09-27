typedef struct _IO_IRP_EXT_TRACK_OFFSET_HEADER
{
  /* 0x0000 */ unsigned short Validation;
  /* 0x0002 */ unsigned short Flags;
  /* 0x0008 */ void* TrackedOffsetCallback /* function */;
} IO_IRP_EXT_TRACK_OFFSET_HEADER, *PIO_IRP_EXT_TRACK_OFFSET_HEADER; /* size: 0x0010 */

