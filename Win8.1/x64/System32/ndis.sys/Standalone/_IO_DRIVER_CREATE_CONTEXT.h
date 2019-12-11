typedef struct _IO_DRIVER_CREATE_CONTEXT
{
  /* 0x0000 */ short Size;
  /* 0x0008 */ struct _ECP_LIST* ExtraCreateParameter;
  /* 0x0010 */ void* DeviceObjectHint;
  /* 0x0018 */ struct _TXN_PARAMETER_BLOCK* TxnParameters;
} IO_DRIVER_CREATE_CONTEXT, *PIO_DRIVER_CREATE_CONTEXT; /* size: 0x0020 */

