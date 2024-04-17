class CBasedTSetMemberPtr
{
  /* 0x0000 */ unsigned long _p;
}; /* size: 0x0004 */

class CTSSet
{
  /* 0x0000 */ class CBasedTSetMemberPtr _ptsmHead;
}; /* size: 0x0004 */

class CBasedPubDocFilePtr
{
  /* 0x0000 */ unsigned long _p;
}; /* size: 0x0004 */

class CBasedDocFilePtr
{
  /* 0x0000 */ unsigned long _p;
}; /* size: 0x0004 */

class CBasedRevertablePtr
{
  /* 0x0000 */ unsigned long _p;
}; /* size: 0x0004 */

class CChildInstanceList
{
  /* 0x0000 */ class CBasedRevertablePtr _prvHead;
}; /* size: 0x0004 */

class CBasedMStreamPtr
{
  /* 0x0000 */ unsigned long _p;
}; /* size: 0x0004 */

class CBasedDFBasisPtr
{
  /* 0x0000 */ unsigned long _p;
}; /* size: 0x0004 */

class CPubDocFile
{
  /* 0x0054 */ class CTSSet _tss;
  /* 0x0058 */ class CBasedPubDocFilePtr _pdfParent;
  /* 0x005c */ class CBasedDocFilePtr _pdf;
  /* 0x0060 */ class CChildInstanceList _cilChildren;
  /* 0x0064 */ unsigned short _cTransactedDepth;
  /* 0x0066 */ unsigned short _wFlags;
  /* 0x0068 */ class CBasedMStreamPtr _pmsBase;
  /* 0x006c */ unsigned long _sigMSF;
  /* 0x0070 */ long _cReferences;
  /* 0x0074 */ class CBasedDFBasisPtr _pdfb;
}; /* size: 0x0078 */

