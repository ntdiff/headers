typedef struct _NDR_USER_MARSHAL_INFO_LEVEL1
{
  /* 0x0000 */ void* Buffer;
  /* 0x0004 */ unsigned long BufferSize;
  /* 0x0008 */ void* pfnAllocate /* function */;
  /* 0x000c */ void* pfnFree /* function */;
  /* 0x0010 */ struct IRpcChannelBuffer* pRpcChannelBuffer;
  /* 0x0014 */ unsigned long Reserved[5];
} NDR_USER_MARSHAL_INFO_LEVEL1, *PNDR_USER_MARSHAL_INFO_LEVEL1; /* size: 0x0028 */

