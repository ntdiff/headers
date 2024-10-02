typedef struct _CRYPT_KEY_PROV_PARAM
{
  /* 0x0000 */ unsigned long dwParam;
  /* 0x0008 */ unsigned char* pbData;
  /* 0x0010 */ unsigned long cbData;
  /* 0x0014 */ unsigned long dwFlags;
} CRYPT_KEY_PROV_PARAM, *PCRYPT_KEY_PROV_PARAM; /* size: 0x0018 */

