typedef struct _SCARD_IO_REQUEST
{
  /* 0x0000 */ unsigned long dwProtocol;
  /* 0x0004 */ unsigned long cbPciLength;
} SCARD_IO_REQUEST, *PSCARD_IO_REQUEST; /* size: 0x0008 */

typedef struct _SCARD_T1_REQUEST
{
  /* 0x0000 */ struct _SCARD_IO_REQUEST ioRequest;
} SCARD_T1_REQUEST, *PSCARD_T1_REQUEST; /* size: 0x0008 */

