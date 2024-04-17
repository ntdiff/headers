struct tagChannelWrapper
{
  /* 0x0000 */ const struct IRpcChannelBufferVtbl* lpVtbl;
  /* 0x0008 */ long RefCount;
  /* 0x0010 */ const struct _GUID* pIID;
  /* 0x0018 */ struct IRpcChannelBuffer* pChannel;
}; /* size: 0x0020 */

