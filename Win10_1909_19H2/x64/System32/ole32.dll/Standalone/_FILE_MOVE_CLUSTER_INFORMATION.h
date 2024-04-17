typedef struct _FILE_MOVE_CLUSTER_INFORMATION
{
  /* 0x0000 */ unsigned long ClusterCount;
  /* 0x0008 */ void* RootDirectory;
  /* 0x0010 */ unsigned long FileNameLength;
  /* 0x0014 */ wchar_t FileName[1];
  /* 0x0016 */ char __PADDING__[2];
} FILE_MOVE_CLUSTER_INFORMATION, *PFILE_MOVE_CLUSTER_INFORMATION; /* size: 0x0018 */

