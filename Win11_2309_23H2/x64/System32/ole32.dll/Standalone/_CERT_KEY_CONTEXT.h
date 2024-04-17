typedef struct _CERT_KEY_CONTEXT
{
  /* 0x0000 */ unsigned long cbSize;
  union
  {
    /* 0x0008 */ unsigned __int64 hCryptProv;
    /* 0x0008 */ unsigned __int64 hNCryptKey;
  }; /* size: 0x0008 */
  /* 0x0010 */ unsigned long dwKeySpec;
  /* 0x0014 */ long __PADDING__[1];
} CERT_KEY_CONTEXT, *PCERT_KEY_CONTEXT; /* size: 0x0018 */

