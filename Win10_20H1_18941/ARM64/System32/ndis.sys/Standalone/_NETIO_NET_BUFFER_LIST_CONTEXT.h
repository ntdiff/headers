typedef struct _NETIO_NET_BUFFER_LIST_CONTEXT
{
  /* 0x0000 */ long ReferenceCount;
  /* 0x0008 */ struct _NET_BUFFER_LIST* Parent;
  /* 0x0010 */ void* CompletionRoutine /* function */;
  /* 0x0018 */ void* CompletionContext;
} NETIO_NET_BUFFER_LIST_CONTEXT, *PNETIO_NET_BUFFER_LIST_CONTEXT; /* size: 0x0020 */

