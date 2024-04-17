class CBasedPubDocFilePtr
{
  /* 0x0000 */ unsigned long _p;
}; /* size: 0x0004 */

class CBasedPubStreamPtr
{
  /* 0x0000 */ unsigned long _p;
}; /* size: 0x0004 */

class CBasedSeekPointerPtr
{
  /* 0x0000 */ unsigned long _p;
}; /* size: 0x0004 */

class CBasedMarshalListPtr
{
  /* 0x0000 */ unsigned long _p;
}; /* size: 0x0004 */

class CBasedDFBasisPtr
{
  /* 0x0000 */ unsigned long _p;
}; /* size: 0x0004 */

class CBasedGlobalContextPtr
{
  /* 0x0000 */ unsigned long _p;
}; /* size: 0x0004 */

class CBasedGlobalFileStreamPtr
{
  /* 0x0000 */ unsigned long _p;
}; /* size: 0x0004 */

struct SDfMarshalPacket
{
  /* 0x0000 */ class CBasedPubDocFilePtr pdf;
  /* 0x0004 */ class CBasedPubStreamPtr pst;
  /* 0x0008 */ class CBasedSeekPointerPtr psp;
  /* 0x000c */ class CBasedMarshalListPtr pml;
  /* 0x0010 */ class CBasedDFBasisPtr pdfb;
  /* 0x0014 */ class CBasedGlobalContextPtr pgc;
  /* 0x0018 */ class CBasedGlobalFileStreamPtr fsBase;
  /* 0x001c */ class CBasedGlobalFileStreamPtr fsDirty;
  /* 0x0020 */ class CBasedGlobalFileStreamPtr fsOriginal;
  /* 0x0024 */ unsigned long ulHeapName;
  /* 0x0028 */ unsigned long cntxid;
  /* 0x002c */ class CPerContext* ppc;
  /* 0x0030 */ void* hMem;
}; /* size: 0x0034 */

