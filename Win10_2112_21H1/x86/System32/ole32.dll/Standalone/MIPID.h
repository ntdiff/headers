typedef struct _GUID
{
  /* 0x0000 */ unsigned long Data1;
  /* 0x0004 */ unsigned short Data2;
  /* 0x0006 */ unsigned short Data3;
  /* 0x0008 */ unsigned char Data4[8];
} GUID, *PGUID; /* size: 0x0010 */

struct MIPID
{
  /* 0x0000 */ unsigned __int64 mid;
  /* 0x0008 */ struct _GUID ipid;
  /* 0x0018 */ unsigned long dwApt;
  /* 0x001c */ long __PADDING__[1];
}; /* size: 0x0020 */

