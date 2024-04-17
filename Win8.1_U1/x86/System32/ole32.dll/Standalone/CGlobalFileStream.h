class CBasedGlobalFileStreamPtr
{
  /* 0x0000 */ unsigned long _p;
}; /* size: 0x0004 */

class CGlobalFileStream
{
  /* 0x0008 */ unsigned long _df;
  /* 0x000c */ unsigned long _dwStartFlags;
  /* 0x0010 */ struct IMalloc* const _pMalloc;
  /* 0x0018 */ unsigned __int64 _ulPos;
  /* 0x0020 */ unsigned long _cbSector;
  /* 0x0024 */ unsigned long _cbMappedFileSize;
  /* 0x0028 */ unsigned long _cbMappedCommitSize;
  /* 0x002c */ unsigned long _dwMapFlags;
  /* 0x0030 */ wchar_t _awcPath[261];
  /* 0x023c */ unsigned long _dwTerminate;
  /* 0x0240 */ unsigned __int64 _ulHighWater;
  /* 0x0248 */ unsigned __int64 _ulFailurePoint;
  /* 0x0250 */ class CBasedGlobalFileStreamPtr _pTempFileSourceFileStream;
}; /* size: 0x0258 */

