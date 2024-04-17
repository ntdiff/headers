typedef struct _GUID
{
  /* 0x0000 */ unsigned long Data1;
  /* 0x0004 */ unsigned short Data2;
  /* 0x0006 */ unsigned short Data3;
  /* 0x0008 */ unsigned char Data4[8];
} GUID, *PGUID; /* size: 0x0010 */

struct tagDATAELEMENT
{
  /* 0x0000 */ struct _GUID dataID;
  /* 0x0010 */ unsigned long cbSize;
  /* 0x0014 */ unsigned long cbRounded;
  /* 0x0018 */ unsigned char Data[1];
  /* 0x0019 */ char __PADDING__[3];
}; /* size: 0x001c */

