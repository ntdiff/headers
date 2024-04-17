class CNtfsStorageForPropSetStg
{
  /* 0x0004 */ class CNtfsStorage* _pNtfsStorage;
}; /* size: 0x0008 */

typedef struct _GUID
{
  /* 0x0000 */ unsigned long Data1;
  /* 0x0004 */ unsigned short Data2;
  /* 0x0006 */ unsigned short Data3;
  /* 0x0008 */ unsigned char Data4[8];
} GUID, *PGUID; /* size: 0x0010 */

class CPropertyBagEx
{
  /* 0x0008 */ int _fLcidInitialized : 1; /* bit position: 0 */
  /* 0x000c */ unsigned long _lcid;
  /* 0x0010 */ struct IPropertySetStorage* _ppropsetstgContainer;
  /* 0x0014 */ struct IPropertyStorage* _ppropstg;
  /* 0x0018 */ struct IBlockingLock* _pBlockingLock;
  /* 0x001c */ unsigned long _grfMode;
  /* 0x0020 */ long _cRefs;
}; /* size: 0x0024 */

typedef struct _FILETIME
{
  /* 0x0000 */ unsigned long dwLowDateTime;
  /* 0x0004 */ unsigned long dwHighDateTime;
} FILETIME, *PFILETIME; /* size: 0x0008 */

class CNtfsStorage
{
  /* 0x0024 */ unsigned long _sig;
  /* 0x0028 */ class CNFFTreeMutex* _pTreeMutex;
  /* 0x002c */ unsigned long _grfMode;
  /* 0x0030 */ wchar_t _wcDriveLetter;
  /* 0x0034 */ class CNtfsStorageForPropSetStg _NtfsStorageForPropSetStg;
  /* 0x003c */ class CNtfsStream* _pstmOpenList;
  /* 0x0040 */ void* _hFileMainStream;
  /* 0x0044 */ void* _hFileControlStream;
  /* 0x0048 */ unsigned short _hsmStatus;
  /* 0x004c */ unsigned long _dwStgStateBits;
  /* 0x0050 */ struct _GUID _clsidStgClass;
  /* 0x0060 */ class CPropertyBagEx _PropertyBagEx;
  /* 0x0084 */ unsigned long _dwState;
  /* 0x0088 */ struct _FILETIME _filetime;
}; /* size: 0x0090 */

