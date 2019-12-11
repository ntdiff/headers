typedef struct _NDK_RESULT
{
  /* 0x0000 */ long Status;
  /* 0x0004 */ unsigned long BytesTransferred;
  /* 0x0008 */ void* QPContext;
  /* 0x000c */ void* RequestContext;
} NDK_RESULT, *PNDK_RESULT; /* size: 0x0010 */

