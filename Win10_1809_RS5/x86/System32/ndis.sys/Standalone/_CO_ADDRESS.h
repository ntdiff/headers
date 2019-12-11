typedef struct _CO_ADDRESS
{
  /* 0x0000 */ unsigned long AddressSize;
  /* 0x0004 */ unsigned char Address[1];
  /* 0x0005 */ char __PADDING__[3];
} CO_ADDRESS, *PCO_ADDRESS; /* size: 0x0008 */

