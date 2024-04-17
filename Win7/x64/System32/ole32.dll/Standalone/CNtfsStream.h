class CNFFMappedStream
{
  /* 0x0008 */ class CNtfsStream* _pnffstm;
  struct /* bitfield */
  {
    /* 0x0010 */ int _fReserved : 1; /* bit position: 0 */
    /* 0x0010 */ int _fMappedStreamDirty : 1; /* bit position: 1 */
    /* 0x0010 */ int _fUpdateStreamHasLatest : 1; /* bit position: 2 */
    /* 0x0010 */ int _fCheckedForRollForward : 1; /* bit position: 3 */
    /* 0x0010 */ int _fStreamRenameSupported : 1; /* bit position: 4 */
  }; /* bitfield */
  /* 0x0018 */ unsigned char* _pbMappedStream;
  /* 0x0020 */ unsigned long _cbMappedStream;
  /* 0x0024 */ unsigned long _cbMappedStreamActual;
  /* 0x0028 */ void* _pMappedStreamOwner;
  /* 0x0030 */ unsigned short _cUpdateStreamInUse;
  /* 0x0032 */ unsigned short _cLatestStreamInUse;
  /* 0x0038 */ class CNtfsUpdateStreamForPropStg* _pstmUpdate;
}; /* size: 0x0040 */

class TXLargeIntegerWrapper<_LARGE_INTEGER,long,__int64>
{
  union
  {
    struct
    {
      /* 0x0000 */ unsigned long LowPart;
      /* 0x0004 */ long HighPart;
    }; /* size: 0x0008 */
    /* 0x0000 */ __int64 QuadPart;
  }; /* size: 0x0008 */
}; /* size: 0x0008 */

typedef struct _OVERLAPPED
{
  /* 0x0000 */ unsigned __int64 Internal;
  /* 0x0008 */ unsigned __int64 InternalHigh;
  union
  {
    struct
    {
      /* 0x0010 */ unsigned long Offset;
      /* 0x0014 */ unsigned long OffsetHigh;
    }; /* size: 0x0008 */
    /* 0x0010 */ void* Pointer;
  }; /* size: 0x0008 */
  /* 0x0018 */ void* hEvent;
} OVERLAPPED, *POVERLAPPED; /* size: 0x0020 */

class CNtfsStream
{
  /* 0x0010 */ wchar_t* _pwcsName;
  /* 0x0018 */ class CNFFMappedStream _nffMappedStream;
  /* 0x0058 */ unsigned long _grfMode;
  /* 0x0060 */ void* _hFile;
  /* 0x0068 */ struct IBlockingLock* _pBlockingLock;
  /* 0x0070 */ unsigned long _sig;
  /* 0x0074 */ long _cRefs;
  /* 0x0078 */ class CNtfsStorage* _pnffstg;
  /* 0x0080 */ class TXLargeIntegerWrapper<_LARGE_INTEGER,long,__int64> _liCurrentSeekPosition;
  /* 0x0088 */ class CNtfsStream* _pnffstmPrev;
  /* 0x0090 */ class CNtfsStream* _pnffstmNext;
  /* 0x0098 */ struct _OVERLAPPED _ovlp;
}; /* size: 0x00b8 */

