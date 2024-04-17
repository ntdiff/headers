typedef struct _DRIVERSTATUS
{
  /* 0x0000 */ unsigned char bDriverError;
  /* 0x0001 */ unsigned char bIDEError;
  /* 0x0002 */ unsigned char bReserved[2];
  /* 0x0004 */ unsigned long dwReserved[2];
} DRIVERSTATUS, *PDRIVERSTATUS; /* size: 0x000c */

typedef struct _SENDCMDOUTPARAMS
{
  /* 0x0000 */ unsigned long cBufferSize;
  /* 0x0004 */ struct _DRIVERSTATUS DriverStatus;
  /* 0x0010 */ unsigned char bBuffer[1];
} SENDCMDOUTPARAMS, *PSENDCMDOUTPARAMS; /* size: 0x0011 */

