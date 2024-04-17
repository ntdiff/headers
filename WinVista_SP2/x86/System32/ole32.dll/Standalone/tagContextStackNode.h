struct tagContextStackNode
{
  /* 0x0000 */ struct tagContextStackNode* pNext;
  /* 0x0004 */ class CObjectContext* pSavedContext;
  /* 0x0008 */ class CObjectContext* pServerContext;
  /* 0x000c */ class CCtxCall* pClientCall;
  /* 0x0010 */ class CCtxCall* pServerCall;
  /* 0x0014 */ class CPolicySet* pPS;
}; /* size: 0x0018 */

