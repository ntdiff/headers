struct NDR_PIPE_STATE
{
  /* 0x0000 */ int CurrentState;
  /* 0x0004 */ int TotalElemsCount;
  /* 0x0008 */ int OrigElemsInChunk;
  /* 0x000c */ int ElemsInChunk;
  /* 0x0010 */ int ElemAlign;
  /* 0x0014 */ int ElemWireSize;
  /* 0x0018 */ int ElemMemSize;
  /* 0x001c */ int PartialBufferSize;
  /* 0x0020 */ unsigned char* PartialElem;
  /* 0x0024 */ int PartialElemSize;
  /* 0x0028 */ int PartialOffset;
  struct /* bitfield */
  {
    /* 0x002c */ int EndOfPipe : 1; /* bit position: 0 */
    /* 0x002c */ int EndOfPipePending : 1; /* bit position: 1 */
  }; /* bitfield */
  /* 0x0030 */ int LowChunkLimit;
  /* 0x0034 */ int HighChunkLimit;
  /* 0x0038 */ int fBlockCopy;
  /* 0x003c */ int ElemPad;
  /* 0x0040 */ const unsigned char* TypeFormat;
}; /* size: 0x0044 */

