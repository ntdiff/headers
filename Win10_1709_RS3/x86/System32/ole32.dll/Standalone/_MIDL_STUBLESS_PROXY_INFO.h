typedef struct _MIDL_STUBLESS_PROXY_INFO
{
  /* 0x0000 */ const struct _MIDL_STUB_DESC* pStubDesc;
  /* 0x0004 */ const unsigned char* ProcFormatString;
  /* 0x0008 */ const unsigned short* FormatStringOffset;
  /* 0x000c */ struct _RPC_SYNTAX_IDENTIFIER* pTransferSyntax;
  /* 0x0010 */ unsigned long nCount;
  /* 0x0014 */ struct _MIDL_SYNTAX_INFO* pSyntaxInfo;
} MIDL_STUBLESS_PROXY_INFO, *PMIDL_STUBLESS_PROXY_INFO; /* size: 0x0018 */

