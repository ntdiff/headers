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

