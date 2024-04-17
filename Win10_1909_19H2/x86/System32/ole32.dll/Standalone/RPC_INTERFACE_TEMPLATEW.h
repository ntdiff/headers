struct RPC_INTERFACE_TEMPLATEW
{
  /* 0x0000 */ unsigned long Version;
  /* 0x0004 */ void* IfSpec;
  /* 0x0008 */ struct _GUID* MgrTypeUuid;
  /* 0x000c */ void* MgrEpv;
  /* 0x0010 */ unsigned int Flags;
  /* 0x0014 */ unsigned int MaxCalls;
  /* 0x0018 */ unsigned int MaxRpcSize;
  /* 0x001c */ void* IfCallback /* function */;
  /* 0x0020 */ struct _UUID_VECTOR* UuidVector;
  /* 0x0024 */ wchar_t* Annotation;
  /* 0x0028 */ void* SecurityDescriptor;
}; /* size: 0x002c */

