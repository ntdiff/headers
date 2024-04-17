typedef struct _wfinddata64_t
{
  /* 0x0000 */ unsigned int attrib;
  /* 0x0008 */ __int64 time_create;
  /* 0x0010 */ __int64 time_access;
  /* 0x0018 */ __int64 time_write;
  /* 0x0020 */ __int64 size;
  /* 0x0028 */ wchar_t name[260];
} wfinddata64_t, *Pwfinddata64_t; /* size: 0x0230 */

