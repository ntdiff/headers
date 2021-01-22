typedef struct _WWAN_AUTH_SIM_CHALLENGE
{
  /* 0x0000 */ unsigned char Rand1[16];
  /* 0x0010 */ unsigned char Rand2[16];
  /* 0x0020 */ unsigned char Rand3[16];
  /* 0x0030 */ unsigned long n;
} WWAN_AUTH_SIM_CHALLENGE, *PWWAN_AUTH_SIM_CHALLENGE; /* size: 0x0034 */

