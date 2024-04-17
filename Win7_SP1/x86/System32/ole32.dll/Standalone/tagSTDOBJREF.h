typedef struct _GUID
{
  /* 0x0000 */ unsigned long Data1;
  /* 0x0004 */ unsigned short Data2;
  /* 0x0006 */ unsigned short Data3;
  /* 0x0008 */ unsigned char Data4[8];
} GUID, *PGUID; /* size: 0x0010 */

struct tagSTDOBJREF
{
  /* 0x0000 */ unsigned long flags;
  /* 0x0004 */ unsigned long cPublicRefs;
  /* 0x0008 */ unsigned __int64 oxid;
  /* 0x0010 */ unsigned __int64 oid;
  /* 0x0018 */ struct _GUID ipid;
}; /* size: 0x0028 */

