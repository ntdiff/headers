typedef struct _FILE_REPARSE_POINT_INFORMATION
{
  /* 0x0000 */ __int64 FileReference;
  /* 0x0008 */ unsigned long Tag;
  /* 0x000c */ long __PADDING__[1];
} FILE_REPARSE_POINT_INFORMATION, *PFILE_REPARSE_POINT_INFORMATION; /* size: 0x0010 */

