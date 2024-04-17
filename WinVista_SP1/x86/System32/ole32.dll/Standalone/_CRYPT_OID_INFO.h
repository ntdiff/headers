typedef struct _CRYPTOAPI_BLOB
{
  /* 0x0000 */ unsigned long cbData;
  /* 0x0004 */ unsigned char* pbData;
} CRYPTOAPI_BLOB, *PCRYPTOAPI_BLOB; /* size: 0x0008 */

typedef struct _CRYPT_OID_INFO
{
  /* 0x0000 */ unsigned long cbSize;
  /* 0x0004 */ const char* pszOID;
  /* 0x0008 */ const wchar_t* pwszName;
  /* 0x000c */ unsigned long dwGroupId;
  union
  {
    /* 0x0010 */ unsigned long dwValue;
    /* 0x0010 */ unsigned int Algid;
    /* 0x0010 */ unsigned long dwLength;
  }; /* size: 0x0004 */
  /* 0x0014 */ struct _CRYPTOAPI_BLOB ExtraInfo;
} CRYPT_OID_INFO, *PCRYPT_OID_INFO; /* size: 0x001c */

