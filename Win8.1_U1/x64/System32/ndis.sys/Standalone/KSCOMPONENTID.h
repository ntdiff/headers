typedef struct _GUID
{
  /* 0x0000 */ unsigned long Data1;
  /* 0x0004 */ unsigned short Data2;
  /* 0x0006 */ unsigned short Data3;
  /* 0x0008 */ unsigned char Data4[8];
} GUID, *PGUID; /* size: 0x0010 */

struct KSCOMPONENTID
{
  /* 0x0000 */ struct _GUID Manufacturer;
  /* 0x0010 */ struct _GUID Product;
  /* 0x0020 */ struct _GUID Component;
  /* 0x0030 */ struct _GUID Name;
  /* 0x0040 */ unsigned long Version;
  /* 0x0044 */ unsigned long Revision;
}; /* size: 0x0048 */

