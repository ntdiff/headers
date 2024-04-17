typedef struct _SSL_HPKP_HEADER_EXTRA_CERT_CHAIN_POLICY_PARA
{
  /* 0x0000 */ unsigned long cbSize;
  /* 0x0004 */ unsigned long dwReserved;
  /* 0x0008 */ wchar_t* pwszServerName;
  /* 0x000c */ char* rgpszHpkpValue[2];
} SSL_HPKP_HEADER_EXTRA_CERT_CHAIN_POLICY_PARA, *PSSL_HPKP_HEADER_EXTRA_CERT_CHAIN_POLICY_PARA; /* size: 0x0014 */

