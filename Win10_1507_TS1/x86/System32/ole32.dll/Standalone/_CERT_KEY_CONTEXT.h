typedef struct _CERT_KEY_CONTEXT
{
  /* 0x0000 */ unsigned long cbSize;
  union
  {
    /* 0x0004 */ unsigned long hCryptProv;
    /* 0x0004 */ unsigned long hNCryptKey;
  }; /* size: 0x0004 */
  /* 0x0008 */ unsigned long dwKeySpec;
} CERT_KEY_CONTEXT, *PCERT_KEY_CONTEXT; /* size: 0x000c */

