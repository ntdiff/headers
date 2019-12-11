typedef struct _NETIO_NET_BUFFER_LIST_CONTEXT
{
  /* 0x0000 */ long ReferenceCount;
  /* 0x0004 */ struct _NET_BUFFER_LIST* Parent;
  /* 0x0008 */ void* CompletionRoutine /* function */;
  /* 0x000c */ void* CompletionContext;
} NETIO_NET_BUFFER_LIST_CONTEXT, *PNETIO_NET_BUFFER_LIST_CONTEXT; /* size: 0x0010 */

