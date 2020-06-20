typedef struct _NDK_QP_DISPATCH
{
  /* 0x0000 */ void* NdkCloseQp /* function */;
  /* 0x0004 */ void* NdkQueryExtension /* function */;
  /* 0x0008 */ void* NdkFlush /* function */;
  /* 0x000c */ void* NdkSend /* function */;
  /* 0x0010 */ void* NdkReceive /* function */;
  /* 0x0014 */ void* NdkBind /* function */;
  /* 0x0018 */ void* NdkFastRegister /* function */;
  /* 0x001c */ void* NdkInvalidate /* function */;
  /* 0x0020 */ void* NdkRead /* function */;
  /* 0x0024 */ void* NdkWrite /* function */;
  /* 0x0028 */ void* NdkSendAndInvalidate /* function */;
} NDK_QP_DISPATCH, *PNDK_QP_DISPATCH; /* size: 0x002c */

