typedef enum __std_fs_file_attr
{
  _Readonly = 1,
  _Hidden = 2,
  _System = 4,
  _Directory = 16,
  _Archive = 32,
  _Device = 64,
  _Normal = 128,
  _Temporary = 256,
  _Sparse_file = 512,
  _Reparse_point = 1024,
  _Invalid = 0xffffffff,
} _std_fs_file_attr, *P_std_fs_file_attr;

typedef enum __std_fs_reparse_tag
{
  _None = 0,
  _Mount_point = 0xa0000003,
  _Symlink = 0xa000000c,
} _std_fs_reparse_tag, *P_std_fs_reparse_tag;

typedef enum __std_fs_stats_flags
{
  _None = 0,
  _Follow_symlinks = 1,
  _Attributes = 2,
  _Reparse_tag = 4,
  _File_size = 8,
  _Link_count = 16,
  _Last_write_time = 32,
  _All_data = 62,
} _std_fs_stats_flags, *P_std_fs_stats_flags;

typedef struct __std_fs_stats
{
  /* 0x0000 */ __int64 _Last_write_time;
  /* 0x0008 */ unsigned __int64 _File_size;
  /* 0x0010 */ enum __std_fs_file_attr _Attributes;
  /* 0x0014 */ enum __std_fs_reparse_tag _Reparse_point_tag;
  /* 0x0018 */ unsigned long _Link_count;
  /* 0x001c */ enum __std_fs_stats_flags _Available;
} _std_fs_stats, *P_std_fs_stats; /* size: 0x0020 */

