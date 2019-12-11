typedef struct _CO_ADDRESS
{
  /* 0x0000 */ unsigned long AddressSize;
  /* 0x0004 */ unsigned char Address[1];
  /* 0x0005 */ char __PADDING__[3];
} CO_ADDRESS, *PCO_ADDRESS; /* size: 0x0008 */

typedef struct _CO_ADDRESS_LIST
{
  /* 0x0000 */ unsigned long NumberOfAddressesAvailable;
  /* 0x0004 */ unsigned long NumberOfAddresses;
  /* 0x0008 */ struct _CO_ADDRESS AddressList;
} CO_ADDRESS_LIST, *PCO_ADDRESS_LIST; /* size: 0x0010 */

