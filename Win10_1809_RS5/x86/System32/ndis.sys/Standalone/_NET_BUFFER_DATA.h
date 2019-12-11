typedef union _NET_BUFFER_DATA_LENGTH
{
  union
  {
    /* 0x0000 */ unsigned long DataLength;
    /* 0x0000 */ unsigned long stDataLength;
  }; /* size: 0x0004 */
} NET_BUFFER_DATA_LENGTH, *PNET_BUFFER_DATA_LENGTH; /* size: 0x0004 */

typedef struct _NET_BUFFER_DATA
{
  /* 0x0000 */ struct _NET_BUFFER* Next;
  /* 0x0004 */ struct _MDL* CurrentMdl;
  /* 0x0008 */ unsigned long CurrentMdlOffset;
  /* 0x000c */ union _NET_BUFFER_DATA_LENGTH NbDataLength;
  /* 0x0010 */ struct _MDL* MdlChain;
  /* 0x0014 */ unsigned long DataOffset;
} NET_BUFFER_DATA, *PNET_BUFFER_DATA; /* size: 0x0018 */

