struct RPC_ENDPOINT_TEMPLATEW
{
  /* 0x0000 */ unsigned long Version;
  /* 0x0004 */ unsigned short* ProtSeq;
  /* 0x0008 */ unsigned short* Endpoint;
  /* 0x000c */ void* SecurityDescriptor;
  /* 0x0010 */ unsigned long Backlog;
}; /* size: 0x0014 */

