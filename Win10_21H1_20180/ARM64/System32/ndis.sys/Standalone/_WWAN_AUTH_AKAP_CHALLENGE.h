typedef struct _WWAN_AUTH_AKAP_CHALLENGE
{
  /* 0x0000 */ unsigned char Rand[16];
  /* 0x0010 */ unsigned char Autn[16];
  /* 0x0020 */ unsigned char NetworkName[256];
  /* 0x0120 */ unsigned long NetworkNameLength;
} WWAN_AUTH_AKAP_CHALLENGE, *PWWAN_AUTH_AKAP_CHALLENGE; /* size: 0x0124 */

