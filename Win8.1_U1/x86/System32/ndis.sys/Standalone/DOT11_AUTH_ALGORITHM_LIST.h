typedef struct _NDIS_OBJECT_HEADER
{
  /* 0x0000 */ unsigned char Type;
  /* 0x0001 */ unsigned char Revision;
  /* 0x0002 */ unsigned short Size;
} NDIS_OBJECT_HEADER, *PNDIS_OBJECT_HEADER; /* size: 0x0004 */

typedef enum _DOT11_AUTH_ALGORITHM
{
  DOT11_AUTH_ALGO_80211_OPEN = 1,
  DOT11_AUTH_ALGO_80211_SHARED_KEY = 2,
  DOT11_AUTH_ALGO_WPA = 3,
  DOT11_AUTH_ALGO_WPA_PSK = 4,
  DOT11_AUTH_ALGO_WPA_NONE = 5,
  DOT11_AUTH_ALGO_RSNA = 6,
  DOT11_AUTH_ALGO_RSNA_PSK = 7,
  DOT11_AUTH_ALGO_IHV_START = -2147483648,
  DOT11_AUTH_ALGO_IHV_END = -1,
} DOT11_AUTH_ALGORITHM, *PDOT11_AUTH_ALGORITHM;

struct DOT11_AUTH_ALGORITHM_LIST
{
  /* 0x0000 */ struct _NDIS_OBJECT_HEADER Header;
  /* 0x0004 */ unsigned long uNumOfEntries;
  /* 0x0008 */ unsigned long uTotalNumOfEntries;
  /* 0x000c */ enum _DOT11_AUTH_ALGORITHM AlgorithmIds[1];
}; /* size: 0x0010 */

