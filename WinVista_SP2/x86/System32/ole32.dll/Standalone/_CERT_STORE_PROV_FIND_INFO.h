typedef struct _CERT_STORE_PROV_FIND_INFO
{
  /* 0x0000 */ unsigned long cbSize;
  /* 0x0004 */ unsigned long dwMsgAndCertEncodingType;
  /* 0x0008 */ unsigned long dwFindFlags;
  /* 0x000c */ unsigned long dwFindType;
  /* 0x0010 */ const void* pvFindPara;
} CERT_STORE_PROV_FIND_INFO, *PCERT_STORE_PROV_FIND_INFO; /* size: 0x0014 */

