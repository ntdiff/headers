typedef struct __NCRYPT_PCP_HMAC_AUTH_SIGNATURE_INFO
{
  /* 0x0000 */ unsigned long dwVersion;
  /* 0x0004 */ int iExpiration;
  /* 0x0008 */ unsigned char pabNonce[32];
  /* 0x0028 */ unsigned char pabPolicyRef[32];
  /* 0x0048 */ unsigned char pabHMAC[32];
} _NCRYPT_PCP_HMAC_AUTH_SIGNATURE_INFO, *P_NCRYPT_PCP_HMAC_AUTH_SIGNATURE_INFO; /* size: 0x0068 */

