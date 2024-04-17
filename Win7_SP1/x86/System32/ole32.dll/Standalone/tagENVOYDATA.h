typedef struct _GUID
{
  /* 0x0000 */ unsigned long Data1;
  /* 0x0004 */ unsigned short Data2;
  /* 0x0006 */ unsigned short Data3;
  /* 0x0008 */ unsigned char Data4[8];
} GUID, *PGUID; /* size: 0x0010 */

struct tagENVOYDATA
{
  /* 0x0000 */ struct _GUID contextId;
  /* 0x0010 */ unsigned long ulJunk1;
  /* 0x0014 */ unsigned long ulJunk2;
}; /* size: 0x0018 */

