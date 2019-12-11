typedef struct _NETIO_NET_BUFFER_CONTEXT
{
  /* 0x0000 */ unsigned long OriginalDataOffset;
  /* 0x0004 */ unsigned long OriginalDataLength;
  /* 0x0008 */ unsigned long TruncatedLength;
  union
  {
    /* 0x000c */ unsigned long Flags;
    /* 0x000c */ unsigned long EcnField : 2; /* bit position: 0 */
  }; /* size: 0x0004 */
  /* 0x0010 */ void* Scratch[2];
} NETIO_NET_BUFFER_CONTEXT, *PNETIO_NET_BUFFER_CONTEXT; /* size: 0x0018 */

