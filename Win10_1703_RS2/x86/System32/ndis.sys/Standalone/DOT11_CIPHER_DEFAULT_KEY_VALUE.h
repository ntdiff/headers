typedef struct _NDIS_OBJECT_HEADER
{
  /* 0x0000 */ unsigned char Type;
  /* 0x0001 */ unsigned char Revision;
  /* 0x0002 */ unsigned short Size;
} NDIS_OBJECT_HEADER, *PNDIS_OBJECT_HEADER; /* size: 0x0004 */

typedef enum _DOT11_CIPHER_ALGORITHM
{
  DOT11_CIPHER_ALGO_NONE = 0,
  DOT11_CIPHER_ALGO_WEP40 = 1,
  DOT11_CIPHER_ALGO_TKIP = 2,
  DOT11_CIPHER_ALGO_CCMP = 4,
  DOT11_CIPHER_ALGO_WEP104 = 5,
  DOT11_CIPHER_ALGO_BIP = 6,
  DOT11_CIPHER_ALGO_GCMP = 8,
  DOT11_CIPHER_ALGO_WPA_USE_GROUP = 256,
  DOT11_CIPHER_ALGO_RSN_USE_GROUP = 256,
  DOT11_CIPHER_ALGO_WEP = 257,
  DOT11_CIPHER_ALGO_IHV_START = -2147483648,
  DOT11_CIPHER_ALGO_IHV_END = -1,
} DOT11_CIPHER_ALGORITHM, *PDOT11_CIPHER_ALGORITHM;

struct DOT11_CIPHER_DEFAULT_KEY_VALUE
{
  /* 0x0000 */ struct _NDIS_OBJECT_HEADER Header;
  /* 0x0004 */ unsigned long uKeyIndex;
  /* 0x0008 */ enum _DOT11_CIPHER_ALGORITHM AlgorithmId;
  /* 0x000c */ unsigned char MacAddr[6];
  /* 0x0012 */ unsigned char bDelete;
  /* 0x0013 */ unsigned char bStatic;
  /* 0x0014 */ unsigned short usKeyLength;
  /* 0x0016 */ unsigned char ucKey[1];
  /* 0x0017 */ char __PADDING__[1];
}; /* size: 0x0018 */

