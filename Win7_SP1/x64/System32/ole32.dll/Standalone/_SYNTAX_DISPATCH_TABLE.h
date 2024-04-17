typedef struct _SYNTAX_DISPATCH_TABLE
{
  /* 0x0000 */ void* pfnInit /* function */;
  /* 0x0008 */ void* pfnSizing /* function */;
  /* 0x0010 */ void* pfnMarshal /* function */;
  /* 0x0018 */ void* pfnUnmarshal /* function */;
  /* 0x0020 */ void* pfnExceptionHandling /* function */;
  /* 0x0028 */ void* pfnFinally /* function */;
  /* 0x0030 */ void* pfnGetBuffer /* function */;
  /* 0x0038 */ void* pfnSendReceive /* function */;
} SYNTAX_DISPATCH_TABLE, *PSYNTAX_DISPATCH_TABLE; /* size: 0x0040 */

