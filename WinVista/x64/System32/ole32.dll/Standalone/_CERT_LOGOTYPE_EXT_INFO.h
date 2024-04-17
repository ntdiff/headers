typedef struct _CERT_LOGOTYPE_EXT_INFO
{
  /* 0x0000 */ unsigned long cCommunityLogo;
  /* 0x0008 */ struct _CERT_LOGOTYPE_INFO* rgCommunityLogo;
  /* 0x0010 */ struct _CERT_LOGOTYPE_INFO* pIssuerLogo;
  /* 0x0018 */ struct _CERT_LOGOTYPE_INFO* pSubjectLogo;
  /* 0x0020 */ unsigned long cOtherLogo;
  /* 0x0028 */ struct _CERT_OTHER_LOGOTYPE_INFO* rgOtherLogo;
} CERT_LOGOTYPE_EXT_INFO, *PCERT_LOGOTYPE_EXT_INFO; /* size: 0x0030 */

