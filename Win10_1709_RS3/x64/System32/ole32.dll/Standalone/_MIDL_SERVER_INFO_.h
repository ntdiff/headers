typedef struct _MIDL_SERVER_INFO_
{
  /* 0x0000 */ const struct _MIDL_STUB_DESC* pStubDesc;
  /* 0x0008 */ void* const* DispatchTable /* function */;
  /* 0x0010 */ const unsigned char* ProcString;
  /* 0x0018 */ const unsigned short* FmtStringOffset;
  /* 0x0020 */ void* const* ThunkTable /* function */;
  /* 0x0028 */ struct _RPC_SYNTAX_IDENTIFIER* pTransferSyntax;
  /* 0x0030 */ unsigned __int64 nCount;
  /* 0x0038 */ struct _MIDL_SYNTAX_INFO* pSyntaxInfo;
} MIDL_SERVER_INFO_, *PMIDL_SERVER_INFO_; /* size: 0x0040 */

