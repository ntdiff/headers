typedef enum _WWAN_AUTH_METHOD
{
  WwanAuthSim = 0,
  WwanAuthAka = 1,
  WwanAuthAkaPrime = 2,
  WwanAuthMethodMax = 3,
} WWAN_AUTH_METHOD, *PWWAN_AUTH_METHOD;

typedef struct _WWAN_AUTH_SIM_CHALLENGE
{
  /* 0x0000 */ unsigned char Rand1[16];
  /* 0x0010 */ unsigned char Rand2[16];
  /* 0x0020 */ unsigned char Rand3[16];
  /* 0x0030 */ unsigned long n;
} WWAN_AUTH_SIM_CHALLENGE, *PWWAN_AUTH_SIM_CHALLENGE; /* size: 0x0034 */

typedef struct _WWAN_AUTH_AKA_CHALLENGE
{
  /* 0x0000 */ unsigned char Rand[16];
  /* 0x0010 */ unsigned char Autn[16];
} WWAN_AUTH_AKA_CHALLENGE, *PWWAN_AUTH_AKA_CHALLENGE; /* size: 0x0020 */

typedef struct _WWAN_AUTH_AKAP_CHALLENGE
{
  /* 0x0000 */ unsigned char Rand[16];
  /* 0x0010 */ unsigned char Autn[16];
  /* 0x0020 */ unsigned char NetworkName[256];
  /* 0x0120 */ unsigned long NetworkNameLength;
} WWAN_AUTH_AKAP_CHALLENGE, *PWWAN_AUTH_AKAP_CHALLENGE; /* size: 0x0124 */

typedef struct _WWAN_AUTH_CHALLENGE
{
  /* 0x0000 */ enum _WWAN_AUTH_METHOD AuthMethod;
  union
  {
    union
    {
      /* 0x0004 */ struct _WWAN_AUTH_SIM_CHALLENGE AuthSim;
      /* 0x0004 */ struct _WWAN_AUTH_AKA_CHALLENGE AuthAka;
      /* 0x0004 */ struct _WWAN_AUTH_AKAP_CHALLENGE AuthAkap;
    }; /* size: 0x0124 */
  } /* size: 0x0124 */ u;
} WWAN_AUTH_CHALLENGE, *PWWAN_AUTH_CHALLENGE; /* size: 0x0128 */

