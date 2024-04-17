typedef struct _IMAGEHLP_CBA_READ_MEMORY
{
  /* 0x0000 */ unsigned __int64 addr;
  /* 0x0008 */ void* buf;
  /* 0x000c */ unsigned long bytes;
  /* 0x0010 */ unsigned long* bytesread;
  /* 0x0014 */ long __PADDING__[1];
} IMAGEHLP_CBA_READ_MEMORY, *PIMAGEHLP_CBA_READ_MEMORY; /* size: 0x0018 */

