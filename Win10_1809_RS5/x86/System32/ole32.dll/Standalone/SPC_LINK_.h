typedef struct _CRYPTOAPI_BLOB
{
  /* 0x0000 */ unsigned long cbData;
  /* 0x0004 */ unsigned char* pbData;
} CRYPTOAPI_BLOB, *PCRYPTOAPI_BLOB; /* size: 0x0008 */

typedef struct _SPC_SERIALIZED_OBJECT
{
  /* 0x0000 */ unsigned char ClassId[16];
  /* 0x0010 */ struct _CRYPTOAPI_BLOB SerializedData;
} SPC_SERIALIZED_OBJECT, *PSPC_SERIALIZED_OBJECT; /* size: 0x0018 */

struct SPC_LINK_
{
  /* 0x0000 */ unsigned long dwLinkChoice;
  union
  {
    /* 0x0004 */ wchar_t* pwszUrl;
    /* 0x0004 */ struct _SPC_SERIALIZED_OBJECT Moniker;
    struct
    {
      /* 0x0004 */ wchar_t* pwszFile;
      /* 0x0008 */ long __PADDING__[5];
    }; /* size: 0x0018 */
  }; /* size: 0x0018 */
}; /* size: 0x001c */

