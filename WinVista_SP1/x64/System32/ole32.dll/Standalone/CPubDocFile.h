class CBasedTSetMemberPtr
{
  /* 0x0000 */ unsigned __int64 _p;
}; /* size: 0x0008 */

class CTSSet
{
  /* 0x0000 */ class CBasedTSetMemberPtr _ptsmHead;
}; /* size: 0x0008 */

class CBasedPubDocFilePtr
{
  /* 0x0000 */ unsigned __int64 _p;
}; /* size: 0x0008 */

class CBasedDocFilePtr
{
  /* 0x0000 */ unsigned __int64 _p;
}; /* size: 0x0008 */

class CBasedRevertablePtr
{
  /* 0x0000 */ unsigned __int64 _p;
}; /* size: 0x0008 */

class CChildInstanceList
{
  /* 0x0000 */ class CBasedRevertablePtr _prvHead;
}; /* size: 0x0008 */

class CBasedMStreamPtr
{
  /* 0x0000 */ unsigned __int64 _p;
}; /* size: 0x0008 */

class CBasedDFBasisPtr
{
  /* 0x0000 */ unsigned __int64 _p;
}; /* size: 0x0008 */

class CPubDocFile
{
  /* 0x0058 */ class CTSSet _tss;
  /* 0x0060 */ class CBasedPubDocFilePtr _pdfParent;
  /* 0x0068 */ class CBasedDocFilePtr _pdf;
  /* 0x0070 */ class CChildInstanceList _cilChildren;
  /* 0x0078 */ unsigned short _cTransactedDepth;
  /* 0x007a */ unsigned short _wFlags;
  /* 0x0080 */ class CBasedMStreamPtr _pmsBase;
  /* 0x0088 */ unsigned long _sigMSF;
  /* 0x008c */ long _cReferences;
  /* 0x0090 */ class CBasedDFBasisPtr _pdfb;
}; /* size: 0x0098 */

