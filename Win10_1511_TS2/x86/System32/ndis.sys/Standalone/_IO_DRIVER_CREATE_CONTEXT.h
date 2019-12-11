typedef struct _IO_DRIVER_CREATE_CONTEXT
{
  /* 0x0000 */ short Size;
  /* 0x0004 */ struct _ECP_LIST* ExtraCreateParameter;
  /* 0x0008 */ void* DeviceObjectHint;
  /* 0x000c */ struct _TXN_PARAMETER_BLOCK* TxnParameters;
  /* 0x0010 */ struct _ESILO* SiloContext;
} IO_DRIVER_CREATE_CONTEXT, *PIO_DRIVER_CREATE_CONTEXT; /* size: 0x0014 */

