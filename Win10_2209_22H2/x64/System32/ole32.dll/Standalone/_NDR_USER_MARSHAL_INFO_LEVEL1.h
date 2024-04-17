typedef struct _NDR_USER_MARSHAL_INFO_LEVEL1
{
  /* 0x0000 */ void* Buffer;
  /* 0x0008 */ unsigned long BufferSize;
  /* 0x0010 */ void* pfnAllocate /* function */;
  /* 0x0018 */ void* pfnFree /* function */;
  /* 0x0020 */ struct IRpcChannelBuffer* pRpcChannelBuffer;
  /* 0x0028 */ unsigned __int64 Reserved[5];
} NDR_USER_MARSHAL_INFO_LEVEL1, *PNDR_USER_MARSHAL_INFO_LEVEL1; /* size: 0x0050 */

