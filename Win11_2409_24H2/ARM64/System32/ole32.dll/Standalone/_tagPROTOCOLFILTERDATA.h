typedef struct _tagPROTOCOLFILTERDATA
{
  /* 0x0000 */ unsigned long cbSize;
  /* 0x0008 */ struct IInternetProtocolSink* pProtocolSink;
  /* 0x0010 */ struct IInternetProtocol* pProtocol;
  /* 0x0018 */ struct IUnknown* pUnk;
  /* 0x0020 */ unsigned long dwFilterFlags;
  /* 0x0024 */ long __PADDING__[1];
} tagPROTOCOLFILTERDATA, *PtagPROTOCOLFILTERDATA; /* size: 0x0028 */

