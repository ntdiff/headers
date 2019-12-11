typedef enum _NDK_OPERATION_TYPE
{
  NdkOperationTypeReceive = 1,
  NdkOperationTypeReceiveAndInvalidate = 0xffff8001,
  NdkOperationTypeSend = 2,
  NdkOperationTypeFastRegister = 4,
  NdkOperationTypeBind = 8,
  NdkOperationTypeInvalidate = 16,
  NdkOperationTypeRead = 32,
  NdkOperationTypeWrite = 64,
} NDK_OPERATION_TYPE, *PNDK_OPERATION_TYPE;

typedef struct _NDK_RESULT_EX
{
  /* 0x0000 */ long Status;
  /* 0x0004 */ unsigned long BytesTransferred;
  /* 0x0008 */ void* QPContext;
  /* 0x000c */ void* RequestContext;
  /* 0x0010 */ enum _NDK_OPERATION_TYPE Type;
  /* 0x0014 */ unsigned long TypeSpecificCompletionOutput;
} NDK_RESULT_EX, *PNDK_RESULT_EX; /* size: 0x0018 */

