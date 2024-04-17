typedef struct _wfinddatai64_t
{
  /* 0x0000 */ unsigned int attrib;
  /* 0x0004 */ long time_create;
  /* 0x0008 */ long time_access;
  /* 0x000c */ long time_write;
  /* 0x0010 */ __int64 size;
  /* 0x0018 */ wchar_t name[260];
} wfinddatai64_t, *Pwfinddatai64_t; /* size: 0x0220 */

