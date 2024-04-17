struct RPC_INTERFACE_TEMPLATEW
{
  /* 0x0000 */ unsigned long Version;
  /* 0x0008 */ void* IfSpec;
  /* 0x0010 */ struct _GUID* MgrTypeUuid;
  /* 0x0018 */ void* MgrEpv;
  /* 0x0020 */ unsigned int Flags;
  /* 0x0024 */ unsigned int MaxCalls;
  /* 0x0028 */ unsigned int MaxRpcSize;
  /* 0x0030 */ void* IfCallback /* function */;
  /* 0x0038 */ struct _UUID_VECTOR* UuidVector;
  /* 0x0040 */ unsigned short* Annotation;
  /* 0x0048 */ void* SecurityDescriptor;
}; /* size: 0x0050 */

