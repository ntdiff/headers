typedef struct _NET_BUFFER_DATA
{
  /* 0x0000 */ struct _NET_BUFFER* Next;
  /* 0x0008 */ struct _MDL* CurrentMdl;
  /* 0x0010 */ unsigned long CurrentMdlOffset;
  union
  {
    /* 0x0018 */ unsigned long DataLength;
    /* 0x0018 */ unsigned __int64 stDataLength;
  }; /* size: 0x0008 */
  /* 0x0020 */ struct _MDL* MdlChain;
  /* 0x0028 */ unsigned long DataOffset;
  /* 0x002c */ long __PADDING__[1];
} NET_BUFFER_DATA, *PNET_BUFFER_DATA; /* size: 0x0030 */

