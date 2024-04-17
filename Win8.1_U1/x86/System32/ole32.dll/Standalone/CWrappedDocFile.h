class CBasedDocFilePtr
{
  /* 0x0000 */ unsigned long _p;
}; /* size: 0x0004 */

class CBasedUpdatePtr
{
  /* 0x0000 */ unsigned long _p;
}; /* size: 0x0004 */

class CUpdateList
{
  /* 0x0000 */ class CBasedUpdatePtr _pudHead;
  /* 0x0004 */ class CBasedUpdatePtr _pudTail;
}; /* size: 0x0008 */

class CBasedTSetMemberPtr
{
  /* 0x0000 */ unsigned long _p;
}; /* size: 0x0004 */

class CTSSet
{
  /* 0x0000 */ class CBasedTSetMemberPtr _ptsmHead;
}; /* size: 0x0004 */

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
  /* 0x0000 */ unsigned long _p;
}; /* size: 0x0004 */

typedef struct _GUID
{
  /* 0x0000 */ unsigned long Data1;
  /* 0x0004 */ unsigned short Data2;
  /* 0x0006 */ unsigned short Data3;
  /* 0x0008 */ unsigned char Data4[8];
} GUID, *PGUID; /* size: 0x0010 */

class CBasedDFBasisPtr
{
  /* 0x0000 */ unsigned long _p;
}; /* size: 0x0004 */

class CWrappedDocFile
{
  /* 0x0064 */ unsigned long _df;
  /* 0x0068 */ class CBasedDocFilePtr _pdfBase;
  /* 0x006c */ class CUpdateList _ulChanged;
  /* 0x0074 */ class CUpdateList _ulChangedHolder;
  /* 0x007c */ class CUpdateList _ulChangedOld;
  /* 0x0084 */ class CTSSet _tssDeletedHolder;
  /* 0x0088 */ class CTransactedTimeEntry _tten;
  /* 0x00a0 */ class CBasedPubDocFilePtr _ppubdf;
  /* 0x00a4 */ struct _GUID _clsid;
  /* 0x00b4 */ unsigned long _grfStateBits;
  /* 0x00b8 */ const class CBasedDFBasisPtr _pdfb;
  /* 0x00bc */ unsigned short _fDirty;
  /* 0x00be */ unsigned char _fBeginCommit;
}; /* size: 0x00c0 */

