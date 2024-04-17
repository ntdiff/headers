typedef struct _GUID
{
  /* 0x0000 */ unsigned long Data1;
  /* 0x0004 */ unsigned short Data2;
  /* 0x0006 */ unsigned short Data3;
  /* 0x0008 */ unsigned char Data4[8];
} GUID, *PGUID; /* size: 0x0010 */

class CPipeProxyImp
{
  /* 0x0008 */ long m_cRef;
  /* 0x0010 */ struct IUnknown* m_pUnkOuter;
  /* 0x0018 */ struct IUnknown* m_pRealPipeProxy;
  /* 0x0020 */ struct IUnknown* m_pInternalPipeProxy;
  /* 0x0028 */ struct IRpcProxyBuffer* m_pInternalPB;
  /* 0x0030 */ struct _GUID m_IidOfPipe;
}; /* size: 0x0040 */

