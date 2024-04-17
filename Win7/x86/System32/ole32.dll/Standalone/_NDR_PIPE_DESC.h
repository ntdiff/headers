typedef struct _PIPEDESC_FLAGS
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned short AuxOutBufferAllocated : 1; /* bit position: 0 */
    /* 0x0000 */ unsigned short NoBufferCallPending : 1; /* bit position: 1 */
    /* 0x0000 */ unsigned short Reserved : 1; /* bit position: 2 */
    /* 0x0000 */ unsigned short NoMoreBuffersToRead : 1; /* bit position: 3 */
    /* 0x0000 */ unsigned short LastPipeSend : 1; /* bit position: 4 */
    /* 0x0000 */ unsigned short InPipePush : 1; /* bit position: 5 */
  }; /* bitfield */
} PIPEDESC_FLAGS, *PPIPEDESC_FLAGS; /* size: 0x0002 */

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

typedef struct _NDR_PIPE_DESC
{
  /* 0x0000 */ struct _NDR_PIPE_MESSAGE* pPipeMsg;
  /* 0x0004 */ short CurrentPipe;
  /* 0x0006 */ short PrevPipe;
  /* 0x0008 */ short InPipes;
  /* 0x000a */ short OutPipes;
  /* 0x000c */ short TotalPipes;
  /* 0x000e */ short PipeVersion;
  /* 0x0010 */ struct _PIPEDESC_FLAGS Flags;
  /* 0x0014 */ unsigned long PipeException;
  /* 0x0018 */ unsigned char* DispatchBuffer;
  /* 0x001c */ unsigned long DispatchBufferLength;
  /* 0x0020 */ unsigned long LastPartialSize;
  /* 0x0024 */ unsigned char Leftover[8];
  /* 0x002c */ unsigned long LeftoverSize;
  /* 0x0030 */ unsigned char* BufferSave;
  /* 0x0034 */ unsigned long LengthSave;
  /* 0x0038 */ struct NDR_PIPE_STATE RuntimeState;
  /* 0x007c */ void* ChainingBuffer;
  /* 0x0080 */ unsigned long ChainingBufferSize;
  /* 0x0084 */ class NDR_PIPE_HELPER* pPipeHelper;
  /* 0x0088 */ struct _NDR_ALLOCA_CONTEXT* pAllocContext;
} NDR_PIPE_DESC, *PNDR_PIPE_DESC; /* size: 0x008c */

