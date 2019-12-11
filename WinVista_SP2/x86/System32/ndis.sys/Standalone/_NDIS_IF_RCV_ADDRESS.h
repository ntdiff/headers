typedef enum _NET_IF_RCV_ADDRESS_TYPE
{
  NET_IF_RCV_ADDRESS_TYPE_OTHER = 1,
  NET_IF_RCV_ADDRESS_TYPE_VOLATILE = 2,
  NET_IF_RCV_ADDRESS_TYPE_NON_VOLATILE = 3,
} NET_IF_RCV_ADDRESS_TYPE, *PNET_IF_RCV_ADDRESS_TYPE;

typedef struct _NDIS_IF_RCV_ADDRESS
{
  union
  {
    /* 0x0000 */ unsigned char RodInfo;
    /* 0x0000 */ enum _NET_IF_RCV_ADDRESS_TYPE ifRcvAddressType;
  }; /* size: 0x0004 */
  /* 0x0004 */ unsigned short ifRcvAddressLength;
  /* 0x0008 */ unsigned char ifRcvAddress[32];
} NDIS_IF_RCV_ADDRESS, *PNDIS_IF_RCV_ADDRESS; /* size: 0x0028 */

