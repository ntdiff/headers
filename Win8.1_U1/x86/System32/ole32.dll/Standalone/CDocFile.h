class CBasedUpdatePtr
{
  /* 0x0000 */ unsigned long _p;
}; /* size: 0x0004 */

class CUpdateList
{
  /* 0x0000 */ class CBasedUpdatePtr _pudHead;
  /* 0x0004 */ class CBasedUpdatePtr _pudTail;
}; /* size: 0x0008 */

class CStgHandle
{
}; /* size: 0x0008 */

class CBasedDFBasisPtr
{
  /* 0x0000 */ unsigned long _p;
}; /* size: 0x0004 */

class CDocFile
{
  /* 0x000c */ class CUpdateList _ulChangedHolder;
  /* 0x0014 */ class CStgHandle _stgh;
  /* 0x001c */ const class CBasedDFBasisPtr _pdfb;
}; /* size: 0x0020 */

