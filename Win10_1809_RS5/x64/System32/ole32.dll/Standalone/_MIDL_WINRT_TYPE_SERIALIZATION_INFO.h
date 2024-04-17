typedef struct _MIDL_WINRT_TYPE_SERIALIZATION_INFO
{
  /* 0x0000 */ unsigned long Version;
  /* 0x0008 */ const unsigned char* TypeFormatString;
  /* 0x0010 */ unsigned short FormatStringSize;
  /* 0x0012 */ unsigned short TypeOffset;
  /* 0x0018 */ const struct _MIDL_STUB_DESC* StubDesc;
} MIDL_WINRT_TYPE_SERIALIZATION_INFO, *PMIDL_WINRT_TYPE_SERIALIZATION_INFO; /* size: 0x0020 */

