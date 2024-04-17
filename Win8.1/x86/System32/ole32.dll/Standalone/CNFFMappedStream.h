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

