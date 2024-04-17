class CBasedPubDocFilePtr
{
  /* 0x0000 */ unsigned __int64 _p;
}; /* size: 0x0008 */

class CBasedPubStreamPtr
{
  /* 0x0000 */ unsigned __int64 _p;
}; /* size: 0x0008 */

class CBasedSeekPointerPtr
{
  /* 0x0000 */ unsigned __int64 _p;
}; /* size: 0x0008 */

class CBasedMarshalListPtr
{
  /* 0x0000 */ unsigned __int64 _p;
}; /* size: 0x0008 */

class CBasedDFBasisPtr
{
  /* 0x0000 */ unsigned __int64 _p;
}; /* size: 0x0008 */

class CBasedGlobalContextPtr
{
  /* 0x0000 */ unsigned __int64 _p;
}; /* size: 0x0008 */

class CBasedGlobalFileStreamPtr
{
  /* 0x0000 */ unsigned __int64 _p;
}; /* size: 0x0008 */

typedef struct _GUID
{
  /* 0x0000 */ unsigned long Data1;
  /* 0x0004 */ unsigned short Data2;
  /* 0x0006 */ unsigned short Data3;
  /* 0x0008 */ unsigned char Data4[8];
} GUID, *PGUID; /* size: 0x0010 */

struct SDfMarshalPacket
{
  /* 0x0000 */ class CBasedPubDocFilePtr pdf;
  /* 0x0008 */ class CBasedPubStreamPtr pst;
  /* 0x0010 */ class CBasedSeekPointerPtr psp;
  /* 0x0018 */ class CBasedMarshalListPtr pml;
  /* 0x0020 */ class CBasedDFBasisPtr pdfb;
  /* 0x0028 */ class CBasedGlobalContextPtr pgc;
  /* 0x0030 */ class CBasedGlobalFileStreamPtr fsBase;
  /* 0x0038 */ class CBasedGlobalFileStreamPtr fsDirty;
  /* 0x0040 */ class CBasedGlobalFileStreamPtr fsOriginal;
  /* 0x0048 */ unsigned long ulHeapName;
  /* 0x004c */ unsigned long cntxid;
  /* 0x0050 */ struct _GUID cntxkey;
  /* 0x0060 */ class CPerContext* ppc;
  /* 0x0068 */ void* hMem;
}; /* size: 0x0070 */

