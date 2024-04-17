typedef struct _CRYPT_BIT_BLOB
{
  /* 0x0000 */ unsigned long cbData;
  /* 0x0004 */ unsigned char* pbData;
  /* 0x0008 */ unsigned long cUnusedBits;
} CRYPT_BIT_BLOB, *PCRYPT_BIT_BLOB; /* size: 0x000c */

typedef struct _CERT_BASIC_CONSTRAINTS_INFO
{
  /* 0x0000 */ struct _CRYPT_BIT_BLOB SubjectType;
  /* 0x000c */ int fPathLenConstraint;
  /* 0x0010 */ unsigned long dwPathLenConstraint;
  /* 0x0014 */ unsigned long cSubtreesConstraint;
  /* 0x0018 */ struct _CRYPTOAPI_BLOB* rgSubtreesConstraint;
} CERT_BASIC_CONSTRAINTS_INFO, *PCERT_BASIC_CONSTRAINTS_INFO; /* size: 0x001c */

