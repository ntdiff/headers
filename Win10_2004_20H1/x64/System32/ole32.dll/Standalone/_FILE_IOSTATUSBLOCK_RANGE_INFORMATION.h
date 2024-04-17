typedef struct _FILE_IOSTATUSBLOCK_RANGE_INFORMATION
{
  /* 0x0000 */ unsigned char* IoStatusBlockRange;
  /* 0x0008 */ unsigned long Length;
  /* 0x000c */ long __PADDING__[1];
} FILE_IOSTATUSBLOCK_RANGE_INFORMATION, *PFILE_IOSTATUSBLOCK_RANGE_INFORMATION; /* size: 0x0010 */

