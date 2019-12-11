typedef struct _IO_SECURITY_CONTEXT
{
  /* 0x0000 */ struct _SECURITY_QUALITY_OF_SERVICE* SecurityQos;
  /* 0x0004 */ struct _ACCESS_STATE* AccessState;
  /* 0x0008 */ unsigned long DesiredAccess;
  /* 0x000c */ unsigned long FullCreateOptions;
} IO_SECURITY_CONTEXT, *PIO_SECURITY_CONTEXT; /* size: 0x0010 */

