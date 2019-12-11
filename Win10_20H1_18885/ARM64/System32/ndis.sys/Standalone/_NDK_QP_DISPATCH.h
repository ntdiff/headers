typedef struct _NDK_QP_DISPATCH
{
  /* 0x0000 */ void* NdkCloseQp /* function */;
  /* 0x0008 */ void* NdkQueryExtension /* function */;
  /* 0x0010 */ void* NdkFlush /* function */;
  /* 0x0018 */ void* NdkSend /* function */;
  /* 0x0020 */ void* NdkReceive /* function */;
  /* 0x0028 */ void* NdkBind /* function */;
  /* 0x0030 */ void* NdkFastRegister /* function */;
  /* 0x0038 */ void* NdkInvalidate /* function */;
  /* 0x0040 */ void* NdkRead /* function */;
  /* 0x0048 */ void* NdkWrite /* function */;
  /* 0x0050 */ void* NdkSendAndInvalidate /* function */;
} NDK_QP_DISPATCH, *PNDK_QP_DISPATCH; /* size: 0x0058 */

