typedef struct _SCARD_IO_REQUEST
{
  /* 0x0000 */ unsigned long dwProtocol;
  /* 0x0004 */ unsigned long cbPciLength;
} SCARD_IO_REQUEST, *PSCARD_IO_REQUEST; /* size: 0x0008 */

struct SCARD_T0_COMMAND
{
  /* 0x0000 */ unsigned char bCla;
  /* 0x0001 */ unsigned char bIns;
  /* 0x0002 */ unsigned char bP1;
  /* 0x0003 */ unsigned char bP2;
  /* 0x0004 */ unsigned char bP3;
}; /* size: 0x0005 */

struct SCARD_T0_REQUEST
{
  /* 0x0000 */ struct _SCARD_IO_REQUEST ioRequest;
  /* 0x0008 */ unsigned char bSw1;
  /* 0x0009 */ unsigned char bSw2;
  union
  {
    /* 0x000a */ struct SCARD_T0_COMMAND CmdBytes;
    /* 0x000a */ unsigned char rgbHeader[5];
  }; /* size: 0x0005 */
  /* 0x000f */ char __PADDING__[1];
}; /* size: 0x0010 */

