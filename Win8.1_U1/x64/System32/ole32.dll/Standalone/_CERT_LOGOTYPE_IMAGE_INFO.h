typedef struct _CERT_LOGOTYPE_IMAGE_INFO
{
  /* 0x0000 */ unsigned long dwLogotypeImageInfoChoice;
  /* 0x0004 */ unsigned long dwFileSize;
  /* 0x0008 */ unsigned long dwXSize;
  /* 0x000c */ unsigned long dwYSize;
  /* 0x0010 */ unsigned long dwLogotypeImageResolutionChoice;
  union
  {
    /* 0x0014 */ unsigned long dwNumBits;
    /* 0x0014 */ unsigned long dwTableSize;
  }; /* size: 0x0004 */
  /* 0x0018 */ wchar_t* pwszLanguage;
} CERT_LOGOTYPE_IMAGE_INFO, *PCERT_LOGOTYPE_IMAGE_INFO; /* size: 0x0020 */

