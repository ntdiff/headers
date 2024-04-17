typedef struct _CERT_LOGOTYPE_DETAILS
{
  /* 0x0000 */ wchar_t* pwszMimeType;
  /* 0x0008 */ unsigned long cHashedUrl;
  /* 0x0010 */ struct _CERT_HASHED_URL* rgHashedUrl;
} CERT_LOGOTYPE_DETAILS, *PCERT_LOGOTYPE_DETAILS; /* size: 0x0018 */

typedef struct _CERT_LOGOTYPE_IMAGE
{
  /* 0x0000 */ struct _CERT_LOGOTYPE_DETAILS LogotypeDetails;
  /* 0x0018 */ struct _CERT_LOGOTYPE_IMAGE_INFO* pLogotypeImageInfo;
} CERT_LOGOTYPE_IMAGE, *PCERT_LOGOTYPE_IMAGE; /* size: 0x0020 */

