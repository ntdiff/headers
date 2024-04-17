typedef struct _GUID
{
  /* 0x0000 */ unsigned long Data1;
  /* 0x0004 */ unsigned short Data2;
  /* 0x0006 */ unsigned short Data3;
  /* 0x0008 */ unsigned char Data4[8];
} GUID, *PGUID; /* size: 0x0010 */

struct tagPROPERTYSETHEADER
{
  /* 0x0000 */ unsigned short wByteOrder;
  /* 0x0002 */ unsigned short wFormat;
  /* 0x0004 */ unsigned long dwOSVer;
  /* 0x0008 */ struct _GUID clsid;
  /* 0x0018 */ unsigned long reserved;
}; /* size: 0x001c */

