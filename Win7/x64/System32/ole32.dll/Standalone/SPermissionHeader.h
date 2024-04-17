typedef struct _GUID
{
  /* 0x0000 */ unsigned long Data1;
  /* 0x0004 */ unsigned short Data2;
  /* 0x0006 */ unsigned short Data3;
  /* 0x0008 */ unsigned char Data4[8];
} GUID, *PGUID; /* size: 0x0010 */

struct SPermissionHeader
{
  /* 0x0000 */ unsigned short wVersion;
  /* 0x0002 */ unsigned short wPad;
  /* 0x0004 */ struct _GUID gClass;
}; /* size: 0x0014 */

