class MINICOMPUTE_QUEUE_CONTEXT
{
  /* 0x0000 */ class MINICOMPUTE_QUEUE_CONTEXT* pNext;
  /* 0x0008 */ class NDR_MINICOMPUTE_QUEUE_ELEMENT* pHead;
  /* 0x0010 */ class NDR_MINICOMPUTE_QUEUE_ELEMENT* pTail;
  /* 0x0018 */ class NDR_MINICOMPUTE_QUEUE_ELEMENT* pConfStruct;
  /* 0x0020 */ int IsConfStructValid;
}; /* size: 0x0028 */

