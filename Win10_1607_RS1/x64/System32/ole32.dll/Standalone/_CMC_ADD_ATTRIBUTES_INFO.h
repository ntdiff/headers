typedef struct _CMC_ADD_ATTRIBUTES_INFO
{
  /* 0x0000 */ unsigned long dwCmcDataReference;
  /* 0x0004 */ unsigned long cCertReference;
  /* 0x0008 */ unsigned long* rgdwCertReference;
  /* 0x0010 */ unsigned long cAttribute;
  /* 0x0018 */ struct _CRYPT_ATTRIBUTE* rgAttribute;
} CMC_ADD_ATTRIBUTES_INFO, *PCMC_ADD_ATTRIBUTES_INFO; /* size: 0x0020 */

