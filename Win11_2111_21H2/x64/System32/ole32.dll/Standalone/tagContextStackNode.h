struct tagContextStackNode
{
  /* 0x0000 */ struct tagContextStackNode* pNext;
  /* 0x0008 */ class CObjectContext* pSavedContext;
  /* 0x0010 */ class CObjectContext* pServerContext;
  /* 0x0018 */ class CCtxCall* pClientCall;
  /* 0x0020 */ class CCtxCall* pServerCall;
  /* 0x0028 */ class CPolicySet* pPS;
}; /* size: 0x0030 */

