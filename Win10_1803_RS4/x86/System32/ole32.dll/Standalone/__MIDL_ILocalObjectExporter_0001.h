typedef struct _GUID
{
  /* 0x0000 */ unsigned long Data1;
  /* 0x0004 */ unsigned short Data2;
  /* 0x0006 */ unsigned short Data3;
  /* 0x0008 */ unsigned char Data4[8];
} GUID, *PGUID; /* size: 0x0010 */

typedef struct __MIDL_ILocalObjectExporter_0001
{
  /* 0x0000 */ unsigned long offsetofChannelPtrFromProxyPtr;
  /* 0x0008 */ unsigned __int64 addressofOIDListHead;
  /* 0x0010 */ unsigned long sizeofIPIDEntry;
  /* 0x0014 */ unsigned long offsetofNextIPIDPointerInIPIDEntry;
  /* 0x0018 */ unsigned long offsetofFlagsInIPIDEntry;
  /* 0x001c */ unsigned long offsetofIPIDInIPIDEntry;
  /* 0x0020 */ unsigned long offsetofServerAddressInIPIDEntry;
  /* 0x0024 */ unsigned long offsetofOIDFLinkInIPIDEntry;
  /* 0x0028 */ unsigned long serverIPIDEntryFlag;
  /* 0x002c */ unsigned long invalidIPIDEntryFlags;
  /* 0x0030 */ unsigned long sizeofCClientChannel;
  /* 0x0034 */ unsigned long offsetofCanonicalIRpcChannelBufferInCClientChannel;
  /* 0x0038 */ unsigned long offsetofIPIDEntryInCClientChannel;
  /* 0x003c */ unsigned long offsetofSignatureInCClientChannel;
  /* 0x0040 */ struct _GUID guidSignatureofCClientChannel;
} _MIDL_ILocalObjectExporter_0001, *P_MIDL_ILocalObjectExporter_0001; /* size: 0x0050 */

