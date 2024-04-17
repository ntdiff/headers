typedef struct _FILE_FS_LABEL_INFORMATION
{
  /* 0x0000 */ unsigned long VolumeLabelLength;
  /* 0x0004 */ wchar_t VolumeLabel[1];
  /* 0x0006 */ char __PADDING__[2];
} FILE_FS_LABEL_INFORMATION, *PFILE_FS_LABEL_INFORMATION; /* size: 0x0008 */

