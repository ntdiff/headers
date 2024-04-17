typedef struct _CERT_SELECT_CHAIN_PARA
{
  /* 0x0000 */ void* hChainEngine;
  /* 0x0008 */ struct _FILETIME* pTime;
  /* 0x0010 */ void* hAdditionalStore;
  /* 0x0018 */ struct _CERT_CHAIN_PARA* pChainPara;
  /* 0x0020 */ unsigned long dwFlags;
  /* 0x0024 */ long __PADDING__[1];
} CERT_SELECT_CHAIN_PARA, *PCERT_SELECT_CHAIN_PARA; /* size: 0x0028 */

