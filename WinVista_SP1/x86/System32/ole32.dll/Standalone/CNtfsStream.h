class CNFFMappedStream
{
  /* 0x0004 */ class CNtfsStream* _pnffstm;
  struct /* bitfield */
  {
    /* 0x0008 */ int _fReserved : 1; /* bit position: 0 */
    /* 0x0008 */ int _fMappedStreamDirty : 1; /* bit position: 1 */
    /* 0x0008 */ int _fUpdateStreamHasLatest : 1; /* bit position: 2 */
    /* 0x0008 */ int _fCheckedForRollForward : 1; /* bit position: 3 */
    /* 0x0008 */ int _fStreamRenameSupported : 1; /* bit position: 4 */
  }; /* bitfield */
  /* 0x000c */ unsigned char* _pbMappedStream;
  /* 0x0010 */ unsigned long _cbMappedStream;
  /* 0x0014 */ unsigned long _cbMappedStreamActual;
  /* 0x0018 */ void* _pMappedStreamOwner;
  /* 0x001c */ unsigned short _cUpdateStreamInUse;
  /* 0x001e */ unsigned short _cLatestStreamInUse;
  /* 0x0020 */ class CNtfsUpdateStreamForPropStg* _pstmUpdate;
}; /* size: 0x0024 */

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
  /* 0x0000 */ unsigned long Internal;
  /* 0x0004 */ unsigned long InternalHigh;
  union
  {
    struct
    {
      /* 0x0008 */ unsigned long Offset;
      /* 0x000c */ unsigned long OffsetHigh;
    }; /* size: 0x0008 */
    /* 0x0008 */ void* Pointer;
  }; /* size: 0x0008 */
  /* 0x0010 */ void* hEvent;
} OVERLAPPED, *POVERLAPPED; /* size: 0x0014 */

class CNtfsStream
{
  /* 0x0008 */ wchar_t* _pwcsName;
  /* 0x000c */ class CNFFMappedStream _nffMappedStream;
  /* 0x0030 */ unsigned long _grfMode;
  /* 0x0034 */ void* _hFile;
  /* 0x0038 */ struct IBlockingLock* _pBlockingLock;
  /* 0x003c */ unsigned long _sig;
  /* 0x0040 */ long _cRefs;
  /* 0x0044 */ class CNtfsStorage* _pnffstg;
  /* 0x0048 */ class TXLargeIntegerWrapper<_LARGE_INTEGER,long,__int64> _liCurrentSeekPosition;
  /* 0x0050 */ class CNtfsStream* _pnffstmPrev;
  /* 0x0054 */ class CNtfsStream* _pnffstmNext;
  /* 0x0058 */ struct _OVERLAPPED _ovlp;
}; /* size: 0x0070 */

