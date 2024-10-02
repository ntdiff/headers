struct RPC_ENDPOINT_TEMPLATEW
{
  /* 0x0000 */ unsigned long Version;
  /* 0x0008 */ unsigned short* ProtSeq;
  /* 0x0010 */ unsigned short* Endpoint;
  /* 0x0018 */ void* SecurityDescriptor;
  /* 0x0020 */ unsigned long Backlog;
  /* 0x0024 */ long __PADDING__[1];
}; /* size: 0x0028 */

