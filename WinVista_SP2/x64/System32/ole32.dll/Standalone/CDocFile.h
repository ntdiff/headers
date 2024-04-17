class CBasedUpdatePtr
{
  /* 0x0000 */ unsigned __int64 _p;
}; /* size: 0x0008 */

class CUpdateList
{
  /* 0x0000 */ class CBasedUpdatePtr _pudHead;
  /* 0x0008 */ class CBasedUpdatePtr _pudTail;
}; /* size: 0x0010 */

class CStgHandle
{
}; /* size: 0x0010 */

class CBasedDFBasisPtr
{
  /* 0x0000 */ unsigned __int64 _p;
}; /* size: 0x0008 */

class CDocFile
{
  /* 0x0010 */ class CUpdateList _ulChangedHolder;
  /* 0x0020 */ class CStgHandle _stgh;
  /* 0x0030 */ const class CBasedDFBasisPtr _pdfb;
}; /* size: 0x0038 */

