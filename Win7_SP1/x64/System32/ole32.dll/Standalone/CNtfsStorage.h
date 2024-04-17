class CNtfsStorageForPropSetStg
{
  /* 0x0008 */ class CNtfsStorage* _pNtfsStorage;
}; /* size: 0x0010 */

typedef struct _GUID
{
  /* 0x0000 */ unsigned long Data1;
  /* 0x0004 */ unsigned short Data2;
  /* 0x0006 */ unsigned short Data3;
  /* 0x0008 */ unsigned char Data4[8];
} GUID, *PGUID; /* size: 0x0010 */

class CPropertyBagEx
{
  /* 0x0010 */ int _fLcidInitialized : 1; /* bit position: 0 */
  /* 0x0014 */ unsigned long _lcid;
  /* 0x0018 */ struct IPropertySetStorage* _ppropsetstgContainer;
  /* 0x0020 */ struct IPropertyStorage* _ppropstg;
  /* 0x0028 */ struct IBlockingLock* _pBlockingLock;
  /* 0x0030 */ unsigned long _grfMode;
  /* 0x0034 */ long _cRefs;
}; /* size: 0x0038 */

typedef struct _FILETIME
{
  /* 0x0000 */ unsigned long dwLowDateTime;
  /* 0x0004 */ unsigned long dwHighDateTime;
} FILETIME, *PFILETIME; /* size: 0x0008 */

class CNtfsStorage
{
  /* 0x0038 */ unsigned long _sig;
  /* 0x0040 */ class CNFFTreeMutex* _pTreeMutex;
  /* 0x0048 */ unsigned long _grfMode;
  /* 0x004c */ wchar_t _wcDriveLetter;
  /* 0x0050 */ class CNtfsStorageForPropSetStg _NtfsStorageForPropSetStg;
  /* 0x0060 */ class CNtfsStream* _pstmOpenList;
  /* 0x0068 */ void* _hFileMainStream;
  /* 0x0070 */ void* _hFileControlStream;
  /* 0x0078 */ unsigned short _hsmStatus;
  /* 0x007c */ unsigned long _dwStgStateBits;
  /* 0x0080 */ struct _GUID _clsidStgClass;
  /* 0x0090 */ class CPropertyBagEx _PropertyBagEx;
  /* 0x00c8 */ unsigned long _dwState;
  /* 0x00cc */ struct _FILETIME _filetime;
}; /* size: 0x00d8 */

