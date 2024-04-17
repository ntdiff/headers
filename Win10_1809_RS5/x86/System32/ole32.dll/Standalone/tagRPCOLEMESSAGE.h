struct tagRPCOLEMESSAGE
{
  /* 0x0000 */ void* reserved1;
  /* 0x0004 */ unsigned long dataRepresentation;
  /* 0x0008 */ void* Buffer;
  /* 0x000c */ unsigned long cbBuffer;
  /* 0x0010 */ unsigned long iMethod;
  /* 0x0014 */ void* reserved2[5];
  /* 0x0028 */ unsigned long rpcFlags;
}; /* size: 0x002c */

