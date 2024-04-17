struct RPC_ENDPOINT_TEMPLATEA
{
  /* 0x0000 */ unsigned long Version;
  /* 0x0004 */ unsigned char* ProtSeq;
  /* 0x0008 */ unsigned char* Endpoint;
  /* 0x000c */ void* SecurityDescriptor;
  /* 0x0010 */ unsigned long Backlog;
}; /* size: 0x0014 */

