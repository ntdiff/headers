typedef struct _GUID
{
  /* 0x0000 */ unsigned long Data1;
  /* 0x0004 */ unsigned short Data2;
  /* 0x0006 */ unsigned short Data3;
  /* 0x0008 */ unsigned char Data4[8];
} GUID, *PGUID; /* size: 0x0010 */

struct ANON_OBJECT_HEADER
{
  /* 0x0000 */ unsigned short Sig1;
  /* 0x0002 */ unsigned short Sig2;
  /* 0x0004 */ unsigned short Version;
  /* 0x0006 */ unsigned short Machine;
  /* 0x0008 */ unsigned long TimeDateStamp;
  /* 0x000c */ struct _GUID ClassID;
  /* 0x001c */ unsigned long SizeOfData;
}; /* size: 0x0020 */

