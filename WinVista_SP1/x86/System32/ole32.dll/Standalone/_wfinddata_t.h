typedef struct _wfinddata_t
{
  /* 0x0000 */ unsigned int attrib;
  /* 0x0004 */ long time_create;
  /* 0x0008 */ long time_access;
  /* 0x000c */ long time_write;
  /* 0x0010 */ unsigned long size;
  /* 0x0014 */ wchar_t name[260];
} wfinddata_t, *Pwfinddata_t; /* size: 0x021c */

