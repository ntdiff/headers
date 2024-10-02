typedef struct _CRYPTOAPI_BLOB
{
  /* 0x0000 */ unsigned long cbData;
  /* 0x0008 */ unsigned char* pbData;
} CRYPTOAPI_BLOB, *PCRYPTOAPI_BLOB; /* size: 0x0010 */

typedef struct _SPC_IMAGE
{
  /* 0x0000 */ struct SPC_LINK_* pImageLink;
  /* 0x0008 */ struct _CRYPTOAPI_BLOB Bitmap;
  /* 0x0018 */ struct _CRYPTOAPI_BLOB Metafile;
  /* 0x0028 */ struct _CRYPTOAPI_BLOB EnhancedMetafile;
  /* 0x0038 */ struct _CRYPTOAPI_BLOB GifFile;
} SPC_IMAGE, *PSPC_IMAGE; /* size: 0x0048 */

