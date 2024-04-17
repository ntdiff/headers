typedef struct _CRYPTOAPI_BLOB
{
  /* 0x0000 */ unsigned long cbData;
  /* 0x0004 */ unsigned char* pbData;
} CRYPTOAPI_BLOB, *PCRYPTOAPI_BLOB; /* size: 0x0008 */

typedef struct _CAT_NAMEVALUE
{
  /* 0x0000 */ wchar_t* pwszTag;
  /* 0x0004 */ unsigned long fdwFlags;
  /* 0x0008 */ struct _CRYPTOAPI_BLOB Value;
} CAT_NAMEVALUE, *PCAT_NAMEVALUE; /* size: 0x0010 */

