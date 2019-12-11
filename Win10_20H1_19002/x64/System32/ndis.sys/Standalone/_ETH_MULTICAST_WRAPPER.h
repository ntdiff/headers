typedef struct _ETH_MULTICAST_WRAPPER
{
  /* 0x0000 */ unsigned long RefCount;
  /* 0x0004 */ unsigned char MCastAddress[6];
  /* 0x000a */ char __PADDING__[2];
} ETH_MULTICAST_WRAPPER, *PETH_MULTICAST_WRAPPER; /* size: 0x000c */

