typedef struct _NDR_PIPE_MESSAGE
{
  /* 0x0000 */ unsigned short Signature;
  /* 0x0002 */ unsigned short PipeId;
  /* 0x0004 */ unsigned short PipeStatus;
  /* 0x0006 */ unsigned short PipeFlags;
  /* 0x0008 */ const unsigned char* pTypeFormat;
  /* 0x000c */ struct _MIDL_STUB_MESSAGE* pStubMsg;
  /* 0x0010 */ struct _GENERIC_PIPE_TYPE* pPipeObject;
} NDR_PIPE_MESSAGE, *PNDR_PIPE_MESSAGE; /* size: 0x0014 */

