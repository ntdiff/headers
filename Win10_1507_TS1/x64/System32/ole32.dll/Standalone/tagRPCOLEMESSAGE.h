struct tagRPCOLEMESSAGE
{
  /* 0x0000 */ void* reserved1;
  /* 0x0008 */ unsigned long dataRepresentation;
  /* 0x0010 */ void* Buffer;
  /* 0x0018 */ unsigned long cbBuffer;
  /* 0x001c */ unsigned long iMethod;
  /* 0x0020 */ void* reserved2[5];
  /* 0x0048 */ unsigned long rpcFlags;
  /* 0x004c */ long __PADDING__[1];
}; /* size: 0x0050 */

