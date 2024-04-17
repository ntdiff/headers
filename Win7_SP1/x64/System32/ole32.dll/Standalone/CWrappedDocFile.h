class CBasedDocFilePtr
{
  /* 0x0000 */ unsigned __int64 _p;
}; /* size: 0x0008 */

class CBasedUpdatePtr
{
  /* 0x0000 */ unsigned __int64 _p;
}; /* size: 0x0008 */

class CUpdateList
{
  /* 0x0000 */ class CBasedUpdatePtr _pudHead;
  /* 0x0008 */ class CBasedUpdatePtr _pudTail;
}; /* size: 0x0010 */

class CBasedTSetMemberPtr
{
  /* 0x0000 */ unsigned __int64 _p;
}; /* size: 0x0008 */

class CTSSet
{
  /* 0x0000 */ class CBasedTSetMemberPtr _ptsmHead;
}; /* size: 0x0008 */

typedef struct _FILETIME
{
  /* 0x0000 */ unsigned long dwLowDateTime;
  /* 0x0004 */ unsigned long dwHighDateTime;
} FILETIME, *PFILETIME; /* size: 0x0008 */

class CTransactedTimeEntry
{
  /* 0x0000 */ struct _FILETIME _tt[3];
}; /* size: 0x0018 */

class CBasedPubDocFilePtr
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

class CBasedDFBasisPtr
{
  /* 0x0000 */ unsigned __int64 _p;
}; /* size: 0x0008 */

class CWrappedDocFile
{
  /* 0x0070 */ unsigned long _df;
  /* 0x0078 */ class CBasedDocFilePtr _pdfBase;
  /* 0x0080 */ class CUpdateList _ulChanged;
  /* 0x0090 */ class CUpdateList _ulChangedHolder;
  /* 0x00a0 */ class CUpdateList _ulChangedOld;
  /* 0x00b0 */ class CTSSet _tssDeletedHolder;
  /* 0x00b8 */ class CTransactedTimeEntry _tten;
  /* 0x00d0 */ class CBasedPubDocFilePtr _ppubdf;
  /* 0x00d8 */ struct _GUID _clsid;
  /* 0x00e8 */ unsigned long _grfStateBits;
  /* 0x00f0 */ const class CBasedDFBasisPtr _pdfb;
  /* 0x00f8 */ unsigned short _fDirty;
  /* 0x00fa */ unsigned char _fBeginCommit;
}; /* size: 0x0100 */

