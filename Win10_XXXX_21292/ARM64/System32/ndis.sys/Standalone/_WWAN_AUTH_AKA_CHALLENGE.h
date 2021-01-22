typedef struct _WWAN_AUTH_AKA_CHALLENGE
{
  /* 0x0000 */ unsigned char Rand[16];
  /* 0x0010 */ unsigned char Autn[16];
} WWAN_AUTH_AKA_CHALLENGE, *PWWAN_AUTH_AKA_CHALLENGE; /* size: 0x0020 */

