typedef struct _NET_BUFFER_LIST_DATA
{
  /* 0x0000 */ struct _NET_BUFFER_LIST* Next;
  /* 0x0008 */ struct _NET_BUFFER* FirstNetBuffer;
} NET_BUFFER_LIST_DATA, *PNET_BUFFER_LIST_DATA; /* size: 0x0010 */

