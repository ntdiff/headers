typedef struct _HOSTNAMES
{
  /* 0x0000 */ unsigned short clientNameOffset;
  /* 0x0002 */ unsigned short documentNameOffset;
  /* 0x0004 */ unsigned char data[1];
  /* 0x0005 */ char __PADDING__[1];
} HOSTNAMES, *PHOSTNAMES; /* size: 0x0006 */

