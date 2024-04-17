typedef struct _wfinddata64i32_t
{
  /* 0x0000 */ unsigned int attrib;
  /* 0x0008 */ __int64 time_create;
  /* 0x0010 */ __int64 time_access;
  /* 0x0018 */ __int64 time_write;
  /* 0x0020 */ unsigned long size;
  /* 0x0024 */ wchar_t name[260];
  /* 0x022c */ long __PADDING__[1];
} wfinddata64i32_t, *Pwfinddata64i32_t; /* size: 0x0230 */

