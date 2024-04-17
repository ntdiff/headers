typedef struct _SSL_ECCKEY_BLOB
{
  /* 0x0000 */ unsigned long dwCurveType;
  /* 0x0004 */ unsigned long cbKey;
} SSL_ECCKEY_BLOB, *PSSL_ECCKEY_BLOB; /* size: 0x0008 */

