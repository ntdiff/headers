struct tagBLOB
{
  /* 0x0000 */ unsigned long cbSize;
  /* 0x0004 */ unsigned char* pBlobData;
}; /* size: 0x0008 */

class CallFrame
{
  /* 0x000c */ struct MD_METHOD* m_pmd;
  /* 0x0010 */ void* m_pvArgs;
  /* 0x0014 */ int m_fIsCopy;
  /* 0x0018 */ int m_fIsUnmarshal;
  /* 0x001c */ int m_hrReturnValue;
  /* 0x0020 */ void* m_pvMemCur;
  /* 0x0024 */ void* m_pvArgsSrc;
  /* 0x0028 */ class Interceptor* m_pInterceptor;
  /* 0x002c */ int m_fPropogatingOutParam;
  /* 0x0030 */ int m_fWorkingOnInParam;
  /* 0x0034 */ int m_fWorkingOnOutParam;
  /* 0x0038 */ class CallFrame* m_pAllocatorFrame;
  /* 0x003c */ struct ICallFrameWalker* m_pWalkerCopy;
  /* 0x0040 */ struct ICallFrameWalker* m_pWalkerFree;
  /* 0x0044 */ struct ICallFrameWalker* m_pWalkerWalk;
  /* 0x0048 */ unsigned char* m_StackTop;
  /* 0x004c */ unsigned char* m_Memory;
  /* 0x0050 */ unsigned long m_MaxCount;
  /* 0x0054 */ unsigned long m_Offset;
  /* 0x0058 */ unsigned long m_ActualCount;
  /* 0x005c */ struct ARRAY_INFO* m_pArrayInfo;
  /* 0x0060 */ long m_refs;
  /* 0x0064 */ unsigned char m_pvMem[256];
  /* 0x0164 */ int m_fCanUseBuffer;
  /* 0x0168 */ struct tagBLOB m_blobBuffer;
  /* 0x0170 */ int m_fWeOwnBlobBuffer;
}; /* size: 0x0174 */

