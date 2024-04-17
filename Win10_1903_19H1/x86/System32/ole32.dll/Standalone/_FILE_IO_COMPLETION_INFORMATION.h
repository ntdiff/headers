typedef struct _IO_STATUS_BLOCK
{
  union
  {
    /* 0x0000 */ long Status;
    /* 0x0000 */ void* Pointer;
  }; /* size: 0x0004 */
  /* 0x0004 */ unsigned long Information;
} IO_STATUS_BLOCK, *PIO_STATUS_BLOCK; /* size: 0x0008 */

typedef struct _FILE_IO_COMPLETION_INFORMATION
{
  /* 0x0000 */ void* KeyContext;
  /* 0x0004 */ void* ApcContext;
  /* 0x0008 */ struct _IO_STATUS_BLOCK IoStatusBlock;
} FILE_IO_COMPLETION_INFORMATION, *PFILE_IO_COMPLETION_INFORMATION; /* size: 0x0010 */

