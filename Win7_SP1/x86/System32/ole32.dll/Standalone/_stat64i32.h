typedef struct _stat64i32
{
  /* 0x0000 */ unsigned int st_dev;
  /* 0x0004 */ unsigned short st_ino;
  /* 0x0006 */ unsigned short st_mode;
  /* 0x0008 */ short st_nlink;
  /* 0x000a */ short st_uid;
  /* 0x000c */ short st_gid;
  /* 0x0010 */ unsigned int st_rdev;
  /* 0x0014 */ long st_size;
  /* 0x0018 */ __int64 st_atime;
  /* 0x0020 */ __int64 st_mtime;
  /* 0x0028 */ __int64 st_ctime;
} stat64i32, *Pstat64i32; /* size: 0x0030 */

