typedef struct _stati64
{
  /* 0x0000 */ unsigned int st_dev;
  /* 0x0004 */ unsigned short st_ino;
  /* 0x0006 */ unsigned short st_mode;
  /* 0x0008 */ short st_nlink;
  /* 0x000a */ short st_uid;
  /* 0x000c */ short st_gid;
  /* 0x0010 */ unsigned int st_rdev;
  /* 0x0018 */ __int64 st_size;
  /* 0x0020 */ long st_atime;
  /* 0x0024 */ long st_mtime;
  /* 0x0028 */ long st_ctime;
  /* 0x002c */ long __PADDING__[1];
} stati64, *Pstati64; /* size: 0x0030 */

