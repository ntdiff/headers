typedef struct _FILE_MOVE_CLUSTER_INFORMATION
{
  /* 0x0000 */ unsigned long ClusterCount;
  /* 0x0004 */ void* RootDirectory;
  /* 0x0008 */ unsigned long FileNameLength;
  /* 0x000c */ wchar_t FileName[1];
  /* 0x000e */ char __PADDING__[2];
} FILE_MOVE_CLUSTER_INFORMATION, *PFILE_MOVE_CLUSTER_INFORMATION; /* size: 0x0010 */

