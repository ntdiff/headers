typedef struct _CRYPTOAPI_BLOB
{
  /* 0x0000 */ unsigned long cbData;
  /* 0x0008 */ unsigned char* pbData;
} CRYPTOAPI_BLOB, *PCRYPTOAPI_BLOB; /* size: 0x0010 */

typedef struct _CRYPT_ALGORITHM_IDENTIFIER
{
  /* 0x0000 */ char* pszObjId;
  /* 0x0008 */ struct _CRYPTOAPI_BLOB Parameters;
} CRYPT_ALGORITHM_IDENTIFIER, *PCRYPT_ALGORITHM_IDENTIFIER; /* size: 0x0018 */

typedef struct _FILETIME
{
  /* 0x0000 */ unsigned long dwLowDateTime;
  /* 0x0004 */ unsigned long dwHighDateTime;
} FILETIME, *PFILETIME; /* size: 0x0008 */

typedef struct _CMSG_MAIL_LIST_RECIPIENT_ENCODE_INFO
{
  /* 0x0000 */ unsigned long cbSize;
  /* 0x0008 */ struct _CRYPT_ALGORITHM_IDENTIFIER KeyEncryptionAlgorithm;
  /* 0x0020 */ void* pvKeyEncryptionAuxInfo;
  /* 0x0028 */ unsigned __int64 hCryptProv;
  /* 0x0030 */ unsigned long dwKeyChoice;
  union
  {
    /* 0x0038 */ unsigned __int64 hKeyEncryptionKey;
    /* 0x0038 */ void* pvKeyEncryptionKey;
  }; /* size: 0x0008 */
  /* 0x0040 */ struct _CRYPTOAPI_BLOB KeyId;
  /* 0x0050 */ struct _FILETIME Date;
  /* 0x0058 */ struct _CRYPT_ATTRIBUTE_TYPE_VALUE* pOtherAttr;
} CMSG_MAIL_LIST_RECIPIENT_ENCODE_INFO, *PCMSG_MAIL_LIST_RECIPIENT_ENCODE_INFO; /* size: 0x0060 */

