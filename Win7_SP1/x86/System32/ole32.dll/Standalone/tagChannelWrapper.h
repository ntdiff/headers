struct tagChannelWrapper
{
  /* 0x0000 */ const struct IRpcChannelBufferVtbl* lpVtbl;
  /* 0x0004 */ long RefCount;
  /* 0x0008 */ const struct _GUID* pIID;
  /* 0x000c */ struct IRpcChannelBuffer* pChannel;
}; /* size: 0x0010 */

