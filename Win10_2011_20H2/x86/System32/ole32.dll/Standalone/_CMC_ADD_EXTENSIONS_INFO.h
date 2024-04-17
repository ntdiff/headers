typedef struct _CMC_ADD_EXTENSIONS_INFO
{
  /* 0x0000 */ unsigned long dwCmcDataReference;
  /* 0x0004 */ unsigned long cCertReference;
  /* 0x0008 */ unsigned long* rgdwCertReference;
  /* 0x000c */ unsigned long cExtension;
  /* 0x0010 */ struct _CERT_EXTENSION* rgExtension;
} CMC_ADD_EXTENSIONS_INFO, *PCMC_ADD_EXTENSIONS_INFO; /* size: 0x0014 */

