typedef struct _SSL_F12_EXTRA_CERT_CHAIN_POLICY_STATUS
{
  /* 0x0000 */ unsigned long cbSize;
  /* 0x0004 */ unsigned long dwErrorLevel;
  /* 0x0008 */ unsigned long dwErrorCategory;
  /* 0x000c */ unsigned long dwReserved;
  /* 0x0010 */ wchar_t wszErrorText[256];
} SSL_F12_EXTRA_CERT_CHAIN_POLICY_STATUS, *PSSL_F12_EXTRA_CERT_CHAIN_POLICY_STATUS; /* size: 0x0210 */

