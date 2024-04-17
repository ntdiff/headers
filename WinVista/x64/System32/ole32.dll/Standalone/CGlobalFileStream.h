class CGlobalFileStream
{
  /* 0x0010 */ unsigned long _df;
  /* 0x0014 */ unsigned long _dwStartFlags;
  /* 0x0018 */ struct IMalloc* const _pMalloc;
  /* 0x0020 */ unsigned __int64 _ulPos;
  /* 0x0028 */ unsigned long _cbSector;
  /* 0x002c */ unsigned long _cbMappedFileSize;
  /* 0x0030 */ unsigned long _cbMappedCommitSize;
  /* 0x0034 */ unsigned long _dwMapFlags;
  /* 0x0038 */ wchar_t _awcPath[261];
  /* 0x0244 */ unsigned long _dwTerminate;
  /* 0x0248 */ unsigned __int64 _ulHighWater;
  /* 0x0250 */ unsigned __int64 _ulFailurePoint;
}; /* size: 0x0258 */

