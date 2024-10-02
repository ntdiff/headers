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

