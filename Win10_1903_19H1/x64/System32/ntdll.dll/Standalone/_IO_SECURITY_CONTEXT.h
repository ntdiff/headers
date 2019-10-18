typedef struct _IO_SECURITY_CONTEXT
{
  /* 0x0000 */ struct _SECURITY_QUALITY_OF_SERVICE* SecurityQos;
  /* 0x0008 */ struct _ACCESS_STATE* AccessState;
  /* 0x0010 */ unsigned long DesiredAccess;
  /* 0x0014 */ unsigned long FullCreateOptions;
} IO_SECURITY_CONTEXT, *PIO_SECURITY_CONTEXT; /* size: 0x0018 */

