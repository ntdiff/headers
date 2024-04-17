typedef struct _CERT_STRONG_SIGN_PARA
{
  /* 0x0000 */ unsigned long cbSize;
  /* 0x0004 */ unsigned long dwInfoChoice;
  union
  {
    /* 0x0008 */ void* pvInfo;
    /* 0x0008 */ struct _CERT_STRONG_SIGN_SERIALIZED_INFO* pSerializedInfo;
    /* 0x0008 */ char* pszOID;
  }; /* size: 0x0004 */
} CERT_STRONG_SIGN_PARA, *PCERT_STRONG_SIGN_PARA; /* size: 0x000c */

