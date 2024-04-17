struct tagCOMVERSION
{
  /* 0x0000 */ unsigned short MajorVersion;
  /* 0x0002 */ unsigned short MinorVersion;
}; /* size: 0x0004 */

typedef struct _GUID
{
  /* 0x0000 */ unsigned long Data1;
  /* 0x0004 */ unsigned short Data2;
  /* 0x0006 */ unsigned short Data3;
  /* 0x0008 */ unsigned char Data4[8];
} GUID, *PGUID; /* size: 0x0010 */

struct tagORPCTHIS
{
  /* 0x0000 */ struct tagCOMVERSION version;
  /* 0x0004 */ unsigned long flags;
  /* 0x0008 */ unsigned long reserved1;
  /* 0x000c */ struct _GUID cid;
  /* 0x0020 */ struct tagORPC_EXTENT_ARRAY* extensions;
}; /* size: 0x0028 */

