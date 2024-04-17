class NDR_POINTER_QUEUE::STORAGE
{
  /* 0x0000 */ class NDR_POINTER_QUEUE_ELEMENT* pHead;
  /* 0x0008 */ class NDR_POINTER_QUEUE_ELEMENT* pPrevHead;
  /* 0x0010 */ class NDR_POINTER_QUEUE_ELEMENT** pInsertPointer;
  /* 0x0018 */ class NDR_POINTER_QUEUE_ELEMENT** pPrevInsertPointer;
}; /* size: 0x0020 */

class NDR_POINTER_QUEUE
{
  /* 0x0000 */ struct _MIDL_STUB_MESSAGE* pStubMsg;
  /* 0x0008 */ struct NDR_POINTER_QUEUE_STATE* pQueueState;
  /* 0x0010 */ class NDR_POINTER_QUEUE::STORAGE Storage;
}; /* size: 0x0030 */

