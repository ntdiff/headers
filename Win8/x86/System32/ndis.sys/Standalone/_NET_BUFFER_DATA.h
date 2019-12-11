typedef struct _NET_BUFFER_DATA
{
  /* 0x0000 */ struct _NET_BUFFER* Next;
  /* 0x0004 */ struct _MDL* CurrentMdl;
  /* 0x0008 */ unsigned long CurrentMdlOffset;
  union
  {
    /* 0x000c */ unsigned long DataLength;
    /* 0x000c */ unsigned long stDataLength;
  }; /* size: 0x0004 */
  /* 0x0010 */ struct _MDL* MdlChain;
  /* 0x0014 */ unsigned long DataOffset;
} NET_BUFFER_DATA, *PNET_BUFFER_DATA; /* size: 0x0018 */

