typedef struct _GUID
{
  /* 0x0000 */ unsigned long Data1;
  /* 0x0004 */ unsigned short Data2;
  /* 0x0006 */ unsigned short Data3;
  /* 0x0008 */ unsigned char Data4[8];
} GUID, *PGUID; /* size: 0x0010 */

struct tagCustomHeader
{
  /* 0x0000 */ unsigned long totalSize;
  /* 0x0004 */ unsigned long headerSize;
  /* 0x0008 */ unsigned long cOpaqueData;
  /* 0x000c */ unsigned long destCtx;
  /* 0x0010 */ unsigned long cIfs;
  /* 0x0014 */ struct _GUID classInfoClsid;
  /* 0x0028 */ struct _GUID* pclsid;
  /* 0x0030 */ unsigned long* pSizes;
  /* 0x0038 */ struct tagCustomOpaqueData* opaqueData;
}; /* size: 0x0040 */

