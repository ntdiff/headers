struct tagActivationContextInfoData
{
  /* 0x0000 */ int clientOK;
  /* 0x0004 */ int bReserved1;
  /* 0x0008 */ unsigned long dwReserved1;
  /* 0x000c */ unsigned long dwReserved2;
  /* 0x0010 */ struct tagMInterfacePointer* pIFDClientCtx;
  /* 0x0018 */ struct tagMInterfacePointer* pIFDPrototypeCtx;
}; /* size: 0x0020 */

