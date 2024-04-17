typedef struct _CERT_STORE_PROV_INFO
{
  /* 0x0000 */ unsigned long cbSize;
  /* 0x0004 */ unsigned long cStoreProvFunc;
  /* 0x0008 */ void** rgpvStoreProvFunc;
  /* 0x000c */ void* hStoreProv;
  /* 0x0010 */ unsigned long dwStoreProvFlags;
  /* 0x0014 */ void* hStoreProvFuncAddr2;
} CERT_STORE_PROV_INFO, *PCERT_STORE_PROV_INFO; /* size: 0x0018 */

