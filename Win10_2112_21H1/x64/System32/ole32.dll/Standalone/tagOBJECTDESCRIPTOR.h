typedef struct _GUID
{
  /* 0x0000 */ unsigned long Data1;
  /* 0x0004 */ unsigned short Data2;
  /* 0x0006 */ unsigned short Data3;
  /* 0x0008 */ unsigned char Data4[8];
} GUID, *PGUID; /* size: 0x0010 */

struct tagSIZE
{
  /* 0x0000 */ long cx;
  /* 0x0004 */ long cy;
}; /* size: 0x0008 */

typedef struct _POINTL
{
  /* 0x0000 */ long x;
  /* 0x0004 */ long y;
} POINTL, *PPOINTL; /* size: 0x0008 */

struct tagOBJECTDESCRIPTOR
{
  /* 0x0000 */ unsigned long cbSize;
  /* 0x0004 */ struct _GUID clsid;
  /* 0x0014 */ unsigned long dwDrawAspect;
  /* 0x0018 */ struct tagSIZE sizel;
  /* 0x0020 */ struct _POINTL pointl;
  /* 0x0028 */ unsigned long dwStatus;
  /* 0x002c */ unsigned long dwFullUserTypeName;
  /* 0x0030 */ unsigned long dwSrcOfCopy;
}; /* size: 0x0034 */

