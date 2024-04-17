struct tagBLOB
{
  /* 0x0000 */ unsigned long cbSize;
  /* 0x0008 */ unsigned char* pBlobData;
}; /* size: 0x0010 */

class CallFrame
{
  /* 0x0010 */ struct MD_METHOD* m_pmd;
  /* 0x0018 */ void* m_pvArgs;
  /* 0x0020 */ int m_fIsCopy;
  /* 0x0024 */ int m_fIsUnmarshal;
  /* 0x0028 */ __int64 m_hrReturnValue;
  /* 0x0030 */ void* m_pvMemCur;
  /* 0x0038 */ void* m_pvArgsSrc;
  /* 0x0040 */ class Interceptor* m_pInterceptor;
  /* 0x0048 */ int m_fPropogatingOutParam;
  /* 0x004c */ int m_fWorkingOnInParam;
  /* 0x0050 */ int m_fWorkingOnOutParam;
  /* 0x0058 */ class CallFrame* m_pAllocatorFrame;
  /* 0x0060 */ struct ICallFrameWalker* m_pWalkerCopy;
  /* 0x0068 */ struct ICallFrameWalker* m_pWalkerFree;
  /* 0x0070 */ struct ICallFrameWalker* m_pWalkerWalk;
  /* 0x0078 */ unsigned char* m_StackTop;
  /* 0x0080 */ unsigned char* m_Memory;
  /* 0x0088 */ unsigned __int64 m_MaxCount;
  /* 0x0090 */ unsigned __int64 m_Offset;
  /* 0x0098 */ unsigned __int64 m_ActualCount;
  /* 0x00a0 */ struct ARRAY_INFO* m_pArrayInfo;
  /* 0x00a8 */ long m_refs;
  /* 0x00ac */ unsigned char m_pvMem[256];
  /* 0x01ac */ int m_fCanUseBuffer;
  /* 0x01b0 */ struct tagBLOB m_blobBuffer;
  /* 0x01c0 */ int m_fWeOwnBlobBuffer;
}; /* size: 0x01c8 */

