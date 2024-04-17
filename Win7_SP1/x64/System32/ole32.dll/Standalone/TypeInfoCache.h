typedef struct _GUID
{
  /* 0x0000 */ unsigned long Data1;
  /* 0x0004 */ unsigned short Data2;
  /* 0x0006 */ unsigned short Data3;
  /* 0x0008 */ unsigned char Data4[8];
} GUID, *PGUID; /* size: 0x0010 */

struct TypeInfoCache
{
  /* 0x0000 */ struct _GUID iid;
  /* 0x0010 */ struct TypeInfoVtbl* pVtbl;
  /* 0x0018 */ unsigned long dwTickCount;
  /* 0x001c */ long __PADDING__[1];
}; /* size: 0x0020 */

