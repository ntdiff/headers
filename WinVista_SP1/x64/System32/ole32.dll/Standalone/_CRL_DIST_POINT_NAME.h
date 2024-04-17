typedef struct _CERT_ALT_NAME_INFO
{
  /* 0x0000 */ unsigned long cAltEntry;
  /* 0x0008 */ struct _CERT_ALT_NAME_ENTRY* rgAltEntry;
} CERT_ALT_NAME_INFO, *PCERT_ALT_NAME_INFO; /* size: 0x0010 */

typedef struct _CRL_DIST_POINT_NAME
{
  /* 0x0000 */ unsigned long dwDistPointNameChoice;
  /* 0x0008 */ struct _CERT_ALT_NAME_INFO FullName;
} CRL_DIST_POINT_NAME, *PCRL_DIST_POINT_NAME; /* size: 0x0018 */

