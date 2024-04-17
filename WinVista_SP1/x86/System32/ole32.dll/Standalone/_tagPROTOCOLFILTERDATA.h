typedef struct _tagPROTOCOLFILTERDATA
{
  /* 0x0000 */ unsigned long cbSize;
  /* 0x0004 */ struct IInternetProtocolSink* pProtocolSink;
  /* 0x0008 */ struct IInternetProtocol* pProtocol;
  /* 0x000c */ struct IUnknown* pUnk;
  /* 0x0010 */ unsigned long dwFilterFlags;
} tagPROTOCOLFILTERDATA, *PtagPROTOCOLFILTERDATA; /* size: 0x0014 */

