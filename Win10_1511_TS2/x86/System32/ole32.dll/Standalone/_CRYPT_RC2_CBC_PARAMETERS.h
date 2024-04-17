typedef struct _CRYPT_RC2_CBC_PARAMETERS
{
  /* 0x0000 */ unsigned long dwVersion;
  /* 0x0004 */ int fIV;
  /* 0x0008 */ unsigned char rgbIV[8];
} CRYPT_RC2_CBC_PARAMETERS, *PCRYPT_RC2_CBC_PARAMETERS; /* size: 0x0010 */

