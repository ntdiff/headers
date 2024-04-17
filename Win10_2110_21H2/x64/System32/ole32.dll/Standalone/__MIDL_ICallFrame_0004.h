typedef struct _GUID
{
  /* 0x0000 */ unsigned long Data1;
  /* 0x0004 */ unsigned short Data2;
  /* 0x0006 */ unsigned short Data3;
  /* 0x0008 */ unsigned char Data4[8];
} GUID, *PGUID; /* size: 0x0010 */

typedef struct __MIDL_ICallFrame_0004
{
  /* 0x0000 */ unsigned char fIn;
  /* 0x0004 */ unsigned long dwDestContext;
  /* 0x0008 */ void* pvDestContext;
  /* 0x0010 */ struct IUnknown* punkReserved;
  /* 0x0018 */ struct _GUID guidTransferSyntax;
} _MIDL_ICallFrame_0004, *P_MIDL_ICallFrame_0004; /* size: 0x0028 */

