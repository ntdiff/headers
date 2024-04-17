typedef struct _CERT_SELECT_CHAIN_PARA
{
  /* 0x0000 */ void* hChainEngine;
  /* 0x0004 */ struct _FILETIME* pTime;
  /* 0x0008 */ void* hAdditionalStore;
  /* 0x000c */ struct _CERT_CHAIN_PARA* pChainPara;
  /* 0x0010 */ unsigned long dwFlags;
} CERT_SELECT_CHAIN_PARA, *PCERT_SELECT_CHAIN_PARA; /* size: 0x0014 */

