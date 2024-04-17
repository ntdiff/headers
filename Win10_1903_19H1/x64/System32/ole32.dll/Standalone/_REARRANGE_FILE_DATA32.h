typedef struct _REARRANGE_FILE_DATA32
{
  /* 0x0000 */ unsigned __int64 SourceStartingOffset;
  /* 0x0008 */ unsigned __int64 TargetOffset;
  /* 0x0010 */ unsigned int SourceFileHandle;
  /* 0x0014 */ unsigned long Length;
  /* 0x0018 */ unsigned long Flags;
  /* 0x001c */ long __PADDING__[1];
} REARRANGE_FILE_DATA32, *PREARRANGE_FILE_DATA32; /* size: 0x0020 */

