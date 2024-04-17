typedef struct _OCSP_REQUEST_INFO
{
  /* 0x0000 */ unsigned long dwVersion;
  /* 0x0004 */ struct _CERT_ALT_NAME_ENTRY* pRequestorName;
  /* 0x0008 */ unsigned long cRequestEntry;
  /* 0x000c */ struct _OCSP_REQUEST_ENTRY* rgRequestEntry;
  /* 0x0010 */ unsigned long cExtension;
  /* 0x0014 */ struct _CERT_EXTENSION* rgExtension;
} OCSP_REQUEST_INFO, *POCSP_REQUEST_INFO; /* size: 0x0018 */

