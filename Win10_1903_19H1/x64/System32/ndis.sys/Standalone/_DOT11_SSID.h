typedef struct _DOT11_SSID
{
  /* 0x0000 */ unsigned long uSSIDLength;
  /* 0x0004 */ unsigned char ucSSID[32];
} DOT11_SSID, *PDOT11_SSID; /* size: 0x0024 */

